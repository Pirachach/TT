#include<iostream>
#include<string>
 using namespace std;

int main(){
int age,hgt,bty;
string Mate;

cout << "Enter your age: ";
cin >> age;

 if(age <=25){
  cout <<"Enter your height: ";
cin >> hgt;
     if(hgt <100){
     Mate = "Chopper";
     }
     else if(hgt <180) {
         Mate = "Usopp";
     }
     else {
         cout <<"Enter your bounty: ";
         cin >> bty;
         if (bty >1100000000) Mate = "Zoro";
         else Mate = "Sanji";
  }
 }
    else if(age <=60){
     cout <<"Enter your bounty: ";
         cin >> bty;
         if (bty >500000000) Mate = "Jinbe";
         else Mate = "Franky";
    }
    else Mate = "Brook";
    
    cout << "Your character = " << Mate<< "\n";
    return 0;
}
  

