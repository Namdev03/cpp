#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    void show(){
        cout<<"brand of car is "<<brand<<endl;
        cout<<"model of car is "<<model<<endl;
        cout<<"year of car is "<<year;
    }
};
int main(){
    car c;
    c.brand="ford";
    c.model="mustang";  
    c.year=2020;
    c.show();
    return 0;
}