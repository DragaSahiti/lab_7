/*2. Write a C++ program to print all natural numbers between 1 to n using recursion.*/

//library
# include <iostream>
using namespace std;

//function to print natural numbers using recursion
int naturalNums(int i,int n){
    //increase it by 1
    i++;
    if (i<=n){
    
    //print 
    cout <<i<<endl;
   
    naturalNums(i,n);
    }
    return 0;    
}

//main function
int main(){
    //declarations 
    int n,i;
    //ask the user for an 'n'value
    cout <<"type a number ";
    cin >>n;
    i = 0;
      //call the function
       naturalNums(i,n);

    return 0;
}
