#include <iostream>
using namespace std;
template<class t1,class t2>
class my{
    public:
    t1 data1;
    t2 data2;
    my(t1 a,t2 b){
        data1=a;
        data2=b;
    }
    void display(){
        t1 sum=data1+data2;
        cout<<"Sum: "<<sum<<endl;
    }
};
int main(){
my<float,float> obj(10.452,2.00101);
obj.display();
return 0;
}