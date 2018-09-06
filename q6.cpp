//question 6
//include library
#include<iostream>
using namespace std;
//write main fuction
int main()
  {
   for(int i=0;i<=4;i++)  //increasing spaces
    {
      for(int j=1;j<=i;j++)
        {
          cout<<" "; //printing spaces
         }
     for(int k=1;k<=5;k++)
      {
      cout<<"*";//printing stars
        }
      cout<<endl;//next line
   }
   return 0;
}
