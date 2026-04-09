// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findEdge
// Entry Point: 00b64f24
// Size: 92 bytes
// Signature: undefined __thiscall findEdge(Brep * this, ushort param_1, ushort param_2)


/* Brep::findEdge(unsigned short, unsigned short) const */

ulong __thiscall Brep::findEdge(Brep *this,ushort param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(*(long *)(this + 0x2f50) + (ulong)param_1 * 0xc + 4);
  uVar3 = uVar2;
  do {
    if (*(ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar3 * 8) == param_2) {
      return (ulong)uVar3;
    }
    uVar1 = uVar3 + 2;
    if ((uVar3 - 1 & 3) != 0) {
      uVar1 = uVar3 - 1;
    }
    uVar3 = *(uint *)(*(long *)(this + 0x2f68) + (ulong)uVar1 * 8 + 4);
  } while (uVar3 != 0xffffffff && uVar3 != uVar2);
  return 0xffffffff;
}


