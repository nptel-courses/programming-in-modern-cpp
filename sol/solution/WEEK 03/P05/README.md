```cpp
Observe the following class.

class acc_holder {
    int id;
    string email;
    string phone;
    double balance;

public:
    int getId() const { return id; }
    void setEmail(string e) { email = e; }
    string getPhone() const { return phone; }
};

Which data members are read-only, write-only, readable and writable, or invisible?
a) id is readonly
b) email is readonly
c) phone is writeonly
d) balance is invisible
```
```cpp
a) id is readonly
d) balance is invisible
```