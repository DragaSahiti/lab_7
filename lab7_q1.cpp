/*1. Write a C++ program to find power of any number using recursion.*/

//library
# include <iostream>
using namespace std;

/*a^b=a*a^(b-1)
f(a,b)=a^b=a*f(a,(b-1))
*/


int getPower(int a,int b);

/*
 Function to calculate base^exponent using recursion
 */
int getPower(int a, int b){
    /* Recursion termination condition,
     Anything^0 = 1
     */
    if(b == 0){
        return 1;
    }
    else {
    return a * getPower(a, b - 1);
    }
}
//main function
int main(){
    int a, b, counter, result = 1;
    cout << "Enter base and exponent";
    cin >> a >> b;
      
    result = getPower(a, b);
      
    cout << a << "^" << b << " = " << result << endl;
    return 0;
}
