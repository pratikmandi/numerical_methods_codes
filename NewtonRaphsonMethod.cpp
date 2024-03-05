#include <iostream>
#include <cmath>
using namespace std;

/*equation f(x) */
float f(float x) {
  return x*exp(x)-1; // xe^x-1=0
}

/* derivative of equation i.e f'(x) */
float derivative(float x) {
  return exp(x)+x*exp(x);
}

int main() {
  float x;
  int n, i;

  cout<<"Enter initial guess value: "<<endl;
  cin>>x;
  cout <<"Enter number of iterations: "<<endl;
  cin>>n;
  
  for(i=0;i<n;i++) 
  {
    if(derivative(x)==0) {
      // f'(x) should not be 0
      cout<<"Division by Zero is not allowed."<<endl;
    }
    //Newton Raphson formula
    x=x-f(x)/derivative(x);
    cout<<"Iteration "<<i<<" value: "<<x<<endl;
  }
   cout<<"Approximate root: "<<x<<endl;
}