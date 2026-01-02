/*Од стандарден влез прво се читаат два знака z1 и z2 , а потоа се читаат редови со низи од знаци се’ додека не се прочита знакот # (секој од редовите не е подолг од 80 знаци).

Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак. */

#include <iostream>
using namespace std;

int main() {

    char str[256];
    char ch;
    bool flag =true;
    char x,y;
    int firstnum=0, lastnum=0;
    cin>>x>>y;
    cin.ignore(1000, '\n');
    while (flag) {
        int i=0;
        while (cin.get(ch)) {
            if (ch=='#') {
                flag=false; break;
            }
            if (ch=='\n') {
                break;
            }
            if (ch==x) {
                firstnum=i;
            }
            if (ch==y) {
                lastnum=i;
            }

            str[i++]=ch;
        }
        if (flag) {
            for (int j=firstnum+1;j<lastnum;j++) {
                cout<<str[j];
            }
            cout<<endl;
        }

    }

    return 0;
}
