// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PerlinNoisePixelSource
// Entry Point: 00b8d4c0
// Size: 148 bytes
// Signature: undefined __thiscall PerlinNoisePixelSource(PerlinNoisePixelSource * this, char * param_1, uint param_2, uint param_3, uint param_4, uint param_5, float param_6, int param_7)


/* PerlinNoisePixelSource::PerlinNoisePixelSource(char const*, unsigned int, unsigned int, unsigned
   int, unsigned int, float, int) */

void __thiscall
PerlinNoisePixelSource::PerlinNoisePixelSource
          (PerlinNoisePixelSource *this,char *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,float param_6,int param_7)

{
  float fVar1;
  
  ProceduralDensityPixelSource::ProceduralDensityPixelSource
            ((ProceduralDensityPixelSource *)this,param_1,param_2,param_3,0x10);
  if (param_3 <= param_2) {
    param_3 = param_2;
  }
  *(undefined ***)this = &PTR__ProceduralDensityPixelSource_00fea820;
  fVar1 = exp2f((float)(ulong)param_4);
  *(uint *)(this + 0x48) = param_5;
  *(float *)(this + 0x4c) = param_6;
  *(int *)(this + 0x50) = param_7;
  *(float *)(this + 0x44) = fVar1 * (1.0 / (float)(ulong)param_3);
  return;
}


