.text
ldi r1, 0x3
ldi r2, 0x5
not r3, r1
not r4, r2
and r4, r1, r4
and r3, r2, r3
or r0, r3, r4
quit
