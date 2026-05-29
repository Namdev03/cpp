#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0;};
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "enter id of your item " << endl;
    cin >> itemId[counter];
    cout << "enter price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
};
void shop :: displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "id of item is " << itemId[i] << " and price of item is " << itemPrice[i] << endl;
    }
};
int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}