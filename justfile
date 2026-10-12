run file="":
    gcc -std=c11 -Wall -Wextra -Wpedantic -g c/{{file}} -o main && ./main
