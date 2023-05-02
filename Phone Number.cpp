#include<iostream>
using namespace std;
int main(){
    cout <<"            Welcome To Phone Number Horoscope" << endl;
    int Phone;
    cout << "                Plese input Your number "<< endl;
    cout<<"Number:";
	cin >> Phone;
    Phone = Phone % 8;
    cout<<"Nes Answer Kon pa"<<endl;
    if(Phone==0){
        cout << "Change Number Jol Tv Sim1 only 2500 " << endl;
    }else if(Phone==1){
        cout << "Kaj Sim Jol tv" << endl;
    }else if(Phone==2){
        cout << "Number Doch Ach" << endl;
    }else if(Phone==3){
        cout << "Mea Mer Sim ke e is" << endl;
    }else if(Phone ==4){
        cout << "Bos Sim Ng Jol Tv" << endl;
    }else if (Phone == 5){
        cout << "Err Err Pon ng mor reng kron" << endl;
    }else if (Phone == 6){
        cout << "Good Good" << endl;
    }else if(Phone==7){
            cout << "Supper good Kon pa" << endl;
    }

            return 0;
    }
