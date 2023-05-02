#include<iostream>
#include<math.h>
using namespace std;

    double Square(double r)
    {
        return (pow(r,3) * 3.14) * 4 / 3;
    }
    int main()
    {
        double r;
        cout << "Enter R: ";
        cin >> r;
        cout << "Result is: " << Square(r) << endl;
        return 0;
    }

