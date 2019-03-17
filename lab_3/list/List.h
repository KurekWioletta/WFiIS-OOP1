#pragma once
#include "Array.h"
#include "Number.h"
#include "IntArray.h"
#include "FloatArray.h"
#include <vector>

class List {
    public:
        ~List() {
            for (auto index: m_pointer_positions)
                delete m_values.at(index - 1);
        }

        void insert(const Number* number) { 
            m_values.push_back(number);
            m_pointer_positions.push_back(m_values.size());
        }

        void insert(const Number& number) { m_values.push_back(&number); }
        void insert(const Array& array) { m_values.push_back(&array); }

        void PrintAll() {
            for (auto item: m_values)
                item->PrintArray();
        }
    private:
        std::vector <const Array*> m_values;
        std::vector <int> m_pointer_positions;
};