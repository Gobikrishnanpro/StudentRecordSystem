#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    Student(int i = 0, string n = "", float m = 0.0) : id(i), name(n), marks(m) {}

    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

class StudentRecord {
private:
    vector<Student> students;
    const string filename = "students.txt";

    void loadFromFile() {
        ifstream file(filename);
        if (file.is_open()) {
            int id;
            string name;
            float marks;
            while (file >> id >> name >> marks) {
                students.push_back(Student(id, name, marks));
            }
            file.close();
        }
    }

    void saveToFile() const {
        ofstream file(filename);
        if (file.is_open()) {
            for (const auto& student : students) {
                file << student.id << " " << student.name << " " << student.marks << endl;
            }
            file.close();
        }
    }

public:
    StudentRecord() {
        loadFromFile();
    }

    ~StudentRecord() {
        saveToFile();
    }

    void addStudent(int id, string name, float marks) {
        students.push_back(Student(id, name, marks));
        cout << "Student added successfully!\n";
    }

    void displayAll() const {
        if (students.empty()) {
            cout << "No records found.\n";
            return;
        }
        for (const auto& student : students) {
            student.display();
        }
    }

    void updateStudent(int id, string name, float marks) {
        for (auto& student : students) {
            if (student.id == id) {
                student.name = name;
                student.marks = marks;
                cout << "Student updated successfully!\n";
                return;
            }
        }
        cout << "Student ID not found.\n";
    }

    void deleteStudent(int id) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->id == id) {
                students.erase(it);
                cout << "Student deleted successfully!\n";
                return;
            }
        }
        cout << "Student ID not found.\n";
    }
};

int main() {
    StudentRecord sr;
    int choice, id;
    string name;
    float marks;

    while (true) {
        cout << "\n1. Add Student\n2. Display All\n3. Update Student\n4. Delete Student\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter ID, Name, Marks: ";
                cin >> id >> name >> marks;
                sr.addStudent(id, name, marks);
                break;
            case 2:
                sr.displayAll();
                break;
            case 3:
                cout << "Enter ID to update: ";
                cin >> id;
                cout << "Enter new Name, Marks: ";
                cin >> name >> marks;
                sr.updateStudent(id, name, marks);
                break;
            case 4:
                cout << "Enter ID to delete: ";
                cin >> id;
                sr.deleteStudent(id);
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}