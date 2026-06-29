#include<iostream>
#include<string>
using namespace std;

void countVowels(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
}

int main(){
    string s="Hello, how are you?";
    countVowels(s);
    return 0;
}