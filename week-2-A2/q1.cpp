/*Ques : Write a program to count the minimum
number of notes in a given amount using the switch
statement.*/


#include<iostream>
using namespace std;

int main(){

int amt;
cout<<"Enter YOur amount";
cin>>amt;

switch(amt>=2000){
    case 1:
    cout<<"2000="<<(amt/2000)<<endl;
    amt=amt-(amt/2000)*2000;

}
switch(amt>=500){
    case 1:
    cout<<"500="<<(amt/500)<<endl;
    amt=amt-(amt/500)*500;
    
}
switch(amt>=200){
    case 1:
    cout<<"200="<<(amt/200)<<endl;
    amt=amt-(amt/200)*200;
    
}
switch(amt>=100){
    case 1:
    cout<<"100="<<(amt/100)<<endl;
    amt=amt-(amt/100)*100;
    
}
switch(amt>=50){
    case 1:
    cout<<"50="<<(amt/50)<<endl;
    amt=amt-(amt/50)*50;
    
}
switch(amt>=20){
    case 1:
    cout<<"20="<<(amt/20)<<endl;
    amt=amt-(amt/20)*20;
    
}switch(amt>=10){
    case 1:
    cout<<"10="<<(amt/10)<<endl;
    amt=amt-(amt/10)*10;
    
}

return 0;
}