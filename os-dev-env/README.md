# Operating System Development Environment

This project is a development environment for creating an operating system using C, C++, and Assembly language. The OS can be run in a virtual machine using QEMU.

## Directory Structure

- `src/c/main.c`: Main C file for the OS kernel.
- `src/cpp/main.cpp`: Main C++ file for additional OS functionalities.
- `src/asm/boot.asm`: Assembly file for the bootloader.
- `include/c/header.h`: Header file for the C code.
- `include/cpp/header.hpp`: Header file for the C++ code.
- `include/asm/boot.inc`: Include file for the assembly code.
- `Makefile`: Used by `make` to compile and link the code.
- `qemu/qemu-config`: Configuration file for QEMU.

## Building the OS

To build the OS, navigate to the project root directory and run the `make` command. This will compile and link the C, C++, and assembly code into an executable file.

## Running the OS

To run the OS, you need to have QEMU installed on your machine. If you don't have it, you can download it from the [official QEMU website](https://www.qemu.org/download/).

Once you have QEMU installed, you can run the OS in a virtual machine using the following command:

```
qemu-system-x86_64 -fda os.bin
```

Replace `os.bin` with the name of your OS binary file.

## Contributing

If you want to contribute to this project, please make sure to follow the code structure and add comments to your code. After you've made your changes, you can submit a pull request.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.