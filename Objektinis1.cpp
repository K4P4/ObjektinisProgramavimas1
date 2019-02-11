#include <iostream>
#include <string>
#include <stdio.h>

using std::cin;
using std::string;

struct remStrukt{
int plotis;
int dydis;
};
struct uzrStrukt{
string vardas;
string sveikinimas;
char paskutine;
int vardIlg;
};

void sveikinimoGeneravimas(uzrStrukt &uzr) {
    printf("Iveskite savo varda: ");
    cin >> uzr.vardas;
    uzr.paskutine = uzr.vardas.back();
    uzr.vardIlg = uzr.vardas.length();
    if(uzr.paskutine == 's') {
        uzr.sveikinimas = "Sveikas, " + uzr.vardas + "!";
    }
    else uzr.sveikinimas = "Sveika, " + uzr.vardas + "!";
}

void remelioGeneravimas(uzrStrukt uzr, remStrukt rem) {
	printf("Iveskite remelio dydi: ");
	cin >> rem.dydis;

	rem.plotis = rem.dydis * 2 + uzr.vardIlg + 12;
	if(uzr.paskutine == 's') rem.plotis ++;

	for(int i = 1; i < rem.plotis; i++) printf("*");
    printf("\n");

    for(int i = 0; i < rem.dydis; i++){
        printf("%c%*c",'*', rem.plotis-2, '*');
        printf("\n");
    }

    printf("%*c%s%*c", -(rem.dydis+1),'*', uzr.sveikinimas.c_str() , (rem.dydis+1) ,'*');
    printf("\n");

    for(int i = 0; i < rem.dydis; i++){
        printf("%c%*c",'*', rem.plotis-2, '*');
        printf("\n");
    }
    for(int i = 1; i < rem.plotis; i++) printf("*");
}


int main()
{
    remStrukt remelis;
    uzrStrukt uzrasas;

    sveikinimoGeneravimas(uzrasas);
    remelioGeneravimas(uzrasas, remelis);
}
