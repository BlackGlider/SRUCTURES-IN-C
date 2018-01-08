#include <stdio.h>
#define STR_LEN 30

struct {
    char name[STR_LEN+1];
    char surname[STR_LEN+1];
    int age;
} utente1, utente2;


int main(){
  
    printf("Inserire dati utente 1: ");
    printf("Name\n");
    scanf("%s", utente1.name);
    printf("Surname\n");
    scanf("%s", utente1.surname);
    printf("Age\n");
    scanf("%d", &utente1.age);
    
    
    
    
    return 0;
}
