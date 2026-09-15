# push_swap

42 school project: sort a stack of integers using two stacks (`a` and `b`)
and a limited set of operations, in as few moves as possible. Includes the
bonus `checker` program that validates a sequence of moves.

## Build

```sh
make        # builds push_swap
make bonus  # builds checker
make clean  # removes libft/gnl object files
make fclean # clean + removes push_swap and checker binaries
make re     # fclean + all
```

Both binaries are built with `-Wall -Wextra -Werror -fsanitize=address -g3`.
AddressSanitizer is intentionally left on for every build (debug and
release) to catch memory bugs immediately; it requires `libasan` at
runtime, which is present by default on any system with a recent
gcc/clang toolchain.

## Usage

```sh
./push_swap 2 1 3 6 5 8
```

Prints the list of operations (one per line) needed to sort the stack in
ascending order. On invalid input (non-integer argument, duplicate value,
or a value outside the `int` range) it prints `Error` to stderr and exits
with status 1. With no arguments it does nothing and exits 0. An
already-sorted stack produces no output.

### Operations

`sa` `sb` `ss` `pa` `pb` `ra` `rb` `rr` `rra` `rrb` `rrr` — standard
push_swap operation set (swap top two, push between stacks, rotate,
reverse rotate).

### Algorithm

- 2 elements: single `sa` if needed.
- 3 elements: direct case analysis (`sort_3n`).
- 4-5 elements: push the smallest element(s) to `b`, sort the rest in `a`,
  push back (`sort_4n` / `sort_5n`).
- 6+ elements: a reference array of the sorted values is built once, `a`
  is walked in chunks (bucket size scaled to input size) pushing matching
  values into `b` in sorted order, then `b` is drained back into `a`.

## checker (bonus)

```sh
./push_swap 2 1 3 6 5 8 | ./checker 2 1 3 6 5 8
```

Reads operations from stdin (one per line, same syntax as above), applies
them to a stack built from its arguments, and prints `OK` if the result is
sorted (and `b` is empty) or `KO` otherwise. Same argument validation and
`Error` behavior as `push_swap`.

## License

MIT, see [LICENSE](LICENSE).
