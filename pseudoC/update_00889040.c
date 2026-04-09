// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00889040
// Size: 48 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTRandomGate::update() */

undefined4 BTRandomGate::update(void)

{
  long in_x0;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)MathUtil::getRandom();
  uVar1 = 2;
  if (fVar2 < *(float *)(in_x0 + 0x28)) {
    uVar1 = 1;
  }
  return uVar1;
}


