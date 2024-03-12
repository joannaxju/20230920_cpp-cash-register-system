#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double total;        
    double collect;       
    double change = 0;   
    int dollar = 0;       
    int quarter = 0;      
    int dime = 0;        
    int nickel = 0;       
    int penny = 0;       
    int cent = 0;        

    cout << "Enter purchase amount: ";
    cin >> total;
    cout << "\nEnter amount received: ";
    cin >> collect;

    change = abs(total - collect);
    dollar = static_cast<int>(change);
    cent = static_cast<int>((change - dollar) * 100 + 0.5);
    quarter = static_cast<int>(cent / 25);
    cent %= 25;
    dime = static_cast<int>(cent / 10);
    cent %= 10;
    nickel = static_cast<int>(cent / 5);
    penny = cent % 5;

    cout << "\nTotal Change: $" << change << endl;
    cout << "\ndollars " << dollar;
    cout << "\nquarters " << quarter;
    cout << "\ndimes " << dime;
    cout << "\nnickels " << nickel;
    cout << "\npennies " << penny << endl;
}