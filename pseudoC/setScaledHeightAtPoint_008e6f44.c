// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setScaledHeightAtPoint
// Entry Point: 008e6f44
// Size: 52 bytes
// Signature: undefined __thiscall setScaledHeightAtPoint(BaseTerrain * this, uint param_1, uint param_2, float param_3)


/* BaseTerrain::setScaledHeightAtPoint(unsigned int, unsigned int, float) */

void __thiscall
BaseTerrain::setScaledHeightAtPoint(BaseTerrain *this,uint param_1,uint param_2,float param_3)

{
  uint uVar1;
  
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  uVar1 = (uint)(param_3 / *(float *)(this + 0xa4));
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  *(short *)(*(long *)(this + 0x80) + (ulong)(param_1 + *(int *)(this + 0x90) * param_2) * 2) =
       (short)uVar1;
  return;
}


