#include "User.h"
#include "Course.h"
#include <vector>
#include <iostream>
#include <algorithm>

using std::cout;
using std::vector;
using std::string;
using std::endl;



    //constructor
    User::User() {
        for (unsigned int x = 0; x < MAX_LEVEL; x++) {
            this->History[x] = new vector<Course>;
        }   
        for (unsigned int i = 0; i < MAX_LEVEL; i++) {
        this->ElementCount[i] = 0;
        }
    }

    //destructor
    User::~User() {

    }

    //Description: returns number of elements
    unsigned int User::getElementCount() const {
        unsigned int totalCount = 0;
        for (unsigned int i = 0; i < MAX_LEVEL; i++) {
            totalCount += this->ElementCount[i];
        }
        return totalCount;
    }
 


    //Description: inserts course to User profile 
    bool User::insert(const Course& newCourse) {

        unsigned int level = (newCourse.getNumber()/100);
        if (level > MAX_LEVEL-1) {
            return false; //course level is too high
        }
        this->History[level]->push_back(newCourse);
        this->ElementCount[level]++;
        return true;

    }

    //Description: removes course from User profile 
    bool User::remove(const Course& toBeRemoved) {
        unsigned int level = (toBeRemoved.getNumber()/100);
        cout << level << endl;
        if (level > MAX_LEVEL-1) {
            return false; //course level is too high
        }
        
        for (int x = 0; x < this->ElementCount[level]; x++) {

            if (this->History[level]->at(x).getNumber() == toBeRemoved.getNumber()) {
                cout << "element found" << endl;
                this->History[level]->erase(this->History[level]->begin() + x); //only works when Number of couse isnt const?
                this->ElementCount[level]--;
                return true;
            }
        }

        return false;

    }

    //Description: removes all courses from User profile 
    bool User::removeAll() {

    }

    //Description: searches for courses 
    Course * User::search(const Course& target) {

    }

    //Description: prints out all of the User's courses in a tidy manner
    void User::print() const {
       for (unsigned int x = 0; x < MAX_LEVEL; x++) {
            for (unsigned int y = 0; y < this->ElementCount[x]; y++) {
                //retrieves the elements of the Course
                string aSubject = this->History[x]->at(y).getSubject();
                unsigned int aNumber = this->History[x]->at(y).getNumber();
                string aTitle = this->History[x]->at(y).getTitle();    
                string aInfo = this->History[x]->at(y).getInfo();
                //printing it nicely 
                cout << "Course Name: " << aSubject << " " << aNumber << endl;
                cout << "Course Title: " << aTitle << endl;
                cout << "Description: " << aInfo << endl;
                cout << "============================" << endl;
            }
       }
    }
