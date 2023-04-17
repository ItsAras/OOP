#include "header.h"

int main()
{
    char userInput;
    list<Student> student;
    list<Student> noob;
    list<Student> nerd;
    Student tmp;
    srand(time(NULL));

    cout << "Do you want to read data from a file? Y - (YES), N - (NO): ";
    cin >> userInput;
    if (userInput == 'y' || userInput == 'Y') readFile(student, tmp, noob, nerd);

    cout << "Do you want to generate a file? Y - (YES), N - (NO): ";
    cin >> userInput;
    if (userInput == 'y' || userInput == 'Y') generateFile(student, tmp, noob);

    cout << "Do you want to run a benchmark? Y - (YES), N - (NO): ";
    cin >> userInput;
    if (userInput == 'y' || userInput == 'Y') sortingTest(student, tmp, noob, nerd);

    else
    {
        do
        {
            getStudent(tmp);
            student.push_back(tmp);

            cout << "Press N when finished. Press any key to continue... ";
            cin >> userInput;

        } while (userInput != 'n'  || userInput == 'N');

        printStudents(student);
    }
}