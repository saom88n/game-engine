#! /bin/bash
cc -I Engine/src/ -I Engine/src/Engine/Vendor Engine/src/Engine/main.cxx -lraylib -lGL -lm -lpthread -ldl -lX11 -std=c++20
