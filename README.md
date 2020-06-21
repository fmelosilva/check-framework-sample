# Simple testing sample in C

This is a simple sample written in C using [Check Framework](https://libcheck.github.io/check). This sample focus on testing some basic properties of an array structure.

## Running

Before running, you must install the following dependencies:

* [GCC](https://gcc.gnu.org/)
* [Make](https://www.gnu.org/software/make/)
* [Check Framework](https://libcheck.github.io/check/web/install.html)

Build the test binary

```bash
make
```

After build the test binary, run the test cases

```bash
./test
```

## Running with docker

Build test image

```bash
docker image build -t test .
```

Run tests

```bash
docker container run -it test
```

