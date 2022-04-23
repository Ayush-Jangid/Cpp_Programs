// self calling function is called recursion... or When a function call itself to make the problem smaller...

#include <iostream>
using namespace std;

int factorial(int n){ // Suppose n = 5...
   if(n<1){   // When the value of n is less than 1...
     return 1;// It will return 1...
   }

   return n * factorial(n-1);
   // 5 + factorial(5-1) // It will call factorial(4) // factorial(4) will call factorial(3) and so on. so on... 
}  
//  5 * 4 * 3 * 2 * 1 = 120;

int main(){
    int n = 5;

    cout<<endl<<"The factorial of "<<n<<" is:- "<<factorial(n)<<endl<<endl;
    return 0;
}