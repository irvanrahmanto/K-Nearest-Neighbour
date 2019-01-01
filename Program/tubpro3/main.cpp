#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

//  Pemanggilan data train pada file DataTrain_Tugas3_AI.csv
float train(){
    ifstream myFile;
    myFile.open("DataTrain_Tugas3_AI.csv");

    while(myFile.good()){
        string line;
        getline(myFile, line, ',');
        cout << line << endl;
    }
}

//  Pemanggilan data test pada file DataTest_Tugas3_AI.csv
float test(){
    ifstream myFile;
    myFile.open("DataTest_Tugas3_AI.csv");

    while(myFile.good()){
        string line;
        getline(myFile, line, ',');
        cout << line << endl;
    }
}

//  Perhitungan ke dalam rumus dari data pemanggilan import data train dan data value menggunakan manhattan distance
float manhattanvalue(float value ,float x1, float x2, float x3, float x4, float x5, float x11, float x12, float x13, float x14, float x15){
    value = pow((x1-x11),2) + pow((x2-x12),2) + pow((x3-x13),2) + pow((x4-x14),2) + pow((x5-x15),2);
    return value;
}

//  Pengurutan data berdarkan data yang dipanggil (sorting)
float* ascendingsort(int nextelmnt, int i, int j){
    float a[1000];
    for(int i=1; i <= (sizeof(a)/sizeof(float)); i++){
        int j = i-1;
        nextelmnt = a[i];
    }
    while(a[j] > nextelmnt && j >= 0 ){
        a[j+1] = a[j];
        j=j-1;
    }
    a[j+1] = nextelmnt;
    return a;
}

//  pemanggilan data tes dan data train pada function data untuk dilakukan ke main
float* data(int i, float nol, float satu, float dua, float tiga){
    float x[1000];
    x[0] = nol;
    x[1] = satu;
    x[2] = dua;
    x[3] = tiga;
    return x;

    float x1[1000];
    float x2[1000];
    float x3[1000];
    float x4[1000];
    float x5[1000];
    float y[1000];
    float x11[1000];
    float x12[1000];
    float x13[1000];
    float x14[1000];
    float x15[1000];
    float z[1000];

    float row;
    float datatrain = train();
    for(row=1;row<=801;row++){
        z[row] = 0;
        x1[row] = 1;
        x2[row] = 2;
        x3[row] = 3;
        x4[row] = 4;
        x5[row] = 5;
        y[row] = 6;
    }
    float datatest = test();
    for(){
        x11[row] = 1;
        x12[row] = 2;
        x13[row] = 3;
        x14[row] = 4;
        x15[row] = 5;
    }
}
 //     main program , perhitungan menggunakan manhattan distance
int main()
{
//      Pendeklarasian semua variable

    float p;
    float m;
    float n;
    float y;
    float v;

    float k=5;
    float in=1;
    float hi=1;
    float un=2;

//  Pendeklarasian dan penjelasan semua list pada array

    float fixdatalist[1000];
    float jarak[1000];
    float jarak1[1000];
    float temp[1000];
    float nearest[1000];
    float datalist[1000];


//  Perhitungan data dengan memanggil penggunaan rumus manhattan value

    while(float i<=200){
        int n=1;
        while(int n<=800){
            float result = manhattanvalue((float x1[n]),(float x2[n]),(float x3[n]),(float x4[n]),(float x5[n]),(float x11[n]),(float x12[n]),(float x13[n]),(float x14[n]),(float x15[n]));
            temp[n] = result;
            jarak1[n] = result;
            temp.cin >> y[i];
            jarak1.cin >> temp;
            un = un+1;
       //     temp.remove;
            n = n++;
        }

//      Pengkondisian dimana pencarian data terdekat nya melalui ascending sorting untuk nanti menemukan K

        p=1;
        while(p<=7){
            float nol = 0;
            float satu = 0;
            float dua = 0;
            float tiga = 0;
            nearest = ascendingsort(jarak1);
        }
            m=1;
            while(m<1600){
                if(nearest[p] == jarak[m]){
                    m=m+1;
                    if(jarak[m]=='1'){
                        satu = satu++;
                    }
                    else if(jarak[m]=='2'){
                        dua = dua++;
                    }
                    else if(jarak[m]=='3'){
                        tiga = tiga++
                    }
                    else{
                        nol=nol++
                    }
                }
                else{
                    m = m+1;
                }
                datalist = data(nol,satu,dua,tiga);
                p = p++;
                if(datalist[1]==1){
                    fixdatalist[i] = 1;
                }
                else if(datalist[2]==1){
                    fixdatalist[i] = 2;
                }
                else if(datalist[3]==1){
                    fixdatalist[i] = 3
                }
                else{
                    fixdatalist[i] = 0;
                }

            }
            /*
            jarak.remove;
            jarak1.remove;
            nearest.remove;
            datalist.remove;
            i = i++;
            */
    }

//      Peng outputan data yang setelah dilakukan sorting dan searcing
    v=1;
    for(v=1; v <= (sizeof(fixdatalist)/sizeof(float)); v++){
        cout << "Baris ke-", v+1 ,", dengan nilai Y = ", fixdatalist[v];
    }
}
