#include<iostream>
#include<string.h>
#include<fstream>
#include<math.h>
std::string alis() {
    std::string val_str;
    int val;
    std::ofstream fout;
    fout.open("alis.txt",std::ios::app | std::ios::out);
    std::cin>>val;
    //std::getline(std::cin,val);
    fout<<val<<std::endl;
    fout.close();

    std::ifstream fin;
    fin.open("alis.txt",std::ios::in);
    fin>>val_str;
    std::cout<<"The value is : "<<val_str<<std::endl;
    fin.close();
    return val_str;
}
std::string bob(){
    std::string val_str2;
    int val2;
    std::ofstream fout;
    fout.open("bob.txt",std::ios::app | std::ios::out);
    std::cin>>val2;
    //std::getline(std::cin,val);
    fout<<val2<<std::endl;
    fout.close();

    std::ifstream fin;
    fin.open("bob.txt",std::ios::in);
    fin>>val_str2;
    std::cout<<"The value is : "<<val_str2<<std::endl;
    fin.close();
    return val_str2;
}
void diffie_helman() {
   int P;
   int G;
   int factors = 1;
   int a_val = 3;
   int b_val = 4;
   std::cout<<"Enter the value of P: "<<std::endl;
   std::cin>>P;
   std::cout<<"Enter the value of G: "<<std::endl;
   std::cin>>G;
   if (P > G) {
     for(int i = 1;i<P+1;i++) {
       if (P % i == 0) {
         factors += 1;
       }
    }
  }
  if (factors > 1) {
    std::cout<<"Enter a prime number instead"<<std::endl;
  }
  int G_powera;
  int G_powerb;
  G_powera = pow(G,a_val);
  G_powerb = pow(G,b_val);
  int G_modP= G_powera%P;
  int G_modP2 = G_powerb%P;

  //after exchange-----------------------------------------------------------------
  int x_val = G_modP2;
  int y_val = G_modP;
  int k_a,k_b;
  k_a = pow(x_val,a_val);
  k_b = pow(y_val,b_val);

  int k_amod = k_a%P;
  int k_bmod = k_b%P;

  std::cout<<k_amod<<k_bmod<<std::endl;
  if (k_amod == k_bmod) {
    std::cout<<std::endl;
    std::cout<<"Keys are matching , so the message exchange is possible"<<std::endl;
  }
}
int main() {
  diffie_helman();
}