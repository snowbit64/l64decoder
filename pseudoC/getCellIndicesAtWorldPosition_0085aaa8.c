// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCellIndicesAtWorldPosition
// Entry Point: 0085aaa8
// Size: 168 bytes
// Signature: undefined __thiscall getCellIndicesAtWorldPosition(DensityMapSyncer * this, DensityMap * param_1, float param_2, float param_3, int * param_4, int * param_5)


/* DensityMapSyncer::getCellIndicesAtWorldPosition(DensityMap*, float, float, int&, int&) */

bool __thiscall
DensityMapSyncer::getCellIndicesAtWorldPosition
          (DensityMapSyncer *this,DensityMap *param_1,float param_2,float param_3,int *param_4,
          int *param_5)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 4) * -0x5555555555555555;
  if ((int)uVar4 != 0) {
    uVar4 = uVar4 & 0xffffffff;
    pfVar2 = (float *)(*(long *)(this + 0x28) + 0x10);
    do {
      if (*(DensityMap **)(pfVar2 + -4) == param_1) {
        fVar6 = *pfVar2;
        fVar1 = pfVar2[-1];
        fVar5 = (float)NEON_fmadd((float)(ulong)(uint)fVar1,0x3f000000,param_2 / fVar6);
        *param_4 = (int)fVar5;
        fVar5 = (float)NEON_fmadd((float)(ulong)(uint)fVar1,0x3f000000,param_3 / fVar6);
        iVar3 = (int)fVar5;
        *param_5 = iVar3;
        if (*param_4 < 0) {
          return false;
        }
        if ((int)fVar1 <= *param_4) {
          return false;
        }
        return -1 < iVar3 && iVar3 < (int)fVar1;
      }
      pfVar2 = pfVar2 + 0xc;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *param_4 = 0;
  *param_5 = 0;
  return false;
}


