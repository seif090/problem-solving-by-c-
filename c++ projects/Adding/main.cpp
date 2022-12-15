#include <iostream>

using namespace std;

int main()
{
    // get input
    int x;
    cout<<"enter your numbers ";
    cin>>x;
    // 5 6 8 4
    int numbers[x];
    int sum = 0;

    for(int i = 0 ; i < x ; i++){
        cin>> numbers[i];
        sum = sum + numbers[i];
    }

    // sum = 0

    // loop through numbers
        // sum = sum + current number

    cout<< "sum = " << sum;
    return 0;
}
