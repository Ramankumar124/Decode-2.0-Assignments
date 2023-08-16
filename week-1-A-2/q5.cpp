// WAP to find the difference between ASCII of two characters ,take them as input .


#include<iostream>
using namespace std;

int main(){
char ch1,ch2;

cout<<"Enter first characters"<<endl;
cin>>ch1;
cout<<"Enter Second characters"<<endl;
cin>>ch2;

// fc and sc refers to first character and second charector
int fc=(int)ch1;
int sc=(int)ch2;
int diff;
if(fc>sc)
{
 diff=fc-sc ;
}
else{
    diff = (sc - fc); 
}
cout<<"differece  between ASCII of two characters is"<<endl<<diff;
return 0 ;

}

