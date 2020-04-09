# C Compiler test framework

This directory contains scripts to test the compiler with
a collection of C language source codes that can be tested.

## Prerequisites

Docker must be installed in order to execute these scripts. The compiler has
to be present in the directory `../compiler/ifcc`. Compiler options and location
can be customized in the `pld-wrapper.sh` script.

## Files

`test.sh` is the base file to launch. It will call the appropriate Docker
image and execute the `pld-test.py` script. Results are put in a new directory
`pld-test-outputs`.
Executing `test.sh clean` will delete all files in `pld-test-outputs`.


The tests are in the `tests` subfolder. They are ordered by different folders depending on the feature they test.

## Clean

You can clean the generated tests folders with the command
`test.sh clean `
It can be useful to not track them on your git for example.
