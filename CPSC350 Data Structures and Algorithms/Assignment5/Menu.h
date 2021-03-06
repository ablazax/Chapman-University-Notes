#include "BST.h"
#include <iostream>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;

const string STUDENT_TABLE = "studentTable";
const string FACULTY_TABLE = "facultyTable";

class Menu {
	public:
		Menu(); // load BSTs
		~Menu();
		void promptOption();
		void printAllStudents(); // sorted by ascending, do in-order
		void printAllFaculty(); // sorted by ascending, do in-order
		void printStudent();
		void printFacultyMember();
		void printAdvisor(/*int studentId*/);
		void printAdvisees(/*int facultyId*/);
		void addStudent(); // prompt for student info part by part here
		void deleteStudent(/*int studentId*/);
		void addFacultyMember();
		void deleteFacultyMember();
		void changeAdvisor(/*int studentId, int newFacultyId*/);
		void removeAdvisee(/*int facultyId, int studentId*/);
		void rollback();
		void exit();
	private:
		StudentTable bstStudent;
		FacultyTable bstFaculty;
		bool isMalformedInt(string input);
		void printMenu();
		int promptInt(string promptMsg);
		void printStudentInfo(int studentId);
		void printFacultyInfo(int facultyId);
		bool isMalformedDouble(string input);
		void promptString(string promptMsg, string &input, bool nonEmpty);
};