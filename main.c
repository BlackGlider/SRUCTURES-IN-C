#include <stdio.h>
#define STR_LEN 30

typedef struct {
    char name[STR_LEN+1];
    char surname[STR_LEN+1];
    int age;
} User;

void print_data(User u);

int main(){
    
    User user1;
    
    printf("Inserire dati utente 1: ");
    printf("\n\n");
    printf("Name: \n");
    scanf("%s", user1.name);
    printf("Surname: \n");
    scanf("%s", user1.surname);
    printf("Age: \n");
    scanf("%d", &user1.age);
    
    printf("\n\n");
    
    print_data(user1);
    
    printf("\n\n");
    
    return 0;
}

void print_data(User u){
    
    printf("Name: %s\n", u.name);
    printf("Name: %s\n", u.surname);
    printf("Name: %d\n", u.age);
    
}
