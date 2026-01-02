/*Од стандарден влез се чита ливче во спортска обложувалница.

Во првиот ред е запишана сумата на уплата (цел број).

Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат:

ab12 1 1.25

Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.*/

//NOTE: Using strings is usually not allowed in first semester, alternatively just use an array of characters instead of string.


#include <iostream>
using namespace std;


int main() {
    float suma=0;
    cin>>suma;
    string karakteri;
    int tip;
    float koef;
    int maxtip=-1000;
    float maxkoef=-1000;
    string maxglup;
    float maxsum=1;

    while (cin>>karakteri && karakteri!="#") {

    cin>>tip>>koef;
        if (koef>maxkoef) {
            maxkoef=koef;
            maxtip=tip;
            maxglup=karakteri;
        }
        maxsum*=koef;
    }
    maxsum*=suma;
    cout<<maxglup<<" "<<maxtip<<" "<<maxkoef<<endl<<maxsum;

    return 0;
}
