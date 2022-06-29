/**
 The Elite N are a number of people in a line, that you have to beat in order to be the Pokémon Champion.
Each person has exactly one Pokémon, with a predetermined power level.
When a battle occurs, the powers of both Pokémon steadily decrease until either reaches 0. This will be referred to as fainting.
You have to make sure your Pokémon doesn't faint, i.e., its power should remain > 0
You can take rest and restore your Pokémon to full power to start battling again. But it takes one day to do so.
When you rest the current opponent also takes a rest restoring his powers to full.
You can fight as many battles as possible in a day until you rest.
Find the number of days you will need to defeat the Elite N and become the champion.
Note that there might be a person stronger than you whom you cannot defeat. Hence you will have to lose.
Print the number of days required to defeat the Elite N, and -1 if you can't.
Input Format

The first line of input contains your Pokémon's power, K. The second line contains the number of opponents, N. The next line contains n numbers A1, A2 ... An, where Ai is the power of the ith opponent.

Constraints

1 <= k <= 1000

1 <= n <= 100000

1 <= a1, a2, a3, ..., an <= 1000

Output Format

Output only one number, the number of days taken to defeat the Elite N.

Sample Input

10

7

1 2 4 7 2 5 5

Sample Output

4

Explanation

On the first day you defeat 1st, 2nd and 3rd opponent. As the remaining power would be 3, you can't battle the 4th one. So you take rest. On the 2nd day, you defeat the 4th and the 5th opponent, then take rest. On the 3rd day, you defeat the 6th enemy only. As you cannot let your pokemon faint, you will have to take rest. On the 4th day you defeat the last of the Elite N and become the champion! :D

**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int k;
    cin>>k;      //pokemons power
    long long int n;
    cin>>n;   //no .of opponents
    int a[n];          //storing opponents strength
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];    //initally max element is 0 if the number in the array is greater than max then it will be assigned as max element 
        }
    }
    if(max>=k){                 //if the number of persons is more and pokemons power is less then the pokemon cant go to the battle
        cout<<"-1"<<endl;
    }
    else{
        int c=1,x=k;   //storing k value in x as it changes 
        int i=0;
        while(i<n){      //when the opponents are less than the pokemons

            if(a[i]<x){     // this condition is starting of the battle 
                x=x-a[i];    // as the battle started the no.of opponnents gets defeated
                i++;       //the next person gets ready for the battle 
            }
            else{
                c++;      //days increases
                x=k;       //again recharging the pokemon after the rest
            }     
        }
         cout<<c<<endl;            //displaying the no.of days
    }
}

/**
                                           OR
#include<stdio.h>
int main() 
{
    int power,noOfOpponants,totalNumberOfDays = 0,tempPower;
    scanf("%d",&power); //Reading pokeman power
    scanf("%d",&noOfOpponants); //Reading total number of opponants
    int opponantPowers[noOfOpponants],i; //Declaring an array to store opponant power values
    for(i=0;i<noOfOpponants;i++)
        scanf("%d",&opponantPowers[i]); //Reading opponant power values
    //Process to find to win the battle
    tempPower = power;
    for(i=0;i<noOfOpponants;i++)
    {
        if(power <= opponantPowers[i])
        {
            printf("-1");
            return 0;
        }
        if(tempPower > opponantPowers[i])
            tempPower = tempPower - opponantPowers[i];
        else
        {
            totalNumberOfDays++; //Day value got increments
            tempPower = power; //Reacharging
            tempPower = tempPower - opponantPowers[i];//Battle begin next day
            //Above statement can be replaced with i--
        }
    }
    printf("%d",totalNumberOfDays+1);
    return 0;
}
**/
                                           

