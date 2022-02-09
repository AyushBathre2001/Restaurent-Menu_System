#include<iostream>
#include<windows.h>
#include<mmsystem.h>
using namespace std;

int main(){

    PlaySound(TEXT("F:\\OneDrive\\Desktop\\C++ Project\\Restaurent Management System\\MoodyLoop.wav"),NULL,SND_ASYNC);
    system("pause");
    return 0;
    
}