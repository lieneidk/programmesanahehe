//Doti divi naturāli skaitļi. Atrast visus abu skaitļu kopīgus dalītājus.
//Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.

#include <iostream>

using namespace std;

int main (){


    int a;
    int b;
    int c;
    int yn = 0;
    string k;


    while(yn <= 0){

        yn = yn -1;

        cout<<"ievadi divus naturalus skaitlus"<<endl;
        cin>>a>>b;

    for (c=1; c<= b && c<= a; c++){
        if(a%c==0 && b%c==0){
            cout<<c<<endl;
        }
    }

    while (yn < 0){

        cout<<"vai velies turpinat?"<<endl;
        cin>>k;

        if(k=="y"){

            yn = 0;

        }else if (k=="n"){

            yn =1;
        }else {
        cout<<"nederīga atbilde"<<endl;
        yn= yn-1;
        }

        }
    }






}
