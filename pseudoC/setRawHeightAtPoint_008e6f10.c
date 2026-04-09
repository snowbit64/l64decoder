// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRawHeightAtPoint
// Entry Point: 008e6f10
// Size: 20 bytes
// Signature: undefined __thiscall setRawHeightAtPoint(BaseTerrain * this, uint param_1, uint param_2, ushort param_3)


/* BaseTerrain::setRawHeightAtPoint(unsigned int, unsigned int, unsigned short) */

void __thiscall
BaseTerrain::setRawHeightAtPoint(BaseTerrain *this,uint param_1,uint param_2,ushort param_3)

{
  *(ushort *)(*(long *)(this + 0x80) + (ulong)(param_1 + *(int *)(this + 0x90) * param_2) * 2) =
       param_3;
  return;
}


