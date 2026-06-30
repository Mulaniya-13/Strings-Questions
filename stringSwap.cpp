#include<iostream>
#include<string>
using namespace std;

bool areAlmostEqual(string str1, string str2){
    if(str1.length()!=str2.length()){
        cout<<"False"<<endl;
        return false;
    }
    char diffChar1,diffChar2;
    int diff=0;
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            if(diff==0){
                diffChar1=str1[i];
                diffChar2=str2[i];
            }else{
                if(str1[i]!=diffChar2 || str2[i]!=diffChar1){
                    cout<<"False"<<endl;
                    return false;
                }
                diff++;
            }if(diff>2){
                cout<<"False"<<endl;
                return false;
            }
        }if(diff==1){
            cout<<"False"<<endl;
            return false;
        }
    }
    cout<<"True"<<endl;
    return true;
}

int main(){
    string str1,str2;
    str1 = "bank";
    str2 = "kanb";
    areAlmostEqual(str1, str2);
    return 0;
}