/*Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:

int BrojPozitivni(int niza[], int n);

Да се напише и функција main() за тестирање на функцијата BrojPozitivni.*/

#include <iostream>
using namespace std;
int brojac=0;
int rekurzija(int niza[], int n) {

    if (n<=0)
        return 0;

    brojac = rekurzija(niza, n-1);
    int posleden = niza[n-1];
    if (posleden>0) {
        return brojac+1;
    }else
        return brojac;

}

int main() {

    int n;
    cin>>n;
int niza[n];
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    cout<<rekurzija(niza, n);

}
