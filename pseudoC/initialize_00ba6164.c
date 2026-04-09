// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00ba6164
// Size: 168 bytes
// Signature: undefined __thiscall initialize(Bt2HeightfieldTerrainShape * this, int param_1, int param_2, ushort * param_3, float param_4, float param_5, float param_6)


/* Bt2HeightfieldTerrainShape::initialize(int, int, unsigned short const*, float, float, float) */

void __thiscall
Bt2HeightfieldTerrainShape::initialize
          (Bt2HeightfieldTerrainShape *this,int param_1,int param_2,ushort *param_3,float param_4,
          float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  
  *(float *)(this + 0x48) = param_5;
  *(float *)(this + 0x24) = param_5;
  *(float *)(this + 0x58) = param_4;
  *(undefined4 *)(this + 8) = 0x1d;
  fVar2 = (float)(param_1 + -1) * 0.5;
  *(undefined8 *)(this + 0xac) = 0x3f800000;
  *(undefined8 *)(this + 0xa4) = 0x3f8000003f800000;
  fVar1 = (float)(param_2 + -1) * 0.5;
  *(int *)(this + 0x44) = param_2;
  *(float *)(this + 0x4c) = param_6;
  *(float *)(this + 0x50) = fVar2;
  *(float *)(this + 0x54) = fVar1;
  *(ushort **)(this + 0x60) = param_3;
  *(undefined8 *)(this + 0xbc) = *(undefined8 *)(this + 0xac);
  *(undefined8 *)(this + 0xb4) = *(undefined8 *)(this + 0xa4);
  *(float *)(this + 0x20) = -((float)(param_1 + -1) * 0.5);
  *(float *)(this + 0x28) = -((float)(param_2 + -1) * 0.5);
  *(undefined4 *)(this + 0x2c) = 0;
  *(float *)(this + 0x30) = fVar2;
  *(float *)(this + 0x34) = param_6;
  *(float *)(this + 0x38) = fVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(int *)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0x100000001;
  *(int *)(this + 0x70) = param_1;
  *(int *)(this + 0x74) = param_2;
  *(float *)(this + 0x88) = fVar2;
  *(float *)(this + 0x8c) = fVar1;
  *(undefined8 *)(this + 0x9c) = *(undefined8 *)(this + 0xac);
  *(undefined8 *)(this + 0x94) = *(undefined8 *)(this + 0xa4);
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined8 *)(this + 200) = 0;
  return;
}


