// Exam year 2023 - Solutions 

// 1a) Define reusability. Compare procedural programming with object oriented programming ?
// ans - Reusability is the ability to use the same code in different places. 
// Procedural programming is a programming paradigm based on procedures or routines.
// Object-oriented programming is a programming paradigm based on the concept of "objects",
// which can contain data, in the form of fields, often known as attributes; and code, in the form of procedures, often known as methods.

// 1b) WAP to find perimeter of square circle and rectangle using function overloading.
#include <iostream>
using namespace std;

class Shape {
    public:
        void perimeter(int side) {
            cout << "Perimeter of square is " << 4 * side << endl;
        }
        void perimeter(int length, int breadth) {
            cout << "Perimeter of rectangle is " << 2 * (length + breadth) << endl;
        }
        void perimeter(float radius) {
            cout << "Perimeter of circle is " << 2 * 3.14 * radius << endl;
        }
};

int main() {
    Shape s;
    s.perimeter(5);
    s.perimeter(5, 6);
    s.perimeter(5.0);
    return 0;
}


// 2a) Explain constructor with its properties . WAP showing the example of parametrized constructor.
// ans - A constructor is a special member function of a class that is executed whenever we create new objects of that class. 
// Constructors are used to initialize the object of its class.
// Properties of constructor:
// 1. Constructor name is same as class name.
// 2. Constructor has no return type.
// 3. Constructor can be parameterized or non-parameterized.
// 4. Constructor can be default or parameterized.
// 5. Constructor can be called implicitly or explicitly.
// 6. Constructor can be overloaded.
// 7. Constructor can be inherited.
// 8. Constructor can be virtual.
// 9. Constructor can be friend.
// 10. Constructor can be deleted.
// 11. Constructor can be defaulted.

#include <iostream>
using namespace std;

class Student {
    public:
        int roll;
        string name;
        Student(int r, string n) {
            roll = r;
            name = n;
        }
};

int main() {
    Student s1(1, "A"); // Parametrized constructor
    cout << s1.roll << " " << s1.name << endl;
    return 0;
}

// 2b) Define standard type conversion with suitable example.
// ans - Standard type conversion is the conversion of one type to another type that is implicitly performed by the compiler. 
// For example, conversion of int to float is a standard type conversion. 
// The compiler automatically converts int to float when required.

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = a;
    cout << b << endl;
    return 0;
}

// 3a) What is friend function ? WAP to determine greatest among any two inputs using friend function.
// ans - A friend function is a function that is not a member of a class but has access to its private and protected members. 
// It can be called without the help of any object. 
// It is usually used in classes that have private members.

// AP to determine greatest among any two inputs using friend function.
#include <iostream>
using namespace std;
class Greatest{
    private:
        int a, b;
    public:
        Greatest(int x, int y) {
            a = x;
            b = y;
        }
        friend void display(Greatest g);
};

void display(Greatest g) {
    if (g.a > g.b) {
        cout << g.a << " is greater than " << g.b << endl;
    } else {
        cout << g.b << " is greater than " << g.a << endl;
    }
}

int main() {
    Greatest g1(5, 6);
    display(g1);
    return 0;
}


// 3b) WAP to convert class type to basic type
#include <iostream>
using namespace std;

class Student {
    private:
        int roll;
        string name;
    public:
        Student(int r, string n) {
            roll = r;
            name = n;
        }
        operator int() {
            return roll;
        }
};

int main() {
    Student s1(1, "A");
    int roll = s1;
    cout << roll << endl;
    return 0;
}

// IN above program we have converted class type to basic type. ,  basic type in above program is. => int roll = s1; 

// 4a) WAP to add two complex number   using operator overloading.
#include <iostream>
using namespace std;

