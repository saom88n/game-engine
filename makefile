main: src/* lib/* core/*
		clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL lib/libraylib.a src/main.c -Wformat-extra-args -Wint-conversion -Wunused-value -o main
