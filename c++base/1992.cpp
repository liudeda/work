#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
using namespace std;

struct Student
{
    int id;
    string name;
    double score;
};

// 保存学生信息到文件
void saveStudentsToFile(const vector<Student> &students, const string &filename)
{
    ofstream outFile(filename);
    if (outFile.is_open())
    {
        for (const auto &student : students)
        {
            outFile << student.id << " " << student.name << " " << student.score << "\n";
        }
        outFile.close();
    }
    else
    {
        cerr << "Unable to open file for writing.\n";
    }
}

// 从文件加载学生信息
vector<Student> loadStudentsFromFile(const string &filename)
{
    vector<Student> students;
    ifstream inFile(filename);
    if (inFile.is_open())
    {
        string line;
        while (getline(inFile, line))
        {
            istringstream iss(line);
            int id;
            string name;
            double score;
            if (iss >> id >> name >> score)
            {
                students.push_back({id, name, score});
            }
        }
        inFile.close();
    }
    else
    {
        cerr << "Unable to open file for reading.\n";
    }
    return students;
}

// 显示所有学生信息
void displayStudents(const vector<Student> &students)
{
    for (const auto &student : students)
    {
        cout << "ID: " << student.id << ", Name: " << student.name << ", Score: " << student.score << "\n";
    }
}

int main()
{
    const string filename = "students.txt";
    vector<Student> students = loadStudentsFromFile(filename);

    int choice;
    do
    {
        cout << "\nStudent Information Management System\n";
        cout << "1. Add a student\n";
        cout << "2. Delete a student by ID\n";
        cout << "3. Update a student's information\n";
        cout << "4. Query a student by ID or Name\n";
        cout << "5. Display all students\n";
        cout << "6. Save and Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id;
            string name;
            double score;
            cout << "Enter ID, Name, and Score: ";
            cin >> id >> name >> score;
            students.push_back({id, name, score});
            break;
        }
        case 2:
        {
            int deleteId;
            cout << "Enter the ID of the student to delete: ";
            cin >> deleteId;
            students.erase(remove_if(students.begin(), students.end(),
                                     [deleteId](const Student &s)
                                     { return s.id == deleteId; }),
                           students.end());
            break;
        }
        // Case 3 (Update) and Case 4 (Query) are left as exercises.
        case 5:
            displayStudents(students);
            break;
        case 6:
            saveStudentsToFile(students, filename);
            cout << "Data saved. Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}