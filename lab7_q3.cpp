/*3. Write a C++ program to print all even or odd numbers in given range using recursion.*/
//library
# include <iostream>
using namespace std;

//function to print even numbers
int evenNums(int i,int n){
    
    if (i%2==0 and i<=n){    
    cout << i << endl;    
    evenNums(i+2,n);
    }
    return 0;        
}

//main function
int main(){
    //declarations
    int i,n;
    //ask the user for 'n' value
    cout << "type a lower limit and an upper limit";
    cin >> i>> n;
    if (i%2==1){
    i=i+1;
    }    
    //call the function to print even numbers
    evenNums(i,n);
    
    return 0;
}
