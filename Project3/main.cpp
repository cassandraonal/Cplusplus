#include "LinkedList.h"
#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n========== Academic Management System ==========\n";
    cout << "1. Add Student (Console)\n";
    cout << "2. Add Students from Text File\n";
    cout << "3. Add Students from CSV File\n";
    cout << "4. Add Faculty (Console)\n";
    cout << "5. Add Faculty from Text File\n";
    cout << "6. Add Faculty from CSV File\n";
    cout << "7. Display All Records\n";
    cout << "8. Search by ID\n";
    cout << "9. Update by ID\n";
    cout << "10. Delete by ID\n";
    cout << "11. Sort by ID\n";      // Placeholder for future sorting implementation
    cout << "12. Sort by Name\n";    // Placeholder for future sorting implementation
    cout << "13. Sort by GPA (Students Only)\n"; // Placeholder for future sorting implementation
    cout << "14. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    LinkedList list;
    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();
            switch (choice) {
                case 1:
                    list.addStudentFromConsole();
                    break;

                case 2: {
                    string filename;
                    cout << "Enter .txt filename: ";
                    cin >> filename;
                
                    break;
                }

                case 3: {
                    string filename;
                    cout << "Enter .csv filename: ";
                    cin >> filename;
                    
                    break;
                }

                case 4:
                
                    break;

                case 5: {
                    string filename;
                    cout << "Enter faculty .txt filename: ";
                    cin >> filename;
                    
                    break;
                }

                case 6: {
                  
                    cout << "Enter faculty .csv filename: ";
                    cin >> filename;
                  
                    break;
                }

                case 7:
                    list.display();
                    break;

                case 8: {
                    int id;
                    cout << "Enter ID to search: ";
                    cin >> id;
                    Person* p = list.search(id);
                    if (p) p->display();
                    else cout << "Not found.\n";
                    break;
                }

                case 9: {
                    int id;
                    cout << "Enter ID to update: ";
                    cin >> id;
                    list.update(id);
                    break;
                }

                case 10: {
                    int id;
                    cout << "Enter ID to delete: ";
                    cin >> id;
                    list.remove(id);
                    break;
                }

                case 11:
                    list.sortByID();
                    break;

                case 12:
                    list.sortByName();
                    break;

                case 13:
                    list.sortByGPA();
                    break;

                case 14:
                    cout << "Exiting program.\n";
                    break;

                default:
                    cout << "Invalid choice. Try again.\n";
            }
    } while (choice != 14);

    return 0;
}
