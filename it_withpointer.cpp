#include <vector> 
#include <iostream>
class A { 

public: 
 int* GetA(int b)
 { 
for(std::vector<int>::iterator it = _a.begin(); it != _a.end(); ++it) 
{
 

  if((*it) == b) 
  
  return &(*it);  } 
  
  return NULL; } 
  

void SetA(int b) 
{ 
  _a.push_back(b); 
} 

private: std::vector<int> _a; 


}; 


int main()
{
    A a;
    a.SetA(10);
    a.SetA(20);
    int* x = a.GetA(10);
    std::cout << *x << std::endl; 
    return 0;
}

