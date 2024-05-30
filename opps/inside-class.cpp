#include<iostream>
using namespace std;

class hero{
     private:
    char level;
    public:
    int helth;
    char getLevel(){
        return level;
    }

    void setLevel(char l){
       
        level=l;
    }
    
};

int main(){
    hero h1;
    h1.helth=74;
h1.setLevel('A');
    
    cout << "level is "<<h1.getLevel()<<endl;


    cout<<"health is : "<<h1.helth;
}