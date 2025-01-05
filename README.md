# 🧵 String Library 📚

> **A versatile C++ library for string manipulation and operations. 🚀**

---

## 🌟 Project Overview

This C++ project provides a **String Manipulation Library** 🧵 that offers a wide range of functionalities for handling and transforming strings. The library includes operations such as counting letters, changing case, trimming, and splitting strings. It is designed to simplify common string tasks and improve code readability.

---

## ✨ Features

### 📝 String Operations
- **Length Calculation**:
  - `Length()`: Get the length of the string.
- **Case Modification**:
  - `Upper_First_Letter_Of_Each_Word()`: Capitalize the first letter of each word.
  - `Lower_First_Letter_Of_Each_Word()`: Lowercase the first letter of each word.
  - `Upper_All_String()`: Convert the entire string to uppercase.
  - `Lower_All_String()`: Convert the entire string to lowercase.
  - `Invert_All_Letters_Case()`: Invert the case of each letter.
- **Letter Counting**:
  - `Count_Letters()`: Count the total number of letters.
  - `Count_Small_Letters()`: Count lowercase letters.
  - `Count_Capital_Letters()`: Count uppercase letters.
  - `Count_Specific_Letter()`: Count occurrences of a specific letter.
  - `Count_Vowels()`: Count the vowels in the string.
- **Word and Character Operations**:
  - `Print_First_Letter_Of_Each_Word()`: Print the first letter of each word.
  - `Count_Words()`: Count the number of words.
  - `Split()`: Split the string into words.
  - `Join_String()`: Join a list of strings with a delimiter.
  - `Reverse_Words_In_String()`: Reverse the order of words.
  - `Replace_Words()`: Replace occurrences of a word with another.
  - `Remove_Punctuations()`: Remove punctuation from the string.
- **Trimming**:
  - `Trim_Left()`: Remove leading spaces.
  - `Trim_Right()`: Remove trailing spaces.
  - `Trim()`: Remove both leading and trailing spaces.

---

## 🏗️ Code Structure

### 📊 Data Structures
- **clsString**: Class to encapsulate string operations with a private `_Value` member and various public methods for string manipulation.

### 🔢 Enumerations
- **enWhatToCount**: Enum to specify types of letter counting (small letters, capital letters, all).

### 🛠️ Methods
- Comprehensive methods for various string manipulations such as changing case, counting characters, splitting and joining strings, and more (refer to the code comments for details).

---

## ⚙️ How It Works

### Core Components
1. **String Manipulation**:
   - Use member functions or static methods to perform operations on the string.
   - Most methods either return a new string or directly modify the private `_Value`.
2. **User Input**:
   - Methods can either work on the internal `_Value` or take an external string as input.
3. **Efficient Operations**:
   - The library handles common tasks efficiently, providing reusable code for frequent string operations.

---

## 📚 Further Improvements

- 🔒 **Optimization**: Improve the performance of string operations for large inputs.
- 🖥️ **Additional Features**: Include more advanced string manipulation methods like regex support.
- 🛠️ **Documentation**: Enhance in-code comments and provide more examples for each method.
- 📜 **Unit Tests**: Add unit tests to ensure reliability and correctness of the library functions.

---

## ⚙️ Technologies Used

- **Language**: C++ 🖥️
- **Programming Paradigm**: Object-Oriented Programming (OOP) 💻
- **File Handling**: Basic file I/O operations for potential data persistence 📂
- **Data Structures**: Vectors for dynamic string management 📊

---

## 🎯 Learning Outcomes

This project demonstrates several key C++ programming concepts:
- ✅ **Class Design**: Learn to encapsulate data and behavior in classes.
- ✅ **String Manipulation**: Perform a variety of operations on strings efficiently.
- ✅ **Error Handling**: Ensure methods handle edge cases and invalid inputs gracefully.
- ✅ **Code Reusability**: Use static methods and member functions to make code reusable and maintainable.

---

## 📜 License

This project is open-source. Use it, modify it, share it! 🎉

Feel free to fork, modify, and use this project as a starting point for your own C++ applications! 🚀

---

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request. 🙌

---

## 🏁 Ready to Explore?

### 🚀 How to Run
1. **Download** the repository to your local machine. 📥
2. **Include** the header file in your C++ project. 💻
3. **Use** the `clsString` class to perform various string manipulations. 🎮

---
