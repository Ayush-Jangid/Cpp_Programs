#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i=0;i<n;i++){
       if(i==3){
           continue; // Basically, it will skip this statement...
       }
       cout<<i<<endl;
    }
    return 0;
}