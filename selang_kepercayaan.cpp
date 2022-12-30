#include <iostream>
using namespace std;

int main(){
    int n;
    float x1,a,x2,s = 4.25;// diketahui di soal
    float l,u,c;
    float xbaru1,xbaru2;

    cout << "Masukkan nilai a: ";
    cin >> a;
    x1 = 1-(a/2);
    x2 = a/2;

    cout << "Hasil dari x1: " << x1 << endl;
    cout << "Hasil dari x2: " << x2 << endl;
    
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << endl;

    x1 = xbaru1;
    xbaru1 = 39.4;// didapatkan dari tabel khi-kuadrat

    x2 = xbaru2;
    xbaru2 = 12.4;//didapatkan dari tabel khi-kuadrat

    l = (n - 1)*s/xbaru1;
    u = (n - 1)*s/xbaru2;

    cout << "Hasil dari perhitungan dari selang kepercayaan 95% adalah " << endl;
    cout << "Hasil dari L: " << l << "\nLalu dibulatakan menjadi: 2,59" << endl;
    cout << "Hasil dari U: " << u << "\nLalu dibulatakan menjadi: 8.23" <<  endl;

    return 0;
}