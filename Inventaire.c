#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Object
{
    char name[10];//9 caractères maximum
    int price;//Prix

};
typedef struct Object object;

int i,j,k,c;
int gold =50;
int choix ;

int main ()
{
    object casque = {"casque", 50};
    object pomme = {"pomme", 2};
    object epee = {"epee", 100};
        object potion = {"potion ",23};
        object sac de farine = {"sac de farine ",1};
        object viande de boeuf = {"viande de boeuf",10};
    //le casque vaut 50 euros
        object tInventaire[6] = {casque, pomme, epee, potion, sac de farine, viande de boeuf};
        for (i = 0 ; i < 6 ; i++)
    {
        printf("%d\n", tInventaire[i]);
    }

         for(i=1;i<6;i++) {

           if (strcmp(tInventaire[i].name, tInventaire[i-1].name) < 0 ) { // Si l’élément est mal rangé

                j = 0;

               while (strcmp(tInventaire[j].name, tInventaire[j-1].name) < 0)j++; // Cette boucle sort par j = La nouvelle position de l’élément

        object c = tInventaire[i]; // Ces lignes servent à insérer l’élément à sa nouvelle position
                for( k = i-1 ; k >= j ; k-- )strcpy(tInventaire[k+1].name, tInventaire[k].name);
         strcpy(tInventaire[j].name, c.name);
			}

        }
        for (int i = 0; i<6; i++)
    {
        printf("%s : %d\n",tInventaire[i].name, tInventaire[i].price);
    }
}

//Texte du marchand
printf("Voulez vous acheter quelque chose ? 0 Non / 1 Oui \n");
    if (choix == 0){
     printf("Revenez quand vous voulez ! \n");
    }
    if (choix == 1 ){
        price > gold
        printf("Desole, je ne peux pas descendre aussi bas.\n");
    }
    else (){
        price < gold
        printf("Tenez voila pour vous ! \n");
    }




//  if(strcmp(casque.name,pomme.name) == 0 )
//    printf("%d", var);

    return 0;
}