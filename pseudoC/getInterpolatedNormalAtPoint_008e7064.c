// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInterpolatedNormalAtPoint
// Entry Point: 008e7064
// Size: 44 bytes
// Signature: undefined __thiscall getInterpolatedNormalAtPoint(BaseTerrain * this, float param_1, float param_2, float * param_3)


/* BaseTerrain::getInterpolatedNormalAtPoint(float, float, float*) const */

void __thiscall
BaseTerrain::getInterpolatedNormalAtPoint
          (BaseTerrain *this,float param_1,float param_2,float *param_3)

{
  TerrainUtil::getInterpolatedNormalAtPoint
            (*(ushort **)(this + 0x80),*(uint *)(this + 0x90),*(float *)(this + 0xa4),
             *(float *)(this + 0xa8),param_1,param_2,param_3);
  return;
}


