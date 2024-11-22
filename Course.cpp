/*
Course.cpp function definitions 
Author: Kingsley Loo-Xu

*/

#include "Course.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;

//constructor 
Course::Course() : Subject("TBD"), Number(0), Title("TBD"), Info("TBD"), preReq() {

}
   

//destructor
Course::~Course() {

}

//Parameterized Constructor without preReq vector 
Course::Course(string newSubject, const unsigned int newNumber, string newTitle, string newInfo) : Subject(newSubject), 
        Number(newNumber), Title(newTitle), Info(newInfo), preReq() {

}

//Paramerized Constructor with preReq vector
Course::Course(string newSubject, const unsigned int newNumber, string newTitle, string newInfo, vector<Course *> newPreReq) : 
        Subject(newSubject), Number(newNumber), Title(newTitle), Info(newInfo), preReq(newPreReq) {

}

//Description: returns Subject of Course 
string Course::getSubject() const {
    return Subject;
}


//Description: reutrns course number 
unsigned int Course::getNumber() const { 
    return Number;
}


//Description: returns the title of the Course
string Course::getTitle() const {
    return Title;
}

//Description: returns the Course Info
string Course::getInfo() const {
    return Info;
}




//Description:  returns vector of prerequisites for the Course 
vector<Course *> Course::getPreReq() const {
    return preReq;
}

//Description: prints out all of the Course's details (Subject, Number, Title, 
//              Info, preReq) in a tidy manner
void Course::printCourse() const{

}

//Description: 
bool Course::operator==(const Course& rhs){
    return (this->Subject == rhs.Subject && this->Number == rhs.Number);
}
