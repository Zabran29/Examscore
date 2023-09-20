#include "examscore.h"

void ExamScoreManager::addExamScore(int score){
    scores.push_back(score);
}

void ExamScoreManager::removeExamScore(){
    if(!scores.empty()){
        scores.pop_back();
    }
}

int ExamScoreManager::getNumScores() const {
    return scores.size();
}

const std::vector<int>& ExamScoreManager::getScores() const{
    return scores;
}