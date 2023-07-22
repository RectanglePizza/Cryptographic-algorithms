#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a , int b){
    int val;
    if (b == 0){
        return a;
    }
    val = gcd(b,a%b);
    return val; 
}

int main() {
    double p,q;
    p = 3;
    q = 7;
    double n = p * q;
    double e = 1;
    double phi = (p-1)*(q-1);
    while(e < phi) {
        if (gcd(e,phi) == 1){
            break;
        }
        else{
            e++;
        }
    }
    cout<<e<<endl;
    int k = 2;
    double d = (1 + (k * phi)) / e;
    double msg = 12;
    double encryption = pow( msg,e);
    encryption = fmod(e,n);
    cout<<encryption<<endl;
    return 0;
}