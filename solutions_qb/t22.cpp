// 2022 year 

// What do you understand by OOP ? Explain Pros and Cons of OOP along with applications of OOP.
// OOP stands for Object Oriented Programming. OOP is a programming paradigm which is based on the concept of objects.
// Pros of OOP
// 1. OOP provides a clear modular structure for programs.
// 2. It is good for defining abstract data types.
// 3. Implementation details are hidden from other modules and other modules has a clearly defined interface.
// 4. It is easy to maintain and modify existing code as new objects can be created with small differences to existing ones.
// 5. Objects can be reused within an across applications.
// 6. It makes software easier to understand and debug.
// 7. It is possible to create full reusable applications with little or no modification.
// Cons of OOP
// 1. OOP languages are more complex than procedural languages.
// 2. OOP can be slower and needs more memory to run than procedural programming.
// 3. OOP can be more difficult to learn than procedural programming.

// Applications of OOP
// 1. Reusability
// 2. Maintainability
// 3. Extensibility
// 4. Flexibility
// 5. Security
// 6. Robustness
// 7. Portability
// 8. Efficiency
// 9. Simplicity
// 10. Modularity
// 11. Testability


// What is Dynamic memory allocation ? Explain new and delete operator with an example.
// Dynamic memory allocation is the process of allocating memory during the runtime of the program.
// new and delete are the operators used to allocate and deallocate memory dynamically.
// Example
#include <iostream>
using namespace std;
// for new operator
int *ptr = new int;
// for delete operator
delete ptr;

int main()
{
    int *ptr = new int;
    *ptr = 10;
    cout << *ptr << endl;
    delete ptr;
    return 0;
}

// how can you pass object as arguments and how can you return Object from function ?
    // We can pass object as arguments by value, by reference and by pointer.
    // We can return object from function by value and by reference.
// Example
#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
Test fun(Test t)
{
    t.display();
    return t;
}
int main()
{
    Test t(10, 20);
    fun(t);
    return 0;
}

// WAP which has two classes such that function members of a class use private members of another class.
// Example
#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
class Test2
{
    int c;
    int d;

public:
    Test2(int c, int d)
    {
        this->c = c;
        this->d = d;
    }
    void display()
    {
        cout << c << " " << d << endl;
    }
    void fun(Test t)
    {
        t.display();
    }
};
int main()
{
    Test t(10, 20);
    Test2 t2(30, 40);
    t2.fun(t);
    return 0;
}

// What is destructure ? how it differs from constructor ? Explain with an example.
    // Destructors are the member functions which are called automatically when the object goes out of scope.
    // Destructors are used to deallocate the memory which is allocated to the object.
    // Destructors are called automatically when the object goes out of scope.
    // Destructors are called in the reverse order of constructors.

// Example
#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;  

public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    ~Test()
    {
        cout << "Destructor called" << endl;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Test t(10, 20);
    t.display();
    return 0;
}

// explain parameterized constructor with an example.
// Parameterized constructor is a constructor which takes parameters. It is used to initialize the data members of the object.
// Example
#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Test t(10, 20);
    t.display();
    return 0;
}

// what do you mean by operator overloading ? mention different rules of operator overloading
// Operator overloading is the process of making an operator to perform different operations on different data types.
// Rules of operator overloading
// 1. The operator must be overloaded as a member function.
// 2, it must have atleast one argument.
// 3. The argument must be of user defined type.
// 4. The return type must be of user defined type.

// Example
#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;
public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Test operator+(Test t)
    {
        Test temp;
        temp.a = this->a + t.a;
        temp.b = this->b + t.b;
        return temp;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Test t1(10, 20);
    Test t2(30, 40);
    Test t3 = t1 + t2;
    t3.display();
    return 0;
}

// How can you convert user defined class type to basic type ? Explain with an example.
// We can convert user defined class type to basic type by using type casting operator.
// Example
#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;
public:

    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    operator int()
    {
        return a;
    }
};
int main()
{
    Test t(10, 20);
    int x = t;
    cout << x << endl;
    return 0;
}


// explain multiple inheritance with an example.
// Multiple inheritance is the process of inheriting more than one base class.
// Example
#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;
public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
class Test2
{
    int c;
    int d;
public:
    Test2(int c, int d)
    {
        this->c = c;
        this->d = d;
    }
    void display()
    {
        cout << c << " " << d << endl;
    }
};
class Test3 : public Test, public Test2
{
    int e;
    int f;
public:
    Test3(int a, int b, int c, int d, int e, int f) : Test(a, b), Test2(c, d)
    {
        this->e = e;
        this->f = f;
    }
    void display()
    {
        Test::display();
        Test2::display();
        cout << e << " " << f << endl;
    }
};
int main()
{
    Test3 t(10, 20, 30, 40, 50, 60);
    t.display();
    return 0;
}

// what is function overriding ?how can you resolve ambiguity problem in function overriding ?
// Function overriding is the process of redefining the function of base class in derived class. 
// Function overriding is used to provide the specific implementation of the function of base class in derived class.

