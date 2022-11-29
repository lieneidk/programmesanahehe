//Dots divu dimensiju masîvs A(n,n), kas aizpildîts ar nullçm un vieniniekiem (masîvu izveidot un ieraksît tajâ vçrtîbas paðiem).
//Noskaidrot, cik masîva kolonnu un rindu ir aizpildîtas tikai ar 1 un cik kolonnu un rindu ir aizpildîtas tikai ar 0.
//Izveidot un izmantot funkciju vai funkcijas, kas vienai rindai vai kolonnai var pateikt, ka tâ sastâv tikai no 1 vai 0.

#include <iostream>
using namespace std;
// veido funkc., kas izies cauri 4 rindām. veido void funkc., jo nevajadzēs atgriezt kadu vertibu.
//nosaka intiger vērtības
void rinda(int arr[4][3]){ 
    int n;
    int v;
    int i;
    int j;
// veido for ciklus, kas katrā rindā noteiks 1 vai 0 
    for(i=0; i<4; i++){
            n = 0;
            v = 0;

        for(j=0; j<3; j++){
            int s = arr[i][j];
// izmantojot if un else if, nosaka, ka, ja skaitlis ir 1, tad v palielinās par 1 vertibu, savukart, ja skaitlis ir 0, tad n palielinas par vienu vertibu 
//tātad, ja n vai v vērtība funkcijas beigas ir 3, tas nozime, ka taja rinda ir visi vienadi skaitli
            if(s == 0){
                n++;
            }else if(s == 1){
                v++
            }
// ar šo if un else if nosaka, ka izprinte to kura rinda ir visa ar vienadiem skaitliem
        if (n == 3){

            cout<<"rinda ar visiem 1:"<<i+1<<endl;
        }else if (v == 3){
            cout<<"rinda ar visiem 0:"<<i+1<<endl;
        }
        }

    }

}
// veido funkc., kas izies cauri 3 kolonnam. veido void funkc., jo nevajadzēs atgriezt kadu vertibu.
//nosaka intiger vērtības
    void kolonna (int arr[4][3]){
        int n;
        int v;
        int i;
        int j;
// veido for ciklus, kas katrā kolonna noteiks 1 vai 0 
        for(i=0; i<3; i++){
            n = 0;
            v = 0;

        for(j=0; j<4; j++){
            int s = arr[i][j];
// izmantojot if un else if, nosaka, ka, ja skaitlis ir 1, tad v palielinās par 1 vertibu, savukart, ja skaitlis ir 0, tad n palielinas par vienu vertibu 
//tātad, ja n vai v vērtība funkcijas beigas ir 4, tas nozime, ka taja kolonna ir visi vienadi skaitli
            if(s == 0){
                n++;
            }else if(s == 1){
                v++
            }
// ar šo if un else if nosaka, ka izprinte to kura kolonna ir visa ar vienadiem skaitliem
        if (n == 4){

            cout<<"rinda ar visiem 1:"<<i+1<<endl;
        }else if (v == 4){
            cout<<"rinda ar visiem 0:"<<i+1<<endl;
        }
        }

        }

    }

int main (){
// seit definē arrays rinda un kolonna, kā ari nosaka 2D arejas rindu, kolonnu izmerus
    int arr[4][3] = {
{1,0,0},
{1,1,0},
{1,0,0},
{1,1,1}};

rinda(arr);
kolonna(arr);
    }
