#include<iostream>
using namespace std;
bool isprimenumber(int a)
{
    for (int i = 2; i < a ;i++){
    if(a%i==0)
        return false;
        if(i==a-1){
            return true; 
        }
    }
}
int main(){
    cout << "Please input number: " ;
	int aba;
    cin >> aba;
    if (isPrime(aba))
    {
        cout << "It's prime Number.";
    }
    else
    {
        cout << "It's not prime Number.";
    }
        return 0;
    }

