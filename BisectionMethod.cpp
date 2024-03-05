#include <iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    return x*x-3;
}
double c=0;
double epsilon=1e-8;

void BisectionMethod(double a,double b){
if(f(a)*f(b)>=0)
    {
        cout<<"Wrong a and b value."<<endl;
        return;
    }
    c=a;
    while((b-a)>=epsilon)
    {
        c=(a+b)/2;
        if(f(c)==0.0)
        {
            break;
        }
        else if(f(c)*f(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
}

int main() 
{
    double a,b;
    cout<<"Enter initial values of a and b: "<<endl;
    cin>>a>>b;
    BisectionMethod(a,b);
    if(c!=0)
    {
    cout<<"Root is: "<<c<<endl;
    }
}