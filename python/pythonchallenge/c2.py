#!/usr/bin/env python
def f(src):
    charset = 'abcdefghijklmnopqrstuvwxyz'
    if src in charset:
        return charset[charset.find(src) - 24]
    return src

with open('c2.input', 'r') as fin :
    for line in fin:
        print reduce(lambda x,y: x+y, map(f, line), ' ')

    import string
    print reduce(lambda x,y: x+y, map(f, 'map'), ' ')

