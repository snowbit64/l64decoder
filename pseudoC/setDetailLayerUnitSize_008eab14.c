// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDetailLayerUnitSize
// Entry Point: 008eab14
// Size: 48 bytes
// Signature: undefined __thiscall setDetailLayerUnitSize(BaseTerrain * this, uint param_1, float param_2)


/* BaseTerrain::setDetailLayerUnitSize(unsigned int, float) */

void __thiscall BaseTerrain::setDetailLayerUnitSize(BaseTerrain *this,uint param_1,float param_2)

{
  *(float *)(*(long *)(this + 8) + (ulong)param_1 * 0xb0 + 4) =
       (*(float *)(this + 0xa8) * (float)(ulong)(*(int *)(this + 0x90) - 1)) / param_2;
  return;
}


