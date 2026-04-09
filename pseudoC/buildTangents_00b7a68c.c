// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildTangents
// Entry Point: 00b7a68c
// Size: 120 bytes
// Signature: undefined __thiscall buildTangents(IndexedTriangleSet * this, uint param_1)


/* IndexedTriangleSet::buildTangents(unsigned int) */

void __thiscall IndexedTriangleSet::buildTangents(IndexedTriangleSet *this,uint param_1)

{
  uint uVar1;
  
  if ((param_1 < 4) &&
     (((2 << (ulong)(param_1 & 0x1f) | 0x81U) & (*(uint *)(this + 0xc) ^ 0xffffffff)) == 0)) {
    uVar1 = *(uint *)(this + 8);
    if (uVar1 < 0x10001) {
      MathUtil::tangentArray
                (uVar1,*(float **)(this + 0x10),*(float **)(this + 0x38),
                 *(float **)(this + (ulong)param_1 * 8 + 0x18),*(uint *)(this + 0x68) / 3,
                 *(ushort **)(this + 0x70),*(float **)(this + 0x40));
      return;
    }
    MathUtil::tangentArray
              (uVar1,*(float **)(this + 0x10),*(float **)(this + 0x38),
               *(float **)(this + (ulong)param_1 * 8 + 0x18),*(uint *)(this + 0x68) / 3,
               *(uint **)(this + 0x70),*(float **)(this + 0x40));
    return;
  }
  return;
}


