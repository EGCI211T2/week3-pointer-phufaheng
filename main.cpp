#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  int n = argc-1; //argument counter give the number of argument it have e.g. if enter 1 2 3 4 5 argument counter will be 5+1 since there's file name in the first slot
  
/*
  cout<<"How many numbers needed : ";
  cin>> n;
*/
	pa=new int[n];

 for(i=0;i<n;i++) {
 		   //cin>>*pa; //p is the location where p points to
       *pa = atoi(argv[i+1]);
      pa++;  
 }
 pa-=n; //rewind the p to the starting location
     // Using p within your program 

cout<<"Original: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;
pb = pa;
pa -= (n-1);
  


for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa-=n/2;

cout<<"Reversed: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;
pa -= (n-1);
delete []pa;

return 0;
}
