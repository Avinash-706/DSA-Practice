#include <iostream>

using namespace std;
void display(int B[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<endl<<"Value "<<i<<" index ";
        cout<<B[i];
        *(B+i)+=5;
    }
}

void display2(int *C,int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<endl<<"Value "<<i<<" index ";
        cout<<i[C]; //*(i+C)

    }
}
int main()
{   int *A,n;
    cout << "ENter Size " << endl;
    cin>>n;
    A=nullptr;
    A=new int[n]; //A[n]
    for (int i=0;i<n;i++)
    {
        cout<<endl<<"ENter in "<<i<<" index ";
        cin>>*(A+i); //===A[i];
    }
    display(A,n);
    display2(A,n);

    delete A;
    A=nullptr;

    return 0;
}