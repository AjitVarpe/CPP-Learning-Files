#include<bits/stdc++.h>
#include<limits>
#include<String>


using namespace std;

int main(){
    int dice_1,dice_2,total;
    // randomize();

    dice_1 = 1+(rand()%12);
    dice_2 = 1+(rand()%6);
    total =dice_1 + dice_2;

    cout<<"The Value of First Dice is "<<dice_1<<endl;
    cout<<"The Value of Second Dice is "<<dice_2<<endl;
    cout<<"Total of Two Dice is "<<dice_1+dice_2<<endl;


    return 0;
}