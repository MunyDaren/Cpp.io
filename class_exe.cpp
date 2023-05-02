// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name;
//     string color;
//     string company;
//     int year;
//     int speed;
//     float price;
//     void printInfo(){
//         cout<<"Name   : "<<name<<endl;
//         cout<<"Color  : "<<color<<endl;
//         cout<<"Company: "<<company<<" co,ltd"<<endl;
//         cout<<"Year   : "<<year<<endl;
//         cout<<"speed  : "<<speed<<" Km/h"<<endl;
//         cout<<"Price  : "<<price<<" US"<<endl;
//     }

//     Car(string name,string color,string company,int year,int speed,float price){
//         this->name=name;
//         this->color=color;
//         this->company=company;
//         this->year=year;
//         this->speed=speed;
//         this->price=price;
//     }
// };
// int main(){
//     Car RangRover("RangRover Defender","Black Up White","RangRover",2023,200,200000);
//     RangRover.printInfo();
//     return 0;
// }

/*===========circle==========*/
// #include<iostream>
// using namespace std;
// class Circle{
//     public:
//     float r;

//     public: 
//     float getArea(){
//         return 3.14*r*r;
//     }
//     float getPerimeter(){
//         return 2*3.14*r;
//     }
//     void printInfo(){
//         cout<<"Radius is : "<<r<<endl;
//     }
//     Circle(float r){
//         this->r=r;
//     }
// };
// int main(){

//     Circle d1(9);
//     d1.printInfo();
//     cout<<"Area is: "<<d1.getArea()<<endl;
//     cout<<"Perimeter is: "<<d1.getPerimeter()<<endl;
//     return 0;
// }