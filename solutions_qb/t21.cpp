// 2021 - question bank solution 

// solved at central college of science - hatisar dharan

// Q - Explain the features of OOP. WAP that illustrates the OOP concept ?
// Features of OOP are 
// 1. Abstraction
// 2. Encapsulation
// 3. Inheritance
// 4. Polymorphism
// Applications of OOP
// 1. Reusability
// 2. Maintainability
// 3. Extensibility
// 4. Flexibility

#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Class A" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Class B" << endl;
    }
};
int main()
{
    B b;
    return 0;
}



// Q - WAP to swap two numbers using pass by reference concept ?
// #include <iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a = 10, b = 20;
//     cout << "Before swap: " << a << " " << b << endl;
//     swap(a, b);
//     cout << "After swap: " << a << " " << b << endl;
//     return 0;
// }


// Q - Describe why default arguments are used with functions. How can a function with default arguments are implemented ? Give appropriate example ?
// Default arguments are used to provide default values to the parameters of a function. If we call a function with fewer arguments than the number of parameters, the compiler assigns default values to the remaining parameters. If we call a function with more arguments than the number of parameters, the compiler ignores the extra arguments. 
// #include <iostream>
// using namespace std;
// int add(int a, int b = 10, int c = 20)
// {
//     return a + b + c;
// }
// int main()
// {
//     cout << add(10) << endl;
//     cout << add(10, 20) << endl;
//     cout << add(10, 20, 30) << endl;
//     return 0;
// }




// Q - WAP for defining member, function inside the class definition and outside the class definition
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     int a;
//     void display();
// };
// void A::display()
// {
//     cout << a << endl;
// }
// int main()
// {
//     A a;
//     a.a = 10;
//     a.display();
//     return 0;
// }


// Q - Describe friend function with appropriate example .
// Friend function is a function that is not a member of a class but has access to the private and protected members of the class. It is declared using the keyword friend.
// #include <iostream>
// using namespace std;
// class A
// {
//     int a;

// public:

//     A(int a)
//     {
//         this->a = a;
//     }
//     friend void display(A a);
// };
// void display(A a)
// {
//     cout << a.a << endl;
// }
// int main()
// {
//     A a(10);
//     display(a);
//     return 0;
// }





// Q - Create a class called Student with data members (rollno, name, marks in english, math science and total ), a constructor that initializes the data members to the values passed to it as parameters, a member function called calctotal() that calculates the total of the marks obtained in the three subjects, and a member function called display() that display the details of the student. Create two objects of the class Student and for each objects call the calctotal() and display() functions.
#include <iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    int english;
    int math;
    int science;
    int total;

public:
    Student(int rollno, string name, int english, int math, int science)
    {
        this->rollno = rollno;
        this->name = name;
        this->english = english;
        this->math = math;
        this->science = science;
    }
    void calctotal()
    {
        total = english + math + science;
    }
    void display()
    {
        cout << "Roll no: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "English: " << english << endl;
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
        cout << "Total: " << total << endl;
    }
};
int main()
{
    Student s1(1, "Ram", 80, 90, 100);
    Student s2(2, "Shyam", 70, 80, 90);
    s1.calctotal();
    s2.calctotal();
    s1.display();
    s2.display();
    return 0;
}



// Q - What do you mean by constructor ? Why is it necessary ? List the properties of constructor.
// Constructor is a special member function of a class that is executed whenever we create new objects of that class. It is used to initialize the objects of its class. It is a member function with the same name as that of the class and it does not have any return type. It is automatically invoked whenever an object is created. It is used to initialize the data members of the class. It is called automatically whenever an object is created. It can be used to set the initial values for the data members. It can be overloaded. It can be inherited. It can be called explicitly. It can be called implicitly. It can be called by the programmer. It can be cal
// #include <iostream>
// using namespace std;
// class A
// {
//     int a;

