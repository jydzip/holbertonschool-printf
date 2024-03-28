#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format -o _printf_tests.out *.c

if [ $? -eq 0 ]; then
    echo "Compilation OK! Execution in progress..."

    output=$(./_printf_tests.out)
    valgrind_output=$(valgrind --leak-check=full ./_printf_tests.out 2>&1)

    expected_outputs=(
        "Display string : Hello, world!"
        "Length of string displayed : 31"
        "Display integer : 10"
        "Display character : A"
        "Display percentage : %"
        "Display unsigned int : 10"
        "Display binary : 1101001"
    )
    test_success=true

    while IFS= read -r line; do
        found=false
        for expected_output in "${expected_outputs[@]}"; do
            if [ "$line" = "$expected_output" ]; then
                found=true
                break
            fi
        done

        if [ "$found" = false ]; then
            echo "Test failed. Unexpected output: $line"
            test_success=false
        fi
    done <<< "$output"

    if [[ $valgrind_output == *"ERROR SUMMARY: 0 errors from 0 contexts"* ]]; then
        echo "Valgrind test: Success!"
    else
        echo "Valgrind test: Failure. Memory errors or leaks detected."
        test_success=false
    fi

    if [ "$test_success" = true ]; then
        echo "Running test: Success!"
    else
        echo "Running test: Failure."
    fi

else
    echo "Compilation failed."
fi
