# CS21O-Module-7-Project-3
SNHU CS210 Project 3--Corner Grocer Item Tracker
# Corner Grocer Item-Tracking Program  
**Author:** Evan Jaeger  
**Course:** CS-210  
**Assignment:** Module 7 Project 3  

## Overview  
This C++ program was developed to track and analyze item purchases for the fictional grocery store, *Corner Grocer*. The goal was to practice file I/O, data structures, user interaction, and overall program design in C++. This project demonstrates strong command over reading structured input, processing that data efficiently using maps, and interacting with users through a clean and responsive menu system.

---

## Project Summary  
The application reads data from an input file (`CS210_Project_Three_Input_File.txt`) and calculates the frequency of each item purchased. It provides a menu interface with the following functionality:

1. Look up how many times a specific item was purchased.  
2. Display a list of all items and their corresponding frequencies.  
3. Print a text-based histogram where each asterisk (*) represents one purchase of an item.  
4. Exit the program.

The program also creates a backup file (`frequency.dat`) that stores the computed frequencies for future reference.

---

## Class Design  
The program is organized into a single class, `ItemTracker`, which encapsulates all functionality and follows principles of encapsulation and modularity. Its private member—a `std::map<std::string, int>`—stores item frequencies. The class exposes the following public methods:

- `loadDataFromFile()` – Reads the input file and populates the frequency map  
- `saveFrequenciesToFile()` – Writes backup data to `frequency.dat`  
- `getItemFrequency()` – Returns the frequency of a specific item  
- `printAllFrequencies()` – Displays all items and their frequencies  
- `printHistogram()` – Outputs a histogram using asterisks  

---

## Reflection  

**What did you do particularly well?**  
I effectively applied C++ standard libraries like `map` for efficient data storage and retrieval. The code is clean, well-documented, and logically structured with clear separation between different functionalities. I also ensured the user experience was smooth through intuitive menu options and input validation.

**Where could you enhance your code?**  
I could improve the robustness by handling edge cases, such as blank lines in the input file or invalid characters. Additionally, adding exception handling for file operations would improve security and resilience. Optimizing the program for larger datasets using `unordered_map` could improve performance.

**What skills from this project will be particularly transferable to other projects or course work?**  
Key transferable skills include file I/O, use of associative containers like `map`, basic class design, user interface through console input/output, and writing modular, reusable code. These skills are foundational for both software development and data analysis tasks.

**How did you make this program maintainable, readable, and adaptable?**  
I used consistent formatting and naming conventions throughout the code. Each functionality is encapsulated in its own method, promoting readability and future extensibility. Inline comments guide the reader through the logic. The program’s modular design allows for easy modification or enhancement.

---

## Repository Contents  
- `main.cpp` – Main program entry point  
- `ItemTracker.h` – Class definition  
- `ItemTracker.cpp` – Class implementation  
- `CS210_Project_Three_Input_File.txt` – Sample input file  
- `frequency.dat` – Output backup file  
- `README.md` – This documentation  

---

## How to Run  
1. Open the project in your C++ IDE (e.g., Visual Studio).  
2. Build the project.  
3. Ensure `CS210_Project_Three_Input_File.txt` is in the same directory as the executable.  
4. Run the program and follow the menu prompts.

---

## Repository Link  


---

## Notes  
- Instructor is added as a collaborator.  
- All project files follow C++ best practices for structure and documentation.

