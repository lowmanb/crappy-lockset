# Examples to Run

### hello.c

You can run this check by running something like the following which checks for divide by zero errors:

`clang --analyze -Xclang -analyzer-checker=core.DivideZero hello.c`

This produces a report where you can see all the errors it detects.
