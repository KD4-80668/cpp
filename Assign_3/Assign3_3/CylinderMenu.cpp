#include "./cylinderMenu.h"
#include <iostream>
using namespace std;

cylinderMenu menu()
{
    int choice;
    cout << "\n********************MENU*********************\n";
    cout << "0.EXIT \n 1.Get Radius \n 2.Set Radius \n 3.Get Height \n 4.Set Height \n 5.Get Volume \n 6.Print Volume" << endl;
    cin >> choice;
    return cylinderMenu(choice);
};