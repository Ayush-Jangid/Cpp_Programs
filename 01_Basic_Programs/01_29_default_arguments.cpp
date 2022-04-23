#include <iostream>
using namespace std;

int moneyreceived(int currentmoney, float factor = 1.05){ //
    return currentmoney*factor;
}

int main(){
    int money = 100;

// Function will use default factor value 1.05...
cout<<endl<<"You will receive "<<moneyreceived(money)<<"rs after one year"<<endl; 

// 1.05 will be replace by 1.10 , because you declared a value...
cout<<endl<<"VIP will receive "<<moneyreceived(money,1.10)<<"rs after one year"<<endl<<endl;
    return 0;
}