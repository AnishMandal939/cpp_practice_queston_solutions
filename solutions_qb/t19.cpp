// 2019  - QB solution OOP - 
// solved at Central campus dharan Hatisar

// Author - Anish Mandal, Biratnagar -  Nepal


// Q - Define data abstraction and data encapsulation. How constant pointer is different from pointer to a constant ? Explain implicit conversion with suitable example.
    // ansv- Data abstraction is the process of hiding the implementation details from the user, only the functionality will be provided to the user. In other words, the user will have the information on what the object does instead of how it does it.
    // Data encapsulation is the mechanism that binds together code and the data it manipulates, and keeps both safe from outside interference and misuse. Data encapsulation led to the important OOP concept of data hiding.

// constant pointer is needed because we want to make sure that the pointer is not changed to point to another variable. 
// implicit conversion is the automatic conversion of a value from one data type to another data type. This type of conversion is performed by the compiler. For example, when an int is assigned to a float, the int is automatically converted to a float.




// Q - What is function overloading ? WAP to overload a function named "operate()" that should
    //  - calculate x raised to power y, if two arguments x and y are passed and 
    //  - calculate whether n is Prime number or not, if n is passed as arguments

    // function overloading is the process of making an operator to perform user defined operations. 
    // int operate(int x, int y)
    // {
    //     int result = 1;
    //     for (int i = 0; i < y; i++)
    //     {
    //         result *= x;
    //     }
    //     return result;
    // }
    // bool operate(int n)
    // {
    //     for (int i = 2; i < n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    

// Q - Why friend function is needed ? Enlist merits of using an inline function. WAP to add two complex members demonstrating passing object as an argument and returning object from function
// friend function is needed because it can access the private and protected members of a class. 
// inline function is a function that is expanded in line when it is called. 
// inline functions are used to increase the efficiency of the program.
// inline functions are used to reduce the function call overhead.
// inline functions are used to reduce the execution time of the program.
// inline functions are used to reduce the size of the program.

// #include <iostream>
// using namespace std;
// class Complex
// {
//     int real, img;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         img = i;
//     }
//     void display()
//     {
//         cout << real << " + " << img << "i" << endl;
//     }
//     friend Complex add(Complex, Complex);
// };
// Complex add(Complex c1, Complex c2)
// {
//     Complex temp;
//     temp.real = c1.real + c2.real;
//     temp.img = c1.img + c2.img;
//     return temp;
// }
// int main()
// {
//     Complex c1(2, 3), c2(4, 5), c3;
//     c3 = add(c1, c2);
//     c3.display();
//     return 0;
// }


// Q - Define inheritance and explain how is it achieved ? WAP that demonstrates multilevel inheritance
// inheritance is the process of deriving a new class from an existing class. 
// multilevel inheritance is a process in which a class is derived from another derived class.

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     void display()
//     {
//         cout << "Class A" << endl;
//     }
// };
// class B : public A
// {
// public:
//     void display()
//     {
//         cout << "Class B" << endl;
//     }
// };
// class C : public B
// {
// public:
//     void display()
//     {
//         cout << "Class C" << endl;
//     }
// };
// int main()
// {
//     C c;
//     c.display();
//     return 0;
// }


// Q - What is operator overloading and how is it achieved ? WAP to convert one class type to another class type using casting operator function
// operator overloading is the process of making an operator to perform user defined operations. 
// casting operator function is a function that converts one class type to another class type.

// #include <iostream>
// using namespace std;
// class Complex    
// {
//     int real, img;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         img = i;
//     }
//     void display()
//     {
//         cout << real << " + " << img << "i" << endl;
//     }
//     operator int()
//     {
//         return real;
//     }
// };
// int main()
// {
//     Complex c(2, 3);
//     int x = c;
//     cout << x << endl;
//     return 0;
// }


// Q - Mention special characteristics of instructor. Why do we need destructor ? WAP to demonstrate use of constructor in derived class.
// special characteristics of instructor are: 
// 1. It has the same name as that of the class.
// 2. It has no return type.

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     A()
//     {
//         cout << "Class A" << endl;
//     }
// };
// class B : public A
// {
// public:
//     B()
//     {
//         cout << "Class B" << endl;
//     }
// };
// int main()
// {
//     B b;
//     return 0;
// }


// Q - Define exception. Explain exception handling model.
// exception is an event that occurs during the execution of a program that disrupts the normal flow of the program's instructions. 
// exception handling model is a process of handling exceptions in a program.

//  Q - Write about I/O class hierarchy
// ans - I/O class hierarchy is a class hierarchy that is used to perform input and output operations in C++. 

// Q  - What is an exception ? why is it necessary to handle in programming
// ans - exception is an event that occurs during the execution of a program that disrupts the normal flow of the program's instructions. 
// it is necessary to handle exceptions in programming because it helps in handling errors in the program.


// Q - WAP using class template to arrange N numbers of type int and float in descending order
// #include <iostream>
// using namespace std;
// template <class T>
// void sort(T a[], int n)
// {
//     T temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     float b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
//     sort(a, 5);
//     sort(b, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << b[i] << " ";
//     }
//     return 0;
// }


// Q - How does a class accomplish data hiding
// ans - data hiding is the process of hiding the data of a class from the outside world.


// Q - Define a class to represent a bank account. Include the following members:
    // - Name of depositor 
    // - Account Number
    //  - Type of Account 
    //  - Balance amount in the account

    // Member fuhctions:
        // - To assign initial values
        // - To deposit in an account
        // - To withdraw an amount after checking the balance
        // - To display name and balance
        // Write a program to test the program

// #include <iostream>
// using namespace std;
// class Bank
// {
//     string name;
//     int acc_no;
//     string type;
//     int balance;

// public:
//     void assign(string n, int a, string t, int b)

//     {
//         name = n;
//         acc_no = a;
//         type = t;
//         balance = b;
//     }
//     void deposit(int d)
//     {
//         balance += d;
//     }
//     void withdraw(int w)
//     {
//         if (balance >= w)
//         {
//             balance -= w;
//         }
//         else
//         {
//             cout << "Insufficient balance" << endl;
//         }
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Account Number: " << acc_no << endl;
//         cout << "Type of Account: " << type << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };
// int main()
// {
//     Bank b;
//     b.assign("Rahul", 123, "Savings", 1000);
//     b.deposit(1000);
//     b.withdraw(500);
//     b.display();
//     return 0;
// }



// Q -  Short notes on 
    // -  This pointer - This pointer is a pointer that points to the object that invokes the member function. 
    //  - Virtual function  - Virtual function is a function that is declared in the base class and is redefined in the derived class.
    // - Manipulators - Manipulators are functions that are used to manipulate the output of a program. 