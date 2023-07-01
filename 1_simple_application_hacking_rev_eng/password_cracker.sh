#!/bin/bash
objdump -d -Mintel 1 | awk -v RS= '/^[[:xdigit:]]+ <reqPasswd>/' | grep 'cmp    al,' | sed 's/^.*,//' | xxd -r -p

######### So What I Did There? #########
#
#- objdump, here i am disassembling our program
#- the output is being piped to awk to get the block for function reqPasswd, then piping the output to grep
#- using grep to get the comparision operations and reading the allocated memory for the input to be compared with
#- sed to bascially get the values after the delimiter ','
#- xxd -r to convert hex to ascii as opposed to its normal mode of doing the opposite
#      -p to use a plain format
#
#
