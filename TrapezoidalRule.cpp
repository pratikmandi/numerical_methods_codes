#include <iostream>
#include<cmath>
using namespace std;

float y(float x) {
    return x*x+2;
}

void trap(float h, float n, float a, float b) {
    int i;
    float rest=0, area=0;
    for (i=1; i<n; i++) {
        rest += y(a+i*h);
    }
    area +=(h/2)*(y(a)+y(b)+2*rest);
    cout<<"Area: "<<area<<endl;
}

int main() {
    float n,a,b,h;
    cout<<"Enter sub-interval: ";
    cin >>n;
    cout<<"Enter value of a and b: ";
    cin >>a>>b;
    h=(b-a)/n;
    trap(h,n,a,b);
}