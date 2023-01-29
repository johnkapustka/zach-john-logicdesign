.text
ldi r0, 0xda
ldi r1, 8
shl r0, r0, r1

ldi r1, 0xda
or r1, r1, r0

ldi r0, 0x33
st r1, r0, 0
st r1, r0, 0xc

quit
