/*
Consider the following code segment.

class const_pt {
    // code...
};

int main() {
    const const_pt m; // LINE-1
    return 0;
}

What is/are the type/s of this pointer associated with the object m?

a) const const_pt* this;
b) const_pt* const this;
c) const_pt const* const this;
d) const const_pt* const this;
*/

class const_pt
{
    // code...
};

int main()
{
    const const_pt m; // LINE-1
    return 0;
}