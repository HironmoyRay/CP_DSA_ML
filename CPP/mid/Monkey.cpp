#include<bits/stdc++.h>
using namespace std;

int main(){
    char sentence[100001];
    while(cin.getline(sentence,100001)){
        char letters[100001];
        int idx = 0;
        for (int i = 0; i < strlen(sentence); i++)
        {
            if(sentence[i]!=' '){
                letters[idx++]=sentence[i];
            }
        }

        sort(letters,letters+idx);

        for (int i = 0; i < idx; i++)
        {
            cout<<letters[i];
        }
        cout<<endl;
    }
    
}