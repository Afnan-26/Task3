#include<iostream>
using namespace std;

int main()
{
     int N,num,maxnum=0; 
     cin>>N;
     for(int i=1;i<=N;i++){
     cin>>num;
     if(num>maxnum){
     maxnum=num;
     }
     }
     cout <<maxnum<<'\n';
    return 0;
}
