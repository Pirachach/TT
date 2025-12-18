#include <iostream>
using namespace std;

int main()
{
    char rank;
    int num;
    cout << "Input your rank: ";
    cin >> rank;
    
    if(rank == 'S')num  =5;
    if(rank == 'A')num  =4;
    if(rank == 'B')num  =3;
    if(rank == 'C')num  =2;
    if(rank == 'D')num  =1;
    

   if (num >=5 ) 
        cout << "You have received Super Ultra Rare Unit!!!\n";
    
   if (num >=4) 
        cout << "You have received 5 gems.\n";
     
   if (num >=3) 
        cout << "You have received 1 gems.\n";
    
   if (num >=2) 
        cout << "You have received 2000 coins.\n";
     
   if (num >=1) 
        cout << "You have received very KAK items.\n";
    
   return 0;
}
