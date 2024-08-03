#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int speed;
        int hp;
        char name;
        
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[15];
    } legendarypokemon;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp = 1000;
    mewtwo.normal.speed = 200;
    
    printf("%d",mewtwo.normal.speed);

    

    return 0;
 }