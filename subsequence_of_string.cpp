// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void subsequence(string s, int i, string output)
{
    
    if(i == s.length()){
        cout<<output<<endl;
        return;
    }
    
    subsequence(s,i+1,output + s[i]);
    subsequence(s,i+1,output);
}

int main() {
    string output = "";
    string s = "abc";
    int n = s.length();
    
    subsequence(s,0,output);
    
}
