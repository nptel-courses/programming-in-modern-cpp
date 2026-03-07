# C++ Code Analysis: static_cast vs dynamic_cast

## Code Overview

```cpp
#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent ";
    }
};

class Child : public Parent {
public:
    virtual void show(){
        cout << "Child ";
    }
};

int main() {
    Parent p;
    Child c;
    try {
        Parent &r1 = static_cast<Parent &>(c);  // LINE-1
        r1.show();
        Parent &r2 = dynamic_cast<Parent &>(c); // LINE-2
        r2.show();
        Child &r3 = static_cast<Child &>(p);    // LINE-3
        r3.show();
        Child &r4 = dynamic_cast<Child &>(p);   // LINE-4
        r4.show();
    }
    catch (exception &e) {
        cout << e.what();
    }
    return 0;
}
```

---

## Detailed Explanation

### 1. Class Hierarchy and Virtual Functions

- **Parent** and **Child** classes are defined with a virtual function `show()`.
- `Child` inherits from `Parent` and overrides `show()`.
- The `virtual` keyword enables **dynamic dispatch** (runtime polymorphism).

---

### 2. LINE-1: `Parent &r1 = static_cast<Parent &>(c);`

- **Operation:** `static_cast` converts a `Child` reference to a `Parent` reference.
- **Safety:** This is always safe because `Child` is derived from `Parent`.
- **Behavior:** `r1` is a `Parent` reference, but since `show()` is virtual, the actual object type (`Child`) determines which `show()` is called.
- **Output:** `Child`

---

### 3. LINE-2: `Parent &r2 = dynamic_cast<Parent &>(c);`

- **Operation:** `dynamic_cast` converts a `Child` reference to a `Parent` reference.
- **Safety:** This is safe and behaves like `static_cast` in this context.
- **Behavior:** `r2.show()` calls `Child::show()` due to dynamic dispatch.
- **Output:** `Child`

---

### 4. LINE-3: `Child &r3 = static_cast<Child &>(p);`

- **Operation:** `static_cast` converts a `Parent` reference to a `Child` reference.
- **Safety:** This is **unsafe** if `p` is not actually a `Child` object.
- **Behavior:** No runtime check is performed. The reference `r3` is created, but dereferencing it is **undefined behavior** if `p` is not a `Child`.
- **Output:** Since `p` is a `Parent` object, calling `r3.show()` will call `Parent::show()` (because the object is still a `Parent`).
- **Output:** `Parent`

---

### 5. LINE-4: `Child &r4 = dynamic_cast<Child &>(p);`

- **Operation:** `dynamic_cast` converts a `Parent` reference to a `Child` reference.
- **Safety:** `dynamic_cast` performs a runtime check. If the object is not of the target type, it throws `std::bad_cast`.
- **Behavior:** Since `p` is not a `Child`, the cast fails and throws an exception.
- **Output:** `std::bad_cast`

---

## Summary Table

| Line | Cast Type         | Operation                        | Output/Behavior                     |
|------|-------------------|----------------------------------|-------------------------------------|
| 1    | `static_cast`     | `Child` → `Parent`               | `Child` (dynamic dispatch)          |
| 2    | `dynamic_cast`    | `Child` → `Parent`               | `Child` (dynamic dispatch)          |
| 3    | `static_cast`     | `Parent` → `Child` (unsafe)      | `Parent` (undefined behavior)       |
| 4    | `dynamic_cast`    | `Parent` → `Child` (checked)     | `std::bad_cast` (exception thrown)  |

---

## Final Output

```
Child Child Parent std::bad_cast
```

---

## Key Takeaways

- **`static_cast`** does not perform runtime type checking. It is the programmer's responsibility to ensure the cast is valid.
- **`dynamic_cast`** performs runtime type checking and throws an exception if the cast is invalid.
- **Virtual functions** enable dynamic dispatch, so the actual object type determines which function is called.

---

## Correct Answer

**c) Child Child Parent std::bad_cast**
