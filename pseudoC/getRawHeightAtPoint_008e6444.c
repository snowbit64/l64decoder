// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRawHeightAtPoint
// Entry Point: 008e6444
// Size: 20 bytes
// Signature: undefined __thiscall getRawHeightAtPoint(BaseTerrain * this, uint param_1, uint param_2)


/* BaseTerrain::getRawHeightAtPoint(unsigned int, unsigned int) const */

undefined2 __thiscall BaseTerrain::getRawHeightAtPoint(BaseTerrain *this,uint param_1,uint param_2)

{
  return *(undefined2 *)
          (*(long *)(this + 0x80) + (ulong)(param_1 + *(int *)(this + 0x90) * param_2) * 2);
}


