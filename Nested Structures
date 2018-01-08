#include <stdio.h>
#include <string.h>

struct dati_patente
{
    int patente_id;
    char nome_patente[50];
};

struct dati_personali
{
    int id;
    char name[20];
    float punteggio;
    //structure within structure
    struct dati_patente da_pat;
} dati_utente;

int main(){
    
    struct dati_personali dati_utente = {29, "Gino", 79, 345678998, "Car-Destroy"};
    
    printf("Id is: %d\n", dati_utente.id);
    printf("Name is: %s\n", dati_utente.name);
    printf("Points are: %f\n", dati_utente.punteggio);
    printf("Patente ID: %d\n", dati_utente.da_pat.patente_id);
    printf("Nome Patente: %s\n", dati_utente.da_pat.nome_patente);
    
    return 0;
}
