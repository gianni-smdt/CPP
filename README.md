# Collection of miscellaneous C++ codes for studying

## Table of Contents
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [License](#license)
- [Contact](#contact)

## Getting Started
### Prerequisites
#### Compiling with GCC: 
To run these codes, you'll need a newer version of the GNU Compiler Collection (GCC) and the GNU Debugger (GDB):
- Debian GNU/Linux and Debian-based distributions (e.g. Ubuntu, Linux Mint, MX Linux, ...):
  ```bash
  sudo apt-get install gcc, gdb
  ```
- Arch Linux and Arch-based distrubutions (e.g. Manjaro, EndeavourOS, Garuda, ...):
  ```bash
  sudo pacman -S gcc, gdb
  ```
- For Windows, you can use development environments like MinGW 

### Installation
- Clone the repository to your local machine:
  ```bash 
  git clone https://github.com/gianni-smdt/CPP_Learning.git
  ```
- Navigate to the repository's directory: 
  ```bash
  cd CPP_Learning
  ```

## Usage
- Navigate to the directory of your desired code and execute:

    ```bash
    g++ <filename>.cpp -o <filename>
    ```
- You can add additional parameters. For example, you can add "-Wall" to get all compiler warnings or "-std=c++20" to set C++20 as the standard C++ version to use: 
    ```bash
    g++ <filename>.cpp -Wall -std=c++20 -o <filename>
    ```
- Get the output of your compiled code: 
    ```bash
    ./<filename>
    ```

## License
Distributed under the GPL-3.0 License. See `LICENSE` file for more details.

## Contact
Maintainer: [Gianni Schmidt](mailto:giannischmidt2001@gmail.com)

For questions, issues or suggestions, please open an issue in this repository or reach out directly.
