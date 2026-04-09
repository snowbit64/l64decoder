// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: roundAndClampRect
// Entry Point: 0089f524
// Size: 100 bytes
// Signature: undefined __thiscall roundAndClampRect(TerrainDeformation * this, float param_1, float param_2, float param_3, float param_4, uint param_5, uint param_6, uint * param_7, uint * param_8, uint * param_9, uint * param_10)


/* TerrainDeformation::roundAndClampRect(float, float, float, float, unsigned int, unsigned int,
   unsigned int&, unsigned int&, unsigned int&, unsigned int&) */

undefined8 __thiscall
TerrainDeformation::roundAndClampRect
          (TerrainDeformation *this,float param_1,float param_2,float param_3,float param_4,
          uint param_5,uint param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (int)param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar1 < (int)param_5) {
    uVar3 = 0;
    uVar2 = (int)param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
    if ((((int)uVar2 < (int)param_6) && (uVar4 = (uint)param_2, -1 < (int)uVar4)) &&
       (uVar5 = (uint)param_4, -1 < (int)uVar5)) {
      *param_7 = uVar1;
      if ((int)param_5 <= (int)uVar4) {
        uVar4 = param_5;
      }
      if ((int)param_6 <= (int)uVar5) {
        uVar5 = param_6;
      }
      uVar3 = 1;
      *param_8 = uVar4;
      *param_9 = uVar2;
      *param_10 = uVar5;
    }
    return uVar3;
  }
  return 0;
}


