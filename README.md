# Lockset Implementation

This is a lockset implementation using Clang for Grad Software Engineering

# Pthread Function Script

The pthread function script takes in a file or folder and looks through the files and changes all examples of `pthread_create()` with a regular function assignment in order to make our static analysis stuff work. It is just a preprocessor in order to make the static analysis easier to implement.

In order to use the script you just need to type `thread_func_rename.py filename` or `thread_func_rename.py dirname`. If the user types in a file, the output is put in a file with the name `new_{oldFileName}` in whatever directory the file was in. If the user types in a directory. It makes a new directory with with the name `new_{directoryName}` in whatever directory the input directory was in.

The program does filter out only files that end in `.c` or `.cpp` to do the changes to.

# Some tips

In order to use the tool, do the following:

1. Go to [this](http://clang-analyzer.llvm.org/checker_dev_manual.html#idea) link and start looking around
2. Download the Clang source either from [here](http://llvm.org/releases/download.html) or [here](https://github.com/llvm-mirror/clang)
3. Add the checker implementation file into the `clang/lib/StaticAnalyzer/Checkers` folder of the Clang download
4. Modify the `lib/StaticAnalyzer/Checkers/Checkers.td` file to include the new analyzer
5. Modify the `lib/StaticAnalyzer/Checkers/CMakeLists.txt` so Clang will use the checker
6. To write the actual checker, check out [this](http://clang-analyzer.llvm.org/checker_dev_manual.html#events_callbacks)
