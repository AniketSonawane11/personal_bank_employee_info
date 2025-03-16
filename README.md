# Personal, Bank & Employment Info Management System

## Description
This program is a simple C-based system that manages and stores personal, bank, and employment details of individuals using a linked list structure. It allows users to:

- Add personal details (name, mobile number, email)
- Store bank account details (account number, type, balance)
- Maintain employment details (company, position, department, salary)
- Display stored information

## Features
- Uses a linked list structure for dynamic storage
- Provides an interactive menu for user input
- Supports multiple individuals' information storage
- Displays formatted details on request

## How to Use
1. Compile the program using a C compiler:
   ```bash
   gcc info_management.c -o info_management
   ```
2. Run the executable:
   ```bash
   ./info_management
   ```
3. Follow the menu options:
   - `1` to add a new person's information
   - `2` to display stored information
   - `3` to exit the program

## Requirements
- C compiler (e.g., GCC)
- Basic knowledge of C programming

## Example Input/Output
```
1 - ADD ANOTHER PERSON'S INFO
2 - DISPLAY INFO
3 - EXIT

Enter your choice: 1

PERSON INFO
ENTER YOUR NAME: John Doe
ENTER MOB NO.: 9876543210
ENTER E-MAIL: johndoe@example.com

BANK INFO
ENTER YOUR ACC_NO: 123456789
1 - SAVING
2 - CURRENT
ENTER ACC_TYPE: 1
ENTER ACC_BALANCE: 5000

EMPLOYEE INFO
ENTER COMPANY NAME: ABC Corp
ENTER POST: Developer
ENTER DEPARTMENT: IT
ENTER SALARY: 60000

---------------------------------------

2 - DISPLAY INFO

PERSONAL DETAILS
NAME: John Doe
MOB NO: 9876543210
E-MAIL: johndoe@example.com

BANK DETAILS
ACC_NO: 123456789
ACC_TYPE: SAVING
ACC_BALANCE: 5000

COMPANY DETAILS
COMPANY NAME: ABC Corp
POST: Developer
DEPARTMENT: IT
SALARY: 60000
```

## Author
- **Aniket Sonawane**  

## License
This project is open-source and available under the MIT License.
