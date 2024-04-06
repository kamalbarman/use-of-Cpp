#include<iostream>
using namespace std;

class hero{
    private:
    char level;
    public:
        int health;
        char getlevel();
        void setLevel(char l);
};

char hero::getlevel(){
    return level;
}

void hero::setLevel(char l){
    level = l;
}

int main(){
    hero h1;
    h1.health=45;
    cout <<"health is : " <<h1.health<<endl;

h1.setLevel('A');
cout<<"level is : "<<h1.getlevel()<<endl;
}