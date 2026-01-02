/*Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите во првата половина од редицата
и сумата на елементите во втората половина на редицата. Ако матрицата има парен број колони, се менува вредноста на средните два елемента.
Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица.

Пример.

Влез:

m = 4

n = 4

1 3 -5 4

2 10 2 10

7 2 3 5

3 2 10 3

Излез:

1 5 5 4

2 0 0 10

7 1 1 5

3 8 8 3*/

#include <iostream>
    using namespace std;

    int main() {


        int m,n;
        cin>>m>>n;
        int arr[100][100];
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                cin>>arr[i][j];
            }
        }
        if (n%2==0) {
            int srednadesno=n/2;
            int srednalevo=n/2-1;
            int sumlevo;
            int sumdesno;
            for (int i=0; i<m; i++) {
                sumlevo=0;
                sumdesno=0;
                for (int j=0; j<=srednalevo; j++) {
                    sumlevo+=arr[i][j];
                }
                for (int j=n-1; j>=srednadesno; j--) {
                    sumdesno+=arr[i][j];
                }
                int razlika=abs(sumdesno-sumlevo);
                arr[i][srednalevo]=razlika;
                arr[i][srednadesno]=razlika;
            }

            for (int i=0; i<m; i++) {
                for (int j=0; j<n; j++) {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        if (n%2!=0) {

            int sredina=n/2;
            int sumlevo;
            int sumdesno;
            for (int i=0; i<m; i++) {
                sumlevo=0;
                sumdesno=0;
                for (int j=0; j<=sredina; j++) {
                    sumlevo+=arr[i][j];
                }
                for (int j=n-1; j>=sredina; j--) {
                    sumdesno+=arr[i][j];
                }
                int razlika=abs(sumdesno-sumlevo);
                arr[i][sredina]=razlika;
                arr[i][sredina]=razlika;
            }

            for (int i=0; i<m; i++) {
                for (int j=0; j<n; j++) {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }

        }


        return 0;
    }
