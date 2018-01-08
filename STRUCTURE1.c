#include <stdio.h>
#define STR_LEN 30

struct {
    char name[STR_LEN+1];
    char surname[STR_LEN+1];
    int age;
} candidate1 = {"Marco", "Brunetti", 39},
  candidate2 = {"Luca", "Lupo", 29};


int main(){
    
    printf("Candidate1 name: %s\n", candidate1.name);
    
    return 0;
}
