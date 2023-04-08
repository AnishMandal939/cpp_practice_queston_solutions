// 2015 - solutions pu QB

// how are data and functions organized in an OOP approach ? List the application of OOP
// concepts in the following program.
// 1. Data and functions are organized in classes and objects.
// 2. The program uses the concept of inheritance, polymorphism, encapsulation, abstraction, data hiding, message passing, dynamic binding, virtual functions, virtual destructors, friend functions .
// 3. The program uses the concept of friend classes, operator overloading ,exception handling, templates, namespaces template library, iterators,containers.


// WhaT IS CLASS ? how does it accomplish data hiding ?
// 1. Class is a user defined data type.  It is a collection of data members and member functions. It is a blueprint of an object.
// 2. Class is used to implement data hiding. Data members of a class can be declared as private. Only member functions of the class can access the private data members. Other functions cannot access the private data members. This is called data hiding.


// WAP to find the colume of cube, sphere and cylinder using function overloading
// 1. Function overloading is a feature of C++ that allows a function to have more than one definition. The definitions of the function must differ from each other in the types and/or the number of arguments in the argument list. The compiler is able to distinguish between the different definitions and calls the appropriate one. This feature is also known as compile time polymorphism.

// 2. The following program uses function overloading to find the volume of cube, sphere and cylinder.
#include <iostream>
using namespace std;
class Volume
{
public:
    double volume(double r)
    {
        return (4.0/3.0)*3.14*r*r*r;
    }
    double volume(double r, double h)
    {
        return 3.14*r*r*h;
    }
    double volume(double a, double b, double c)
    {
        return a*b*c;
    }
};
int main()
{
    Volume v;
    cout << "Volume of cube = " << v.volume(5,5,5) << endl;
    cout << "Volume of sphere = " << v.volume(5) << endl;
    cout << "Volume of cylinder = " << v.volume(5,5) << endl;
    return 0;
}

// Explain different types of cnstructors with syntax
// 1. There are two types of constructors in C++. They are default constructor and parameterized constructor. The default constructor is a constructor that does not take any argument. The parameterized constructor is a constructor that takes arguments. The following program uses both types of constructors.
#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout << "Default constructor called" << endl;
    }
    Test(int x)
    {
        cout << "Parameterized constructor called" << endl;
    }
};
int main()
{
    Test t1;
    Test t2(5);
    return 0;
}


// Write an OOP to show that a friend function can access members of two classes

#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    A()
    {
        a = 5;
    }
    friend int sum(A, B);
};
class B
{
private:
    int b;
public:
    B()
    {
        b = 10;
    }
    friend int sum(A, B);
};
int sum(A x, B y)
{
    return x.a + y.b;
}
int main()
{
    A a;
    B b;
    cout << "Sum = " << sum(a,b) << endl;
    return 0;
}


// What is operator overloading ? write rules of overloading unary and binary operators
// 1. Operator overloading is a feature of C++ that allows a programmer to define the meaning of operators in terms of user defined types. For example, the + operator can be used to add two integers as well as two user defined objects. The following program uses operator overloading to add two complex numbers.
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {
        real = r;
        imag = i;
    }
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}

// write an OOP to add two complex numbers using passing objects as arguments
// 1. The following program uses operator overloading to add two complex numbers.
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {
        real = r;
        imag = i;
    }
    Complex add(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1.add(c2);
    c3.print();
    return 0;
}

// what are multiple and multilevel inheritance ? Write an OOP to implement multilevel inheritance
// 1. Multiple inheritance is a feature of C++ that allows a class to inherit from more than one base class. The following program uses multiple inheritance to implement multilevel inheritance. The class C inherits from class B and class B inherits from class A.
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Constructor of class A" << endl;
    }
};
class B: public A
{
public:
    B()
    {
        cout << "Constructor of class B" << endl;
    }
};
class C: public B
{
public:
    C()
    {
        cout << "Constructor of class C" << endl;
    }
};
int main()
{
    C c;
    return 0;
}


// Howa r e static members declared in C++?
// 1. Static members are declared using the static keyword. Static members are shared by all objects of the class. Static members are initialized outside the class. The following program uses static members to count the number of objects created.
#include <iostream>
using namespace std;
class Test
{
private:
    static int count;
public:

    Test()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int Test::count = 0;
int main()
{
    cout << "Initially count = " << Test::getCount() << endl;
    Test t1, t2;
    cout << "After creating two objects count = " << Test::getCount() << endl;
    return 0;
}

// What is virtual function? Explain how run time polynorphis is achieved using aprogram.
// 1. A virtual function is a member function that is declared within a base class and is re-defined (Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }
    void show()
    {
        cout << "show base class" << endl;
    }
};
class Derived: public Base
{
public:
    void print()
    {
        cout << "print derived class" << endl;
    }
    void show()
    {
        cout << "show derived class" << endl;
    }
};
int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}


//  What are the possible types of data conversion?
// 1. Implicit conversion: This is the conversion that is performed by the compiler automatically. For example, when an integer is assigned to a float, the compiler automatically converts the integer to float.
// 2. Explicit conversion: This is the conversion that is performed by the programmer explicitly. For example, when a float is assigned to an integer, the programmer has to explicitly convert the float to integer.
// 3. Type casting: This is the conversion that is performed using the type casting operators. For example, when a float is assigned to an integer, the programmer can use the type casting operator to convert the float to integer.



