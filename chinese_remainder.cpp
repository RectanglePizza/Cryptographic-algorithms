#include<iostream>
#include<string.h>

int main() {
    //2 mod 5
    //3 mod 7
    //10 mod 11 
    int a1,a2,a3;
    a1 = 2;
    a2 = 3;
    a3 = 10;

    int m1,m2,m3;
    m1 = 5;
    m2 = 7;
    m3 = 11;

    int M;
    M = m1 * m2 * m3;

    int M1,M2,M3;
    M1 = M/m1;
    M2 = M/m2;
    M3 = M/m3;

    int M_1,M_2,M_3;
    for(int i = 1;i<m1+1;i++) {
        if (((M1 * i) % m1) == 1) {
            //std::cout<<i<<std::endl;
            M_1 = i;
        }
    }
    for(int i = 1;i<m2+1;i++) {
        if (((M2 * i) % m2) == 1) {
            //std::cout<<i<<std::endl;
            M_2 = i;
        }
    }
    for(int i = 1;i<m3+1;i++) {
        if (((M3 * i) % m3) == 1) {
            //std::cout<<i<<std::endl;
            M_3 = i;
        }
    }

    std::cout<<(a1 * M1 * M_1 + a2 * M2 * M_2 + a3 * M3 * M_3) % M<<std::endl;
}