#include "examscore.h"

void ExamScoreManager::addExamScore(int score){
    score.push_back(score);
}

void ExamScoreManager::removedExamScore(){
    if(!score.empty()){
        scores.pop_back();
    }
}

int ExamScoreManager::getNumScore() const{
    return score.size();
}

const std::vector<int>& ExamScoreManager::getScores() const{
    return scores;
}