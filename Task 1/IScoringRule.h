#pragma once

class IScoringRule {
public:
    virtual ~IScoringRule() {}
    virtual int calculateScore(int input) = 0; // Rumus skor dasar
};