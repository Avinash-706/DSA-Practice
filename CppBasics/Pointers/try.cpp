#include <iostream>
using namespace std;


class Complex
    {
    private:
        double real, imag;
    public:
        Complex(double real=0, double imag=0)
        {
            this->real=real;
            this->imag=imag;
            cout << endl << "Constructor INvoked "<< endl;
            cout << "Number -> " << real << " + " << imag << "i" <<endl;

        }
        void display()
        {
            cout<<endl<<"Your Number is"<<endl;
            cout << "Number -> " << real << " + " << imag << "i" <<endl;

        }
        Complex operator+(Complex &obj)
        {
            Complex sum;
            sum.real=this->real+obj.real;
            sum.imag=this->imag+obj.imag;
            return sum;
        }
        Complex operator-(Complex &obj)
        {
            Complex subtract;
            subtract.real=this->real-obj.real;
            subtract.imag=this->imag-obj.imag;
            return subtract;
        }
};

int main()
{   
    Complex n1(15,15),n2(50,85),sum, subtract;
    // n1.display();
    // n2.display();
    sum=n1 + n2;
    sum.display();
    subtract=n2-n1;
    subtract.display();


    return 0;
}