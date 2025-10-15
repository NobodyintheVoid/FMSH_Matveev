#include "iostream"
#include "string"
#include "vector"
using namespace std;

string encrypt(int a, string b){
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string h;
    int count=0;
    for(int i = 0; i<b.size(); i++){
        for(int j = 1; j<27;j++){
            if(b[i]==alpha[j]){
                count = j+a;
                if(count>26){
                    count = count%26;
                }
                if(count<0){
                    while(count<0){
                        count+=26;
                    }
                }
            }

        }
        h[i] = alpha[count+1];

    }
    cout << h;
}

string decrypt(int a,string b){
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string h;
    int count =0;
    for(int i = 0; i<b.size(); i++){
        for(int j = 1; j<27;j++){
            if(b[i]==alpha[j]){
                count = j-a;
                if(count>26){
                    count = count%26;
                }
                if(count<0){
                    while(count<0){
                        count+=26;
                    }
                }
            }

        }
        h[i] = alpha[count];

    }
    cout<< h;
}



