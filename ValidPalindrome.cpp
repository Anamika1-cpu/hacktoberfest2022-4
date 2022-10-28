#include<bits/stdc++.h>
using namespace std;

bool isAlpha(char c){
    if((c>=48 && c<=57)||(c>=65 && c<=90)||(c>=97 && c<=122)){
        return true;
    }
    return false;
};

char lowerCase(char c){
    if(c>=65 && c<=90){
        return c+32;
    }
    return c;
};
bool validPalindrome(string s){
    string input;
    for(char c:s){
        if(isAlpha(c)){
            input+=lowerCase(c);
        }
    }
    string reversed = input;
    reverse(reversed.begin(), reversed.end());

    if(input==reversed){
        return true;
    }
    else{
        return false;
    }

};

int main() 
{
    string s="naman";
    if(validPalindrome(s))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
  return 0; 
}
