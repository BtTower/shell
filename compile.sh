#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

gcc -o shell ${DIR}/src/C/stringFuncs.c ${DIR}/src/C/glebShell.c