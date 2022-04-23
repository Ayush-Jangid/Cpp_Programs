//         ______Calling_Class's_Function_With_Constructor(Default)______

  #include <iostream>
  using namespace std;
  
class t{
    private:
    int a;
    public:
    t(){
        cout<<endl<<"Enter the value of a"<<endl; cin>>a;
    }
    void display(){
        cout<<endl<<"A:- "<<a<<endl<<endl;
    }
};

  int main(){
  
  t call;         // t call = t();

  call.display(); // Calling function normally with object... 

  t().display(); // Calling function with constructor...
  t().display();
  t().display();

//   t.display(); --> This will through an error...

      return 0;
  }