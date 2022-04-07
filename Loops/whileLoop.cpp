/* Input a number from user n and print numbers from 1 to n.

To deal with this kind of problems we'll use the concepts of loops.
Here we'll use the 'for' loop.
Syntax:

    while(<condition>){
        //block of code;
        <increment/decrement>;
    }

*/

#include<iostream>
using namespace std;
int main(){

    int n;

    cout << "Enter a number : " << endl;
    cin >> n;

    int i = 1;
    while(i <= n){
        cout << i << endl;
        i++;
    }
    
    return 0;
}