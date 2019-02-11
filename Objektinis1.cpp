#include <iostream>
#include <string>

using namespace std;

int main(){
    string vardas, sveikinimas;
    string eilute1 ="**************", eilute3, eilute2="*            ";
    int ilgis;
    char paskutine;

    printf("Iveskite savo varda: ");
    cin >> vardas;
    ilgis = vardas.length();
    paskutine = vardas.back();

    if(paskutine == 's') eilute3 = "* Sveikas, " + vardas + "! *";
    else{
        eilute3 = "* Sveika, " + vardas + "! *";
        ilgis--;
    }

    for(int i = 0; i < ilgis; i++){
        eilute1 += "*";
        eilute2 += " ";
    }
    eilute2+="*";

    cout << eilute1 << endl;
    cout << eilute2 << endl;
    cout << eilute3 << endl;
    cout << eilute2 << endl;
    cout << eilute1 << endl;

}
