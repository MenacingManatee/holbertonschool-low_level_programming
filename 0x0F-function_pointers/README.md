# 0X0F Function Pointers

## About / synopsis
Introduction in using pointers to functions.

## Built With

* [c] - Betty style formatting

### Project contents

| Project Title | Short Description |
| --- | --- |
|0-print_name|Prints a name using a function pointed to as an input|
|1-array_iterator|iterates through an array, performing an action indicated by a function pointer on each element|
|2-int_index|Searches for an integer in an array using search method indicated by a function pointer|
|3-main.c|Contains main function only. Uses get_op_func to create a pointer to the correct function|
|3-op_functions|Contains functions for the following operators: +. -, *, /, %|
|3-get_op_func|Determines which operation to perform based on argv[2]. Returns pointer to correct function|
|3-calc.h|Contains prototypes for all 3* functions. Contains initialization of op_t struct|
|100-main_opcodes|prints argv[1] bytes of the opcodes from main|