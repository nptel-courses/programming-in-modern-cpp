```cpp
Consider the code segment given below.

class Vehicle {
public:
    virtual void start() = 0;
    void stop() {};
};

class Car: public Vehicle {
public:
    void start() {};
    virtual void honk() {};
};

class Bike: public Vehicle {
public:
    void start() {};
    virtual void wheelie() {},
};

class Truck: public Car {
public:
    void honk() {};
    virtual void loadCargo() {};
};

class Bicycle {
public:
    void pedal() {};
    void brake() {};
}

How many virtual function tables (VFT) will be created?
a) 3
b) 4
c) 5
d) 6
```
```cpp
b) 4
```