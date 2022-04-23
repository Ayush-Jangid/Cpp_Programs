#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int a;

    for(int i=0;i<n;i++){
        if(i==2){
            a = i;
            cout<<"The value of a is "<<i<<endl;
            break; // break will exit the loop...
        }
    }
    return 0;
}