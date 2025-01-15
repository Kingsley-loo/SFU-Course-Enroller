/*
ADT For user.
Author: Kingsley Loo-Xu




*/

#ifndef USER_H
#define USER_H



#include <string>
#include <vector>
#include "Course.h"


class User {

    private:

    static constexpr unsigned int MAX_LEVEL = 4;
    

    //Stores courses in an Course poitner datatype array, each index is an array of Courses organized by level 
    //ex. Course[0] will be an array of 100-level courses 
    vector<Course> * History[MAX_LEVEL];
    //array corresponding to History[] that stores the number of courses in each index 
    unsigned int ElementCount[MAX_LEVEL];

    public: 
    
    //default constructor 
    User();

    //destructor
    ~User();


    //Description: returns number of elements
    unsigned int getElementCount() const;


    //Description: inserts course to User profile 
    bool insert(const Course& newCourse);

    //Description: removes course from User profile 
    bool remove(const Course& toBeRemoved);

    //Description: removes all courses from User profile 
    bool removeAll();

    //Description: searches for courses 
    Course * search(const Course& target);

    //Description: prints out all of the User's courses in a tidy manner
    void print() const;

};
#endif