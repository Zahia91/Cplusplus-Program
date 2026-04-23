#include "GroceryTracker.h" 

#include <iostream> 

#include <fstream> 

using namespace std;

//function to read input file and count item fequencies 

void GroceryTracker::loadData() {

    //open input file

    ifstream inFS("CS210_Project_Three_Input_File.txt");

    string item;

    //loop through the items and count for frequency 

    while (inFS >> item) {

        itemFrequency[item]++;

    }

}



void GroceryTracker::saveToFile() {

    ofstream outFS("frequency.dat");



    for (auto& pair : itemFrequency) {

        outFS << pair.first << " " << pair.second << endl;

    }

}

//function tosearch for an item from the user

void GroceryTracker::searchItem() {

    string item;

    cout << "Enter item: ";

    cin >> item;

    //the if else statment is to check if the items exist in the file , else print item not found

    if (itemFrequency.count(item)) {

        cout << item << " appears " << itemFrequency[item] << " times.\n";

    }
    else {

        cout << "Item not found\n";

    }

}


// this will print all items with thier frequencies
void GroceryTracker::printAll() {

    for (auto& pair : itemFrequency) {

        cout << pair.first << " " << pair.second << endl;

    }

}

//function to print the histogram using the asterisks based on how many times the item appeared in the list

void GroceryTracker::printHistogram() {

    for (auto& pair : itemFrequency) {

        cout << pair.first << " ";

        for (int i = 0; i < pair.second; i++) {

            cout << "*";

        }

        cout << endl;

    }

}