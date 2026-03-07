# C++ `dynamic_cast` Behavior: A Comprehensive Analysis

## **1. Problem Statement**

```cpp
#include <iostream>
using namespace std;

class X { public: virtual ~X() {} };
class Y : public X {};
class Z : public X {};

int main() {
    X objX;
    Y objY;
    X* p1 = dynamic_cast<X*>(&objY); // LINE-1
    p1 == NULL ? cout << "10 " : cout << "11 ";
    Y* p2 = dynamic_cast<Y*>(p1);   // LINE-2
    p2 == NULL ? cout << "20 " : cout << "21 ";
    Z* p3 = dynamic_cast<Z*>(new X); // LINE-3
    p3 == NULL ? cout << "30 " : cout << "31 ";
    Z* p4 = dynamic_cast<Z*>(&objY); // LINE-4
    p4 == NULL ? cout << "40 " : cout << "41 ";
    return 0;
}
```

**Question:**
What will be the output?
- a) 11 21 31 40
- b) 11 21 30 40
- c) 11 20 31 40
- d) 11 21 31 41

---

## **2. Class Hierarchy and Polymorphism**

### **Class Definitions**
- `class X { public: virtual ~X() {} };` → **Polymorphic** (has a `virtual` destructor).
- `class Y : public X {};` → Derived from `X`.
- `class Z : public X {};` → Derived from `X`.

### **Why Polymorphism Matters**
- `dynamic_cast` requires at least one polymorphic type to work.
- The `virtual` destructor in `X` enables **Runtime Type Information (RTTI)**.

---

## **3. `dynamic_cast` Mechanics**

| Cast Type       | Success Condition                          | Failure Result (Pointers) |
|-----------------|--------------------------------------------|----------------------------|
| Upcast          | Always succeeds                            | Never NULL                 |
| Downcast        | Object is of target type or derived type   | NULL                       |
| Cross-cast      | Object is of target type or derived type   | NULL                       |

---

## **4. Line-by-Line Analysis**

### **LINE-1: `X* p1 = dynamic_cast<X*>(&objY);`**
- **Operation:** Upcast from `Y*` to `X*`.
- **Result:** Always succeeds.
- **Output:** `11`

### **LINE-2: `Y* p2 = dynamic_cast<Y*>(p1);`**
- **Operation:** Downcast from `X*` to `Y*`.
- **Result:** Succeeds because `p1` points to a `Y` object.
- **Output:** `21`

### **LINE-3: `Z* p3 = dynamic_cast<Z*>(new X);`**
- **Operation:** Downcast from `X*` to `Z*`.
- **Result:** Fails because the object is not a `Z`.
- **Output:** `30`
- **Note:** Memory leak occurs (no `delete`).

### **LINE-4: `Z* p4 = dynamic_cast<Z*>(&objY);`**
- **Operation:** Cross-cast from `Y*` to `Z*`.
- **Result:** Fails because `Y` and `Z` are unrelated.
- **Output:** `40`

---

## **5. Summary Table**

| Line | Cast Attempt                | Object Type | Cast Result | Output |
|------|------------------------------|-------------|-------------|--------|
| 1    | `dynamic_cast<X*>(&objY)`    | `Y`         | Success     | `11`   |
| 2    | `dynamic_cast<Y*>(p1)`       | `Y`         | Success     | `21`   |
| 3    | `dynamic_cast<Z*>(new X)`    | `X`         | Failure     | `30`   |
| 4    | `dynamic_cast<Z*>(&objY)`    | `Y`         | Failure     | `40`   |

---

## **6. Final Output**
```
11 21 30 40
```

---

## **7. Correct Answer**
**b) 11 21 30 40**

---

## **8. Best Practices**
- **Prefer polymorphism** over casting.
- **Always check for NULL** after `dynamic_cast`.
- **Avoid memory leaks** (use smart pointers or `delete`).

---

## **9. Common Pitfalls**
- **Assuming `dynamic_cast` always succeeds.**
- **Forgetting to check for NULL.**
- **Using `dynamic_cast` on non-polymorphic types.**

---

## **10. References**
- [cppreference: dynamic_cast](https://en.cppreference.com/w/cpp/language/dynamic_cast)
- [C++ Core Guidelines: Avoid casts](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Res-casts)
```

---

**How to Use:**
- Copy and paste this Markdown into any Markdown-supported editor or documentation tool.
- The code, tables, and explanations are ready for use in reports, blogs, or study materials.