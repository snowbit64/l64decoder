// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFaceConeIndices
// Entry Point: 00b64dec
// Size: 40 bytes
// Signature: undefined __thiscall getFaceConeIndices(Brep * this, uint param_1, ushort * param_2)


/* Brep::getFaceConeIndices(unsigned int, unsigned short*) */

void __thiscall Brep::getFaceConeIndices(Brep *this,uint param_1,ushort *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2f68) + (ulong)param_1 * 0x20;
  *param_2 = *(ushort *)(lVar1 + 8);
  param_2[1] = *(ushort *)(lVar1 + 0x10);
  param_2[2] = *(ushort *)(lVar1 + 0x18);
  return;
}


