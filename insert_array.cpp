#include<iostream>
using namespace std;
    int a[10];
    int s=9;
void insert(int v,int d)
{
    for(int i=s;i>d;i--)
    {
        a[i]=a[i-1];
    }
    a[d]=v;
    s++;}
void print(){
    for(int i=0;i<s;i++){  
    cout<<a[i]<<" ";
    }
    cout<<endl;
    }
int main(){
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    a[5]=6;
    a[6]=7;
    a[7]=8;
    a[8]=9;
    insert(7,8);
    print();
    return 0;
}