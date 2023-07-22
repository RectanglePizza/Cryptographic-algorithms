#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string name = "zai";
    int key = 4;
    string encrypted_text = "";
    string decrypted_text = "";
    for(int i = 0;i<name.length();i++) {
        //cout<<i;
        name[i] += key;
        //cout<<name[i]<<endl;
        if (name[i] > 122) {
            //cout<<name[i] + 0<<endl;
            name[i] = name[i] - 'z' + 'a' - 1;
            //cout<<name[i]<<endl;

        }
        //cout<<name[i]<<endl;
        
        encrypted_text += name[i];
    }
    //cout<<encrypted_text<<endl;
    for(int j = 0;j<encrypted_text.length();j++) {
        //cout<<i;
        encrypted_text[j] -= key;
        //cout<<name[i]<<endl;
        if (encrypted_text[j] < 97) {
            //cout<<name[i] + 0<<endl;
            encrypted_text[j] = encrypted_text[j] + 'z' - 'a' + 1;
            //cout<<name[i]<<endl;

        }
        decrypted_text += encrypted_text[j];
    }
    
    cout<<decrypted_text<<endl;
    
}