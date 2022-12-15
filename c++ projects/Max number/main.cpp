#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<< "enter your numbers ";
    cin>> x;
    int numbers[x];
    for(int i = 0 ; i < x ; i++){
        cin>> numbers[i];
    }
    int max = numbers[0];
     for(int i = 0 ; i < x ; i++){
       if(numbers[i] > max){
        max = numbers[i];
       }
       cout << "max  " << max << endl ;
    }
   // max = first number
   // loop through numbers
      // if current no > max
           // max = current
      // else
           // do nothing
    return 0;
}
