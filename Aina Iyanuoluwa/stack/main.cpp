#include <iostream>
using namespace std;

class FriendStack {
private:
    string* friends;  // Pointer to dynamically allocated array of strings
    int top;          // Index of the top element in the stack
    int maxSize;      // Maximum number of friends allowed

public:
    // Constructor: Initialize the stack with a size and allocate memory
    FriendStack(int size) {
        maxSize = size;
        top = -1;
        friends = new string[size];  // Dynamically allocate memory for the stack
    }

    // Push operation: Adds a new friend to the stack
    void push(const string friendName) {
        if (top < maxSize - 1) {  // Check if there's space for more friends
            top++;
            friends[top] = friendName;  // Add friend to the stack
            cout << friendName << " has been added to your stack!" << endl;
        } else {
            cout << "No more space for friends!" << endl;
        }
    }

    // Pop operation: Removes a friend from the stack
    string removeByName(const string friendName) {
        for (int i = 0; i <= top; i++) {
            if (friends[i] == friendName) {
                // Shift all subsequent friends down to remove the friend
                for (int j = i; j < top; j++) {
                    friends[j] = friends[j + 1];
                }
                top--;  // Decrease the top index after removal
                return friendName + " has been removed from your stack!";
            }
        }
            return friendName + " is not in the stack!";
    }

     string peek() {
        if (top == -1) {
            return "The stack is empty!";
        }
        return friends[top];
    }

    // Destructor: Clean up dynamically allocated memory
    ~FriendStack() {
        delete[] friends;  // Free the dynamically allocated array
    }

    // Optional: Print all friends in the stack (for testing)
    void printStack() const {
        cout << "Friends in the stack:" << endl;
        for (int i = 0; i <= top; i++) {
            cout << i + 1 << ". " << friends[i] << endl;
        }
    }
};

int main() {
    int numFriends;
    cout << "How many friends do you have? ";
    cin >> numFriends;

    cin.ignore();

    // Create the stack
    FriendStack stack(numFriends);

    // Ask the user for each friend's name and add them to the stack
    for (int i = 0; i < numFriends; i++) {
        string name;
        cout << "Enter name of friend " << (i + 1) << ": ";
        getline(cin, name);  // Get the name from the user
        stack.push(name);  // Add the friend's name to the stack
    }

    // Optionally print the stack of friends
    stack.printStack();

    string choice;
    cout << "Do you want to see the first person in your friends stack? (Yes/No): ";
    cin >> choice;

    if (choice == "Yes") {
        cout << "The top friend is: " << stack.peek() << endl;
    }

    cout << "Do you want to remove a specific friend from the stack? (Yes/No): ";
    cin >>choice;

    if (choice == "Yes") {
        string friendToRemove;
        cout << "Enter the name of the friend you want to remove: ";
        cin.ignore();
        getline(cin, friendToRemove);  // Get the name of the friend to remove
        stack.removeByName(friendToRemove);  // Remove the specified friend
        stack.printStack();  // Print the updated stack
    }
    return 0;
}
