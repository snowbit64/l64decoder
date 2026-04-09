// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectingEdge
// Entry Point: 008c93a0
// Size: 88 bytes
// Signature: undefined __cdecl connectingEdge(Brep * param_1, ushort param_2, ushort param_3)


/* connectingEdge(Brep const&, unsigned short, unsigned short) */

ulong connectingEdge(Brep *param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x2f50) + (ulong)param_2 * 0xc + 4);
  uVar3 = uVar2;
  do {
    if (*(ushort *)(*(long *)(param_1 + 0x2f68) + (ulong)uVar3 * 8) == param_3) {
      return (ulong)uVar3;
    }
    uVar1 = uVar3 + 2;
    if ((uVar3 - 1 & 3) != 0) {
      uVar1 = uVar3 - 1;
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 0x2f68) + (ulong)uVar1 * 8 + 4);
  } while (uVar3 != uVar2);
  return 0xffffffff;
}


