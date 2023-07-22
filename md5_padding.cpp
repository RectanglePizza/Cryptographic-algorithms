#include<iostream>
#include<string.h>

int main() {
    int bits;
    std::cout<<"Enter the number of bits:"<<std::endl;
    std::cin>>bits;
    int padding;
    for(int i = 0;i<10;i++) {
        padding = (i * 512) - 64;
        //std::cout<<padding<<std::endl;
        if (padding > bits) {
            std::cout<<i<<std::endl;
            padding = padding;
            break;
        }
    }
    std::cout<<padding<<std::endl;
    //std::cout<<10 * 512 - 64<<std::endl;
    return 0; // 1000
}