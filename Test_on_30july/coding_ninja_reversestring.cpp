/*Problem statement
You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters].
You have to find the reverse of the string.
For example:
If the given string is: STR = "abcde". You have to print the string "edcba".
follow up: Try to solve the problem in O(1) space complexity. */
#include <bits/stdc++.h> 
using namespace std;
void reverse(string& str,int i,int j){
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
string reverseString(string str)
{
    reverse(str,0,str.length()-1);
    return str;
}
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << reverseString(str);

}
