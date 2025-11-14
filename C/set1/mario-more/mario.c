#include <cs50.h>
#include <stdio.h>

// put print_row at the top, sinon main doent know what print_row is
void print_row(int spaces, int bricks, int gap);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    int gap = 2;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    // Compter les rangées de la pyramide
    for (int i = 0; i < height; i++)
    {
        // Un seul appel pour dessiner la ligne entière
        print_row(height - 1 - i, i + 1, gap);
    }
}

void print_row(int spaces, int bricks, int gap)
{
    // Imprimer les espaces initiaux pour l'alignement à droite
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Imprimer la pyramide de gauche
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // Imprimer le "gap" (l'espace) entre les pyramides
    for (int i = 0; i < gap; i++)
    {
        printf(" ");
    }

    // Imprimer la pyramide de droite (même nombre de briques que celle de gauche)
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // Passer à la ligne suivante
    printf("\n");
}
