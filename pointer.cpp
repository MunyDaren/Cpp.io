#include<iostream>
using namespace std;
void add(int *a){
    *a=10;
}
int main(){
    int a=5;
    add(&a);//add(5) pass by Value
    cout <<a<<endl;
 return 0;//so answer 5;
}
