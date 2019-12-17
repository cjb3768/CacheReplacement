ECHO ON

ECHO "Beginning 50000 access trials"
./cache_test.exe 10000 50000 0 500000 >>      t1_50000_accesses.txt
./cache_test.exe 10000 50000 0 500000 >>      t2_50000_accesses.txt
./cache_test.exe 10000 50000 0 500000 >>      t3_50000_accesses.txt
./cache_test.exe 10000 50000 0 500000 >>      t4_50000_accesses.txt
./cache_test.exe 10000 50000 0 500000 >>      t5_50000_accesses.txt
ECHO "50000 access trials complete"

ECHO "Beginning 500000 access trials"
./cache_test.exe 10000 500000 0 500000 >>     t1_500000_accesses.txt
./cache_test.exe 10000 500000 0 500000 >>     t2_500000_accesses.txt
./cache_test.exe 10000 500000 0 500000 >>     t3_500000_accesses.txt
./cache_test.exe 10000 500000 0 500000 >>     t4_500000_accesses.txt
./cache_test.exe 10000 500000 0 500000 >>     t5_500000_accesses.txt
ECHO "500000 access trials complete"

ECHO "Beginning 5000000 access trials"
./cache_test.exe 10000 5000000 0 500000 >>    t1_5000000_accesses.txt
./cache_test.exe 10000 5000000 0 500000 >>    t2_5000000_accesses.txt
./cache_test.exe 10000 5000000 0 500000 >>    t3_5000000_accesses.txt
./cache_test.exe 10000 5000000 0 500000 >>    t4_5000000_accesses.txt
./cache_test.exe 10000 5000000 0 500000 >>    t5_5000000_accesses.txt
ECHO "5000000 access trials complete"

ECHO "Beginning 50000000 access trials"
./cache_test.exe 10000 50000000 0 500000 >>   t1_50000000_accesses.txt
./cache_test.exe 10000 50000000 0 500000 >>   t2_50000000_accesses.txt
./cache_test.exe 10000 50000000 0 500000 >>   t3_50000000_accesses.txt
./cache_test.exe 10000 50000000 0 500000 >>   t4_50000000_accesses.txt
./cache_test.exe 10000 50000000 0 500000 >>   t5_50000000_accesses.txt
ECHO "50000000 access trials complete"