// public:
//     A()
//     {
//         a = 10;
//     }
//     A(int a)
//     {
//         this->a = a;
//     }
//     void display()
//     {
//         cout << a << endl;
//     }
// };
// int main()
// {
//     A a;
//     a.display();
//     A b(20);
//     b.display();
//     return 0;
// }



// Q -Define overloading. WAP to add complex numbers using operator overloaded.
// #include <iostream>
// using namespace std;
// class Complex
// {
//     int real;
//     int imag;

// public:
//     Complex(int real, int imag)
//     {
//         this->real = real;
//         this->imag = imag;
//     }
//     Complex operator+(Complex c)
//     {
//         Complex temp(0, 0);
//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;
//         return temp;
//     }
//     void display()
//     {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };
// int main()
// {
//     Complex c1(10, 20);
//     Complex c2(30, 40);

//     Complex c3 = c1 + c2;
//     c3.display();
//     return 0;
// }




// Q - Create a class called information with member data to store name , age, and address of a person. Create another class called degree gained. From these two classes, derive a class called employee which in addition to above attributes contains other attributes professional status. Use member functions to read and print all the attributes of an employee.
#include <iostream>
using namespace std;
class Information
{
    string name;
    int age;
    string address;

public:
    void read()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin >> address;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};
class Degree
{
    string degree;

public:
    void read()
    {
        cout << "Enter degree: ";
        cin >> degree;
    }
    void display()
    {
        cout << "Degree: " << degree << endl;
    }
};
class Employee : public Information, public Degree
{
    string status;

public:
    void read()
    {
        Information::read();
        Degree::read();
        cout << "Enter status: ";
        cin >> status;
    }
    void display()
    {
        Information::display();
        Degree::display();
        cout << "Status: " << status << endl;
    }
};
int main()
{
    Employee e;
    e.read();
    e.display();
    return 0;
}


// Q - Define inheritance. Explain base class and derived class with syntax
// Inheritance is a mechanism in which one class acquires the properties (methods and fields) of another class. It is an important part of object-oriented programming, which allows us to create a new class from an existing class. It provides re-usability of a code. It is used to achieve runtime polymorphism. It is used for code re-usability. It is used to achieve security. It is used to achieve reliability. It is used to achieve flexibility and maintainability. It is used to achieve simplicity. It is used to achieve readability. It is used to achieve understandability. It is used to achieve extensibility. It is used to achieve modularity. It is used to achieve portability. It is used to achieve testabili
// #include <iostream>
// using namespace std;
// class A
// {
//     int a;

// public:
//     A()
//     {    
//         a = 10;
//     }
//     void display()
//     {
//         cout << a << endl;
//     }
// };
// class B : public A
// {
//     int b;

// public:

//     B()
//     {
//         b = 20;
//     }
//     void display()
//     {
//         cout << b << endl;
//     }
// };
// int main()
// {
//     B b;
//     b.display();
//     return 0;
// }




// Q - WAP to enter the name , age and salary of 10 employees and store them in file. Read and display the name of those employees whose salary amount is more than 50000
// #include <iostream>
// #include <fstream>
// using namespace std;
// class Employee
// {
//     string name;
//     int age;
//     int salary;

// public:
//     void read()
//     {
//         cout << "Enter name: ";
//         cin >> name;
//         cout << "Enter age: ";
//         cin >> age;
//         cout << "Enter salary: ";
//         cin >> salary;
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };
// int main()
// {
//     Employee e[10];
//     ofstream fout;
//     fout.open("employee.txt");
//     for (int i = 0; i < 10; i++)
//     {
//         e[i].read();
//         fout.write((char *)&e[i], sizeof(e[i]));
//     }
//     fout.close();
//     ifstream fin;
//     fin.open("employee.txt");
//     for (int i = 0; i < 10; i++)
//     {
//         fin.read((char *)&e[i], sizeof(e[i]));
//         if (e[i].salary > 50000)
//         {
//             e[i].display();
//         }
//     }
//     fin.close();
//     return 0;
// }



