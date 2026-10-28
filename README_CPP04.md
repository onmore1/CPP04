# CPP04

Subtype polymorphism, abstract classes and deep copies.

Part of my C++ modules at [Codam](https://www.codam.nl) (42 Network), written in C++98.

**Concepts:** virtual functions, abstract classes, deep copy, dynamic memory ownership.

## Exercises

| Folder | Exercise | What it does |
| --- | --- | --- |
| `ex00` | Polymorphism | `Animal`, `Dog`, `Cat` with virtual `makeSound()`, and a `WrongAnimal` counter-example. |
| `ex01` | I don't want to set the world on fire | Each animal owns a `Brain`; copies are deep, not shallow. |
| `ex02` | Abstract class | `Animal` made abstract so it can no longer be instantiated. |

## Build and run

Each exercise is self-contained. From the repository root:

```sh
cd ex00
make
./<executable>
```

`make fclean` removes the build output. Code is compiled with `-Wall -Wextra -Werror -std=c++98`.

## All modules

[CPP00](https://github.com/onmore1/CPP00) · [CPP01](https://github.com/onmore1/CPP01) · [CPP02](https://github.com/onmore1/CPP02) · [CPP03](https://github.com/onmore1/CPP03) · **CPP04** · [CPP05](https://github.com/onmore1/CPP05)
