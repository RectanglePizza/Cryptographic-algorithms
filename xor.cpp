#include<iostream>
#include<string.h>
using namespace std;
string xor_(){
   char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   string enc_text = "";
   string name;
   cout<<"Enter the name"<<endl;
   cin>>name;
   char bitkey;
   cout<<"Enter the bitkey"<<endl;
   cin>>bitkey;
   for(int i = 0;i<name.length();i++) {
       //cout<<(name[i] ^ bitkey)<<endl;
       int val = (name[i] ^ bitkey);
       if (val > 26) {
           val = val - 26;
       }
       enc_text += alphabets[val];
   }
   return enc_text;
}
int main() {
    string final_enc_text = xor_();
    cout<<final_enc_text<<endl;
    return 0;
}