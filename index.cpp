#include <iostream>
using namespace std;
int main()
{
int sum=0;
for(int i=1;i<=3;i++){
    sum=sum+i;
    
}
cout<<sum;

int sum=1;
for(int i=1;i<=8;i++){
    sum=sum*i;
    
}
cout<<sum;

int num=4;
int power=2;
int sum=1;
for(int i=1;i<=2;i++){
    sum=sum*num;
}
cout<<sum;

int num;
cout<<"enter number";
cin>>num;
for(int i=1;i<=num;++i){
    if(num%i==0){
        cout<<i<<endl;
    }
}


int number;
cout<<"enter number";
cin>>number;
int rv;
while(number!=0){
    rv=rv*10+number%10;
    number=number/10;
    
}cout<<rv;


int num=1234543;
int rv;
for(;num!=0;){
    
     rv=rv*10+num%10;
     num=num/10;
}cout<<rv;

int num=1211;
int num1=num;
int rv;

while(num!=0){
    rv=rv*10+num%10;
    num=num/10;}
    
    if(num1==rv){
        cout<<"palindrom";
    }
    
    else{
        cout<<"not a palindrom";
    }

int counter=0;
int num=5;
for(int i=1;i<=7;i++){
    if(num%i==0){
        counter++;
    }}
    if(counter==2){
        cout<<"prime";
    }

    else{
        cout<<"not a prime";
    }

int term=0;
for(int i=1;i<=5;i++){
    term=term*10+1;
    cout<<term<<endl;
}

int sum=0;
int term=0;
for(int i=1;i<=3;i++){
    term=term*10+1;
    sum=term+sum;
}cout<<sum;

int n=5;
int d=2;
int a=1;
for(int i=0;i<=15;i++){
cout<<a+i*d<<endl;    
}
}