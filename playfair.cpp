#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string name = "sai";

    char alphabet_grid[5][5] = {
        {'s','a','i','b','c'},
        {'d','e','f','g','h'},
        {'k','l','m','n','o'},
        {'p','q','r','t','u'},
        {'v','w','x','y','z'}
    };

    string enc_text = "";
    string dcy_text = "";

    for(int i = 0;i<5;i++) {
        for(int j = 0;j<5;j++) {
            //cout<<alphabet_grid[i][j]<<endl;
            for(int k = 0;k<name.length();k++) {
                if (name[k] == alphabet_grid[i][j]) {
                    //cout<<i<<" "<<j<<endl;
                    if (i == j) {
                        cout<<alphabet_grid[i+1][j+1]<<endl;
                        enc_text += alphabet_grid[i+1][j+1];
                    }
                    else if (i > j) {
                        cout<<alphabet_grid[i+1][j]<<endl;
                        enc_text += alphabet_grid[i+1][j];
                    }
                    else if (i < j) {
                        cout<<alphabet_grid[i][j+1]<<endl;
                        enc_text += alphabet_grid[i][j+1];
                    }

                }
            }
        }
    }
    cout<<"Encrypted text is : ";
    cout<<enc_text<<endl;

    for(int i2 = 0;i2<5;i2++) {
        for(int j2 = 0;j2<5;j2++) {
            //cout<<alphabet_grid[i][j]<<endl;
            for(int k2 = 0;k2<enc_text.length();k2++) {
                if (enc_text[k2] == alphabet_grid[i2][j2]) {
                    //cout<<i<<" "<<j<<endl;
                    if (i2 == j2) {
                        cout<<alphabet_grid[i2-1][j2-1]<<endl;
                        dcy_text += alphabet_grid[i2-1][j2-1];
                    }
                    else if (i2 > j2) {
                        cout<<alphabet_grid[i2-1][j2]<<endl;
                        dcy_text += alphabet_grid[i2-1][j2];
                    }
                    else if (i2 < j2) {
                        cout<<alphabet_grid[i2][j2-1]<<endl;
                        dcy_text += alphabet_grid[i2][j2-1];
                    }
                }
            }
        }
    }
    cout<<"Decrypted text is : ";
    cout<<dcy_text<<endl;
    return 0;
}