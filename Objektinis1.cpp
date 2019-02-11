#include <iostream>
#include <string>

using namespace std;

int main(){
    string vardas, sveikinimas;
    string eilute1 ="*************", eilute3, eilute2="*           ";
    int ilgis;

    printf("Iveskite savo varda: ");
    cin >> vardas;
    ilgis = vardas.length();
    for(int i = 0; i < ilgis; i++){
        eilute1 += "*";
        eilute2 += " ";
    }
    eilute2+="*";
    eilute3 = "* Sveikas " + vardas + "! *";

    cout << eilute1 << endl;
    cout << eilute2 << endl;
    cout << eilute3 << endl;
    cout << eilute2 << endl;
    cout << eilute1 << endl;

}
