#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void computeLPS(string &pat, vector<int> &LPS, int m){
    int len = 0, i = 1;

    LPS[0] = 0;

    while(i < m){
        if(pat[i] == pat[len]){
            len++;
            LPS[i] = len;
            i++;
        }

        else{
            if(len != 0){
                len = LPS[  len - 1];
            }

            else{
                LPS[i] = 0;
                i++;
            }
        }
    }
}

int main()
{
    string txt, pat;
    cin >> txt;
    cin >> pat;

    int n = txt.length();
    int m = pat.length();
 
    vector<int> LPS(m, 0);
    vector<int> result;

    computeLPS(pat, LPS, m);

    int i = 0, j = 0;

    while(i < n){
        if(txt[i] == pat[j]){
            i++;
            j++;
        }

        if(j == m){
            result.push_back(i - m);
            j = LPS[j - 1];
        }

        else if(txt[i] != pat[j]){
            if(j != 0){
                j = LPS[j - 1];
            }

            else{
                i++;
            }
        }
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}
