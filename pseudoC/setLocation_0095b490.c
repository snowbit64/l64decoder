// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocation
// Entry Point: 0095b490
// Size: 168 bytes
// Signature: undefined __thiscall setLocation(UniqueTileInfo * this, uint param_1, uint param_2, SharedTileInfo * param_3, int param_4, int param_5)


/* MultiresTexture::UniqueTileInfo::setLocation(unsigned int, unsigned int,
   MultiresTexture::SharedTileInfo const*, int, int) */

void __thiscall
MultiresTexture::UniqueTileInfo::setLocation
          (UniqueTileInfo *this,uint param_1,uint param_2,SharedTileInfo *param_3,int param_4,
          int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  *(SharedTileInfo **)(this + 8) = param_3;
  *(int *)(this + 0x10) = param_4;
  *(int *)(this + 0x14) = param_5;
  if (param_3 == (SharedTileInfo *)0x0) {
    iVar1 = 0;
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  else {
    fVar10 = *(float *)(param_3 + 8);
    iVar4 = *(int *)(param_3 + 0x20);
    fVar9 = *(float *)param_3 * (float)param_4;
    fVar6 = *(float *)param_3 * (float)param_5;
    fVar5 = *(float *)(param_3 + 0xc) * (float)param_4;
    fVar7 = *(float *)(param_3 + 0xc) * (float)param_5;
    fVar8 = *(float *)(param_3 + 0x14);
    iVar1 = *(int *)(param_3 + 0x18) * param_4;
    iVar2 = *(int *)(param_3 + 0x18) * param_5;
    *(float *)(this + 0x18) = fVar9;
    *(float *)(this + 0x1c) = fVar6;
    *(float *)(this + 0x28) = fVar5;
    *(float *)(this + 0x2c) = fVar7;
    iVar3 = iVar1 - iVar4;
    *(float *)(this + 0x20) = fVar9 - fVar10;
    iVar4 = iVar2 - iVar4;
    *(float *)(this + 0x24) = fVar6 - fVar10;
    *(float *)(this + 0x30) = fVar5 - fVar8;
    *(float *)(this + 0x34) = fVar7 - fVar8;
  }
  *(int *)(this + 0x38) = iVar1;
  *(int *)(this + 0x3c) = iVar2;
  *(int *)(this + 0x40) = iVar3;
  *(int *)(this + 0x44) = iVar4;
  return;
}


