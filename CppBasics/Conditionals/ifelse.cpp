//EVEN or ODD
#include <iostream>
using namespace std;

int main(){
    int num; //input
    cin>>num;

    // //type1
    // if(num%2==0) cout<<"EVEN";    
    // else cout<<"ODD";

    // //type2
    // if((num/2)*2==num){
    //     cout<<"EVEN";
    // }
    // else cout<<"ODD";
    

    // //type3
    // int half=num/2;
    // if(half+half==num) cout<<"EVEN";
    // else cout<<"ODD";

    //type4
    if(num/2==num/2.0) cout<<"EVEN";
    else cout<<"ODD";
}