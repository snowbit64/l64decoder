// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDetailLayerUnitSize
// Entry Point: 008eaae8
// Size: 44 bytes
// Signature: undefined __thiscall getDetailLayerUnitSize(BaseTerrain * this, uint param_1)


/* BaseTerrain::getDetailLayerUnitSize(unsigned int) const */

float __thiscall BaseTerrain::getDetailLayerUnitSize(BaseTerrain *this,uint param_1)

{
  return (*(float *)(this + 0xa8) * (float)(ulong)(*(int *)(this + 0x90) - 1)) /
         *(float *)(*(long *)(this + 8) + (ulong)param_1 * 0xb0 + 4);
}


