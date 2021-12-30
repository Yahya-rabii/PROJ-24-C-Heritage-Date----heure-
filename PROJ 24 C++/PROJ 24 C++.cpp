#include <iostream>
#include "DateH.h"
#include "Heure.h"

using namespace std;


int main()
{
    
    DateH *now = new DateH(30, 12, 2021 , 11, 32, 50);
    Heure *h = new Heure(10, 21, 30);



    //now = h; 
    
    //h=now;

     cout <<"aff fille"<< endl;
     now->affich();// date h
     
     cout << endl;
   
     cout << "aff mere" << endl;
     h->affich();// heure


      h=now;
    
     cout << endl;
    
     cout << "aff fille" << endl;
     now->affich();// date h
    
     cout << endl;


     cout << "aff mere" << endl;
     h->affich();// fille cus virtual 





}