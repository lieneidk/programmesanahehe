#include <iostream>

using namespace std;

int main (){


    int a;
    int b;
    int c;

    cout <<"ievadi divus naturalus skaitlus"<<endl;
    cin>>a, b;


    for (c=1; c<= b && c<= a; c++){
        if(a%c==0 && b%c==0){
            cout<<c<<endl;
        }
    }




}
