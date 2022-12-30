#include <iostream>
#include <cmath>

using namespace std;

#define f(x) (4 - x*x)

double reimann (double a, double b, double h, int n){
    double sum = 0;
    for (double i = a; i <= b; i+=h)
    {
        sum+=f(i);
    }
    return h*sum;
}

int main (){
    double eksak = 1.666666666666667;
    double a = 0;
    double b = 1;
    double L;
    int n, aturan;
    cout << "UAS METNUM REIMANN" << endl;
 
    cout << "Batas bawah: " << a << endl;
    cout << "Batas atas: " << b << endl << endl;

    cout << "Masukkan jumlah area yang ingin dibagi: ";
    cin >> n;
    cout << endl;

    double h = (b-a)/n;
    cout << "h: " << h << endl << endl;

    bool tes = true;
    do
    {
        tes = true;
        L = reimann(a,b,h,n);
        
    } while (tes == false);

    cout << "Hasil integral: " << L << endl;
    cout << "Nilai eksak: " << eksak << endl;
    cout << "Error: " << L-eksak;

    return 0;
    
}