#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string name = "sai";
    string key = "why";
    string enc_text = "";
    string dec_text = "";
    int val[3] = {};
    int val2[3] = {};
    int final_val[3] = {};
    char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int indexes[26] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    if(name.length() == key.length()) {
        for(int i = 0;i<name.length();i++) {
            for(int j = 0;j<strlen(alphabets);j++) {
                if (name[i] == alphabets[j]) {
                    val[i] = indexes[j]; 
                    
                }
                else if(key[i] == alphabets[j]) {
                    val2[i] = indexes[j];
                    
                }
            }
        }
        for(int k = 0;k<sizeof(val)/sizeof(val[0]);k++) {
            //cout<<val[k]<<endl;
            final_val[k] = val[k] + val2[k];
            if (final_val[k] > 25) {
                final_val[k] -= 25;
            }
            //cout<<alphabets[ final_val[k]]<<endl;
            enc_text += alphabets[ final_val[k]];
        }
        
    }

    //cout<<sizeof(val)/sizeof(val[0])<<endl; // so the length of the array is 3.
    //cout<<strlen(val2)<<endl;
    return 0;
}