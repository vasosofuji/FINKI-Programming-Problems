/*Се внесуваат низи од значи од стандарден влез. Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците.
Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви.
Потоа во нов ред се печати бројот на појавувања на паровите самогласки. Читањето завршува кога ќе се прочита знакот #.
Пример:

IO is short for Input Output
medioio medIo song
#

Излез:

io
ou
io
oi
io
io
6
*/

#include <iostream>
using namespace std;

char mala(char x) {

    if (x=='A')
        return 'a';
    if (x=='E')
        return 'e';
    if (x=='I')
        return 'i';
    if (x=='O')
        return 'o';
    if (x=='U')
        return 'u';
}

int main() {

    char ch;
    char samoglaski[100];
    int i=0;
    int brojac=0;

    while (cin.get(ch)) {
        if (ch=='#')
            break;
        samoglaski[i++]=ch;

        if (ch=='\n') {
            for (int j=0;j<i;j++) {
                if (tolower(samoglaski[j])=='a' || tolower(samoglaski[j])=='e' || tolower(samoglaski[j])=='i' || tolower(samoglaski[j])=='o' || tolower(samoglaski[j])=='u') {
                    if(tolower(samoglaski[j+1])=='a' || tolower(samoglaski[j+1])=='e' || tolower(samoglaski[j+1])=='i' || tolower(samoglaski[j+1])=='o' || tolower(samoglaski[j+1])=='u') {
                        cout<<mala(samoglaski[j])<<mala(samoglaski[j+1])<<endl;
                        brojac++;
                    }
                }
            }
            i=0;
        }

    }
    cout<<brojac<<endl;


    return 0;
}
