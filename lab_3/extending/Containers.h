#pragma once

namespace oop {
    class Object {
        public:
            virtual ~Object() { std::cout << "oop::~Object" << std::endl; }
            virtual std::string name() const {return "oop::Object";}
    };

    class Container: public Object {
        public:
            virtual ~Container() {std::cout << "oop::~Container" << std::endl;}
            std::string name() const {return "oop::Container";}
            virtual void size() const = 0;
            virtual void empty() const = 0;
            virtual void insert(Container * c) = 0;
    };

    class SequenceContainer : public Container {
        public:
            virtual ~SequenceContainer() {std::cout << "oop::~SequenceContainer" << std::endl;}
            std::string name() const {return "oop::SequenceContainer";}
            virtual void push_front(Object * o) = 0;
            virtual void push_back(Object * o) = 0;
    };

    class HashTreeContainer : public Container {
        public:
            virtual ~HashTreeContainer() { std::cout << "oop::~HashTreeContainer" << std::endl; }
            virtual std::string name() const {return "oop::HashTreeContainer";}
            void size() const {};
            void empty() const {};
            void insert(Container * c){};
    };

    class SortedTreeContainer: public Container { 
        public:
            virtual ~SortedTreeContainer() { std::cout << "oop::~SortedTreeContainer" << std::endl; }
            virtual std::string name() const {return "oop::SortedTreeContainer";}
            void size() const {};
            void empty() const {};
            void insert(Container * c){};
    };

    class List : public SequenceContainer{
        public:
            virtual ~List() {std::cout << "oop::~List" << std::endl;}
            std::string name() const {return "oop::List";}
            void size() const {}
            void empty() const {}
            void insert(Container * c) {}
            void push_front(Object * o) {}
            void push_back(Object * o) {}
    };

    class Vector : public SequenceContainer {
        public:
            virtual ~Vector() {std::cout << "oop::~Vector" << std::endl;}
            std::string name() const {return "oop::Vector";}
            void size() const {}
            void empty() const {}
            void insert(Container * c) {}
            void push_front(Object * o) {}
            void push_back(Object * o) {}
    };

    class SortedMultiTree : public SortedTreeContainer {
        public:
            virtual ~SortedMultiTree() { std::cout << "oop::~SortedMultiTree" << std::endl; }
            virtual std::string name() const;
    };
    std::string SortedMultiTree::name() const {return "oop::SortedMultiTree";}

    class HashTree : public HashTreeContainer { 
        public:
            virtual ~HashTree() { std::cout << "oop::~HashTree" << std::endl; }
            virtual std::string name() const {return "oop::HashTree";}
    };

    class HashMultiTree : public HashTreeContainer {
        public:
            virtual ~HashMultiTree() { std::cout << "oop::~HashMultiTree" << std::endl; }
            virtual std::string name() const {return "oop::HashMultiTree";}
    };

    class SortedTree: public SortedTreeContainer { 
        public:
            virtual ~SortedTree() { std::cout << "oop::~SortedTree" << std::endl; }
            virtual std::string name() const {return "oop::SortedTree";}
    };

};
 