#include <iostream>

using namespace std;

int value(char i){
        if(i == 'I'){
            return 1;
        }
        else if(i == 'V'){
            return 5;
        }
        else if(i == 'X'){
            return 10;
        }
        else if(i == 'L'){
            return 50;
        }
        else if(i == 'C'){
            return 100;
        }
        else if(i == 'D'){
            return 500;
        }
        else if(i == 'M'){
            return 1000;
        }
    }
    int romanToInt(string s) {
        int num = 0;
        for(int i = 0; i < s.length(); i++){
            if(i < s.length() - 1){
                if(s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')){
                    num = num + value(s[i]) - 1;
                    continue;
                }
                else if(s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')){
                    num = num + value(s[i]) - 10;
                    continue;
                }
                else if(s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')){
                    num = num + value(s[i]) - 100;
                    continue;
                }
                else{
                    num = num + value(s[i]);
                }
            }
            else{
                num = num + value(s[i]);
            }
            
        }
        return num;
    }

int main(){
    string s;
    cin >> s;
    int n = romanToInt(s);
    cout << n << endl;
}