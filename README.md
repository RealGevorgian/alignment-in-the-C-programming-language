# Alignment in the C Programming Language

## Overview

This repository contains a series of C programming assignments focused on understanding data alignment and memory management. The project explores how different data types and struct configurations are aligned in memory, including the use of `#pragma pack` to control padding. It serves as a practical demonstration for Homework 6: Alignment.

## Project Structure

```plaintext
alignment_in_the_C_programming_language/
├── README.md             # Project documentation
├── src/                  # Source code files
│   ├── assignment1.c     # Code for Assignment 1: Data Alignment
│   ├── assignment2.c     # Code for Assignment 2: Struct Padding
│   ├── assignment3.c     # Code for Assignment 3: Data Alignment with #pragma pack
├── output screenshots/   # Screenshots of program outputs
│   ├── assignment1_output.png
│   ├── assignment2_output.png
│   ├── assignment3_output.png
├── docs/                 # Explanations and documentation
│   ├── assignment1_explanation.txt
│   ├── assignment2_explanation.txt
│   ├── assignment3_explanation.txt
```

## Installation

### Prerequisites

* **Ubuntu OS** or a compatible Linux distribution
* **GCC Compiler**: For compiling C code

  ```bash
  sudo apt update
  sudo apt install gcc
  ```
* **Git**: For version control

  ```bash
  sudo apt install git
  ```
* **SSH Client**: For remote access (optional, if using a server)

  ```bash
  sudo apt install openssh-client
  ```

### Setup

1. Clone the repository:

   ```bash
   git clone git@github.com:RealGevorgian/alignment-in-the-C-programming-language.git
   cd alignment_in_the_C_programming_language
   ```
2. Ensure SSH keys are configured (if using SSH):

   * Generate a key (if not done):

     ```bash
     ssh-keygen -t ed25519 -C "gevorgvgevorgyan@gmail.com" -f ~/.ssh/id_ed25519_new
     ```
   * Add to SSH agent:

     ```bash
     eval "$(ssh-agent -s)"
     ssh-add ~/.ssh/id_ed25519_new
     ```
   * Add the public key to GitHub under Settings > SSH and GPG keys.

## Usage

### Running the Programs

1. Compile a specific assignment (e.g., Assignment 1):

   ```bash
   gcc -o assignment1 src/assignment1.c
   ./assignment1
   ```
2. View output and compare with screenshots in `output screenshots/`.
3. Check explanations in `docs/` for detailed observations.

### Example Output

* **Assignment 1**: Sizes and addresses of `int`, `char`, `double`, and `short`.
* **Assignment 2**: Struct sizes and field addresses with different orders.
* **Assignment 3**: Struct sizes and addresses with various `#pragma pack` values.

## Contributing

1. Fork the repository.
2. Create a new branch:

   ```bash
   git checkout -b feature-branch
   ```
3. Make changes and commit:

   ```bash
   git add .
   git commit -m "Describe your changes"
   ```
4. Push to your fork:

   ```bash
   git push origin feature-branch
   ```
5. Submit a pull request.

