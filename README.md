# Xmas_c_codes
This is a repository to show all the c projects done december 2023

# what is C?

C is a procedural high level programming language designed for system and application development. It is a compiled language in the sense that it must pass through the compiler which converts the codes written to a language that the computer understands. It is a general purpose programming Language and it has found lasting use in operating systems, device drivers and protocol stacks and even application development (though this is decreasing with the advent of more high level programming languages). It has also be seen used on different computer architectures ranging from supercomputers to the smallest microcontrollers and embedded systems. It provides low-level access to memory and hardware, making it efficient for tasks like system programming.

# Important Info on C

|                   |                               |
| ----------------- | ----------------------------- |
| **Paradigm**      | Multi-paradigm: imperative (procedural), structured                             |
| **Designed by**   | Dennis Ritchie                                                              |
| **Developer**     | ANSI X3J11 (ANSI C); ISO/IEC JTC 1 (Joint Technical Committee 1) / SC 22 (Subcommittee 22) / WG 14 (Working Group 14) (ISO C) |
| **First appeared**| 1972; 51 years ago                                                      |
| **Stable release**| C17 / June 2018; 5 years ago                                               |
| **Preview release**| C23 (N3096) / April 2, 2023; 8 months ago |
| **Typing discipline**| Static, weak, manifest, nominal                                            |
| **OS**            | Cross-platform                                                             |
| **Filename extensions**| .c, .h                                                                     |
| **Website**       | [ISO C Standard](www.iso.org/standard/74528.html), [WG14](www.open-std.org/jtc1/sc22/wg14/) |
| **Major implementations**| pcc, GCC, Clang, Intel C, C++Builder, Microsoft Visual C++, Watcom C        |
| **Dialects**      | Cyclone, Unified Parallel C, Split-C, Cilk, C*                              |
| **Influenced by** | B (BCPL, CPL), ALGOL 68, PL/I, FORTRAN                                   |
| **Influenced**    | Numerous: AMPL, AWK, csh, C++, C--, C#, Objective-C, D, Go, Java, JavaScript, JS++, Julia, Limbo, LPC, Perl, PHP, Pike, Processing, Python, Rust, Seed7, V (Vlang), Vala, Verilog (HDL), Nim, Zig |

# Pros of using C

C is a very old and unique language. it comes with its own special syntax which has even been adopted by modern day languages. The following are some of the reasons why C is preferred even in this modern age:

- **Structure** : C is very structured in that it allows you to break a larger problem into smaller chunks (modularization). It breaks problems into modules and functions that are easier to debug, modify and develop.

- **Portability** : c has the capability to run on different platforms as it is very much machine-dependent thereby making it possible to run on different machines. Even though C is very unique to the UNIX operating system, it still retains it's portability and works on multiple platforms.

- **Rich standard Library** : C comes with a comprehensive standard library that provides a variety of functions for common tasks such as input/output operations, string manipulation, and memory allocation. These libraries make development easier

- **Efficiency & Performance** : C allows for low-level manipulation of data and has minimal runtime overhead, making it highly efficient. Its proximity to machine-level operations allows for fine-tuning and optimization. Also, C is a compiled language making compilation and execution of code speedy since only required features are included.

- **Extensibility** : C codes are extensible in that when a code is written  in C, more features and functionalies can be added with minor alterations

- **Embedded systems development** : C is widely used in embedded system development because of its efficiency and control over hardware resources.

- **Legacy code compatibility** : Many existing software systems and libraries are written in C. Knowledge of C allows developers to maintain and integrate with legacy codebases.

- **Influences on other languages** :  C has had a significant influence on the development of other programming languages, such as C++, C#, and Objective-C. Learning C provides a solid foundation for understanding many modern languages.

- **Versatility** : C is said to be versatile in two ways. It is general purpose and it can fit in perfectly as a low-level language and still have some of the features of high-level language. C is sometimes classified as a middle level language but that is not a standard though. It is best regarded as a low-level language. C also offers a wide range of features ranging from system programming to application development and embedded systems.

## Cons of C

- **Lack of OOP features** : C is not an object-oriented programming (OOP) language and therefore lacks features such as classes and inheritance. OOP is a feature that supports the creation of subclasses from parent classes but C lacks this feature. Also multiple inheritances is not possible in C unlike languages like C++, C# etc. This lack of OOP makes it difficult to reuse existing code.

- **Lack of Memory Management Safeguards** : C allows direct manipulation of memory, but this freedom can lead to issues like memory leaks, dangling pointers, and buffer overflows if not managed carefully.

- **No Built-in String Type** : C does not have a built-in string type, and strings are typically represented as character arrays. This can lead to complexities and vulnerabilities in string manipulation.

- **Lack of automatic garbage collection** : C lacks automatic garbage collection which is a feature that involves reclaiming memory from objects which are no longer in use in the library or app. This means developers must manually handle memory allocation and deallocation and this can lead to memory related errors if not handled properly.

- **Lack of constructor and destructor** : Since C isn't object oriented, it doesn't offer constructor and destructor features. Constructing or destructing a variable in C must be done manually through a function or by other means.

- **Lack of Run-time checking** : C doesn't display code errors after each line of code; instead, all the errors are presented by the compiler after the program has been written. This can make code checking a challenge, especially for larger programs.

- **Lack of Namespace features** : C lacks namespace features therefore same variables cannot be reused in one scope. It is therefore impossible to declare variables with the same name.

- **Lack of exception handling** : C basically relies on values and error codes for error handling and this can make code complex and error-prone compared to languages with exception handling mechanisms.