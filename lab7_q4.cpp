/*4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.*/

//library
# include <iostream>
using namespace std;

//function to find sum of natural numbers
/*f(n)=n+n-1+n-2+....1
  f(n)=n+f(n-1)
*/
int natSum(int n){
    if (n>=1){

    return n+natSum(n-1);
    }
    return 0;
}

//main function
int main(){
    //declarations
    int n;
    //ask the user for 'n' value
    cout << "type a number that belongs to natural numbers";
    cin >> n;
    //call the function
    cout <<"the sum is:"<< natSum(n)<< endl;
    return 0;
}
