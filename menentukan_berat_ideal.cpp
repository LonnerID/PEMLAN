#include<iostream>
using namespace std;

int main(){
    string gender;
    float tb;
    float bb;
    float bb_ideal;

    cout << "GENDER(L/P) : ";
    cin >> gender;

    cout << "Berat badan (kg) : ";
    cin >> bb;

    cout << "Tinggi badan (cm) : ";
    cin >> tb;


    if (gender == "L") 
    {
        bb_ideal = (tb - 100) - ((tb - 100)* 0.1);
    } else if(gender == "p"){
        bb_ideal = (tb - 100) - ((tb - 100)* 0.15);
    } else {
        cout << "gender salah";
        bb_ideal = 0;
    }

    if (bb_ideal != 0){ 
        if(bb == bb_ideal){
        cout << "bb ideal : " << bb_ideal << "kg" << endl;
        cout << "Berat badan anda ideal";
        cout << "ideal";
    } else if (bb > bb_ideal){
        cout << "bb ideal : " << bb_ideal << "kg" << endl;
        cout << "Berat badan anda lemuu";
    } else {
        cout << "bb ideal : " << bb_ideal << "kg" << endl;
        cout << "Berat badan anda kuwurus";
    }
}
}