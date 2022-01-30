#include<bits/stdc++.h>
using namespace std;
int main()
{
    string v1,v2;
    cin>>v1;
    cin>>v2;
    if(v1=="")
      return v2;
     if(v2=="")
      return v1;
    string s1=v1;
    string s2=v2;
    s1+='/';
    s2+='/';
    int i=0;
    string t1,t2;
    while(s1[i]!='/' && s2[i]!='/')
    {
            if(s1[i]=='.' && s2[i]=='.')
            {
                if(stoi(t1)>stoi(t2)){
                    cout<<v1;
                    return 0;
                }
                else if(stoi(t1)<stoi(t2)){
                    cout<<v2;
                    return 0;
                }
                else{
                    t1="";
                    t2="";
                }
            }
            else if(s1[i]=='.'){
                cout<<v2;
                return 0;
            }
            else if(s2[i]=='.'){
                cout<<v1;
                return 0;
            }
            else{
                t1+=s1[i];
                t2+=s2[i];
            }
            i++;
    }
     if(stoi(t1)>stoi(t2)){
                    cout<<v1;
                    return 0;
                }
                else if(stoi(t1)<stoi(t2)){
                    cout<<v2;
                    return 0;
                }
                else{
                    if(v1.length()>v2.length()){
                        cout<<v1;
                        return 0;
                    }
                    else  if(v1.length()<v2.length()){
                        cout<<v2;
                        return 0;
                    }
                    cout<<"Equal";
                    return 0;
                }
}
