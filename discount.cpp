#include<bits/stdc++.h>

using namespace std;
int main(){
    char a[]="Mi@1wo!";
    int i=1;
    for(;a[i]!='\0';i++){
        if(!isalpha(a[i]))a[i]='*';
        else if(islower(a[i]))a[i]=a[i]+1;
        else a[i]=a[i+1];
    }
    for(int i=0;i<7;i++)cout<<a[i];
    
    return 0;}
