#include<iostream>
#include<string>
using namespace std;
class employee{
    int id;
    string name;
    string address;
    public:
    employee(int a,string b,string c)
    {
        id=a;
        name=b;
        address=c;
    }
    void show_data(){
        cout<<id<<name<<address<<endl;
    }
};

int main(){
    employee a1(445,"jen","htd");
    a1.show_data();
    return 0;
}
