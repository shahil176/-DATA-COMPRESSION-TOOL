# -DATA-COMPRESSION-TOOL
*COMPANY*: CODTECH IT SOLUTIONS PVT.LTD
**NAME*: SHAHIL MURMU
*INTERN ID*: CT04DF2444
*DOMAIN*: C LANGUAGE
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH KUMAR
#Task 4 Description – Data Compression Tool using Run-Length Encoding (RLE)

In Task 4, the objective was to design and implement a basic data compression tool using the Run-Length Encoding (RLE) algorithm in the C programming language. Data compression is a fundamental concept in computer science, used extensively in fields like file storage, transmission, and multimedia. The main purpose of this task was to build a functional tool that could perform lossless compression of text-based data and demonstrate how repeated patterns can be encoded efficiently.

The program focuses on two main operations:

1. Creating a text file with user input.


2. Compressing the contents of the file using RLE.



The concept of Run-Length Encoding is quite simple yet powerful. It replaces sequences of repeated characters with a single character followed by the count of repetitions. For example, the string aaabbbcc would be compressed to a3b3c2. This reduces file size when there are many repeating characters, making it a great algorithm for basic text-based compression scenarios.

The program is structured into modular functions to ensure clarity and separation of logic. The first function, createFile(), is responsible for capturing the user's input text and saving it to a file named example.txt. It uses fopen() in "w" mode to either create a new file or overwrite an existing one. The input is taken using fgets() to allow multi-word and space-containing text, and it carefully handles newline characters using strlen() and strcspn() techniques to ensure clean data storage.

Once the file is created, the compressFile() function is invoked. This function opens the original file (example.txt) in read mode and a new file (compressed.txt) in write mode to store the compressed output. It uses a character-wise traversal of the input file and keeps track of consecutive occurrences of the same character. Each time a different character is encountered, it writes the previous character along with its count to the compressed file. The logic also ensures that the final sequence is written to the file after the loop ends, avoiding any data loss.

Edge cases such as an empty input file or failed file creation are properly handled using if conditions and informative error messages. This makes the tool more robust and user-friendly.

The main() function brings everything together. It defines the input and output file names and then calls the createFile() and compressFile() functions sequentially. It also includes fflush(stdin) to avoid input buffer issues that could otherwise cause unwanted behavior when switching between different types of input methods.

This task is highly valuable for understanding how real-world compression tools function at a basic level. It provides exposure to file handling in C, string and character manipulation, loop constructs, conditionals, and dynamic user interaction. More importantly, it introduces the student to data optimization techniques — a crucial topic in both software engineering and system design.

The RLE algorithm used here is a lossless compression technique, meaning no information is lost in the process. It’s especially useful in scenarios where patterns are highly repetitive, such as simple logs, black-and-white image data, and structured text. Although RLE is not ideal for complex or non-repetitive data (as it may increase the file size), it is extremely helpful as an educational example for understanding more complex compression algorithms like Huffman coding or LZW.

In conclusion, this task not only helped in developing a useful compression utility but also laid the foundation for deeper learning in areas like data encoding, compiler optimization, memory efficiency, and storage management. It’s a great example of how simple programming logic can solve practical problems effectively.
#OUTPUT:
![Image](https://github.com/user-attachments/assets/0a5b9c83-486b-4206-9556-0bd2248921fb)
