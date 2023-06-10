# Inventory Program

![Inventory Program](inventory-snippet.png "Inventory Program")

The Inventory Program is a command-line application written in the C language. It provides various functionalities for managing an inventory, including registering items, searching for records, updating records, deleting records, and exiting the program. This project is a collaboration group work.

## Usage

1. **Register**: This option allows the user to register items by providing information such as IP address, user, department, type of IP address, MAC address, and connection status.

2. **Search Record**: With this option, the user can search for specific records in the inventory based on certain criteria.

3. **Update Record**: This option enables the user to update existing records in the inventory.

4. **Delete Record**: The user can delete records from the inventory using this option.

5. **Exit**: Selecting this option terminates the program and closes the inventory application.

## Features

- Welcome screen and loading animation upon program launch.
- User-friendly interface with a menu for easy navigation.
- File handling for storing and retrieving inventory records.
- Automatic generation of an XLS file containing records upon program compilation.
  - The XLS file includes all the registered items in a tabular format.
  - Each item is represented as a row in the XLS file, with columns for IP address, user, department, type of IP address, MAC address, and status.
  - This feature allows easy exporting and downloading of the inventory records for further analysis or sharing.
- Visual enhancements such as borders for a better user experience.

## Requirements

- C compiler
- Windows operating system (due to the use of Windows-specific libraries)

## Getting Started

1. Clone the repository.
2. Compile the source code using a C compiler.
3. Run the executable file generated.
4. Follow the on-screen instructions to navigate and use the Inventory Program.

