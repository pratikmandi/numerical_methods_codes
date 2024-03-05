#include <iostream>
using namespace std;

int main() {
    int i,j,s[10],n,y[10],x;
    float ans=0;
    cout<<"Enter number of samples: "<<endl;
    cin>>n;

    cout<<"Enter values of x: "<<endl;
    for(i=0; i<n; i++) {
        cin>>s[i];
    }
    cout<<"Enter values of f(x): "<<endl;
    for (j=0; j<n; j++) {
        cin>>y[j];
    }
    cout<<"Enter value for which you want to find answer: "<<endl;
    cin>>x;

    for(i=0; i<n; i++) {
            float mul=1*y[i];
            for (j=0; j<n; j++) {
                if(i!=j) {
                mul *= (x-s[j])/double((s[i]-s[j]));
            }
        }
        ans += mul;
    }
    cout<<"The soultion is:   "<<ans<<endl;
    return 0;
}