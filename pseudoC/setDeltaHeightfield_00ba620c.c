// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDeltaHeightfield
// Entry Point: 00ba620c
// Size: 152 bytes
// Signature: undefined __thiscall setDeltaHeightfield(Bt2HeightfieldTerrainShape * this, uchar * param_1, int param_2, int param_3, float param_4, uint param_5, _func_bool_btCollisionObjectWrapper_ptr_uint * param_6)


/* Bt2HeightfieldTerrainShape::setDeltaHeightfield(unsigned char const*, int, int, float, unsigned
   int, bool (*)(btCollisionObjectWrapper const*, unsigned int)) */

void __thiscall
Bt2HeightfieldTerrainShape::setDeltaHeightfield
          (Bt2HeightfieldTerrainShape *this,uchar *param_1,int param_2,int param_3,float param_4,
          uint param_5,_func_bool_btCollisionObjectWrapper_ptr_uint *param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *(uchar **)(this + 0x78) = param_1;
  if (param_1 == (uchar *)0x0) {
    param_2 = *(int *)(this + 0x40);
    param_3 = *(int *)(this + 0x44);
    iVar1 = 1;
    iVar2 = 1;
  }
  else {
    iVar1 = 0;
    if (*(int *)(this + 0x40) + -1 != 0) {
      iVar1 = (param_2 + -1) / (*(int *)(this + 0x40) + -1);
    }
    iVar2 = 0;
    if (*(int *)(this + 0x44) + -1 != 0) {
      iVar2 = (param_3 + -1) / (*(int *)(this + 0x44) + -1);
    }
  }
  fVar4 = (float)iVar2;
  *(int *)(this + 0x68) = iVar1;
  *(int *)(this + 0x6c) = iVar2;
  *(int *)(this + 0x70) = param_2;
  *(int *)(this + 0x74) = param_3;
  fVar3 = (float)iVar1;
  *(undefined4 *)(this + 0xa0) = 0;
  *(uint *)(this + 0xc4) = param_5;
  *(_func_bool_btCollisionObjectWrapper_ptr_uint **)(this + 200) = param_6;
  *(float *)(this + 0x80) = 1.0 / fVar3;
  *(float *)(this + 0x84) = 1.0 / fVar4;
  *(float *)(this + 0x88) = *(float *)(this + 0x50) * fVar3;
  *(float *)(this + 0x8c) = *(float *)(this + 0x54) * fVar4;
  *(float *)(this + 0x90) = param_4 / 255.0;
  *(float *)(this + 0x94) = *(float *)(this + 0xa4) / fVar3;
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(this + 0xa8);
  *(float *)(this + 0x9c) = *(float *)(this + 0xac) / fVar4;
  return;
}


