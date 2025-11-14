#include <cs50.h>
#include <stdio.h>

// put print_row at the top, sinon main doent know what print_row is
void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1);

    // Compter les rangées de la pyramide
    for (int i = 0; i < height; i++)
    {
        // Pour chaque rangée i, nous avons besoin de (height - 1 - i) espaces et (i + 1) briques.
        print_row(height - 1 - i, i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // Imprimer les espaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Imprimer les briques
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    // Aller à la ligne après avoir imprimé toute la rangée
    printf("\n");
}
'''
Height: 10
#
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
'''


''' 
La largeur totale de chaque ligne est de 4 caractères. Chaque ligne est composée d'espaces et de briques. La formule est simple : (nombre d'espaces) + (nombre de briques) = height.

Analysons maintenant l'expression height - 1 - i dans la boucle for:

height : C'est la largeur totale de notre pyramide (dans notre exemple, 4).
i : C'est le numéro de la rangée actuelle, en commençant par 0. C'est une variable qui change à chaque tour de boucle.
i + 1 : C'est le nombre de briques que nous voulons pour la rangée i. Pour la rangée 0, on veut 1 brique ; pour la rangée 1, on veut 2 briques, etc.
Maintenant, voyons comment le calcul des espaces se déroule à chaque tour de boucle pour height = 4 :

Première rangée (i = 0) :

Nombre de briques : i + 1 -> 0 + 1 = 1 brique.
Nombre d'espaces : height - 1 - i -> 4 - 1 - 0 = 3 espaces.
Résultat : # (Correct)
Deuxième rangée (i = 1) :

Nombre de briques : i + 1 -> 1 + 1 = 2 briques.
Nombre d'espaces : height - 1 - i -> 4 - 1 - 1 = 2 espaces.
Résultat : ## (Correct)
Troisième rangée (i = 2) :

Nombre de briques : i + 1 -> 2 + 1 = 3 briques.
Nombre d'espaces : height - 1 - i -> 4 - 1 - 2 = 1 espace.
Résultat : ### (Correct)
Quatrième rangée (i = 3) :

Nombre de briques : i + 1 -> 3 + 1 = 4 briques.
Nombre d'espaces : height - 1 - i -> 4 - 1 - 3 = 0 espace.
Résultat : #### (Correct)
En résumé, height - 1 - i est une formule élégante qui calcule le nombre décroissant d'espaces nécessaires à chaque nouvelle rangée pour que le nombre croissant de briques (i + 1) soit parfaitement aligné à droite sur une largeur totale de height.


'''