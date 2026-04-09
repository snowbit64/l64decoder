// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_19
// Entry Point: 008d44a4
// Size: 96 bytes
// Signature: undefined _INIT_19(void)


void _INIT_19(void)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = 0;
  uVar2 = 0x3039;
  do {
    uVar2 = uVar2 * 0x19660d + 0x3c6ef35f;
    *(float *)((long)&FillPlaneGeometry::s_staticNoise + lVar1) =
         ((float)(uVar2 & 0x7fffff | 0x40000000) + -3.0) * 0.04;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x400);
  return;
}


