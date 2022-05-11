#include <iostream>
#include <cmath>
using namespace std;

//recursive_function(number, length_of_the_number)
int reverse(int num, int l){
    //base contition
    if(num==0)
        return 0;
        
    //extract the last digit  
    int digit = num%10;
    
    /*
        *Append them in reverse order
        *For e.g., to reverse 859
        *return 9*100 + 58 = 958
    */
    return digit*pow(10, l-1) + reverse(num/10, l-1);
}
 
int main()
{
    int num;
    
    //Input a number
    cout << "Enter a Number: ";
    cin >> num;
    
    //call the recursive funtion to reverse the number
    int length = to_string(num).length();
    int rev = reverse(num, length);
    
    //output the number
    cout << "Reverse: " << rev;
    return 0;
}