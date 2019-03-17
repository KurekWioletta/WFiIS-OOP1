#pragma once

class NOT {
    public:
        bool result(bool x1) const { 
            return !x1;
        };
};

class TwoArg {
    public:
        virtual bool result(bool x1, bool x2) const = 0;
};

class Logical {
    public:
        static bool eval(const TwoArg& two_arg, bool x1, bool x2) {
            return two_arg.result(x1, x2);
        }
        static bool eval(const NOT& arg, bool x1) {
            return arg.result(x1);
        }
};

class AND : public TwoArg{
    public:
        virtual bool result(bool x1, bool x2) const { 
            return x1 && x2;
        };
};

class OR : public TwoArg{
    public:
        virtual bool result(bool x1, bool x2) const { 
            return x1 || x2;
        };
};