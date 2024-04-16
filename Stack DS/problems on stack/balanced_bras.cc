#include<bits/stdc++.h>
using namespace std;

bool balancedBras(string expr){
    stack<char> bras;
    for(char c: expr){
        if (c == '{'||c == '('||c == '[')
        {
            bras.push(c);
        }else if (c == ']'||c==')'||c=='}')
        {
            
        }
        
        
    }
}

int main()
{

    string exp = "[]";
    balancedBras(exp);
    stack<char>
        bras;
    cout << bras.size();
    bras.push('a');
    while (!bras.empty())   
    {
        cout << bras.top()<<" " <<bras.size()<< " ";

        bras.pop();
        /* code */
    }
    cout << bras.size();

    
    return 0;
}