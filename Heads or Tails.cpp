#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(nullptr));
    
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
    if(Heads > Tails) cout << "You won!" << endl;
    else cout << "You lost" << endl;
    
    return 0;
}
