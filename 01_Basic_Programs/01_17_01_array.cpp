#include <iostream>
using namespace std;

int main(){
    int marks[5]; 
    //    int *marks;
    
    for(int i=0;i<5;i++){
        cout<<"Enter the marks of student "<<i+1<<endl;
        cin>>marks[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<"The marks of student "<<i+1<<" is:- "<<marks[i]<<endl;
    }


        for(int i=0;i<5;i++){
        cout<<"The size of marks["<<i+1<<"] is:- "<<sizeof(marks[i])<<endl; //size of array is 4 byte in my pc...
    }
    return 0;
}