#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
    printf("Ready to play HANGMAN? \nThe word you are guessing is one of these: \n");
    printf(" whale\n zebra\n sheep\n goose\n otter\n hippo\n sloth\n lemur\n snail\n puppy\n\n");

    char *palabra = argv[1];
    char answer[6]={'*', '*', '*', '*', '*', NULL};
    char guess;
    int chances=5;
    int i, discovered=0, aux=0;
    int tam_palabra=5;
    while (chances != 0)
    {
        printf("Type a letter: ");
        scanf(" %c", &guess);
        for (i=0; i<tam_palabra; i++)
        {
            if (palabra[i] == guess)
            {
                answer[i]=guess;
                printf("Match\n");
                discovered++;
                printf("Here is your word:%s\n\n", answer);
            }else{
                aux++;
            }
        }
        if (aux==tam_palabra)
        {
            chances--;
            printf("You have %d chances left\n", chances);
            aux=0;
        }else{
            aux=0;
        }

        if(discovered==tam_palabra)
        {
            break;
        }
    }

    if (chances==0)
    {
        printf("YOU LOSER, BYEEEE!");
    }

    if (discovered==tam_palabra)
    {
        printf("YOU WINER, NOW YOU CAN GRADUATE FROM UPY!");
    }
}
