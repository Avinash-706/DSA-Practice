#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    // for(int i=1; i<n; i++){
    //     cout<<i<<"  ";
    // }
    
    for(;;){
        if(i>100){
        break;
        }
        i++;
        cout<<i<<"  ";
    }
}
