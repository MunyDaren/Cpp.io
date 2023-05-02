#include<iostream>
using namespace std;
class Rectangle{
    public:
        double width;
        double height;
    public:
        void print(){
            cout<<"Width: "<<width<<endl;
            cout<<"Height: "<<height<<endl;
        }
            double calculateArea(){
                
                return (width+height);
            }
            double calculatePerimeter(){
                return (width+height)*2;
            }
};  
int main(){
    Rectangle r1;
    int width,height;
    cout<<"Input Width: ";
    cin>>width;
    cout<<"Input Height: ";
    cin>>height;

    // r1.width=5;
    // r1.height=2;
    //r1.print
    cout<<"Area is: "<<r1.calculateArea();
    cout<<endl;
    cout<<"Perimeter is: "<<r1.calculatePerimeter();

 return 0;   
}