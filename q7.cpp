//question 7
//include library
#include<iostream>
using namespace std;
//write main fuction
int main()
  {
 int i;
   for(i=0;i<=4;i++)  //increasing spaces
    {
     for(int j=1;j<=i;j++)
        {
          cout<<" ";  //printing spaces
         }
     //checking for first or last line
    if(i==0 || i==4){
     for(int k=1;k<=5;k++)
      {
      cout<<"*";//printing stars on first and last line
        }
         }
    else
      cout<<"*   *";  //printing other than first and last line
      cout<<endl;      //next line
   }
   return 0;
}
