// what are friend functions? 
// friend functions are functions that are not members of a class but have access to the private and protected members of a class.
// friend functions are declared in the class definition but defined outside the class definition. 
// friend functions are not members of a class and therefore do not have access to the this pointer of the class.
// friend functions are declared using the keyword friend.

// Is is possible for a function to be friend of two different classes?If yes then how it is implemented in c++? Wxplain with a suitable example.
// Yes, it is possible for a function to be friend of two different classes.
// The function is declared as friend of both the classes.
// The function is defined outside the class definition.
// The function can access the private and protected members of both the classes.

// example of friend function
#include <iostream>
using namespace std;

class B; // forward declaration of class B needed because class A is defined before class B and class B is used in the friend function min() of class A

class A
{
    int a; // private member of class A
    public:
    void setdata(int x) // member function of class A
    {
        a = x; // a is private member of class A and can be accessed only by member functions of class A
    }
    friend void min(A, B); // friend function of class A which is defined outside the class definition of class A and can access the private and protected members of class A and class B because class B is forward declared in the class definition of class A and class B is defined after class A in the program
};

class B // class B is defined after class A in the program and class B is used in the friend function min() of class A which is defined outside the class definition of class A
{
    int b; // private member of class B
    public:
    void setdata(int x)
    {
        b = x;
    }
    friend void min(A, B);
};

void min(A o1, B o2)
{
    if (o1.a < o2.b)
    {
        cout << o1.a << endl;
    }
    else
    {
        cout << o2.b << endl;
    }
}

int main()
{
    A a1;
    B b1;
    a1.setdata(10);
    b1.setdata(20);
    min(a1, b1);
    return 0;
}
//
// // Output: 10 , which is correct