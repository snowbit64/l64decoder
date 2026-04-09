// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sign
// Entry Point: 00b57898
// Size: 28 bytes
// Signature: undefined __cdecl sign(float param_1)


/* MathUtil::sign(float) */

undefined4 MathUtil::sign(float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0xbf800000;
  if (0.0 <= param_1) {
    uVar1 = 0;
  }
  uVar2 = 0x3f800000;
  if (param_1 <= 0.0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


