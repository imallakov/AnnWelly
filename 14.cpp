#include <iostream>

using namespace std;

int main() {
    int n;       //sozdayom peremenno N - seloye chislo. N budet hranit kolichestvo elementov
    cin >> n;    //vvodim znacheniye N
    int a[n + 1];//sozdayom massiw dlya N+1 elementov.
    for (int i = 1; i <= n; ++i)
        cin >> a[i];                      //vvodim N chisel v massiv, ot pervogo do N-nogo elementa
    if (a[1] > 0) {                       //proveryayem pervyy element massiva, on bolshe nulya ili net
        cout << "Polozhitelnoo chislo";   //yesli on bolshe nulya vyvodim na ekran slovo polozhitelnoe chislo
    } else {                              //inache, to yest yesli ne bolshe nulya
        if (a[1] < 0) {                   //proveryayem opyat pervyy element massiva, on menshe nulya ili net
            cout << "Otrisatelnoe chislo";//yesli menshe nulya vyvodim slovo otrisatelnoe chislo
        } else {                          //inache, yesli chislo ne bolshe i ne menshe nulya eto oznachayet chto on raven nulyu
            cout << "Null";               //vyvodim na ekran slovo Null
        }
    }
    return 0;//programm zakanchivayetsya
}