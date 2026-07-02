#include<iostream>
#include<string>
using namespace std;

bool isValid(string s ){
    string bag="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            bag+=s[i];
        }
        char last=bag.back();
        if((s[i]==')' && last=='(') || (s[i]==']' && last=='[') || (s[i]=='}' && last=='{')){
            bag.erase(bag.length()-1,1);
        }
    }
    return bag.empty();
}

int main(){
    string s="()[]{}";
    if(isValid(s)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}