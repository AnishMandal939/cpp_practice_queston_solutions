// 2019  - QB solution OOP - 
// solved at Central campus dharan Hatisar

// Author - Anish Mandal, Biratnagar -  Nepal


// Q - What is OOP ? Discuss need of OOP ?
// ans - OOP is a programming paradigm based on the concept of "objects", which can contain data, in the form of fields, often known as attributes; and code, in the form of procedures, often known as methods. A feature of objects is an object's procedures that can access and often modify the data fields of the object with which they are associated (objects have a notion of "this" or "self"). In OOP, computer programs are designed by making them out of objects that interact with one another. OOP languages are diverse, but the most popular ones are class-based, meaning that objects are instances of classes, which also determine their types.
        

// Q - Wap to find sum of first and last element of an array demonstrating use of new and delete operator
//   #include <iostream>
//   using namespace std;
//   int main()
//   {
//       int n;
//       cout << "Enter the size of the array: ";
//       cin >> n;
//       int *arr = new int[n];
//       cout << "Enter the elements of the array: ";
//       for (int i = 0; i < n; i++)
//       {
//           cin >> arr[i];
//       }
//       cout << "The sum of the first and last element of the array is: " << arr[0] + arr[n - 1] << endl;
//       delete[] arr;
//       return 0;
//   }


// Q - When will you make a function inline and why ? Write a suitable program in c++ showing inline function
// ans - Inline functions are used to increase the efficiency of the program. Inline functions are used to reduce the function call overhead. Inline functions are used to reduce the execution time of the program. Inline functions are used to reduce the size of the program.

#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "The sum of the two numbers is: " << sum(a, b) << endl;
    return 0;
}



// Q - How function overloading is achieved ? WAP to compare two integer numbers and two single characters using function overloading
// ans - Function overloading is achieved by using the same function name with different parameters. Example -
#include <iostream>
using namespace std;

int compare(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
char compare(char a, char b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b;
    char c, d;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "The greater number is: " << compare(a, b) << endl;
    cout << "Enter the first character: ";
    cin >> c;
    cout << "Enter the second character: ";
    cin >> d;
    cout << "The greater character is: " << compare(c, d) << endl;
    return 0;
}


// Q - Is it mandatory to use constructor in a class ? Explain the need or having more than one constructors in a class

// ans - It is not mandatory to use constructor in a class. Constructors are used to initialize the data members 
// of a class. Constructors are used to initialize the data members of a class. Constructors are used to initialize
// the data me mbers of a class. Constructors are used to initialize the data members of a class. Constructors are 
// used to initialize the data members of a class. Constructors are used to initialize the data members of a class. 
// Constructors are used to initialize the data members of a class. Constructors are used to initialize the data
// members of a class. Constructors are used to initialize the data members of a class. Constructors are used to
// initialize the data members of a class. Constructors are used to initialize the data members of a class.


// Q - WAP to copy content of one object onto another object of a class named "BOX" and length , breadth and height as its data members
// #include <iostream>
// using namespace std;
// class Box

// {
// public:
//     int length, breadth, height;
//     Box(int l, int b, int h)
//     {
//         length = l;
//         breadth = b;
//         height = h;
//     }
//     Box(const Box &b)
//     {
//         length = b.length;
//         breadth = b.breadth;
//         height = b.height;
//     }
//     void display()
//     {
//         cout << "The length of the box is: " << length << endl;
//         cout << "The breadth of the box is: " << breadth << endl;
//         cout << "The height of the box is: " << height << endl;
//     }
// };
// int main()
// {
//     Box b1(10, 20, 30);
//     Box b2(b1);
//     b2.display();
//     return 0;
// }



// Q - Mention rules for overload == operator to compare two strings
// ans - The rules for overloading the == operator to compare two strings are as follows: 
// 1. The == operator must be overloaded as a member function of the class.
// 2. The == operator must have exactly one parameter.
// 3. The parameter must be a reference to the class type.
// 4. The == operator must return a bool value.


// Q - Define inheritance . Explain different forms of inheritance with their syntax
// ans - Inheritance is a mechanism in which one class acquires the property of another class. The class whose properties are acquired is called the base class and the class that acquires the properties is called the derived class. The derived class can add its own data members and member functions in addition to the base class members. The syntax of inheritance is as follows:
// class derived-class : access-specifier base-class
// {
//     // body of the derived class
// };


// Q - What is function over riding. Explain with example
// function over riding is a mechanism in which a derived class can override the implementation of a function of the base class. The syntax of function over riding is as follows:
// class base
// {
// public:
//     void display()
//     {
//         cout << "Display function of base class" << endl;
//     }
// };
// class derived : public base
// {
// public:
//     void display()
//     {
//         cout << "Display function of derived class" << endl;
//     }
// };
// int main()
// {
//     derived d;
//     d.display();
//     return 0;
// }

// Q - Describe different methods of opening a file
// ans - There are three methods of opening a file: 
// 1. ios::in - Opens a file for reading
// 2. ios::out - Opens a file for writing
// 3. ios::app - Opens a file for appending


//  Q - WAP to write the name, roll and marks of 10 students in the file and read the name of student securing highest mark from the file
// #include <iostream>
// #include <fstream>
// using namespace std;
// class student
// {
// public:
//     char name[20];
//     int roll;
//     float marks;
// };
// int main()
// {
//     student s[10];
//     fstream file;
//     file.open("student.txt", ios::out);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Enter the name of the student: ";
//         cin >> s[i].name;
//         cout << "Enter the roll number of the student: ";
//         cin >> s[i].roll;
//         cout << "Enter the marks of the student: ";
//         cin >> s[i].marks;
//         file.write((char *)&s[i], sizeof(s[i]));
//     }
//     file.close();
//     file.open("student.txt", ios::in);
//     float max = 0;
//     char name[20];
//     for (int i = 0; i < 10; i++)
//     {
//         file.read((char *)&s[i], sizeof(s[i]));
//         if (s[i].marks > max)
//         {
//             max = s[i].marks;
//             strcpy(name, s[i].name);
//         }
//     }
//     cout << "The name of the student securing highest marks is: " << name << endl;
//     file.close();
//     return 0;
// }

// Q - Discuss importance of generic programming . WAP using class template to sort N elements of an array of type int and float
// generic programming is a technique of writing code that can be used for different data types. The syntax of class template is as follows: 
// template <class type> class class-name
// {
//     // body of the class
// };
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
//             if (a[i] > a[j])
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
//     int a[10], n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, n);
//     cout << "The sorted array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     float b[10];
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
//     sort(b, n);
//     cout << "The sorted array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << b[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// Q - Short notes :
    // - virtual function - A virtual function is a member function which is declared within a base class and is re-defined (Overriden) by a derived class.
    //  - Standard template library - The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized.
    // this pointer - The this pointer is an implicit parameter to all member functions. It is a constant pointer which points to the object for which the member function is called. It is used to refer to the calling object within the member function. It is useful to distinguish between the member variables and parameters with the same name.