// What is file mode ? describe file mode options available?
// 1. The file mode is a string that specifies how a file is to be opened. The file mode can be any of the following:
// r: Opens a file for reading. The file must exist.
// w: Creates an empty file for writing. If a file with the same name already exists, its content is erased and the file is considered as a new empty file.
// a: Opens a file for appending. Writing operations append data at the end of the file. The file is created if it does not exist.
// r+: Opens a file for both reading and writing. The file must exist.
// w+: Creates an empty file for both reading and writing. If a file with the same name already exists its content is erased and the file is considered as a new empty file.
// a+: Opens a file for both reading and writing. All writing operations are performed at the end of the file, protecting the previous content to be overwritten. Reading operations can be performed from anywhere in the file. The file is created if it does not exist.


// WAP to read a text from the file named "hello.txt" to the file named "test.txt"
// 1. The following program reads a text from the file named "hello.txt" to the file named "test.txt".
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];
    // open a file in write mode.
    ofstream outfile;
    outfile.open("test.txt");
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    // write inputted data into the file.
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    // again write inputted data into the file.
    outfile << data << endl;
    // close the opened file.
    outfile.close();
    // open a file in read mode.
    ifstream infile;
    infile.open("test.txt");
    cout << "Reading from the file" << endl;
    infile >> data;
    // write the data at the screen.
    cout << data << endl;
    // again read the data from the file and display it.
    infile >> data;
    cout << data << endl;
    // close the opened file.
    infile.close();
    return 0;
}


// What is an exception ? How is an exception handled in C++?
// 1. An exception is a problem that arises during the execution of a program. When a C++ program throws an exception, it transfers the program control to the part of the program that knows how to handle the exception. This is called exception handling.
// 2. The try block contains a block of code that might throw an exception. The catch block contains the code that handles the exception. The following program uses exception handling to handle division by zero.
#include <iostream>
using namespace std;
int main()
{
    int x = -1;
    // if x is less than 0, throw an error.
    if (x < 0)
    {
        throw "Error: x is less than zero";
    }
    return 0;
}


// Write the function template to swap the numbers.
// 1. The following program uses a function template to swap two numbers.
#include <iostream>
using namespace std;
template <class T>
void swapNum(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int i = 5, j = 10;
    double f = 2.5, g = 3.5;
    cout << "Original i, j: " << i << ' ' << j << endl;
    cout << "Original f, g: " << f << ' ' << g << endl;
    swapNum(i, j);
    swapNum(f, g);
    cout << "Swapped i, j: " << i << ' ' << j << endl;
    cout << "Swapped f, g: " << f << ' ' << g << endl;
    return 0;
}


// write short notes on 
// a. this pointer
// b. Namespace
// c. Default argiments
// d. Benefits of inheritance
// e. Generic Programming

// a=> this pointer is a pointer that is used to point to the current object. It is used to access the members of the current object. It is an implicit parameter to all member functions. It is not necessary to use this pointer to access the members of the current object. You can use the object name instead. The following program uses this pointer to access the members of the current object.
#include <iostream>
using namespace std;
class Box
{
public:
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    int compare(Box box)
    {
        return this->Volume() > box.Volume();
    }
private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
};
int main()
{
    Box Box1(3.3, 1.2, 1.5);    // Declare box1
    Box Box2(8.5, 6.0, 2.0);    // Declare box2
    if(Box1.compare(Box2))
    {
        cout << "Box2 is smaller than Box1" <<endl;
    }
    else
    {
        cout << "Box2 is equal to or larger than Box1" <<endl;
    }
    return 0;
}

// b => Namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries. The following program uses namespace to organize the code into logical groups.
#include <iostream>
using namespace std;
// first name space
namespace first_space
{
    void func()
    {
        cout << "Inside first_space" << endl;
    }
}

// second name space
namespace second_space
{
    void func()
    {
        cout << "Inside second_space" << endl;
    }
}
using namespace first_space;
int main ()
{
    // This calls function from first name space.
    func();
    return 0;
}

// c => Default arguments are used to provide a default value to a function parameter. If we call a function with a missing argument, the compiler uses the default value for that argument. The following program uses default arguments.

//  d => Inheritance is a mechanism in which one class acquires the property of another class. It is an important part of object-oriented programming. It is used to achieve runtime polymorphism. The following program uses inheritance to implement runtime polymorphism. The base class Shape is inherited by the derived classes Rectangle and Triangle. The base class Shape has a virtual function called printArea(). The derived classes Rectangle and Triangle override the printArea() function. The printArea() function is called using a pointer to the base class Shape. The function call is resolved at runtime.
#include <iostream>
using namespace std;
// Base class
class Shape
{
public:
    // pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};
// Derived classes
class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};
class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};
int main(void)
{
    Rectangle Rect;
    Triangle  Tri;
    Rect.setWidth(5);
    Rect.setHeight(7);
    // Print the area of the object.
    cout << "Total Rectangle area: " << Rect.getArea() << endl;
    Tri.setWidth(5);
    Tri.setHeight(7);
    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;
    return 0;
}

// e => Generic programming is a style of computer programming in which algorithms are written in terms of types to-be-specified-later that are then instantiated when needed for specific types provided as parameters. Generic programming is a form of parametric polymorphism, i.e. the same code can be used for different types. The following program uses generic programming to swap two numbers.
#include <iostream>
using namespace std;
template <class T>
void swapNum(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int i = 5, j = 10;
    double f = 2.5, g = 3.5;
    cout << "Original i, j: " << i << ' ' << j << endl;
    cout << "Original f, g: " << f << ' ' << g << endl;
    swapNum(i, j);
    swapNum(f, g);
    cout << "Swapped i, j: " << i << ' ' << j << endl;
    cout << "Swapped f, g: " << f << ' ' << g << endl;
    return 0;
}
