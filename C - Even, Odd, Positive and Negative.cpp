#include<iostream>
using namespace std;

int main()
{
    int N,i,num,pos=0,neg=0,even=0,odd=0;
    cin>>N;
    for(i=1;i<=N;i++){
    cin>>num;
    if(num>0){
    pos++;
    }
    else if(num<0){
    neg++;
    }
    if(num%2==0){
    even++;
    }
    else{
    odd++;
    }
    }
    cout<<"Even: "<<even<<'\n';
    cout<<"Odd: "<<odd<<'\n';
    cout<<"Positive: "<<pos<<'\n';
    cout<<"Negative: "<<neg<<'\n';
    return 0;
}
