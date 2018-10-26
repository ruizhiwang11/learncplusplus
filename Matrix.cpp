#include <iostream>
#include "Matrix.h"


using namespace std;

void Matrix_tf::input_matrix(int x)

{
    matrix_type =x;


int matrix[10][10];

    for(int i = 0; i < x; ++i)

  {

      
        for(int j = 0; j < x; ++j)
        {
            
            cin >> matrix[i][j];
    
        }
        
  }
}