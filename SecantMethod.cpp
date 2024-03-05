#include<iostream>
#include <cmath>
using namespace std;

double f(double x){
    return cos(x)-x*exp(x); // f(x) = cosx-xe^x=0
    }

void answ(double a,double b){
    while(fabs(a-b)>1e-8){
        double x=b-((a-b)/(f(a)-f(b)))*f(b);
        a=b;
        b=x;
        cout<<x<<endl;
    }
}
int main() {
    double a,b;
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
    answ(a,b);
}