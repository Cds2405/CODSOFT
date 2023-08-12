#include <iostream>
#include <vector>

struct Task {
    std::string description;
    bool completed;
};

class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        Task newTask;
        newTask.description = description;
        newTask.completed = false;
        tasks.push_back(newTask);
        std::cout << "Task added: " << description << std::endl;
    }

    void viewTasks() {
        std::cout << "Tasks:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". ";
            std::cout << (tasks[i].completed ? "[X] " : "[ ] ");
            std::cout << tasks[i].description << std::endl;
        }
    }

    void deleteTask(size_t index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            std::cout << "Task deleted." << std::endl;
        } else {
            std::cout << "Invalid task index." << std::endl;
        }
    }
};

int main() {
    ToDoList toDoList;

    while (true) {
        std::cout << "Commands: add | view | delete | exit" << std::endl;
        std::string command;
        std::cin >> command;

        if (command == "add") {
            std::cout << "Enter task description: ";
            std::string description;
            std::cin.ignore(); // Clear the newline character
            std::getline(std::cin, description);
            toDoList.addTask(description);
        } else if (command == "view") {
            toDoList.viewTasks();
        } else if (command == "delete") {
            std::cout << "Enter task index to delete: ";
            size_t index;
            std::cin >> index;
            toDoList.deleteTask(index - 1);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command. Try again." << std::endl;
        }
    }

    return 0;
}
