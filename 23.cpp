#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;     //N budet kolichestvom chisel kotoryye budem vvodit
    cin >> n;  //vvodim N
    set<int> s;//sozdayom mnozhestvo dlya selyh chisel

    /*
     * SET = MNOZHESTVO
     * INFORMASIYA: POCHEMU MY ISPOLZUYEM SET I CHTO ONO TAKOE? OTVET:
     * my polzuyemsya set-om potomuchto on ne prinimayet v sebya chisla povtorno,
     * tolko odin raz prinimayet kazhdoye chislo
     * i yesli my vse chisla dobavim v set tam budet sohranyatsya tolko razlichnye chisla
     * i v konse nam tolko ostayotsya tolko vyvodit na ekran razmer etogo mnozhestva to yest SET-a
    */

    for (int i = 1; i <= n; ++i) {
        int a;       //chislo A budet prinimat chislo kotoroye my vvodim kazhdyy raz
        cin >> a;    //Vvodim A
        s.emplace(a);//dobavlyayem A v spisok selyh chisel
    }

    cout << s.size();//vyvodim na ekran razmer SET, eto i budet kolichestvom razlichnyh chisel)

    return 0;
}