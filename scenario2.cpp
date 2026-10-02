#include <iostream>
#include <string>
#include <vector>
using namespace std;



    //Function getAverage to calculate the average student ID
    double getAverage(const vector<int>& ids){
        //If vectors empty return 0
        if(ids.empty()) return 0.0;

        //Variable to store sum
        double sum = 0;

            //Range based loop to iterate each id
        for(int id : ids){
            sum += id;
        }
        //Divide the total sum with the vector size to get the Average
        return sum / ids.size();
    }

    //Function getHighest that returns the highest student ID
    int getHighest(const vector<int> & ids){
         //If vectors empty return 0
        if(ids.empty()) return 0;
        //Declare  highest with the first Vector element
        int highest  = ids[0];

          //Loop to compare each id and find the highest
        for (int id : ids){
            //Once highest is found, highest is returned
            if(id > highest){
                highest = id;
            }
        }
        return highest;
    }

    
int main(){ 
    //Vector StudentIDs that stores the 10 id numbers
    vector<int> studentIDs = {107, 101, 105, 103, 109, 102, 104, 106, 108, 100};

    //call both functions and print results
    double average = getAverage(studentIDs);
    int highest = getHighest(studentIDs);

    cout << "Average Student ID: " << average << endl;
    cout << "Highest Student ID: " << highest << endl;
}

