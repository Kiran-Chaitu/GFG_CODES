//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int solver(string s, string ss){
    unordered_map<char,int> mp;
    int c=0;
    for(auto i:s) mp[i]++;
    for(auto i:ss) (mp.find(i)!=mp.end() and mp[i] > 0 ) ? mp[i]-- : c++;
    for(auto i:mp)  c+=i.second;
    return c;
}
int remAnagram(string str1, string str2)
{
// Your code goes here
    int n=str1.size(),m=str2.size();
    return n>m ? solver(str1,str2) : solver(str2,str1);
}