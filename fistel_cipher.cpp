//fistel cipher
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

string or_func(char bits[4],char bitstr[4]){
    char final_output[4];
    int i ;
    for(i = 0;i<4;i++) {
        if (bits[i] == '1' && bitstr[i] == '1') {
            final_output[i] = '1';
        }
        else if((bits[i] == '0' && bitstr[i] == '1')){
            final_output[i] = '1';
        }
        else if((bits[i] == '1' && bitstr[i] == '0')){
            final_output[i] = '1';
        }
        else if (bits[i] == '0' && bitstr[i] == '0')
        {
            final_output[i] = '0';
        }
        
    }
    fflush(stdin);
    final_output[i] = '\0';
    cout<<"The output of the OR function"<<endl;
    cout<<final_output<<endl;
    return final_output;
}
int main () {
    char inputs_bits[9] = {'1','0','0','0','1','1','1','1'};
    char left_bits[4];
    char right_bits[4];
    char key[4];
    char left_xor[4];
    char combine_bits[9];
    
    int i;
    for(i = 0;i<strlen(inputs_bits)/2;i++) {
        int val = i;
        left_bits[i] = inputs_bits[i];
    }
    fflush(stdin);
    left_bits[i] = '\0';
    cout<<left_bits<<endl;

    int j;
    for(j = 0;j<strlen(inputs_bits)/2;j++) {
        int val2 = j + 4;
        right_bits[j] = inputs_bits[val2];
    }
    fflush(stdin);
    right_bits[j] = '\0';
    cout<<right_bits<<endl;

    cout<<"Enter the key"<<endl;
    cin>>key;
    //cout<<(left_bits)<<endl;
    string bit_or_str = or_func(key,right_bits);

    // conduct XOR
    int val;
    for(val = 0;val<bit_or_str.length();val++) {
        //cout<<bit_or_str[val]<<endl;
        //cout<<left_bits[val]<<endl;
        if (left_bits[val] == '1' && bit_or_str[val] == '1') {
            left_xor[val] = '0';
        }
        else if (left_bits[val] == '0' && bit_or_str[val] == '1')
        {
            left_xor[val] = '1';
        }
        else if (left_bits[val] == '1' && bit_or_str[val] == '0')
        {
            left_xor[val] = '1';
        }
        else if (left_bits[val] == '0' && bit_or_str[val] == '0')
        {
            left_xor[val] = '0';
        }

    }
    fflush(stdin);
    left_xor[val] = '\0';
    cout<<"XORed bits of both left and output from the right_bits or function:"<<endl;
    cout<<left_xor<<endl;
    //combine all the bits, remember to put the rightside of the bits on the left side and put the resultant bits
    // on the right side.
    
    int final_comb;
    for(final_comb=0;final_comb< (strlen(right_bits))/2 - 2 ;final_comb++) {
        //cout<<right_bits[ final_comb]<<endl;
        combine_bits[final_comb] = right_bits[final_comb];
    }
    fflush(stdin);
    combine_bits[val] = '\0';

    //combine_bits[4] = '0';
    //combine_bits[5] = '1';
    //combine_bits[6] = '1';
    //combine_bits[7] = '1';
    
    int final_combine2;

    for(final_combine2=4;final_combine2<8;final_combine2++) {
        //cout<<"power"<<endl;
        //cout<<left_xor[final_combine2-4]<<endl;
        //left_xor[final_combine2 - 4];
        combine_bits[final_combine2] += left_xor[final_combine2-4];
    }
    fflush(stdin);
    combine_bits[final_combine2] = '\0';
    cout<<"The combined bits are : "<<endl;
    cout<<combine_bits<<endl;
    return 0;
}