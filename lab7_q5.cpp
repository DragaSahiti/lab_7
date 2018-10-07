/*5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.*/

//library
# include <iostream>
using namespace std;

//function to find sum of all odd numbers in a range
int oddSum(int i,int n){
    if (i%2==1 and i<=n){
    return i+oddSum(i+2,n);
    }

    return 0;
}

//main function
int main(){
    //declarations 
    int i,n;
    //ask the user for a range
    cout << "give an upper limit and a lower limit respectively";
    cin >> i >> n;
    if (i%2==0){
    i=i+1;
    }
    //call the function
    cout << "the sum of odd numbers is"<< oddSum(i,n)<< endl;

    return 0;
}
