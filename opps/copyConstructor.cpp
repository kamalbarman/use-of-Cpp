#include <iostream>
using namespace std;
class sample {

    public:
    int a,b;
    sample(int x,int y){
        a=x;
        b=y;
    }
    sample( sample &x){
        a = x.a;
        b = x.b;
    }
    
    sample(){
     
    }
   
};

int main(){
    
    sample obj1(10,15);
    sample obj2(obj1);
    sample obj3;
    obj3=obj1;
   
    cout<<obj1.a<<endl<<obj1.b<<endl;
    return 0;
}