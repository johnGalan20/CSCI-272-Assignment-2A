#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    //declare menu vector
    vector<string> menu;

    //push_back used to add 5 items to the menu
    menu.push_back("Pizza");
    menu.push_back("Burger");
    menu.push_back("Mozarella Sticks");
    menu.push_back("Chicken Wings");
    menu.push_back("Spaghetti");

    //Insert Tacos at the second position
    menu.insert(menu.begin() + 1, "Tacos");

    //Remove the 4th item off the menu being Chicken Wings
    menu.erase(menu.begin() + 4);

    //Print out the final menu using a range-based loop
    cout << "Final Cafeteria Menu" << endl;
    for(const string& dish : menu){
        cout << "- " << dish << endl;
    }
    return 0;
}