#include <iostream>

enum class State {
    IDLE,
    COIN_INSERTED,
    ITEM_SELECTED,
    DISPENSED,
    CHANGE_RETURNED
};

int main() {
    State currentState = State::IDLE;

    // Finite automaton loop
    while (currentState != State::CHANGE_RETURNED) {
        // State transition logic
        switch (currentState) {
            case State::IDLE:
                std::cout << "Current state: IDLE" << std::endl;
                // Transition to Coin Inserted state
                currentState = State::COIN_INSERTED;
                break;

            case State::COIN_INSERTED:
                std::cout << "Current state: COIN_INSERTED" << std::endl;
                std::cout << "Please select an item (1 or 2): ";
                int item;
                std::cin >> item;
                // Transition to Item Selected state
                currentState = State::ITEM_SELECTED;
                break;

            case State::ITEM_SELECTED:
                std::cout << "Current state: ITEM_SELECTED" << std::endl;
                // Simulate item dispensing
                std::cout << "Item dispensed." << std::endl;
                // Transition to Dispensed state
                currentState = State::DISPENSED;
                break;

            case State::DISPENSED:
                std::cout << "Current state: DISPENSED" << std::endl;
                std::cout << "Return change? (Y/N): ";
                char choice;
                std::cin >> choice;
                // Transition to Change Returned state if the user wants change
                if (choice == 'Y' || choice == 'y') {
                    currentState = State::CHANGE_RETURNED;
                } else {
                    // Transition back to Idle state
                    currentState = State::IDLE;
                }
                break;
        }

        // Perform actions or computations based on the current state
        // ...
    }

    // Change returned
    std::cout << "Change returned. Vending machine reset." << std::endl;

    return 0;
}
