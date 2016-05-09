#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

namespace CS2312
{
    template <typename T>
    class less
    {
    public:
        bool operator () (const T& left, const T& right)
        {
            if (left < right)
                return true;
            else
                return false;
        }

    };

    template <>
    class less<std::string>
    {
    public:
        bool operator() (const std::string& left, const std::string& right)
        {
            if (left < right)
                return true;
            else
                return false;
        }

    };

    template <>
    class less<const char*>
    {
    public:
        bool operator() (const char* left, const char* right)
        {
            for(int i = 0; i < *left; )
            {
                if(left[i] < right[i])
                    return true;
                else
                    return false;
            }

        }

    };


}
#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H