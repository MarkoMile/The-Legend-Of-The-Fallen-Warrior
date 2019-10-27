#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Zdravo!\nDobrodosli u igricu \"Ep o Gilgamesu\"!\n\n");
    char check[2];
    char name[99];

    nazivanje:
    printf("Kako ce se zvati vas karakter?\n");

    scanf("%s", &name);

    printf("Da li ste sigurni da zelite da se zovete %s?\n", name);

    provera:
    printf("Odgovorite sa \"DA\" ili \"NE\".\n");

    scanf("%s", &check);
    strupr(check);

    if(strcmp(check, "DA") == 0){                  //strcmp(str1,str2) proverava da li je svako slovo stringa 1 (zato sto je string niz karaktera) isto kao svako slovo stringa 2
        printf("Super!\n");                        //To radi tako sto proverava prvo slovo, zatim ako je prvo slovo isto onda proverava drugo, i tako redom.
    } else if(strcmp(check, "NE") == 0){           //Ako je svako slovo isto, vraca 0.
        goto nazivanje;
    } else{
        goto provera;
    }

    return 0;
}
