#include <iostream>
using namespace std;

class Shop {
    int id;
    float price;

public:
    void setData(int a, float b) {
        id = a;
        price = b;
    }

    void displayData() {
        cout << "Item id is " << id << endl;
        cout << "Item price is " << price << endl;
    }
};

int main() {
    Shop* ptr = new Shop[3];

    int p;
    float q;

    // Input data
    for (int i = 0; i < 3; i++) {
        cout << "Enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;

        ptr[i].setData(p, q);
    }

    // Display data
    for (int j = 0; j < 3; j++) {
        cout << "\nItem number " << j + 1 << endl;
        ptr[j].displayData();
    }

    return 0;
}