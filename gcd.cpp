#include<iostream>
int gcd(int a , int b) {
    int val;
    if (a > b){
        a = a - b;
        val = a;
    }
    else if (b > a){
        b = b - a;
        val = b;
    }
    else if (a == 0) {
        val =  b;
    }
    return val;
}


//-----------------------------------------------------------------------------------------------------
//Let's work on gcd using recursion
int gcd_recur(int a, int b){
   //std::cout<<b%a<<std::endl;
   if (a == 0) {
       return b;
   }
   return gcd_recur(b,a%b);
}

int main() {
    int val = gcd_recur(63,42);
    std::cout<<val<<std::endl;
    return val;
}