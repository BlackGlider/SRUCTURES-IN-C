#include <stdio.h>
#include <string.h>

struct data{
    char name[30];
    char surname[30];
    int age;
};

int main(){
    
    int i;
    struct data account[2];
    
    //1st account's data
    strcpy(account[0].name, "Joseph");
    strcpy(account[0].surname, "Jackson");
    account[0].age = 19;
    
    //2nd account's data
    strcpy(account[1].name, "Marcus");
    strcpy(account[1].surname, "Monte");
    account[1].age = 20;
    
    //3rd account's data
    strcpy(account[2].name, "Bob");
    strcpy(account[2].surname, "Matter");
    account[2].age = 23;
    
    for(i=0; i<3; i++)
    {
        printf("User's Data Accounts: %d\n", i+1);
        printf("Name: %s\n", account[i].name);
        printf("Surname: %s\n", account[i].surname);
        printf("Age: %d\n", account[i].age);
    }
    
    return 0;
}
