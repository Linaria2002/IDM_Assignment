#include<iostream>
#include<ctime>
#include<string>
using namespace std;

int main(){
    srand(time(nullptr));

    string name;
    cout << "Who are you?" << endl;
    cout << "> ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    
    const int ROOP = 3;
    int Heads = 0, Tails = 0;

    cout << "Tossing a coin..." << endl;

    for(int i = 1; i <= ROOP; i++){
        cout << "Round " << i << ": ";
        if(rand() & 1){
            cout << "Heads" << endl;
            Heads++;
        }
        else{
            cout << "Tails" << endl;
            Tails++;
        }
    }

    cout << "Heads: " << Heads << ", Tails: " << Tails << endl;
    return 0;
}
