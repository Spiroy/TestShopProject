#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int chocolate = 0;
    cout << "Enter amount of chocolate bars";
    cin >> chocolate;
    int milk = 0;
    cout << "Enter amount of milk packs ";
    cin >> milk;
    int coffee = 0;
    cout << "Enter amount of coffee cans";
    cin >> coffee;
    
    float priceOfChocolate = 0;
    cout << "Enter price of Chocolate";
    cin >> priceOfChocolate;
    float priceOfMilk = 0;
    cout << "Enter price of Milk;";
    cin >> priceOfMilk;
    float priceOfCoffee = 0;
    cout << "Enter price Of Coffee;";
    cin >> priceOfCoffee;
    
    float sum = 0;
    sum = (chocolate * priceOfChocolate) + (milk * priceOfMilk) + (coffee * priceOfCoffee);
    cout << "TOTAL = ";
    cout << chocolate * priceOfChocolate << '+' << milk * priceOfMilk << '+' << coffee * priceOfCoffee;
    cout << " = " << sum << endl << endl;
    
    getch();
return 0;
}
