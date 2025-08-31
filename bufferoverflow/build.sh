#!/bin/bash

gcc -fno-stack-protector -m32 -no-pie vuln.c -o vuln
