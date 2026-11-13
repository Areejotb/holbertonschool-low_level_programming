# Simple Calculator

A simple command-line calculator written in C.

## Description

The program prints a welcome line, displays a menu
(Add, Subtract, Multiply, Divide, Quit) and lets the
user quit by choosing option 0.

## Compilation

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Usage

    ./calculator

## Example

    Simple Calculator
    1) Add
    2) Subtract
    3) Multiply
    4) Divide
    0) Quit
    Choice: 0
    Bye!

## Number type

The calculator uses decimal numbers (`double`) for all operations.
Results are printed with `%g`, so whole numbers appear without a
decimal part (e.g. `35`) and others appear as decimals (e.g. `2.5`).

## Division

Dividing by zero prints `Error: division by zero` instead of a result.
