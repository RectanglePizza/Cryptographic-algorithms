#include<iostream>
#include<string.h>
using namespace std;
string key_gen() {
    char temp[11];
    char k1[11],k2[11];
    int i,cnt;
    string input;
    int p8[8] = {6,7,8,9,1,2,3,4};
    int p10[11] = {6,7,8,9,10,1,2,3,4,5};

    cout<<"Enter the string"<<endl;
    cin>>input;
    for(int i = 0;i<10;i++) {
        cnt = p10[i];
        temp[i] = input[cnt - 1];
    }
    
    //cout<<temp<<endl;
    return temp;
}
int main() {
    string key_str = key_gen();
    for(int i = 0;i<key_str.length()/2;i++) {
        cout<<i<<endl;
        key_str[i] = key_str[i+1];
        if (i == 4) {
            key_str[i] = key_str[0];
        }
    }
    cout<<key_str<<endl;

    for(int j = 5;j<key_str.length();j++) {
        cout<<j<<endl;
        key_str[j] = key_str[j+1];
        if (j == 9) {
            key_str[j] = key_str[0];
        }
    }
    cout<<key_str<<endl;
    return 0;
}