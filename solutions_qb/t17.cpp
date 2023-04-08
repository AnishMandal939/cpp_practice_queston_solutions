// Write down the characteristics and applications of OOP ?
// Characteristics of OOP
// 1. Abstraction
// 2. Encapsulation
// 3. Inheritance
// 4. Polymorphism
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


// explain new and delete operator with an example
// new and delete are the operators used to allocate and deallocate memory dynamically.

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

// what do you mean by inline function ? Write advantages and disadvantages of inline function ?
// Inline function is a function which is expanded in line where it is called. 
// Advantages of inline function
// 1. Inline function increases the performance of the program. 
// 2. Inline function reduces the function call overhead.
// 3. Inline function reduces the size of the program.
// Disadvantages of inline function
// 2. Inline function increases the compilation time.
// 3. Inline function increases the execution time.
// 4. Inline function increases the complexity of the program.


// define default argument with an example?
// Default argument is the argument which is passed to the function if no argument is passed to the function.
// Example
#include <iostream>
using namespace std;
int sum(int a, int b = 10) // b is the default argument here
{
    return a + b;
}
int main()
{
    cout << sum(10) << endl;
    return 0;
}

// WAP to find the volume of cube and sphere by using function overloading.
// Example
#include <iostream>
using namespace std;
int volume(int a)
{
    return a * a * a;
}
float volume(float r)
{
    return (4.0 / 3.0) * 3.14 * r * r * r;
}   
int main()
{
    cout << volume(10) << endl;
    cout << volume(10.0) << endl;
    return 0;
}

// mention characteristics of friend function ?
// Characteristics of friend function
// 1. Friend function is not a member function of the class.
// 2. Friend function can access the private and protected members of the class.
// 3. Friend function can be declared in public, private or protected section of the class.
// 4. Friend function can be declared outside the class.
// 5. Friend function can be declared using friend keyword.

// WAP to add two complex numbers belonginging to tow different classes using frind function.
// Example
#include <iostream>
using namespace std;
class Complex1
{
    int real, imag;
    public:
    Complex1(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend Complex1 add(Complex1, Complex2);
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
class Complex2
{
    int real, imag;
    public:
    Complex2(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend Complex1 add(Complex1, Complex2);
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
Complex1 add(Complex1 c1, Complex2 c2)
{
    Complex1 temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    Complex1 c1(10, 20);
    Complex2 c2(30, 40);
    Complex1 c3 = add(c1, c2);
    c3.display();
    return 0;
}


// what is inheritance ? write its benefits ? 
// Inheritance is the process of deriving a new class from an existing class.
// Benefits of inheritance
// 1. Reusability
// 2. Maintainability
// 3. Extensibility
// 4. Flexibility
// 5. Security
// 6. Robustness

// WAP to accept name, address, contact number of person, write it to person.txt file and display information
#include <iostream>
#include <fstream>
using namespace std;
class Person
{
    char name[20], address[20];
    int contact;
    public:
    void accept()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter contact: ";
        cin >> contact;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Contact: " << contact << endl;
    }
    void writeToFile()
    {
        ofstream fout;
        fout.open("person.txt", ios::app);
        fout << name << endl;
        fout << address << endl;
        fout << contact << endl;
        fout.close();
    }
    void readFromFile()
    {
        ifstream fin;
        fin.open("person.txt");
        fin >> name;
        fin >> address;
        fin >> contact;
        fin.close();
    }
};
int main()
{
    Person p;
    p.accept();
    p.writeToFile();
    p.readFromFile();
    p.display();
    return 0;
}

// define operator overloading . WAP to overload unary minus using friend function.
// Operator overloading is the process of making an operator to perform user defined operations.
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    friend Complex operator-(Complex);
};
Complex operator-(Complex c)
{
    Complex temp;
    temp.real = -c.real;
    temp.imag = -c.imag;
    return temp;
}
int main()
{
    Complex c1(10, 20);
    Complex c2 = -c1;
    c2.display();
    return 0;
}


// what is virtual function , pure virtual function and abstract class ?
// Virtual function is a function which is declared using virtual keyword in the base class and is redefined in the derived class.
// Pure virtual function is a function which is declared using virtual keyword in the base class and is redefined in the derived class.
// Abstract class is a class which contains at least one pure virtual function.

// how can we convert basic type to class type and vice versa ?
// We can convert basic type to class type by using constructor and vice versa by using type casting operator.

// WAP using function template to find sum of first and last elements of an array of type int and float
#include <iostream>
using namespace std;
template <class T>
T sum(T a[], int n)
{
    return a[0] + a[n - 1];
}
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    float b[] = {10.5, 20.5, 30.5, 40.5, 50.5};
    cout << sum(a, 5) << endl;
    cout << sum(b, 5) << endl;
    return 0;
}



// write short notes on 
// 1. this pointer -> this pointer is a pointer which points to the current object.
// input/output class hierarchy -> input/output class hierarchy is a class hierarchy which is used to perform input/output operations.
// multiple inheritance` -> multiple inheritance is a type of inheritance in which a class is derived from more than one base class`



