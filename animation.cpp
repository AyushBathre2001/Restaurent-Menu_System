#include <bits/stdc++.h>
#include <cstdlib>
#include <windows.h>
using namespace std;

void setcolor(unsigned char color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
   

    setcolor(0x02);

    cout << "\t\t\t\t\t|*---------------------RESTAURENT";

    Sleep(2000);
    setcolor(0x06);
    cout << "-MENU";

    Sleep(2000);
    setcolor(0x03);
    cout << "-SYSTEM----------------------*|" << endl;
    setcolor(0x07);


    return 0;
}