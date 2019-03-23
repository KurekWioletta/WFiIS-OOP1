#pragma once
#include "ReadAccess.h"
#include "ReadWriteAccess.h"

class WordAccess {
public:
    static bool eofSentence(std::string str) {
        return str[0] == '\0';
    }

    static bool eofWord(const char& chr) {
        return chr == '\0' || chr == ' ';
    }
};