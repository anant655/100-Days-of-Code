# 100 Days of Code — C Solutions (Q56–Q145)

This repository contains beginner-friendly C source files for Questions 56 to 145.

## Folder layout

Each solution is stored in its Day folder as an individual source file:

```text
Day 28/
  Q56.c
Day 29/
  Q57.c
  Q58.c
...
Day 95/
  Q145.c
```

The `.c` files are the actual C source code. They can be opened and edited in VS Code, Code::Blocks, Dev-C++, or another C editor.

## Compile and run one program

With GCC installed, open a terminal in the question's folder and run:

**Windows**
```bash
gcc Q56.c -o Q56.exe
Q56.exe
```

**Linux / macOS**
```bash
gcc Q56.c -o Q56
./Q56
```

Replace `Q56` with the question number you want to run.

## Compile all programs on Windows

Run `compile_all.bat` from the repository's main folder. It will create an `.exe` next to each C source file for which GCC compiles successfully. You need GCC (for example, MinGW-w64) added to your PATH.

## Notes

- Each question is a separate program with its own `main()`; compile and run one question at a time.
- Array and matrix examples use fixed-size arrays and check their input sizes.
- File-handling programs use the filenames stated in the question (such as `info.txt`, `input.txt`, `output.txt`, and `numbers.txt`). Run them from the folder where the required text files are present.
- Where the question did not specify a number of student records, Q130 uses three records as a simple example.
- Q99 is specifically for dates in the `dd/04/yyyy` format, as written in the question.
- The enum section follows the supplied question list; Q140–Q145 use structures as their question statements require.

These are source files, not prebuilt Windows executables. Compile them on your computer using the commands above or the batch file.
