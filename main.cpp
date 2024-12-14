#include "Course.h"
#include "User.h"
#include <iostream>
#include <string>
#include "json.hpp"


using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {

    bool loop = true;

    Course course1("CMPT", 120, "Intro to Software Development", "An introduction to software development");
    Course course2("CMPT", 125, "Intro to Computing Science", "An introduction to computing science");
    Course course3("CMPT", 127, "Introduction to Computing Science and Programming", "An introduction to computing science and programming");
    Course course4("CMPT", 225, "Data Structures and Programming", "An introduction to data structures and programming");
    Course course5("CMPT", 295, "Social Implications of a Computerized Society", "An introduction to the social implications of a computerized society");
    Course course6("CMPT", 300, "Operating Systems", "An introduction to operating systems");
    Course course7("CMPT", 307, "Data Structures and Algorithms", "An introduction to data structures and algorithms");
    Course course8("CMPT", 354, "Database Systems I", "An introduction to database systems");
    Course course9("CMPT", 361, "Numerical Computing", "An introduction to numerical computing");
    Course course10("CMPT", 365, "Computational Linguistics", "An introduction to computational linguistics");
    Course course11("CMPT", 383, "Computational Biology", "An introduction to computational biology");
    Course course12("CMPT", 384, "Special Topics in Computing Science", "An introduction to special topics in computing science");
    Course course13("CMPT", 385, "Database Systems II", "An introduction to database systems");
    Course course14("CMPT", 370, "Computer Graphics", "An introduction to computer graphics");
    Course course15("CMPT", 371, "Computer Graphics II", "An introduction to computer graphics II");
    Course course16("CMPT", 381, "Computational Vision", "An introduction to computational vision");
    Course course17("CMPT", 397, "Special Topics in Computing Science", "An introduction to special topics in computing science");
    Course course18("CMPT", 399, "Honours Project", "An introduction to honours project");
    Course course19("CMPT", 301, "Graduate Seminar", "An introduction to graduate seminar");
    Course course20("CMPT", 325, "Advanced Topics in Database Systems", "An introduction to advanced topics in database");



    cout << "SFU Course Enroller" << endl;
    cout << "======================" << endl;
    cout << "Welcome!" << endl;

    while (loop != false){
        char choice;
        cout << endl;
        cout << "e - enroll in a course" << endl;
        cout << "d - drop a course" << endl;
        cout << ">";
        cin >> choice ;
        cout << "you chose " << choice << endl;

        if (choice = 'e') {
            
        }
        

    }



}