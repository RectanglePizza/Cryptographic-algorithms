#include<iostream>
using namespace std;
int gcd(int a, int b){
    int x1,y1;
    
    if (b == 0) {
        x1 = 1;
        y1 = 1;
        
        return x1,y1;
    }
    int gcd_val = gcd(b,a%b);
    
    return ;
}

int main(){
    gcd(10,5);
    return 0;
}