# Lockset Implementation

This is a lockset implementation using Clang for Grad Software Engineering

In order to use the tool, do the following:

1. Go to [this](http://clang-analyzer.llvm.org/checker_dev_manual.html#idea) link and start looking around
2. Download the Clang source either from [here](http://llvm.org/releases/download.html) or [here](https://github.com/llvm-mirror/clang)
3. Add the checker implementation file into the `clang/lib/StaticAnalyzer/Checkers` folder of the Clang download
4. Modify the `lib/StaticAnalyzer/Checkers/Checkers.td` file to include the new analyzer
5. Modify the `lib/StaticAnalyzer/Checkers/CMakeLists.txt` so Clang will use the checker
6. To write the actual checker, check out [this](http://clang-analyzer.llvm.org/checker_dev_manual.html#events_callbacks)
