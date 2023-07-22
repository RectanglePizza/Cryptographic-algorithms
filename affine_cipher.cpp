#include<iostream>
#include<string.h>
using namespace std;
string encryption(string name,char alphabets[26],int indexes[26]){
    int a = 17;
    int b = 20;
    string enc_text = ""; 
    for(int i = 0;i<name.length();i++) {
        char x = name[i];
        int val = ( a * (x-'a')  + b) % 26 + 'a';
        //cout<<val<<endl;
        enc_text += val;
        //for(int j = 0;j<26;j++) {
        //    if (val == j) {
        //        //cout<<alphabets[val]<<endl;
        //        enc_text += alphabets[val];
        //    }
        //}
        
    }
    return enc_text;
}
string decryption(int a,int b,string name,char alphabets[26],int indexes[26]) {
    // a ** -1 * (x - b) % m
    // first find the a inverse
    int a_1;
    string decrypted_text = "";
    for(int m = 1;m <27;m++) {
       if ((a * m) % strlen(alphabets) == 1) {
           a_1 = m;
       }
    }
    for(int n_i =0;n_i<name.length();n_i++) {
        //int dec_val = (((a_1 * ((name[n_i] + 'a') - b)) % 26)+'a');
        cout<<((a_1 *((name[n_i] - 'a') - b )) % 26) + 'a'<<endl;
        //decrypted_text += ((a_1 *((name[n_i]) - b)) % 26);
        //cout<<endl;
        //decrypted_text += dec_val; 
    }
    //cout<<decrypted_text<<endl;
    return "";
}
int main() {
    int a = 17;
    int b = 20;
    char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int indexes[26] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    string encrypted_text = encryption("sai",alphabets,indexes);
    cout<<"Text before encryption is :"<<"sai"<<endl;
    cout<<"Encrypted text is:"<<encrypted_text<<endl;
    decryption(a,b,encrypted_text,alphabets,indexes);
    return 0;
}