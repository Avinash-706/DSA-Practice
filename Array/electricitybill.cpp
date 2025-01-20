#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the units: ";
    cin>>n;
    int bill=0;
    if(n<200){
        cout<<"NO BILL"<<endl;
    }
    else{
        if(n>200 && n<=300){
            bill+=(n-200)*5;
        }
        else if(n>300 && n<=500){
            bill += 500;
            bill += (n-300)*10;
        }
        else if(n>500){
            bill+=500;
            bill+= 2000;
            bill+= (n-500)*20;
        }
        cout<< "TOTAL BILL: " << bill << endl;
        cout<< "EFFECTIVE UNIT: " << bill/n <<endl;
    }
}