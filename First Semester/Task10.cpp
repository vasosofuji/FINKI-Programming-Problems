/*На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во истиот ред.
Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита бројот 0.*/


#include <iostream>
#include <cmath>
using namespace std;

int brojnacifri(int x) {
    int brojac=-1;
    while (x>0) {
        x/=10;
        brojac++;
    }
    return brojac;
}

int main() {


    int n; int max; int t=0;
    while (cin>>n && n!=0) {
        int arr[n];
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        max=arr[0]/(pow(10, brojnacifri(arr[0])));
        t=arr[0];
        for (int i=n-1;i>=0;i--) {
            if ((arr[i]/(pow(10, brojnacifri(arr[i]))))>max) {
                max=arr[i]/(pow(10, brojnacifri(arr[i])));
                t=arr[i];
            }
        }
    cout<<t<<endl;
    }

    return 0;
}
