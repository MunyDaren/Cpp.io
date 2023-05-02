#include<iostream>
using namespace std;
int main()
{
    int second = 12000 ;
    int hours;
    int minute;
    int remain;
    hours = second / 3600;
    minute = second / 60;
    remain = second % 60;
    cout << hours << " H " << minute << "mn" << second << " S " << endl;
    return 0;
}