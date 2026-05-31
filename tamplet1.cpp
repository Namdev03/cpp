#include <iostream>
using namespace std;
template <class t1, class t2>
class myclass{
    public:
    t1 data1;
    t2 data2;
    myclass(t1 a,t2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<"Data1: "<<this->data1<<endl;
        cout<<"Data2: "<<this->data2<<endl;
    }
};
int main(){
    myclass<int ,int> obj(10,20);
    obj.display();
    return 0;
}