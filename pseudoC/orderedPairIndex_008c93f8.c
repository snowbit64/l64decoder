// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: orderedPairIndex
// Entry Point: 008c93f8
// Size: 44 bytes
// Signature: undefined __cdecl orderedPairIndex(ushort param_1, ushort param_2)


/* orderedPairIndex(unsigned short, unsigned short) */

int orderedPairIndex(ushort param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if (param_2 <= param_1) {
    uVar2 = (uint)param_1;
  }
  uVar2 = (uVar2 - 1) * uVar2;
  uVar1 = (uint)param_1;
  if (param_2 <= param_1) {
    uVar1 = (uint)param_2;
  }
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar1 + (uVar2 >> 1);
}


