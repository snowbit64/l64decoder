// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HeightMap
// Entry Point: 008fc7b4
// Size: 24 bytes
// Signature: undefined __thiscall HeightMap(HeightMap * this, ushort * param_1, int param_2, int param_3, float param_4, float param_5, float param_6)


/* HeightMap::HeightMap(unsigned short const*, int, int, float, float, float) */

void __thiscall
HeightMap::HeightMap
          (HeightMap *this,ushort *param_1,int param_2,int param_3,float param_4,float param_5,
          float param_6)

{
  *(ushort **)this = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_3;
  *(float *)(this + 0x10) = param_4;
  *(float *)(this + 0x14) = param_5;
  *(float *)(this + 0x18) = param_6;
  return;
}


