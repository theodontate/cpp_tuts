//Rotation.cpp
//Perform left and right rotations.

unsigned char rotateRight(unsigned char val) {
	int highBit;

	if (val & 0x80)
		highBit = 1;
	else
		highBit = 0;
	//Left shift (bottom bit becomes 0)
	val <<= 1;
	//Rotate the highbit onto the botton
	val |= highBit;
	return val;
}


unsigned char rotateLeft(unsigned char val) {
	int lowBit;

	if (val & 1)
		lowBit = 1;
	else
		lowBit = 0;
	//Left shift (bottom bit becomes 0)
	val >>= 1;
	//Rotate the highbit onto the botton
	val |= lowBit;
	return val;
}
