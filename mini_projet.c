#include <stdio.h>
#include <string.h>
char reponse_aleatoire (char jomla[]){

    char positif[4][30]={"bon ","waw","happy","good"};
    char negatif[4][30]={"sad","help","sorry","bad"};
    char neutre[4][30]={"okay","hello","m working","always"};
    char reponse_positif[][50]={
        " Hi! Great to hear that!",
        "M happy to hear that ",
        "m happy for u ",
        "u ar doing great "



    };
      char reponse_negatif[][50]={
        "m sorry for ",
        "don't worry bro ur okay ",
        "m with you even m a bot ",
        "Oh no! Hope things get better soon."


    };
      char reponse_neutre[][50]={
        "okay as u want ",
        "Sure! What do you want to talk about?",
        "tell me more "




    };
    int  Cpositif=0,Cnegatif=0,Cneutre=0;


    for (int i = 0; i < 4; i++)
    {
        
    
    

     if (strstr(jomla,positif[i] ) != NULL) {
        Cpositif++;
        
    } else if (strstr(jomla,negatif[i]))
    {
       Cnegatif++;
    }else if (strstr(jomla,neutre[i]))
    {
       Cneutre++;
    }
    
    }



    if (Cpositif>Cnegatif&&Cpositif>Cneutre)
    { for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
        
    }else  if (Cpositif<Cnegatif&&Cnegatif>Cneutre)
    {
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        
        
    } else if (Cneutre>Cnegatif&&Cpositif<Cneutre)
    {
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        
        
    }else {
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        

    }
    
    



}
int main(){
       char klima[100];
       
       
       

    printf("star ur chatbot\n");
    while (1)
    {
        printf(" You :\n");
    fgets(klima, sizeof(klima), stdin);
    
    klima[strcspn(klima, "\n")] = '\0';
    reponse_aleatoire(klima);
       if (strcmp(klima, "exit") == 0) {
            printf("Bot: okay by!\n");
            break;
        }
    }
    
    












    return 0;
}