#include "iostream"
#include "to 15.10.25.h"
using namespace std;

int main(){
    int a;
    cout << "Enter the key\n";
    cin >> a;
    cout << "\n Enter the word";
    string b;
    cin >> b;
    cout<<"\n Your new word:" << encrypt(a,b) ;
    cout<<"\n Do you want to decrypt the word?";
    string c;
    string d;
    int e;
    if(c=="Yes"){
        cout<<"\n Enter the word" ;
        cin >> d;
        cout<<"\n Enter the key";
        cin >> e;
        cout<<"\n Your new word:" << decrypt(e,d) ;
    }
}