/*
Consider the following code segment.

class X { };
class Y { };
X* px = new X;
Y* py = new Y;

Which of the following typecastings is permissible (i.e. compiles)?
a) py = static_cast<Y*>(px);
b) py = dynamic_cast<Y*>(px);
c) py = reinterpret_cast<Y*>(px);
d) py = const_cast<Y*>(px);
*/

/**
 * option c). py = reinterpret_cast<Y*>(px);
*/
class X { };
class Y { };
X* px = new X;
Y* py = new Y;

py = reinterpret_cast<Y*>(px);