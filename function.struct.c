#include<stdio.h>
#include<stdbool.h>

typedef struct pokemon{// bahar decalaration krte h main() ke toh global decalartion
//hoti h fhir kisi bhi function mai use kr skte hai struct ko
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
    } pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){//pass by value
    pikachu.hp = 70;
    pikachu.attack = 110;
    pikachu.speed = 40;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp = 100;
    fun(pikachu);
    change(pikachu);
    return 0;

}
   