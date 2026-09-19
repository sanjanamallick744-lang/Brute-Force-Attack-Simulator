# 🔐 Brute-Force Attack Simulator

## 📌 Overview

**Brute-Force Attack Simulator** is a beginner-friendly cybersecurity project developed using **C++**. The program demonstrates the basic concept of a brute-force attack by systematically generating possible character combinations and comparing them with a predefined dummy password.

The project is designed for **educational purposes** to help understand how repeated password guessing works and why stronger passwords provide better security.

---

## 🎯 Objectives

* Understand the basic concept of brute-force attacks.
* Demonstrate systematic password guessing.
* Count the number of attempts required to find a password.
* Understand the relationship between password complexity and security.
* Practice loops, conditions, strings, and functions in C++.

---

## ✨ Features

* 🔑 Uses a predefined dummy password.
* 🔄 Generates possible character combinations.
* 🔎 Compares each combination with the target password.
* 📊 Counts the total number of attempts.
* ✅ Displays the password when it is found.
* 💻 Runs as a simple console application.
* 🚫 Does not interact with real accounts or online systems.

---

## 🛠️ Technologies Used

* **Programming Language:** C++
* **IDE:** Dev-C++
* **Type:** Console Application

### C++ Concepts Used

* Variables
* Strings
* Loops
* Conditional statements
* Functions
* Character arrays
* Nested loops

---

## ⚙️ How It Works

The simulator follows these steps:

```text
Start Program
      ↓
Set Dummy Password
      ↓
Generate Possible Combinations
      ↓
Compare Combination with Password
      ↓
Password Matched?
   ↙          ↘
 No            Yes
 ↓              ↓
Next Attempt   Display Password
 ↓              ↓
Continue       Display Attempts
```

---

## 🚀 How to Run

### 1. Open Dev-C++

Open the `main.cpp` file in **Dev-C++**.

### 2. Compile the Program

Select:

```text
Execute → Compile
```

or use the compile shortcut available in your Dev-C++ version.

### 3. Run the Program

Run the compiled program using:

```text
Execute → Run
```

The simulator will display the password attempts and the total number of attempts required.

---

## 📊 Sample Output

```text
========================================
       BRUTE-FORCE ATTACK SIMULATOR
========================================

Target Password: abc

Starting simulation...

Attempt 1  : aaa
Attempt 2  : aab
Attempt 3  : aac
...
Attempt 27 : abc

----------------------------------------
Password Found!
Password       : abc
Total Attempts : 27
----------------------------------------

This is an educational simulation.
No real account or system was accessed.
```

---

## 🔐 Cybersecurity Concepts

This project introduces the concept of **brute-force attacks**, where an attacker systematically tries possible password combinations until a matching password is found.

It also demonstrates why password security depends on factors such as:

* Password length
* Character variety
* Number of possible combinations
* Resistance to repeated guessing attempts

---

## 📚 Learning Outcomes

After completing this project, you can understand:

* How brute-force password guessing works.
* How nested loops can generate combinations.
* How passwords
