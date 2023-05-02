#include<iostream>
using namespace std;
//Excersice 1
struct SmartPhone
{
  string name;
  string brand;
  int storage;
  double screenSize;
  int price;
  int discount;
};
//Excersice 2
struct Laptop
{
  string name;
  string brand;
  int ram;
  int storage;
  double screenSize;
  int price;
  int discount;
};
int main ()
{

  SmartPhone Samsung;
  Samsung.name="Galaxy S116 Ultra";
  Samsung.brand="Samsung";
  Samsung.storage=512;
  Samsung.screenSize=7;
  Samsung.price=1599;
  Samsung.discount=15;


  SmartPhone Iphone;
  Iphone.name="Iphone 116 pro max";
  Iphone.brand="Iphone";
  Iphone.storage=1099;
  Iphone.screenSize=18;
  Iphone.price=1499;
  Iphone.discount=5;

  SmartPhone Oppo;
  Oppo.name="Reno 214";
  Oppo.brand="Oppo";
  Oppo.storage=1000;
  Oppo.screenSize=8;
  Oppo.price=1019;
  Oppo.discount=10;
  cout<<endl;
  cout<<"Samsung EndGame"<<endl;
  cout<<"name:       "<<Samsung.name<<endl;
  cout<<"brand:      "<<Samsung.brand<<endl;
  cout<<"storage:    "<<Samsung.storage<<"GB"<<endl;
  cout<<"ScreenSize: "<<Samsung.screenSize<<"ince"<<endl;
  cout<<"Price:      "<<Samsung.price<<"$"<<endl;
  cout<<"Discount:   "<<Samsung.discount<<"%"<<endl;
  cout<<endl;
  cout<<"Iphone The Way Of Water"<<endl;
  cout<<"name:       "<<Iphone.name<<endl;
  cout<<"brand:      "<<Iphone.brand<<endl;
  cout<<"storage:    "<<Iphone.storage<<"GB"<<endl;
  cout<<"ScreenSize: "<<Iphone.screenSize<<"ince"<<endl;
  cout<<"Price:      "<<Iphone.price<<"$"<<endl;
  cout<<"Discount:   "<<Iphone.discount<<"%"<<endl;
  cout<<endl;
  cout<<"Oppo Forever"<<endl;
  cout<<"name:       "<<Oppo.name<<endl;
  cout<<"brand:      "<<Oppo.brand<<endl;
  cout<<"storage:    "<<Oppo.storage<<"GB"<<endl;
  cout<<"ScreenSize: "<<Oppo.screenSize<<"ince"<<endl;
  cout<<"Price:      "<<Oppo.price<<"$"<<endl;
  cout<<"Discount:   "<<Oppo.discount<<"%"<<endl;
  cout<<endl;

//Excersice 2
  
  Laptop H[2];

  H[0].name="Asus Rog Strix G17";
  H[0].brand="Asus";
  H[0].ram=16;
  H[0].storage=1024;
  H[0].screenSize=17;
  H[0].price=1399;
  H[0].discount=2;

  H[1].name="Max Book Air";
  H[1].brand="Apple";
  H[1].ram=8;
  H[1].storage=512;
  H[1].screenSize=14;
  H[1].price=1199;
  H[1].discount=0;

  H[2].name="Lenocovaka";
  H[2].brand="Lenovo";
  H[2].ram=16;
  H[2].storage=999;
  H[2].screenSize=17;
  H[2].price=1499;
  H[2].discount=3;

for(int i=0;i<3;i++)
{
  cout<<endl;
  cout<<"Name:       "<<H[i].name<<endl;
  cout<<"Brand:      "<<H[i].brand<<endl;
  cout<<"Ram:        "<<H[i].ram<<"GB"<<endl;
  cout<<"Storage:    "<<H[i].storage<<"GB"<<endl;
  cout<<"ScreenSize: "<<H[i].screenSize<<" Ince"<<endl;
  cout<<"Price:      "<<H[i].price<<"$"<<endl;
  cout<<"Discount:   "<<H[i].discount<<"%"<<endl;
}
}
  return 0;

