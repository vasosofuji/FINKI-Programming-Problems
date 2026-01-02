/*Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float n, m;
    cin>>n>>m;
    float arr[100][100];
    float najdal=0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    int niza[100];
    for (int i = 0; i < n; i++){
        float najodalecen=-9999999;
        float arsr=0;
        for (int j = 0; j < m; j++){
            arsr+=arr[i][j];
        }
        arsr/=m;

    for(int j=0; j<m; j++) {
        if((float)abs(arr[i][j]-arsr)>najodalecen) {
            najodalecen=(float)abs(arr[i][j]-arsr);
            najdal=arr[i][j];
        }
    }
    niza[i]=najdal;
    }
    for (int i=0; i<n; i++) {
        cout<<niza[i]<<" ";
    }

    return 0;
}
