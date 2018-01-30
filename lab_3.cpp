/*
 * Name        : lab_3.cpp
 * Author      : ANDREA WILLIAMS
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "lab_3.h"
#include <iostream>

/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 * -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */

class Goldilocks
{
    
    public:
    

string Goldilocks(string item, int number) {
    
   
    if (item == porridge)
    {
        do{
        
        switch (number) {
            case 1:
                cout << "The porridge is too hot." << endl;
                break;
                
            case 2:
                cout << "The porridge is too cold." << endl;
                break;
                
            case 3:
                cout << "The porridge is just right!" << endl;
                break;
                
            default:
                break;
            }
            
        } while(number !=3);
    }
    
    if (item == chair)
    {
        do{
        
        switch (number) {
            case 1:
                cout << "The chair is too big." << endl;
                break;
                
            case 2:
                cout << "The chair is too small." << endl;
                break;
                
            case 3:
                cout << "The chair is just right!" << endl;
                break;
                
            default:
                break;
            }
            
        } while(number!=3);
    }
    
    if (item == bed)
    {
        do{
        
        switch (number) {
            case 1:
                cout << "The bed is too hard." << endl;
                break;
                
            case 2:
                cout << "The bed is too soft." << endl;
                break;
                
            case 3:
                cout << "The bed is just right!" << endl;
                break;
                
            default:
                break;
            }
            
        } while (number !=3);
    }
    
   
}

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or
 * uppercase values for player_one and player_two arguments are acceptable.
 * Possible inputs: 'R' rock, 'S' scissor, 'P' paper
 * Conditions
 * -rocks beats scissors
 * -scissors beats paper
 * -paper beats rock
 * @param char player_one - Represents player one's "play" ('R', 'S', or 'P')
 * @param char player_two - Represents player two's "play" ('R', 'S', or 'P')
 * @return int - 1 if player one wins, 2 if player two wins, 3 on a draw,
 *               0 if invalud inputs
 */
int RockScissorPaper(char player_one, char player_two) {
  // YOU MUST USE A SWITCH IN THIS FUNCTION
  // CODE HERE
}

/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) {
  // CODE HERE
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) {
  // CODE HERE
}

int main ()
{
    
    void clearScreen();
    string item;
    int number = 0;
    char player_one = 'z';
    char player_two = 'z';
    string input;
    

cout << "Once upon a time there were three bears who lived in a house in the forest. There was a great big father bear, a middle-sized mother bear and a tiny baby bear.";


cout << " One morning, their breakfast porridge was too hot to eat, so they decided to go for a walk in the forest. While they were out, a little girl called Goldilocks came through the trees and found their house. She knocked on the door and, as there was no answer, she pushed it open and went inside.";


cout << "In front of her was a table with three chairs, one large chair, one middle-sized chair and one small chair. On the table were three bowls of porridge, one large bowl, one middle-sized bowl and one small bowl – and three spoons." << endl << endl;

    
cout << "Next Goldilocks went upstairs, where she found three beds. There was a great big bed, a middle-sized bed and a tiny little bed. By now she was feeling rather tired." << endl << endl;
    
cout << "Choose which item Goldilocks should try first. " << item << endl;
    
    cout << "Which of the three options should she try? " << number << endl;
    cin >> number ;
    
cin >> item;

//In a little while, the three bears came back from their walk in the forest. They saw at once that pushed open the door of their house and Father Bear looked around. then roared with a growly voice.

    
    return 0;
}