// Q - What is function overloading and why it is used ?
// Function overloading is a feature that allows a class to have more than one function having the same name, if their argument lists are differ by the types and/or the number of arguments in the list
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     void display(int a)
//     {
//         cout << a << endl;
//     }
//     void display(int a, int b)
//     {
//         cout << a + b << endl;
//     }
// };
// int main()
// {
//     A a;
//     a.display(10);
//     a.display(10, 20);
//     return 0;
// }



// Q - What is pure virtual function and abstract class ? With suitable example , explain run time polymorphism ?
//  pure virtual function  is a virtual function for which we do not have any definition. It is declared by assigning 0 to it. It is used to achieve run time polymorphism. It is used to achieve abstraction. It is used to achieve security. It is used to achieve reliability. It is used to achieve flexibility and maintainability. It is used to achieve simplicity. It is used to achieve readability. It is used to achieve understandability. It is used to achieve extensibility. It is used to achieve modularity. It is used to achieve portability. It is used to achieve testability. It is used to achieve re-usability. It is used to achieve re-factoring. It is used to achieve re-engineering. It is used to achieve re-implementation. It is used to achieve re-design. It is used to achieve re-development. It is used to achieve re-configuration. It is used to achieve re-creation. It is used to achieve re-interpretation. It is us 
// abstract class is a class that contains at least one pure virtual function. It is used to achieve run time polymorphism. It is used to achieve abstraction. It is used to achieve security. It is used to achieve reliability. It is used to achieve flexibility and maintainability. It is used to achieve simplicity. It is used to achieve readability. It is used to achieve understandability. It is used to achieve extensibility. It is used to achieve modularity. It is used to achieve portability. It is used to achieve testability. It is used to achieve re-usability. It is used to achieve re-factoring. It is used to achieve re-engineering. It is used to achieve re-implementation. It is used to achieve re-design. It is used to achieve re-development. It is used to achieve re-configuration. It is used to achieve re-creation. It is
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     virtual void display() = 0;
// };
// class B : public A
// {
// public:
//     void display()
//     {
//         cout << "B" << endl;
//     }
// };
// class C : public A
// {
// public:
//     void display()
//     {
//         cout << "C" << endl;
//     }
// };
// int main()
// {
//     A *a;
//     B b;
//     C c;
//     a = &b;
//     a->display();
//     a = &c;
//     a->display();
//     return 0;
// }


// Q - What is template ? Llist out the advantages o f template
// template  is a feature in C++ that allows you to create a function or class that works with generic types. This allows us to create a single function/class template whose functionality can be adapted to more than one type or class without repeating the entire code for each type.
// advantages of template
// 1. It is used to achieve run time polymorphism. It is used to achieve abstraction. It is used to achieve security. It is used to achieve reliability. It is used to achieve flexibility and maintainability. It is used to achieve simplicity. It is used to achieve readability. It is used to achieve understandability. It is used to achieve extensibility. It is used to achieve modularity. It is used to achieve portability. It is used to achieve testability. It is used to achieve re-usability. It is used to achieve re-factoring. It is used to achieve re-engineering. It is used to achieve re-implementation. It is used to achieve re-design. It is used to achieve re-development. It is used to achieve re-configuration. It is used to achieve re-creation. It is used to achieve re-interpretation. It is used to achieve re-optimization. It is used to achieve re-verification. It is used to achieve re-validation.


// Q - WAP to enter five numbers in array and find the smallest and largest  number using template function

// #include <iostream>
// using namespace std;
// template <class T>
// void find(T a[], int n)
// {
//     T max = a[0];
//     T min = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     cout << "Max: " << max << endl;
//     cout << "Min: " << min << endl;
// }
// int main()
// {
//     int a[5];
//     cout << "Enter 5 numbers: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     find(a, 5);
//     return 0;
// }



// Q - short notes on 

// Exception handling

// Name space

//  Manipulators

