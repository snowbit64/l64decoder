// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readValue
// Entry Point: 00b8d554
// Size: 96 bytes
// Signature: undefined __thiscall readValue(PerlinNoisePixelSource * this, uint param_1, uint param_2)


/* PerlinNoisePixelSource::readValue(unsigned int, unsigned int) const */

uint __thiscall
PerlinNoisePixelSource::readValue(PerlinNoisePixelSource *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = PerlinNoiseUtil::getPerlinNoise2D
                    (*(float *)(this + 0x44) * (float)(ulong)param_1,
                     *(float *)(this + 0x44) * (float)(ulong)param_2,*(float *)(this + 0x4c),
                     *(uint *)(this + 0x48),*(int *)(this + 0x50));
  fVar3 = (float)NEON_fmadd(uVar2,0x459c4000,0x459c4000);
  uVar1 = (int)fVar3 & ((int)fVar3 >> 0x1f ^ 0xffffffffU);
  if (0x270 < uVar1 >> 4) {
    uVar1 = 10000;
  }
  return uVar1;
}


