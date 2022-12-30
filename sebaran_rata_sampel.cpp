#include <iostream>
#include <cmath>
using namespace std;
#define z (x-u)/o
void rata();
int y,n,x,u;
float o;
double p = 0.5 ,ph, zh;

void rata(){

    o = y/sqrt(n);
    ph = p + zh;
    cout << "Hasil dari rata - rata simpang baku: " << o << endl;
    cout << "Hasil dari Zhitung: " << z << endl;
    cout << "Hasil dari peluang: " << ph << endl;

}

int main(){
    
    cout << "Masukkan nilai simpang baku: ";
    cin >> y;
    cout << "Masukkan banyak anggota sampel: ";
    cin >> n;
    cout << "Masukkan nilai rata - rata sampel: ";
    cin >> x;
    cout << "Masukkan nilai rerata populasi: ";
    cin >> u;
    cout << "Masukkan Zhitung: ";
    cin >> zh;
    rata();

    return 0;

}

