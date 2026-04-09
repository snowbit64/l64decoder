// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: popOp
// Entry Point: 00c09cc0
// Size: 36 bytes
// Signature: undefined __cdecl popOp(uint param_1)


/* CreateIR::popOp(unsigned int) */

void CreateIR::popOp(uint param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)param_1;
  lVar2 = *(long *)(uVar1 + 0x120) + -8;
  *(long *)(uVar1 + 0x120) = lVar2;
  if (*(long *)(uVar1 + 0x118) != lVar2) {
    return;
  }
  *(undefined8 *)(uVar1 + 0x108) = *(undefined8 *)(uVar1 + 0x100);
  return;
}


