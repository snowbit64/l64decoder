// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecompressAlphaDxt3
// Entry Point: 00deb4dc
// Size: 196 bytes
// Signature: undefined __cdecl DecompressAlphaDxt3(uchar * param_1, void * param_2)


/* squish::DecompressAlphaDxt3(unsigned char*, void const*) */

void squish::DecompressAlphaDxt3(uchar *param_1,void *param_2)

{
  byte bVar1;
  
                    /* WARNING: Load size is inaccurate */
  bVar1 = *param_2;
  param_1[7] = bVar1 & 0xf0 | bVar1 >> 4;
  param_1[3] = bVar1 & 0xf | bVar1 << 4;
  bVar1 = *(byte *)((long)param_2 + 1);
  param_1[0xf] = bVar1 & 0xf0 | bVar1 >> 4;
  param_1[0xb] = bVar1 & 0xf | bVar1 << 4;
  bVar1 = *(byte *)((long)param_2 + 2);
  param_1[0x17] = bVar1 & 0xf0 | bVar1 >> 4;
  param_1[0x13] = bVar1 & 0xf | bVar1 << 4;
  bVar1 = *(byte *)((long)param_2 + 3);
  param_1[0x1f] = bVar1 & 0xf0 | bVar1 >> 4;
  param_1[0x1b] = bVar1 & 0xf | bVar1 << 4;
  bVar1 = *(byte *)((long)param_2 + 4);
  param_1[0x27] = bVar1 & 0xf0 | bVar1 >> 4;
  param_1[0x23] = bVar1 & 0xf | bVar1 << 4;
  bVar1 = *(byte *)((long)param_2 + 5);
  param_1[0x2f] = bVar1 & 0xf0 | bVar1 >> 4;
  param_1[0x2b] = bVar1 & 0xf | bVar1 << 4;
  bVar1 = *(byte *)((long)param_2 + 6);
  param_1[0x37] = bVar1 & 0xf0 | bVar1 >> 4;
  param_1[0x33] = bVar1 & 0xf | bVar1 << 4;
  bVar1 = *(byte *)((long)param_2 + 7);
  param_1[0x3b] = bVar1 & 0xf | bVar1 << 4;
  param_1[0x3f] = bVar1 & 0xf0 | bVar1 >> 4;
  return;
}


