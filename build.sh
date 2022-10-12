#! /bin/bash
cc -I Engine/src/ -I Engine/src/Engine/Vendor Engine/src/Engine/main.cxx -I Engine/src/Engine/Vendor/libraylib.a -lraylib -lGL -lm -lpthread -ldl -lX11 -std=c++20
