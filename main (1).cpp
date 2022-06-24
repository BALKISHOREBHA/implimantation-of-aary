
#include <iostream>


using namespace std;

int main()
{
    int   marks[10],n, i, sum=0;
    cout << "Enter size of array number : " ;
   cin >> n;
  for (i = 0 ; i < n;  i++) {
      
     cout<<"marks""["<<i<<"]: ";
     
      cin>>marks[i];
      sum = sum + marks[i];
       }
        { cout<<"\nsum "<<sum;}
}