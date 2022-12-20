#include <iostream>
#include "math.h"

float f (float a){
    return (a*a*cos(a)+1);
}

using namespace std;
int main() {
    float a,b,x,err;
    do{
        cout<<"inserire estremi: ";
        cin>>a>>b;
    }while (f(a)*f(b)>=0);
   do{
       x = (a+b)/2;
       if (f(x)==0){
           cout<<x<<endl<<f(x);
       }else {
           if (f(a) * f(b) < 0) {
               b = x;
           } else {
               a = x;
           }
           err = abs((b - a) / 2);
       }
   }while (err>=1e-6);
    cout<<x<<endl<<f(x);
    return 0;
}
