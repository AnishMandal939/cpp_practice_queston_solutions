// Returning object as an argument

// WAP to add two complex numbers , demonstrating returning object as an argument

#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        float read, imag;
    public:
        void getData(float r, float i){
            real = r;
            imag = i;
        }
        complex sum(complex c1, complex c2){
            complex c3;
            c3.real = c1.real+ c2.real;
            c3.imag = c1.imag+c2.imag;
            return (c3);
        }
        vod display(complex c){
            // cout<<real <<"+i"<<imag<<endl;
            cout<<c.real<< "+i"<<c.imag<<endl;
        }
} // end of class

void main(){
    complex obj1, obj2, obj3;
    obj1.getData(4.5,6.4);
    obj2.getData(5.5,2.4);
    obj3 = obj3.sum(obj1+obj2); // sum

    obj1.display(); || obj1.display(obj1)
    obj2.display(); || obj2.display(obj2)
    cout<<"Result is"<<endl;
    obj3.display(); || obj3.display(obj3)
    getch():

}