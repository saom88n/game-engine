#! /bin/bash
cc -I Engine/src/ Engine/src/Engine/main.cpp -lraylib -lGL -lm -lpthread -ldl -lX11 -std=c++20
