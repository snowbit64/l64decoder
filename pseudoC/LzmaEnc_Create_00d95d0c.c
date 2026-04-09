// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_Create
// Entry Point: 00d95d0c
// Size: 60 bytes
// Signature: undefined LzmaEnc_Create(void)


long LzmaEnc_Create(code **param_1)

{
  long lVar1;
  
  lVar1 = (**param_1)(param_1,0x46a78);
  if (lVar1 != 0) {
    LzmaEnc_Construct(lVar1);
  }
  return lVar1;
}


