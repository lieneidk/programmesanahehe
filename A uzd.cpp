//Doti divi naturāli skaitļi. Atrast visus abu skaitļu kopīgus dalītājus.
//Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.

#include <iostream>

using namespace std;

int main (){

//nosaka integers un stringu, kas noteiks programmas atkartosanu
    int a;
    int b;
    int c;
    int yn = 0;
    string k;

//nosakam, ka while cikls atkartojas, kamer integer yn ir mazaks par vai vienads ar 0
    while(yn <= 0){

        yn = yn -1;

        cout<<"ievadi divus naturalus skaitlus"<<endl;
        cin>>a>>b;
//ar for nosaka, ka funkcija iziet cauri visiem skaitliem sakot no 1, kas mazaki par a un b 
    for (c=1; c<= b && c<= a; c++){
//ar if nosaka, ka jaizprinte ta c varetiba, kas bez atbikuma dalas gan ar a, gan b
        if(a%c==0 && b%c==0){
            cout<<c<<endl;
        }
    }
//dodam lietotajam iespeju izveleties turpinat vai neturpinat programmu ievadot y vai n. (atsauce uz ieprieksejo while ciklu)
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
