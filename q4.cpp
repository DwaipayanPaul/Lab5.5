//question 4
//include library
#include<iostream>
using namespace std;
//write main fuction
int main()
  {
   for(int i=5;i>=1;i--)    //decreasing spaces
    {
     
      for(int j=1;j<=i;j++)
        {
          cout<<" ";       //printing spaces
         }
     for(int k=1;k<=5;k++)
      {
      cout<<"*";           //printing stars
        }
      cout<<endl;           //next line
   }
   return 0;
}
