// construct an overloaded function equivalent to the pow(x,n) where x can be either integer or float and n is an integer

#include <iostream>
using namespace std;

// function prototype for integer power function 
int power(int x, int n)
{
    int result = 1; // initialize result
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}

// function prototype for float power function
float power(float x, int n)
{
    float result = 1.0; // initialize result
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}


int main()
{
    int x = 2;
    int n = 3;
    float y = 2.5;
    int m = 3;
    cout << power(x, n) << endl;
    cout << power(y, m) << endl;
    return 0;
}

// Output: 8 , 15.625, which is correct 

// in above question which is overloaded function is called is determined by the type of the argument passed to the function
// overloaded function is called based on the type of the argument passed to the function

// if the argument passed to the function is of type int then the int power(int x, int n) function is called