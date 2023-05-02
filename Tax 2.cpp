#include<iostream>
using namespace std;
int main(){
	while(true){
	float Salary;
	float Tax=0;
	float TaxAmount;
	float SalaryAfterTax;
	cout<<"  Hii Welcome To Program calculate Salary Tax "<<endl;
	cout<<"     Please Input The Salary"<< endl;
	cout<<"Salary :";
	cin>> Salary;
	if(Salary>500000&& Salary<=1250000){
		Tax=5;
	}else if(Salary>1250000&&Salary<=8500000){
		Tax=10;
	}else if(Salary>8500000&&Salary<=12500000){
		Tax=15;
	}else if(Salary>12500000){
		Tax=20;
	}
	TaxAmount=Salary*(Tax/100);
    SalaryAfterTax=Salary-TaxAmount;
	cout<<" Here Is Your Result "<<endl;
	cout<<"Tax is:"<<(int)Tax<< "%"<<endl;	
	cout<<"Tax Amount is:"<<(int)TaxAmount<< "Reil"<< endl;
	cout<<"Your Salary After Tax is:"<<(int)SalaryAfterTax<<" Reil"<<endl;
	}
	return 0;
}