class Complex {
    private:
        int real, img;
    public:
        Complex(int r, int i) {
            real = r;
            img = i;
        }
        Complex operator+(Complex c) {
            Complex temp(0, 0);
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
        void display() {
            cout << real << " + " << img << "i" << endl;
        }
};

int main() {
    Complex c1(5, 6);
    Complex c2(7, 8);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}

// 4b) Define const with suoitable example.
// ans - const is a keyword that is used to declare a variable as constant. 
// A constant variable cannot be modified once it is initialized.

#include <iostream>
using namespace std;

int main() {
    const int a = 5;
    // a = 6; // Error
    cout << a << endl;
    return 0;
}

// 5a) WAP to write the name, roll no. and marks of n student in a file and read the name os student securing highest marks from the file.
#include <iostream>
#include <fstream>
using namespace std;

class Student {
    private:
        int roll;
        string name;
        float marks;
    public:
        void getdata() {
            cout << "Enter name, roll and marks: ";
            cin >> name >> roll >> marks;
        }
        void display() {
            cout << name << " " << roll << " " << marks << endl;
        }
        float getmarks() {
            return marks;
        }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    ofstream fout;
    fout.open("student.txt");
    for (int i = 0; i < n; i++) {
        s[i].getdata();
        fout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
    fout.close();
    ifstream fin;
    fin.open("student.txt");
    float max = 0;
    string name;
    for (int i = 0; i < n; i++) {
        fin >> s[i].name >> s[i].roll >> s[i].marks;
        if (s[i].getmarks() > max) {
            max = s[i].getmarks();
            name = s[i].name;
        }
    }
    fin.close();
    cout << "Name of student securing highest marks is " << name << endl;
    return 0;
}


// 5b) What are benefits of using inline function ? Explain with an example.
// ans - Inline functions are used to increase the efficiency of the program. 
// They are used to replace the function call with the actual code of the function.

#include <iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 5, b = 6;
    cout << sum(a, b) << endl;
    return 0;
}

// 6a) Differiantiate between runtime polymorphism and compile time polymorphism. WAP to illustrate concept of virtual function.
// ans - Runtime polymorphism is also known as dynamic polymorphism. 
// It is the process in which a call to an overridden function is resolved at runtime. 
// It is achieved by function overriding.

// Compile time polymorphism is also known as static polymorphism.
// It is the process in which a call to an overridden function is resolved at compile time.
// It is achieved by function overloading.

#include <iostream>
using namespace std;

class Base {
    public:
        virtual void display() {
            cout << "Base class" << endl;
        }
};

class Derived : public Base {
    public:
        void display() {
            cout << "Derived class" << endl;
        }
};

int main() {
    Base *b;
    Derived d;
    b = &d;
    b->display();
    return 0;
}

// 6b) What is the difference between  function overriding and function overloading ?  
// ans - Function overriding is the process in which a function in the derived class has the same name as a function in the base class. 
// The function in the derived class overrides the function in the base class.

// Function overloading is the process in which two or more functions in the same class have the same name but different parameters.

// 7a) Explain various forms of inheritance with syntax
// ans - There are three forms of inheritance in C++.
// 1. Single inheritance
// 2. Multiple inheritance
// 3. Multilevel inheritance
// 4. Hierarchical inheritance
// 5. Hybrid inheritance

// 1. Single inheritance
// In single inheritance, a class is derived from only one base class. 
// Syntax - class derived-class : access-specifier base-class

// 2. Multiple inheritance
// In multiple inheritance, a class is derived from more than one base class.
// Syntax - class derived-class : access-specifier1 base-class1, access-specifier2 base-class2

// 3. Multilevel inheritance
// In multilevel inheritance, a class is derived from another derived class.
// Syntax - class derived-class : access-specifier base-class

// 4. Hierarchical inheritance
// In hierarchical inheritance, more than one derived classes are created from a single base class.
// Syntax - class derived-class : access-specifier base-class

// 5. Hybrid inheritance
// In hybrid inheritance, a class is derived from more than one base class and also from a derived class.
// Syntax - class derived-class : access-specifier1 base-class1, access-specifier2 base-class2

// 7b) WAP to illustrate multiple inheritance.
#include <iostream>
using namespace std;

class Base1 {
    public:
        void display1() {
            cout << "Base1 class" << endl;
        }
};

class Base2 {
    public:
        void display2() {
            cout << "Base2 class" << endl;
        }
};

class Derived : public Base1, public Base2 {
    public:
        void display() {
            cout << "Derived class" << endl;
        }
};


int main() {
    Derived d;
    d.display1();
    d.display2();
    d.display();
    return 0;
}

// 8a) What is the Exception handling ? Explain different mechanism of exception handling.
// ans - Exception handling is the process of handling the run time errors in a program.
// There are two mechanisms of exception handling.
// 1. try-catch block
// 2. throw

// 8b) Describe template . WAP to add any two integer numbers and any two double type numbers using function template.

// ans - Template is a generic programming technique that allows a function or a class to work with any data type.
// It is used to create generic classes and functions.

#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int a = 5, b = 6;
    cout << add(a, b) << endl;
    double c = 5.5, d = 6.6;
    cout << add(c, d) << endl;
    return 0;
}

// 9) Short notes on ?
    // a) Manipulation - It is the process of changing the value of a variable. 
    // b) this pointer - It is a pointer that points to the current object. 
    // c) CHaracteristics of OOP - Encapsulation, Inheritance, Polymorphism, Abstraction 