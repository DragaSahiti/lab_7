/*6. Write a C++ program to find reverse of any number using recursion.*/

//library
# include <iostream>
using namespace std;

//function to reverse the number
int revNum(int i,int n){
    if(n%10==0){
    return 1;
    }
    else{
    i=n%10;
    cout<<i;
    revNum(i,n/10);
    }
}

//main function
int main(){
    //declarations
    int i,n;
    //ask the user for a number
    cout <<"type a number number to reverse it";
    cin >> n;
    //call the function
    revNum(i,n);
    cout << endl;

    return 0;
}
