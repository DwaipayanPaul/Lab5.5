//question 2
//include library
#include<iostream>
using namespace std;
//write main fuction
int main(){
  for(int i=0;i<=4;i++)
  {
     //checking for 1st or last line
    if(i==0 || i==4){
     for(int j=0;j<=4;j++)
      {
        cout<<"*"; //printing stars
        }
             }
       else
        cout<<"*   *";//printing other than first or last line
  //next line
 cout<<endl;
}
}
