#!/bin/bash
set -e

cmake --preset release
# cmake --preset debug
cd build
ninja
