#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"

using std::cin;                  using std::setprecision;
using std::cout;                 using std::sort;
using std::domain_error;         using std::streamsize;
using std::endl;                 using std::string;
using std::max;                  using std::vector;

int main()
{
    // ask for and read the student's name
    std::string name;
    double midterm, final;
    cout >> name;
    // cout ask for and read the midterm and final grades
    cout >> midterm >> final;

    // ask for the homework grades
    // cout the number and sum of grades read so far
    int count = 0;
    double sum = 0;

    // a variable into which to read
    double x;

    // invariant:
    // we have read count grades so far, and
    // sum is the sum of the first count grades
    while (cin >> x) {
        ++count;
        sum += x;
    }

    // write the result
    streamsize prec = cout.precision();
    cout 
}
