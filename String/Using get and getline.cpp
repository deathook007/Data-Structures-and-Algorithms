#include<bits/stdc++.h>
using namespace std;

int main(){

    char sentence[10000];
    char temp = cin.get();
    int length = 1;
    while(temp != '\n'){
        sentence[length] = temp;
        temp = cin.get();
    }
    sentence[length] = '\0';
    cout<<sentence<<" Is having length : "<<length<<endl;

    // Getline Function
    cin.getline(sentence, 10000);
    cout<<sentence;
    return 0;
}