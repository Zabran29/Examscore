#ifndef EXAMSCORE_H
#define EXAMSCORE_H

#include <vector>


class ExamScoreManager{
    public:
    void addExamScore(int score);
    void removeExamScore();
    int getNumScores() const;
    const std::vector<int>& getScores() const;
    
    private:
       std::vector<int> scores;
};
#endif