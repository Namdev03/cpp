#include <iostream>
using namespace std;

class Vector {
public:
    int* arr;
    int size;

    Vector(int m) {
        size = m;
        arr = new int[m];
    }

    int sumvec(Vector& v) {
        int d = 0;
        for (int i = 0; i < size; i++) {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }

    ~Vector() {
        delete[] arr;
    }
};

int main() {
    Vector v1(3);

    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    Vector v2(3);

    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;

    cout << "Dot Product = " << v1.sumvec(v2);

    return 0;
}