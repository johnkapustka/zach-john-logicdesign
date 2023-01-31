.text
	jr r15
	ld r10, r2, 3
	st r10, r2, 3
	bz r3, -2
	jal 0x123
	quit
