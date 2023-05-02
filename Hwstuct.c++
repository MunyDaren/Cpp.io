#include<iostream>
using namespace std;
// struct  Employee  
// {
//   int id;
//   string name;
//   string gender;
//   int salary;
//   string position;
// };
// int main()
// {
//    Employee emp[10];
//    int numberOfEmployee=0;
//    while(true){
//      cout<<"=====EMPLOYEE====="<<endl;
//      cout<<"1. Add new Employee"<<endl;
//      cout<<"2. Show Employee"<<endl;
//      cout<<"3. Show all Employee"<<endl;
//      cout<<"4. Exit"<<endl;
// //user input
//      cout<<"Please select a manu: ";
//      int input;
//      cin>>input;
   
//      if(input==1){  //1. Add new Employee
//         Employee e1;
//          cout<<"Please input id: ";
//          cin>>e1.id;
//          cout<<"Please input name: ";
//          cin>>e1.name;
//          cout<<"Please input gender: ";
//          cin>>e1.gender;
//          cout<<"Please input salary: ";
//          cin>>e1.salary;
//          cout<<"Please input position: ";
//          cin>>e1.position;
//          emp[numberOfEmployee]=e1;
//          numberOfEmployee++;
//      }else if(input==2){//2. Show Employee
//          cout<<"Please input index: ";
//          int index;
//          cin>>index;
//          cout<<emp[index].id<<endl;
//          cout<<emp[index].name<<endl;
//          cout<<emp[index].gender<<endl;
//          cout<<emp[index].salary<<endl;
//          cout<<emp[index].position<<endl;
//      }else if(input==3)
//         {//3. Show all Employee
//           for(int i=0;i<numberOfEmployee;i++)
//          {
//           cout<<emp[i].id<<endl;
//           cout<<emp[i].name<<endl;
//           cout<<emp[i].gender<<endl;
//           cout<<emp[i].salary<<endl;
//           cout<<emp[i].position<<endl;
//          }  
//      }else 
//         {//5. Exit
//            break;
//          }
//      }
// return 0;
// } 
      //=================class===============\\  
class  Employee  
{
public:
  int id;
  string name;
  string gender;
  int salary;
  string position;
public:    
  void printInFormation(){
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Position: "<<position<<endl;

  }
};
int main()
{
   Employee emp[10];
   int numberOfEmployee=0;
   while(true){
    cout<<endl;
     cout<<"=====EMPLOYEE====="<<endl;
     cout<<"1. Add new Employee"<<endl;
     cout<<"2. Show Employee"<<endl;
     cout<<"3. Show all Employee"<<endl;
     cout<<"4. Exit"<<endl;
     cout<<endl;
//user input
     cout<<"Please select a manu: ";
     int input;
     cin>>input;
   
     if(input==1){  //1. Add new Employee
        Employee e1;
         cout<<"Please input id: ";
         cin>>e1.id;
         cout<<"Please input name: ";
         cin>>e1.name;
         cout<<"Please input gender: ";
         cin>>e1.gender;
         cout<<"Please input salary: ";
         cin>>e1.salary;
         cout<<"Please input position: ";
         cin>>e1.position;
         emp[numberOfEmployee]=e1;
         numberOfEmployee++;
     }else if(input==2){//2. Show Employee
         cout<<"Please input index(id): ";
         int index;
         cin>>index;
         emp[index-1].printInFormation();
     }else if(input==3)
        {//3. Show all Employee
          for(int i=0;i<numberOfEmployee;i++)
         {
          emp[i].printInFormation();
         }  
     }else 
        {//5. Exit
           break;
         }
     }
return 0;
}    
