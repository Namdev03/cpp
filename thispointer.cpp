#include <iostream>
using namespace std;
class A{
    int a;
    public:
    void setData(int a){
       this->a=a;
    }
    void dispalyData(){
        cout<<"the value is "<<a<<endl;
    }
};
int main(){
    A a1;
    a1.setData(5);
    a1.dispalyData();
    return 0;
}