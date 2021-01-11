#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i;   //declare variables


    int x=sqrt(100); //jumping interval
for(int n=1;n<=100;n++)


    {
        int trials=0;//jump search
    for(i=0;i<=100;)
   {
       if(i<n)
        {
            i+=x;
            trials++;
        }
       else if (i==n)
       {
           trials--;
            break;
       }
       else
        break;

   }

   //linear search
   for(int j=i-x+1;j<=i;)
   {
       if(j<n)
       {
            j++;
            trials++;
       }
        else if(j==n)
            {
                cout<<"Floor Number "<<n<<",   "<<trials+1<<" Trials\n";
                break;
            }
   }

    }

}
