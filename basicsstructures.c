#include<stdio.h>
int main(){
    struct pokemon{//user defined data type
        int hp;
        int attack;
        int speed;
        char tier;//A,B,C,D,S
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 100;
    pikachu.speed = 150;
    pikachu.tier = 'S';
    printf("%d",pikachu.attack);
    return 0;
}