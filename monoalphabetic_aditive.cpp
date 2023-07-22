#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string name = "sss";
    char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char alpha_reverse[26] = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
    string encrypted_text = "";
    string decrypted_text = "";
    for(int i = 0;i<name.length();i++) {
        for (int j = 0;j<strlen(alphabets);j++) {
            if(name[i] == alphabets[j]) {
                //cout<<alpha_reverse[j]<<endl;
                encrypted_text += alpha_reverse[j];
            }
        }
    }
    cout<<encrypted_text<<endl;

    //----------------decryption-------------------------------------
    for(int i2 = 0;i2<encrypted_text.length();i2++) {
        for (int j2 = 0;j2<strlen(alpha_reverse);j2++) {
            if(encrypted_text[i2] == alpha_reverse[j2]) {
                //cout<<alpha_reverse[j]<<endl;
                decrypted_text += alphabets[j2];
            }
        }
    }
    cout<<decrypted_text<<endl;
    return 0;
}