// *** MEMBER:

T& operator=(const T& other) // Assignment operator
{
    if (this != &other) { // self-assignment check expected
        if (other.size != size) {         // storage cannot be reused
            delete[] mArray;              // destroy storage in this
            size = 0;
            mArray = nullptr;             // preserve invariants in case next line throws
            mArray = new int[other.size]; // create storage in this
            size = other.size;
        } 
        std::copy(other.mArray, other.mArray + other.size, mArray);
    }
    return *this;
}

struct T // Array subscript operator
{
    const value_t& operator[](std::size_t idx) const { return mVector[idx]; }
          value_t& operator[](std::size_t idx)       { return mVector[idx]; }
};

void operator()(int n) // Function call operator
{ 
    sum += n; 
}

Obj* operator->() const // Class Member Access operator
{ 
    if(!oc.a[index]) {
        cout << "Zero value";
        return (Obj*)0;
    }
    return oc.a[index];
}

X& operator++() // Pre-increment operator
{
    // actual increment takes place here
    return *this;
}

X operator++(int) // Post-increment operator
{
    X tmp(*this); // copy
    operator++(); // pre-increment
    return tmp;   // return old value
}

Box operator+(const Box& b) { // Binary arithmetic operators
    Box box;
    box.length = this->length + b.length;
    return box;
}

class X // Binary arithmetic operators (complex+integer)
{
    public:
        X& operator+=(const X& rhs) {
            /**
             * compound assignment (does not need to be a member,
             * but often is, to modify the private members)
             * 
             * addition of rhs to *this takes place here 
             * */
            return *this; // return the result by reference
        }
        
        friend X operator+(X lhs, const X& rhs){
            /**
             * friends defined inside class body are inline and are hidden from non-ADL lookup
             * passing lhs by value helps optimize chained a+b+c
             * otherwise, both parameters may be const references
             * */
            lhs += rhs; // reuse compound assignment
            return lhs; // return the result by value (uses move constructor)
        }
};

struct Record // Relational operator
{
    unsigned int floor;
    double weight;
    friend bool operator<(const Record& l, const Record& r)
    {
        return std::tie(l.floor, l.weight)
             < std::tie(r.floor, r.weight); // keep the same order
    }
};

// *** NON-MEMBER:

std::ostream& operator<<(std::ostream& os, const T& obj) // Stream extraction (only non-member)
{
    // write obj to stream
    return os;
}

std::istream& operator>>(std::istream& is, T& obj) // Stream insertion (only non-member)
{
    // read obj from stream
    return is;
}





