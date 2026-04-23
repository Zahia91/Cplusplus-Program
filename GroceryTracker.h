#ifndef GROCERYTRACKER_H

#define GROCERYTRACKER_H 



#include <map> 

#include <string> 

using namespace std;

//class to handle grecery tracking functionalities

class GroceryTracker {

private:
    //map to store item name (key) and its frequency (value)

    map<string, int> itemFrequency;



public:

    //function to load from input file andn count frequency

    void loadData();

    //saves frequency data 

    void saveToFile();

    //allow user to search for specific item

    void searchItem();

    //print all items with thier frequency 

    void printAll();

    //display histogram using asterisks

    void printHistogram();

};



#endif
