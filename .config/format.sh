#!/bin/bash

find ./ -not \( -path ./build -prune \) -iname '*.h' -o -iname '*.cpp' -o -iname ".inl" | xargs clang-format -style=file:.config/clang-format.yml -Werror --dry-run