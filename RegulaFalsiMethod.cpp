#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{
    return(x*x*x-4); // f(x)= x^3-4
}
int main()
{
    float a,b,c,d,e=0.0001;
    int count=1,n;
    cout<<"Enter the values of a and b: "<<endl; //(a,b) must contain the solution
    cin>>a>>b;
    cout<<"Enter number of iterations: "<<endl;
    cin>>n;
    
    while(fabs(f(c))>e)
    {
        if(f(a)==f(b))
        {
            cout<<"Solution cannot be found as the values of a and b are same."<<endl;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        count++;
        if(count==n)
        {
            break;
        }
    }
    cout<<"The required solution is: "<<c<<endl;
}   