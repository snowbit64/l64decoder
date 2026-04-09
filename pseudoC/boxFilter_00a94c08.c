// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: boxFilter
// Entry Point: 00a94c08
// Size: 28 bytes
// Signature: undefined __cdecl boxFilter(double param_1)


/* ImageScale::boxFilter(double) */

undefined  [16] ImageScale::boxFilter(double param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  
  uVar1 = 0x3ff0000000000000;
  if (0.5 < ABS(param_1)) {
    uVar1 = 0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


