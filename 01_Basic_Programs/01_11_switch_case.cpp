//                     ******************* Control Structures ******************
#include <iostream>
using namespace std;

int main(){

int rate;
cout<<"Give you rating(1-5)"<<endl;
cin>>rate;

switch(rate){

    case 1:
    cout<<"Your rating is 1"<<endl;
    break;

    case 2:
    cout<<"Your rating is 2"<<endl;
    break;

    case 3:
    cout<<"Your rating is 3"<<endl;
    break;

    case 4:
    cout<<"Your rating is 4"<<endl;
    break;

    case 5:
    cout<<"Your rating is 5"<<endl;
    break;

    default:
    cout<<endl<<"!Invalid rating..."<<endl<<endl;
    break;

}

    return 0;
}