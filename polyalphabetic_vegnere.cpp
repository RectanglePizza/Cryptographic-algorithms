#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string name = "sssi sssss"; // 9
    string key = "why"; // 3
    string enc_text = "";
    string dec_text = "";
    char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i = key.length();i<name.length();i++) {
        //cout<<i % 3<<endl;
        if (name[i] == ' ') {
            key += ' ';
        }
        else {
            key += key[i % 3];
        }
    }
    if (name.length() == key.length()) {
        for (int j = 0;j<name.length();j++){
           if (name[j] == ' ') {
               //cout<<' '<<endl;
               enc_text += " ";
           }
           else {
               int val = (name[j] + key[j] - 2 * 'a') % 26;
               //cout<<val<<endl;
               enc_text += alphabets[val];
           }
        }
    }
    
    //cout<<enc_text<<endl;
    // (encrypted_text - key + 26) % 26
    if (enc_text.length() == key.length()) {
        for(int k = 0;k<enc_text.length();k++) {
            if (enc_text[k] == ' ') {
                dec_text += ' ';
            }
            else{
               //cout<<(enc_text[k] - key[k] + 26) % 26<<endl;
               dec_text += alphabets[(enc_text[k] - key[k] + 26) % 26];
            } 
        }
    }
    cout<<enc_text<<endl;
    cout<<dec_text<<endl;
    return 0;
}