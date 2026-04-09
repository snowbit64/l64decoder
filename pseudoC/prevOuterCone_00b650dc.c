// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prevOuterCone
// Entry Point: 00b650dc
// Size: 100 bytes
// Signature: undefined __thiscall prevOuterCone(Brep * this, ushort param_1)


/* Brep::prevOuterCone(unsigned short) const */

undefined2 __thiscall Brep::prevOuterCone(Brep *this,ushort param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(long *)(this + 0x2f50) + (ulong)param_1 * 0xc + 4);
  do {
    uVar1 = iVar3 + 2;
    if ((iVar3 - 1U & 3) != 0) {
      uVar1 = iVar3 - 1U;
    }
    iVar3 = *(int *)(*(long *)(this + 0x2f68) + (ulong)uVar1 * 8 + 4);
  } while (iVar3 != -1);
  uVar2 = uVar1 + 2;
  if ((uVar1 - 1 & 3) != 0) {
    uVar2 = uVar1 - 1;
  }
  return *(undefined2 *)(*(long *)(this + 0x2f68) + (ulong)uVar2 * 8);
}


