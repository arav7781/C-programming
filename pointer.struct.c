#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;
    pokemon pikachu;
    pikachu.attack = 1000;
    pikachu.speed = 1200;
    pikachu.hp = 100;
    printf("%d\n",pikachu.hp);
    pokemon* x = &pikachu;
    (*x).hp = 200;
    printf("%d",pikachu.hp);

    return 0;
}