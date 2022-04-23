#include <iostream>
using namespace std;

class shop{ // Class 
    int itemid[50];
    int itemprice[50];
    int counter;
    public:
    void value(){
        counter = 0;
    }
    void getprice();
    void display();
};

int main(){
shop call; // Object declaration...
call.value(); // Now memory of value function will be allocated...
call.getprice(); // Now memory of value function will be allocated...
call.display(); // Now memory of value function will be allocated...
    return 0;
}

void shop :: getprice(){
    cout<<"Enter the id of this item no."<<counter+1<<":"<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price of this item no."<<counter+1<<":"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: display(){

for(int i=0; i<counter; i++){
    cout<<"The price of item with id: "<<itemid[i]<<" = "<<itemprice[i]<<endl;
}

} 