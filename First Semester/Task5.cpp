/*Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка.
Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.*/


#include <iostream>
using namespace std;

double rekurzija(int arr[], int x) {
    if (x == 0)
        return 0;

    double rezultat = rekurzija(arr, x-1);


    if (rezultat == 0)
        return arr[x-1];
    else
        return arr[x-1] + (1.0 / rezultat);
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i = n-1; i >= 0; i--) {
        cin >> arr[i];
    }
    cout << rekurzija(arr, n);

    return 0;
}
