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
    pokemon arr[3];
    arr[0].attack = 100;
    arr[0].hp = 50;
    arr[0].speed = 80;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Pikachu");

    arr[1].attack = 100; 
    arr[1].hp = 70;
    arr[1].speed = 120;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"Charizard");


    arr[2].attack = 10;
    arr[2].hp = 7;
    arr[2].speed = 12;
    arr[2].tier = 'D';
    strcpy(arr[2].name,"Jigglypuff");
    
    for(int i = 0;i<3;i++){
        printf("NAME :%s\n",arr[i].name);
        printf("ATTACK :%d\n",arr[i].attack);
        printf("HP :%d\n",arr[i].hp);
        printf("SPEED :%d\n",arr[i].speed);
        printf("TIER :%c\n",arr[i].tier);
        
    }
    return 0;
}