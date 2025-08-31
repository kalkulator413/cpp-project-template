### Building the Project

You can configure and build using:

```
cmake --preset release
cd build
ninja
```

OR

```
cmake --preset debug
cd build
ninja
```

OR

```
chmod +x .config/build.sh
.config/build.sh
```

### Helpful Tools

You can run `clang-format` on all files by running:

```
chmod +x .config/format.sh
.config/format.sh
```