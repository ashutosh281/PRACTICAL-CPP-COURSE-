
// Game Development - Character Inventory:

// Design a class Character representing a player character in a game with attributes like name, level, and
// inventory. Use an array within the class to store the items in the character's inventory
// Implement member functions to add items to the inventory, display the contents of the inventory, and
// calculate the total weight of the items

#include <iostream>
#include <string>

class Character
{
private:
    std::string name;
    int level;
    static const int MAX_INVENTORY_SIZE = 10;  // Maximum number of items in the inventory
    std::string inventory[MAX_INVENTORY_SIZE]; // Array to store items in the inventory
    int numItems;                              // Current number of items in the inventory

public:
    // Constructor to initialize the character's name, level, and set the number of items to 0
    Character(const std::string &charName, int charLevel) : name(charName), level(charLevel), numItems(0) {}

    // Function to add an item to the inventory
    void addItem(const std::string &item)
    {
        if (numItems < MAX_INVENTORY_SIZE)
        {                               // Check if the inventory is full
            inventory[numItems] = item; // Add the item to the next available slot in the inventory
            numItems++;                 // Increment the number of items in the inventory
            std::cout << "Added '" << item << "' to the inventory." << std::endl;
        }
        else
        {
            std::cout << "Inventory is full. Cannot add more items." << std::endl;
        }
    }

    // Function to display the contents of the inventory
    void displayInventory()
    {
        std::cout << "Inventory for " << name << " (Level " << level << "):" << std::endl;
        if (numItems == 0)
        {
            std::cout << "Inventory is empty." << std::endl;
        }
        else
        {
            for (int i = 0; i < numItems; ++i)
            {
                std::cout << i + 1 << ". " << inventory[i] << std::endl; // Display item number and name
            }
        }
    }

    // Function to calculate the total weight of the items in the inventory
    // For simplicity, assume each item has a weight of 1 unit
    int calculateTotalWeight()
    {
        return numItems; // Total weight is equal to the number of items in the inventory
    }
};

int main()
{
    // Create a character object
    std::string playerName;
    int playerLevel;
    std::cout << "Enter character name: ";
    std::cin >> playerName;
    std::cout << "Enter character level: ";
    std::cin >> playerLevel;
    Character player(playerName, playerLevel);

    // Add items to the inventory
    std::string newItem;
    char choice;
    do
    {
        std::cout << "Enter item to add to inventory: ";
        std::cin >> newItem;
        player.addItem(newItem);

        std::cout << "Do you want to add another item? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    // Display the contents of the inventory
    player.displayInventory();

    // Calculate and display the total weight of items in the inventory
    std::cout << "Total weight of items in inventory: " << player.calculateTotalWeight() << std::endl;

    return 0;
}
