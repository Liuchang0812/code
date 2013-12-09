# how to write makefile?

Makefile is very useful in linux program. It's very easy to learn and write.

The simple example:
```makefile
hello.exe : hello.c
	gcc hello.c -o hello.exe
```

it's ok, you input 'make' in console, there will be generate `hello.exe` automatic.
