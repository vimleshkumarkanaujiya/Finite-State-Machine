# Finite-State-Machine
A FSM (Finite State Machine) or FSA (Finite State Automaton) Model


Explanation:

- The `State` enum class represents the different states of the finite automaton: `IDLE`, `COIN_INSERTED`, `ITEM_SELECTED`, `DISPENSED`, and `CHANGE_RETURNED`.

- The `currentState` variable holds the current state of the finite automaton. It is initially set to `IDLE`.

- The program enters a loop that continues until the `currentState` becomes `CHANGE_RETURNED`.

- Inside the loop, the state transition logic is implemented using a `switch` statement. Depending on the current state, appropriate actions are taken and the `currentState` is updated to the next state.

- In each case of the `switch` statement, the current state is printed to the console to indicate the progress of the automaton.

- The user is prompted for input based on the current state. For example, in the `COIN_INSERTED` state, the user is asked to select an item.

- After each state transition, you can perform actions or computations specific to that state. In this example, it simulates the dispensing of an item.

- Based on user input or certain conditions, the automaton transitions to different states. For example, in the `DISPENSED` state, the user is prompted whether they want change. If the answer is yes, the automaton transitions to the `CHANGE_RETURNED` state. Otherwise, it transitions back to the `IDLE` state.

- Once the `CHANGE_RETURN
