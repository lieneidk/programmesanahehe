//Dots divu dimensiju masîvs A(n,n), kas aizpildîts ar nullçm un vieniniekiem (masîvu izveidot un ieraksît tajâ vçrtîbas paðiem).
//Noskaidrot, cik masîva kolonnu un rindu ir aizpildîtas tikai ar 1 un cik kolonnu un rindu ir aizpildîtas tikai ar 0.
//Izveidot un izmantot funkciju vai funkcijas, kas vienai rindai vai kolonnai var pateikt, ka tâ sastâv tikai no 1 vai 0.

#include <iostream>
using namespace std;

void rinda(int arr[4][3]){
    int n;
    int v;
    int i;
    int j;

    for(i=0; i<4; i++){
            n = 0;
            v = 0;

        for(j=0; j<3; j++){
            int s = arr[i][j];

            if(s == 0){
                n++;
            }else if(s == 1){
                v++
            }
        if (n == 3){

            cout<<"rinda ar visiem 1:"<<i+1<<endl;
        }else if (v == 3){
            cout<<"rinda ar visiem 0:"<<i+1<<endl;
        }
        }

    }

}

    void kolonna (int arr[4][3]){
        int n;
        int v;
        int i;
        int j;

        for(i=0; i<3; i++){
            n = 0;
            v = 0;

        for(j=0; j<4; j++){
            int s = arr[i][j];

            if(s == 0){
                n++;
            }else if(s == 1){
                v++
            }
        if (n == 4){

            cout<<"rinda ar visiem 1:"<<i+1<<endl;
        }else if (v == 4){
            cout<<"rinda ar visiem 0:"<<i+1<<endl;
        }
        }

        }

    }

int main (){

    int arr[4][3] = {
{1,0,0},
{1,1,0},
{1,0,0},
{1,1,1}};

rinda(arr);
kolonna(arr);
    }
