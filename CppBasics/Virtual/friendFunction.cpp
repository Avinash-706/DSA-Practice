#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class LPU
{   int num;
public:
    LPU()
    {
        cout<<endl<<"--WELCOME TO LPU--"<<endl;
        num=0;
    }
    void display1()
    {
        cout<<endl<<"NUM="<<num<<endl;
    }

    friend void dost();

};
void dost()
{
  LPU obj;
  obj.num=500;
  obj.display1();
}
int main()
{
    dost();

}