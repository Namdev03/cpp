#include <iostream>
using namespace std;
template <class T1, class T2>
class myclass
{ public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "Data1: " << this->data1 << endl;
        cout << "Data2: " << this->data2 << endl;
    }
};
int main()
{
    myclass<int, float> obj(10, 2.10);
    obj.display();
    return 0;
}