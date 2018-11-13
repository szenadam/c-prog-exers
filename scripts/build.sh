#!/bin/bash

gcc -W -Werror 1.2.main.c
./a.out
rm -f a.out

gcc -W -Werror 1.3.main.c
./a.out
rm -f a.out

gcc -W -Werror 1-3.exer.c
./a.out
rm -f a.out

gcc -W -Werror 1-4.exer.c
./a.out
rm -f a.out

gcc -W -Werror 1-5.exer.c
./a.out
rm -f a.out

gcc -W -Werror 1-6.exer.c
./a.out <<<'foo'
rm -f a.out

gcc -W -Werror 1-7.exer.c
./a.out
rm -f a.out

gcc -W -Werror 1-8.exer.c
./a.out <<<'foo bar baz'
rm -f a.out

gcc -W -Werror 1-9.exer.c
./a.out <<<'foo     bar     baz'
rm -f a.out

gcc -W -Werror 1-10.exer.c
./a.out <<<'foo\tbar\tbaz'
rm -f a.out

gcc -W -Werror 1-12.exer.c
./a.out <<<'foo bar baz'
rm -f a.out

gcc -W -Werror 1.5.0.main.c
./a.out <<<'foobarbaz'
rm -f a.out

gcc -W -Werror 1.5.2.main.c
./a.out <<<'foobarbaz'
rm -f a.out

gcc -W -Werror 1.5.3.main.c
./a.out <<<'foo\nbar\nbaz'
rm -f a.out

gcc -W -Werror 1.5.4.main.c
./a.out <<<"'EOF'
foo
bar
baz
EOF
"
rm -f a.out

gcc -W -Werror 1.6.0.main.c
./a.out <<<'12341234123456785678 foobar'
rm -f a.out

gcc -W -Werror 1.7.0.main.c
./a.out
rm -f a.out

gcc -W -Werror 1-15.exer.c
./a.out
rm -f a.out

gcc -W -Werror 1.8.0.main.c
./a.out
rm -f a.out

gcc -ansi -W -Werror 1.9.0.main.c
printf "foo\nfoobar\nfoobarbaz\n" | ./a.out
rm -f a.out

gcc -ansi -W -Werror 1-17.exer.c
./a.out < inputs/1-17.exer.input
rm -f a.out

gcc -ansi -W -Werror 1.10.0.main.c
./a.out < inputs/1.10.0.main.input
rm -f a.out

gcc -ansi -W -Werror 1-18.exer.c
./a.out < inputs/1-18.exer.input
rm -f a.out

gcc -ansi -W -Werror 3.3.0.main.c
./a.out
rm -f a.out

gcc -ansi -W -Werror 3.4.0.main.c
printf "foobarbaz 1234 1234    " | ./a.out
rm -f a.out

gcc -ansi -W -Werror 3.5.0.main.c
./a.out
echo $?
rm -f a.out
