// program to check the given number is pallindrome number or not
//

#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev=0;
    cout<<"enter the positive number";
    cin>>num;

n=num;

do{
    digit=num% 10;
rev= (rev*10) +digit;
num= num/10;

}
while (num != 0);

cout<<"the reverse number is :"<<rev<<endl;

if(n == rev)
   cout<<"the number is pallindrome";


    else
    cout<<"the number is not pallindrome";

return 0;
}