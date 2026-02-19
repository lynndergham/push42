## Overview

`libft_project` contains small, standalone implementations of common C standard library functions (prefixed with `ft_`) for learning and reuse in other projects. Each source file may include a minimal `main()` that exercises the function for quick manual testing.

## Files you may find here

Examples of files you may see (file list may vary):

- `ft_isdigit.c`, `ft_isalpha.c`, `ft_isascii.c`, `ft_isprint.c`
- `ft_strlen.c`, `ft_strlcpy.c`, `ft_strlcat.c`, `ft_strchr.c`, `ft_strncmp.c`
- `ft_memset.c`, `ft_bzero.c`, `ft_memcpy.c`, `ft_memmove.c`, `ft_memchr.c`

Open the folder and inspect each `.c` file to see function signatures and any embedded tests.

## Build and run (quick)

Each implementation usually contains a small `main()` test. To compile and run one file on Windows (cmd.exe):

```cmd
rem compile
gcc -Wall -Wextra -Werror "c:\Users\USER\42 commoon core projects\libft_project\ft_memchr.c" -o ft_memchr.exe
rem run
.\ft_memchr.exe
```

On Unix-like shells (Git Bash, WSL):

```bash
gcc -Wall -Wextra -Werror "ft_memchr.c" -o ft_memchr
./ft_memchr
```

Replace `ft_memchr.c` with the implementation you want to test.

## Build a static library (optional)

If you want to create a `libft.a` static library from all `.c` files in this folder:

```cmd
rem Windows (requires ar.exe from GNU binutils / MinGW)
gcc -Wall -Wextra -Werror -c *.c
ar rcs libft.a *.o
```

Note: On Windows you may need MinGW/MSYS or another toolchain that provides `ar` and `ranlib`.

## Testing guidance

- Many files include comparisons against the standard library (`memchr`, `strncmp`, etc.) inside their `main()` — these are quick sanity checks.
- For structured tests, move test code into a `tests/` folder and create a small test runner.
- Edge cases to cover in tests:
  - `size = 0` behavior for `strlcpy`/`mem*` functions
  - Empty strings and null bytes in memory
  - Non-ASCII bytes (values >= 128) for memory functions
  - Overlapping buffers for `memmove`

## Style & conventions

- Functions are `ft_`-prefixed and implemented in plain C.
- Where relevant, `size_t` and `const` are used to match the usual libc prototypes.
- Defensive `NULL` checks may be present in some helpers — check each implementation if you want strict libc-like UB behaviour.