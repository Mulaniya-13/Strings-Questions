#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool areClose(string word1, string word2){
    if(word1.length()!=word2.length())
    {
        cout<<"False"<<endl;
        return false;
    }
    int freq1[26]={0};
    int freq2[26]={0};
    for(char ch:word1) freq1[ch-'a']++;
    for(char ch:word2) freq2[ch-'a']++;
    for(int i=0;i<26;i++){
        if((freq1[i]==0 && freq2[i]!=0) || (freq1[i]!=0 && freq2[i]==0)) 
        {
            cout<<"False"<<endl;
            return false;
        }
    }
    sort(freq1,freq1+26);
    sort(freq2,freq2+26);
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]) 
        {
            cout<<"False"<<endl;
            return false;
        }
    }
    cout<<"True"<<endl;
    return true;
}

int main(){
   string word1="abc";
   string word2="bca";
   areClose(word1, word2);
   return 0;
}