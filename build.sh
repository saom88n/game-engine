#! /bin/bash
cc -I Engine/src/ -I Engine/src/Engine/Vendor Engine/src/Engine/main.cpp -lraylib -lGL -lm -lpthread -ldl -lX11 -std=c++20
