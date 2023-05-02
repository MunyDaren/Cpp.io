#include<iostream>
using namespace std;
int main(){
    string a; //Name
    string b; //Major
    int c;    //Age
    string d; //Gender
    cout<<"What is your name:";
    cin>>a;
    cout<<"Your Gender:";
    cin>>d;
    cout<<"How about your major:";
    cin>>b;
    cout<<"How old are you:";
    cin>>c;
    if(d=="Male"||d=="male"){
        cout<<"Hii,Mr."<<a<<"!"<<" your age is "<<c<<" year old and you learn "<<b<<"!"<<endl;  
    }else if(d=="Female" || d=="female"){
        cout<<"Hii,Mrs."<<a<<"!"<<" your are "<<c<<" and you are majoring "<<b<<"!"<<endl;  
    }
    if(c>=18)
    {cout<<"You can Vote."<<endl;
    }else if(c<18){
        cout<<"You can not Vote."<<endl;
    }
    return 0;
}