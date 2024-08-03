 #include<stdio.h>
 int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;
        pokemon a,b;
    a.attack = 100;
    a.hp = 50;
    a.speed = 80;
    a.tier = 'A';
    b = a;//deep copy
    printf("%d\n",b.attack);//copy one structure variable data to another structure variable
    b.attack = 200;//we change the data also after copying the variable data
    // therefore it is a deep copy.

    printf("%d\n",b.attack);


    return 0;
 }