# 🔐 Simple Password Manager (C++)

A basic CLI-based password manager written in C++ for educational purposes. Users can store and retrieve website credentials using simple file I/O.

> ⚠️ **Disclaimer:** This project is for learning purposes only. Passwords are stored in **plain text** and are **not encrypted**. Do not use this to store real passwords.

---

## 📋 Features

- Store website credentials (website, username, password) to a local text file
- Retrieve stored credentials with an admin password
- Simple menu-driven interface

---

## 🚀 How to Use

1. Compile the program:
```bash
g++ -o password_manager simple-password-manager.cpp
```

2. Run it:
```bash
./password_manager
```

3. Choose an option from the menu:
   - `1` → Enter new credentials
   - `2` → View saved credentials
   - `3` → Exit

---

## 🔑 Admin Password

The default admin password to view stored credentials is:
```
admin
```

You can change it in the source code inside the `password` class:
```cpp
string apassword = "admin";
```

---

## 📁 Storage

Credentials are saved in a local file called `password.txt` in the following format:
```
website username password
```

---

## 🛠️ Requirements

- C++ compiler (g++ recommended)
- Standard C++ libraries

---

## 📌 Notes

- This is a beginner-level project built for practicing OOP and file I/O in C++
- Not suitable for production use
