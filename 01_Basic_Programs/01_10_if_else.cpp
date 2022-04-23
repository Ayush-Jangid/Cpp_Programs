//                           ************** Control Structures ****************
#include <iostream>
using namespace std;

int main(){
    int age;
cout<<"Enter your age:"<<endl;
cin>>age;

if(age<1){
    cout<<endl<<"!Invalid, Please enter a valid age..."<<endl<<endl;
}
else if(age<18){
    cout<<"You are less than 18, you can't drive"<<endl;
}
else if(age>80){
    cout<<"You are too old to drive..."<<endl;
}
else{
    cout<<"You can drive..."<<endl;
}

    return 0;
}