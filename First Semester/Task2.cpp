/*Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата). Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).

Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100). Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.

Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез. Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот.
Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.*/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int mat[100][100];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    int row, col;
    cin >> row >> col;

    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    // Top Left
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            sum1 += mat[i][j];
        }
    }

    // Top Right
    for(int i = 0; i < row; i++) {
        for(int j = col; j < m; j++) {
            sum2 += mat[i][j];
        }
    }

    // Bottom Left
    for(int i = row; i < n; i++) {
        for(int j = 0; j < col; j++) {
            sum3 += mat[i][j];
        }
    }

    // Bottom Right
    for(int i = row; i < n; i++) {
        for(int j = col; j < m; j++) {
            sum4 += mat[i][j];
        }
    }

    cout << sum2 << " ";
    cout << sum1 <<" ";
    cout << sum3 <<" ";
    cout << sum4 <<" ";

    return 0;
}
