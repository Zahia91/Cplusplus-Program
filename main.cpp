#include <iostream> 

#include "GroceryTracker.h" 

using namespace std;


//main function , program entry
int main() {

    GroceryTracker tracker;

    //load the data from the file and save it 

    tracker.loadData();

    tracker.saveToFile();



    int choice;

    //loop until the user select Exit which is the last option

    do {

        cout << "\n1.Search\n2.Print\n3.Histogram\n4.Exit\n";

        cin >> choice;



        switch (choice) {
        //case one is to serach for an item

        case 1: tracker.searchItem(); break;
        //case two print all with thier frequency

        case 2: tracker.printAll(); break;
        //case 3 print histogram 

        case 3: tracker.printHistogram(); break;

        }

        //loop and keep the program running as long as the user input is not equal to 4 which basically the loop Exit

    } while (choice != 4);



    return 0;

}