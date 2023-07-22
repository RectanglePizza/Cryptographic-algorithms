#include<iostream>
#include<string.h>
using namespace std;
string key_gen(){
    string p10 = "1000100111";
    return p10;
}
int main() {
    string p10 = key_gen();
    string ls1,ls2;
    ls1 = "";
    ls2 = "";
    int len = p10.length();
    // generation of the strings
    for(int i = 0;i<len/2;i++) {
        //cout<<i<<endl;
        ls1 += p10[i];
    }
    cout<<ls1<<endl;
    
    for(int j = 5;j<len;j++) {
        //cout<<i<<endl;
        ls2 += p10[j];
    }
    cout<<ls2<<endl;
    //shifting
    for(int k = 0;k<ls1.length();k++) {
        ls1[k] = ls1[k+1];
        if (k == 4) {
            ls1[k] = ls1[0];
            break;
        }
        cout<<k<<" "<<k+1<<endl;
    }
    cout<<ls1<<endl;

    for(int k2 = 0;k2<ls2.length();k2++) {
        ls2[k2] = ls2[k2+1];
        if (k2 == 4) {
            ls2[k2] = ls2[0];
            break;
        }
        cout<<k2<<" "<<k2+1<<endl;
    }
    cout<<ls2<<endl;
    return 0;
}