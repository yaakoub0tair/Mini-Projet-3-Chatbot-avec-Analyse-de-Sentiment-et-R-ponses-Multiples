#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void reponse_aleatoire(char jomla[]) {
    char positif[4][30] = {"bon", "waw", "happy", "good"};
    char negatif[4][30] = {"sad", "help", "sorry", "bad"};
    char neutre[4][30]  = {"okay", "hello", "working", "always"};

    char reponse_positif[][50] = {
        "Hi! Great to hear that!",
        "I'm happy to hear that.",
        "I'm happy for you!",
        "You are doing great!"
    };

    char reponse_negatif[][50] = {
        "I'm sorry to hear that.",
        "Don't worry bro, you're okay.",
        "I'm with you even if I'm just a bot.",
        "Oh no! Hope things get better soon."
    };

    char reponse_neutre[][50] = {
        "Okay, as you want.",
        "Sure! What do you want to talk about?",
        "Tell me more...",
        "Alright."
    };

    int Cpositif = 0, Cnegatif = 0, Cneutre = 0;
    int i;


    for (i = 0; i < 4; i++) {
        if (strstr(jomla, positif[i]) != NULL) {
            Cpositif++;
        }
        if (strstr(jomla, negatif[i]) != NULL) {
            Cnegatif++;
        }
        if (strstr(jomla, neutre[i]) != NULL) {
            Cneutre++;
        }
    }


    if (Cpositif > Cnegatif && Cpositif > Cneutre) {
        int idx = rand() % 4;
        printf("Bot: %s\n", reponse_positif[idx]);
    } else if (Cnegatif > Cpositif && Cnegatif > Cneutre) {
        int idx = rand() % 4;
        printf("Bot: %s\n", reponse_negatif[idx]);
    } else if (Cneutre > Cpositif && Cneutre > Cnegatif) {
        int idx = rand() % 4;
        printf("Bot: %s\n", reponse_neutre[idx]);
    } else {
        printf("Bot: I didn't quite understand, can you repeat?\n");
    }
}

int main() {
    char klima[100];

    srand(time(NULL));

    printf("Start your chatbot (type 'exit' to quit)\n");

    while (1) {
        printf("You: ");
        fgets(klima, sizeof(klima), stdin);
        klima[strcspn(klima, "\n")] = '\0'; 

        if (strcmp(klima, "exit") == 0) {
            printf("Bot: Goodbye!\n");
            break;
        } else {
            reponse_aleatoire(klima);
        }
    }

    return 0;
}
