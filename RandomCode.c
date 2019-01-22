#include "stdio.h"
#include "stdlib.h"

int multiplyBy8(int v)
{
	v=v << 3;
	return v;
}

int setBit6to1(int v)
{
	v = v|64;
	return v;
}

int setBit3to0(int v)
{
	v=v&(~8);
	return v;
}
	
int flipBit5(int v)
{
	v = v^32;
	return v;
}
	
int ifBit7is0(int v)
{
	if ((v&128) == 0)
		return 1;
	return 0;
}

int ifBit3is1(int v)
{
	if((v&8) == 8)
		return 1;
	return 0;
}

int unsignedBits0through5(int v)
{
	v = v & 63;
	return v;
}

int unsignedBits6through9(int v)
{
	v = v & 960;
	v = v >>6;
	return v;
}

int signedBits0through5(int v)
{
	v = v & 63;
	v = v << 26;
	v = v >> 26;
	return v;
}

int signedBits6through9(int v)
{
	v = v & 960;
	v = v << 22;
	v = v >> 28;
	return v;
}

int setBits4through9(int v, int setValue)
{
	setValue = setValue & 63;
	setValue = setValue << 4;
	//setValue = setValue | 4294966287;
	v = v & ~1008;
	
	v = v | setValue;
	return v;
}




