#! /bin/bash

clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL src/lib/libraylib.a src/main.c -Wformat-extra-args -Wint-conversion -Wunused-value -o main
