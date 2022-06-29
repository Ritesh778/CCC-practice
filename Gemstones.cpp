// #include<stdio.h>
// int main()
//     {
    
//     int n,i,j,freq[150][27]={0},count;
//     char str[200];
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//         {
        
//         scanf("%s\n",str);
//         for(j=0;str[j]!='\0';j++)
//             {
//             freq[i][str[j]-97]++;
//         }
        
//     }
//     count=0;
//     for(i=0;i<26;i++)
//         {
//         for(j=0;j<n;j++)
//             if(freq[j][i]>0)
//             continue;
//             else
//             break;
//             if(j==n)
//             count++;
//     }
//     printf("%d\n",count);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[100][100]={0};
    int c=0;
    string s;
   for(i=0;i<n;i++)
        {
        
        cin>>s;
        j=0;
        while(s[j]!='\0')
            {
            a[i][s[j]-97]++;
            j++;
        }
    }
    for(i=0;i<26;i++)   //outer loop runs upto 26 as there are 26 letters
        {
             
        for(j=0;j<n;j++){
            if(a[j][i]>0)     //if a[i][j] is greater than 0 then skip or continue that condtion else break it 
            {continue;}
            else
                {break;}
            
        }
        if(j==n)//if j==n then increaase the count for example abcdde bcadd eeabg here ab letters repeated in every case so count how many letters are repeatedin this example2 lettersare repeatedso  the countis 2are
            c++;
    }
    cout<<c<<"\n";
}

