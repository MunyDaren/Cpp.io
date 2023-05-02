//#include<iostream>
//using namespace std;
//int main(){
//	while(true){
//	
//	cout<<"Please input ur name:";
//	string a;
//	cin>>a;
//	
//			if(a=="Daren"){
//		cout<<"Your name is:"<<a<<endl;
//	}else{
//		cout<<"Incorrect name Please inout name again:";
//		cin>>a;
//		if(a=="Daren"){
//			cout<<"Your name is:"<<a<<endl;
//		}else{
//		 cout<<"Incorrect Name"<<endl;
//		 cout<<"==========New place========="<<endl;
//		 
//  	    }	  
//	}
//	}
//
//	
//	
//	return 0;
//}
#include<iostream>
using namespace std;

int main(){

    int column=50;
    int row=15;
    cout<<"\033[43m \033[0m ";
    for(int i=1; i<=column*row; i++){
        if(i<column*10){
            if(i%(column*2)<column){
                if(i%column<=6 && i%column!=0){
                    cout<<"* ";
                    continue;
                }
            }
            else{
                if(i%column<=5 && i%column!=0){
                    cout<<" *";
                    if(i%column==5){
                        cout<<" ";
                    }
                    continue;
                }
            }
        }
        if(i>=column*10){
            if(i%column<=6 && i%column!=0){
                cout<<"=";
            }
        }
        if(i<column*10 && i%column==6){
            cout<<" ";
            continue;
        }
        cout<<"=";
        if(i%column==0 && i!=column*row){
            cout<<endl;
            cout<<"\033[43m \033[0m ";
        }
    }

    return 0;
}
