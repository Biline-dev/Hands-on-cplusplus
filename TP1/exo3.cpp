#include <iostream>
#include <string>
#include <cctype>
#include <ctime>
#include <vector>
#include <list>

using namespace std;

/*
    What is requested in the exercise: consider nj players forming a circle,
    as well as a rhyme of ns syllables. The rhyme is recited by removing the ns-th player
    from the circle. This process is repeated until only one player remains. That player is the winner.

    Also, a good opportunity to become familiar with C++ containers.
*/

/*
    * Solution using arrays.
    * Recall that arrays are a static structure and contain elements of the same type.
*/
int game_tab(int numberPlayers, int numberChairs, int startNumber = 3) {

    int tabPlayers[numberPlayers];
    int size = numberPlayers;

    for (int i = 0; i < numberPlayers; i++) {
        tabPlayers[i] = i + 1;
    }

    while (numberPlayers > 1) {
        for (int i = startNumber; i < size - 1; i++) {
            tabPlayers[i] = tabPlayers[i + 1];
        }
        numberPlayers--;
        startNumber = (startNumber + numberChairs - 1) % numberPlayers;
    }
    return tabPlayers[0];
}

/*
    * Solution using vectors.
    * Recall that vectors are a dynamic structure and contain elements of the same type.
*/
int game_vector(int numberPlayers, int numberChairs, int startNumber = 3) {

    vector<int> vectorPlayers;

    for (int i = 0; i < numberPlayers; i++) {
        vectorPlayers.push_back(i + 1);
    }

    while (numberPlayers > 1) {
        vectorPlayers.erase(vectorPlayers.begin() + startNumber);
        numberPlayers--;
        startNumber = (startNumber + numberChairs - 1) % numberPlayers;
    }

    return vectorPlayers.at(0);
}

/*
    * Solution using lists.
    * Recall that lists are a structure where you can access successors
      and predecessors, and they store elements of the same type.
*/
int game_list(int numberPlayers, int numberChairs, int startNumber = 3) {

    list<int> listPlayers;

    for (int i = 0; i < numberPlayers; i++) {
        listPlayers.push_back(i + 1);
    }

    list<int>::iterator it;

    while (numberPlayers > 1) {
        it = listPlayers.begin();
        advance(it, startNumber);
        listPlayers.erase(it);
        numberPlayers--;
        startNumber = (startNumber + numberChairs - 1) % numberPlayers;
    }
    return listPlayers.front();
}

int main() {

    int numberPlayers = 10;
    int numberChairs = 4;

    /*
        // To input values:

        cout << "Enter your number of players: ";
        cin >> numberPlayers;
        cout << "Enter your number of chairs: ";
        cin >> numberChairs;  
    */

    /*
        // For a random start:

        srand(time(nullptr));
        int maxValue = numberPlayers - 1;
        int minValue = 0;
        int randomNumber = (rand() % (maxValue - minValue + 1)) + minValue;
    */

    cout << " Test case Array " << "The winner is: " << game_tab(numberPlayers, numberChairs) << "\n";
    cout << " Test case Vector " << "The winner is: " << game_vector(numberPlayers, numberChairs) << "\n";
    cout << " Test case List " << "The winner is: " << game_list(numberPlayers, numberChairs) << "\n";

    cout << "\n\n----End of the program----\n";
    return 0;
}
