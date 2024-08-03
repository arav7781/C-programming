#include<iostream>
#include<vector>
using namespace std;
void Zeroesandones(vector<int>v){
    int Zeores_count = 0;
    for(int ele:v){
        if(ele == 0){
            Zeores_count++;
        }
    }
    for(int i = 0;i<v.size;i++){
        if(i<Zeores_count){
            v[i] == 0;
        }
        else{
            v[i] == 1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int ele;//vector main ele i ke through nahi lete 
        cin>>ele;//variable bnake lete hai
        v.push_back(ele);
    }
    Zeroesandones(v);
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
        
    }cout<<endl;


    
    return 0;
}  