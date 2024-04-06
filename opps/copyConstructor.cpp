#include <iostream>
using namespace std;

class sample {
	int a,b;
    public:
    sample()
    {

    }
    
    sample(int x,int y){
        a=x;
        b=y;
    }
    sample( sample &x){
        a = x.a;
        b = x.b;
    }
    void display()
    {
	    cout<<a;
	    cout<<b;
    }

};

int main(){
    sample obj1(10,15);
    sample obj2(obj1);
    sample obj3;
    obj3=obj1;
   
   obj3.display();
    return 0;
}
