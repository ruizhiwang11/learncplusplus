#include <iostream>
using namespace std;


int matrix[10][10];

void input_matrix(int x )

{
    
    
  for(int i = 0; i < x; ++i)

  {

      
        for(int j = 0; j < x; ++j)
        {
            
            cin >> matrix[i][j];
    
        }
        
  }
}


void show_matrix(int x)
{

         for(int i = 0; i < x; ++i)
         {
        for(int j = 0; j < x; ++j)
        {
           
           cout<<matrix[i][j]<<" ";
        }
         cout<<endl;
         }

}




int main()

{
   

    int a=0;
    cin>>a;
    input_matrix(a);
    show_matrix(a);


  return 0;



}
