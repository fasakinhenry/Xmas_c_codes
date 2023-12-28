# Hello World in C

Welcome to the world of writing C!

## Getting started with C

C is a low-level language(sometimes referred to as a mid-level language). It has the following features:

- C is an imperative (procedural) language
- All the code has to be inside a function
- C files (.c) are the source files for your program
- C is a compiled language so it must be compiled with a compiler (for example GCC) to create an executable file"

### Important sources to learn C

- From this github Repository 😂
- [Learn about C](https://en.wikipedia.org/wiki/C_(programming_language))
- [“C” Programming Language: Brian Kernighan - video](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Learn why C is awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C-part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C-part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program compilation process](https://www.youtube.com/watch?v=VDslRumKvRA)

### Prerequisites

- Make sure you have a C compiler installed on your system. If not, you can install one like GCC. On Linux, gcc is automatically present.

### Install GCC on Windows:

1. **Download MinGW-w64 Installer:**
   - Visit the [MinGW-w64 download page](https://mingw-w64.org/doku.php) and click on the "Download" link.
   - Choose the architecture (32-bit or 64-bit) based on your system.

2. **Run the Installer:**
   - Execute the downloaded installer.
   - During installation, choose the following options:
     - Select the "Architecture" (e.g., x86_64 for 64-bit).
     - Set the "Threads" to "posix."
     - Choose the installation directory (e.g., `C:\mingw-w64`).

3. **Add MinGW-w64 to System Path:**
   - After installation, add the MinGW-w64 bin directory to the system PATH.
     - Right-click on "This PC" or "Computer" and select "Properties."
     - Click on "Advanced system settings."
     - Click on the "Environment Variables" button.
     - Under "System variables," find and select the "Path" variable, then click "Edit."
     - Click "New" and add the path to the "bin" directory (e.g., `C:\mingw-w64\mingw64\bin`).

4. **Verify Installation:**
   - Open a command prompt and type the following command to check if GCC is installed:
     ```bash
     gcc --version
     ```

### Installation Verification:

5. **Compile a Test Program:**
   - Create a simple C program, e.g., `test.c`:
     ```c
     #include <stdio.h>
     int main() {
         printf("Hello, GCC!\n");
         return 0;
     }
     ```
   - Save the file.

6. **Compile and Run the Test Program:**
   - Open a command prompt and navigate to the directory containing `test.c`.
   - Compile the program using the following command:
     ```bash
     gcc test.c -o test
     ```
   - If there are no errors, run the compiled program:
     ```bash
     ./test
     ```

7. **Verify Output:**
   - If everything is set up correctly, you should see the output:
     ```
     Hello, GCC!
     ```

If you see the expected output, GCC is successfully installed and configured on your Windows system.

## A sample hello world program in C

```C
#include <stdio.h>

/**
 * main - Entry point of our program
 * prints the phrase hello world
 * return: Always 0 (success)
 */

int main(void)
{
	/* Print a phrase*/
	printf("Hello world");
}
```

Check out the code [here](../concepts/0x00-Hello_world/hello_world.c)

### Code examples

1. Write a script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

- #### Test

```
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
henqsoft@ubuntu:~/c/0x00$ export CFILE=main.c
henqsoft@ubuntu:~/c/0x00$ ./0-preprocessor 
henqsoft@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
henqsoft@ubuntu:~/c/0x00$
```

[Go Home](../README.md)
[previous](./Introduction.md)
[Next](./introduction.md)
