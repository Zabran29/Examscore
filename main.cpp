#include<iostream>
#include "examscore.h"
using namespace std;

int main(){
    ExamScoreManager manager;
    
    while (true){
        cout<< "Menu" << endl;
        cout<< "1. Add an Exam score"<< endl;
        cout<< "2. Remove the last exam score" << endl;
        cout<< "3. Display the current number of exam scores" << endl;
        cout<< "4. Exit" << endl;
        cout<< "Enter your choice: ";

        int choice;
        cin >> choice;

      if (choice == 1) {
            int scoreToAdd;
            cout << "Enter the exam score to add: ";
            cin >> scoreToAdd;
            manager.addExamScore(scoreToAdd);
            cout << "Exam score added.\n";
        } else if (choice == 2) {
            manager.removeExamScore();
            cout << "Last exam score removed.\n";
        } else if (choice == 3) {
            cout << "Current number of exam scores: " << manager.getNumScores() << endl;
        } else if (choice == 4) {
            cout << "Exiting the program.\n";
            return 0;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
