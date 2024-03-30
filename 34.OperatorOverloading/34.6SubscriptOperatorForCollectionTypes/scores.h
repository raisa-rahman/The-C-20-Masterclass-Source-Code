#ifndef SCORES
#define SCORES

#include <string>
#include <fmt/format.h>



class Scores{
    public : 
        Scores() = delete;
        Scores(const std::string& course_name)
            : m_course_name{course_name}
        {}

    /*
    double& operator[](size_t index){
        assert((index >= 0) &&(index < 20));
        return m_scores[index];
    }

    double operator[](size_t index) const{
        assert((index >= 0) &&(index < 20));
        return m_scores[index];
    }
    */

    double& operator[](size_t index);
    double operator[](size_t index) const;


    void print_info()const{
        fmt::println( "{}{}",m_course_name , " : [ ");
        for(size_t i{}; i < 20; ++i){
            fmt::print( "{}{}",m_scores[i] , " ");
        }
        fmt::println( "]" );
    }

    private: 
        std::string m_course_name;
        double m_scores[20]{};
};
#endif // SCORES