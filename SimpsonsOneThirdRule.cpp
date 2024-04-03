#include <iostream>
#include<cmath>
using namespace std;

float y(float x) {
    return exp(pow(x,3));
}


void simpson(float h, float n, float a, float b) {
    int i;
    float even=0,odd=0, area=0;
    for (i=1; i<n;i++) {
        if (i%2==0) {
            even += y(a+i*h);
        }
        else{
            odd += y(a+i*h);
        }
    }
    area +=(h/3)*(y(a)+y(b)+2*even+ 4*odd);
    cout<<"Area: "<<area<<endl;
}

int main() {
    float a,b,h, n;
    cout<<"Enter sub-interval: ";
    cin >>n;
    cout<<"Enter value of a and b: ";
    cin >>a>>b;
    h=(b-a)/n;
    simpson(h,n,a,b);
}