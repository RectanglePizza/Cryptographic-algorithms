#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string name = "sai";
    int rails = 2;
    int name_len = name.length();
    char str_in_rails[rails][name_len] = {
        {' ',' ',' '},
        {' ',' ',' '}
    };
    for(int i = 0;i<rails;i++) {
        //cout<<i<<endl;
        int row_track = i;
        //cout<<str_in_rails[row_track]<<endl;
        
        for(int j = row_track;j<3;j+=2) {
            int col_track = j;
            cout<<col_track<<endl;
            str_in_rails[row_track][col_track] = name[col_track];
        }
    }
    cout<<str_in_rails[0]<<endl;
    return 0;
}