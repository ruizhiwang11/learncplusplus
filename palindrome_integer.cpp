#include <iostream>

using namespace std;

class Palindrome
{
    private: 
    int _number=0;
    int reverse_num=0;
    public:
    int number(int num)
    {
        _number=num;

      
    };

    int reverse()
    {
        int n,rem;

        n=_number;
      while(n!=0)    
      {    
        rem=n%10;      
        reverse_num=reverse_num*10+rem;    
         n/=10;    
        }  

         n=0; rem=0;
       
         
        return reverse_num ;  
    };


    int compare()
    {
        if(_number==reverse_num)
        {
            cout<<"Yes"<<endl;
            return 1;
        }
        else
        {
            cout<<"No"<<endl;
           return 1;
        }
    }

     

};

int main()
{
    while(1)
{   int x;
   cin>>x;
   Palindrome Pal;
   Pal.number(x);
   Pal.reverse();
   Pal.compare();
}

}