// Example
#include <iostream>
using namespace std;
class Test
{
public:
    virtual void display()
    {
        cout << "Base class display" << endl;
    }
};
class Test2 : public Test
{
public:
    void display()
    {
        cout << "Derived class display" << endl;
    }
};
int main()
{
    Test2 t;
    t.display();
    return 0;
}

// what do you mean by polymorphism ? explain with different types of polymorphism.
// Polymorphism is the process of providing the specific implementation of the function of base class in derived class. 
// Types of polymorphism
// 1. Compile time polymorphism
// 2. Run time polymorphism

// Example
#include <iostream>
using namespace std;
class Test
{
public:
    virtual void display()
    {
        cout << "Base class display" << endl;
    }
};
class Test2 : public Test
{
public:
    void display()
    {
        cout << "Derived class display" << endl;
    }
};
int main()
{
    Test2 t;
    t.display();
    return 0;
}

// what is virtual base class ? in which situation , it is necessary to use?
// Virtual base class is the base class which is inherited by the derived class using virtual keyword. 
// It is necessary to use virtual base class when there is ambiguity problem in multiple inheritance.

// Example
#include <iostream>
using namespace std;
class Test
{
public:
    virtual void display()
    {
        cout << "Base class display" << endl;
    }
};
class Test2 : public virtual Test
{
public:
    void display()
    {
        cout << "Derived class display" << endl;
    }
};
class Test3 : public virtual Test
{
public:
    void display()
    {
        cout << "Derived class display" << endl;
    }
};
class Test4 : public Test2, public Test3
{
public:
    void display()
    {
        cout << "Derived class display" << endl;
    }
};
int main()
{
    Test4 t;
    t.display();
    return 0;
}

// what are various stream classes for file operation ? explain each in brief.
// There are 4 stream classes for file operation.
// 1. ifstream
// 2. ofstream
// 3. fstream
// 4. stringstream

// Example
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("test.txt");
    fout << "Hello world" << endl;
    fout.close();
    ifstream fin("test.txt");
    string s;
    getline(fin, s);
    cout << s << endl;
    fin.close();
    return 0;
}

// WAP that first appends the customer records in a data file and display the number of customer records as well as the contents from the file
#include <iostream>
#include <fstream>
using namespace std;
class Customer
{
    int id;
    char name[20];
    char address[20];
public:
    void accept()
    {
        cout << "Enter id" << endl;
        cin >> id;
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter address" << endl;
        cin >> address;
    }
    void display()
    {
        cout << id << " " << name << " " << address << endl;
    }
};

int main()
{
    Customer c;
    ofstream fout("customer.txt", ios::app);
    int n;
    cout << "Enter number of customers" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        c.accept();
        fout.write((char*)&c, sizeof(c));
    }
    fout.close();
    ifstream fin("customer.txt");
    fin.seekg(0, ios::end);
    int size = fin.tellg();
    int count = size / sizeof(c);
    cout << "Number of customers = " << count << endl;
    fin.seekg(0, ios::beg);
    while (fin.read((char*)&c, sizeof(c)))
    {
        c.display();
    }
    fin.close();
    return 0;
}

// classify template with syntax and suitable example.
// classfication of template
// 1. Function template
// 2. Class template

// Example
#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << add(10, 20) << endl;
    cout << add(10.5, 20.5) << endl;
    return 0;
}

// what do you mean by exception handling ? explain with suitable example.? why is it important
// Exception handling is the process of handling the exception at run time.
// Example
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw "Division by zero";
        }
        else
        {
            cout << a / b << endl;
        }
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
    return 0;
}

// short nodes on
// 1. this pointer => this pointer is a pointer which is used to refer the current object. 
// 2. namespace => namespace is the mechanism to avoid name collision. 
// 3. friend function => friend function is the function which is declared as friend in the class.
// 4. friend class => friend class is the class which is declared as friend in the class.
// 5. static member => static member is the member which is declared as static in the class.
// 6. static member function => static member function is the member function which is declared as static in the class.
// 7. inline function => inline function is the function which is declared as inline in the class.
// 8. virtual function => virtual function is the function which is declared as virtual in the class.
// 9. pure virtual function => pure virtual function is the function which is declared as pure virtual in the class.
// 10. abstract class => abstract class is the class which contains at least one pure virtual function.
// 11. operator overloading => operator overloading is the process of providing the specific implementation of the operator in the class.
// 12. type casting => type casting is the process of converting one type of data into another type of data.
// 13. dynamic memory allocation => dynamic memory allocation is the process of allocating the memory at run time.
// 14. new operator => new operator is the operator which is used to allocate the memory at run time.
// 15. delete operator => delete operator is the operator which is used to deallocate the memory at run time.
// 16. new and delete operator => new and delete operator is the operator which is used to allocate and deallocate the memory at run time.
// 17. placement new operator => placement new operator is the operator which is used to allocate the memory at run time at the specified location.
// 18. placement delete operator => placement delete operator is the operator which is used to deallocate the memory at run time at the specified location.
// 19. virtual destructor => virtual destructor is the destructor which is declared as virtual in the class.
// 20 . Enumeration => Enumeration is the user defined data type which is used to store the constant values. 
