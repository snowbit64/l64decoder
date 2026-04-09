// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execReloadEvents
// Entry Point: 00a73c80
// Size: 564 bytes
// Signature: undefined __thiscall execReloadEvents(TerrainLayerTransformGroup * this, ReloadEvent * param_1, uint param_2, int param_3, int param_4, int param_5, int param_6, IRenderDevice * param_7)


/* TerrainLayerTransformGroup::execReloadEvents(LocalGeometryTransformGroup::ReloadEvent const*,
   unsigned int, int, int, int, int, IRenderDevice*) */

void __thiscall
TerrainLayerTransformGroup::execReloadEvents
          (TerrainLayerTransformGroup *this,ReloadEvent *param_1,uint param_2,int param_3,
          int param_4,int param_5,int param_6,IRenderDevice *param_7)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *__s;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  if (*(int *)(this + 0x6ac) == *(int *)(this + 0x6a8)) {
    uVar10 = *(uint *)(this + 0x210);
    uVar4 = uVar10;
    if ((int)uVar10 < 0) {
      uVar4 = uVar10 + 1;
    }
    __s = operator_new__((ulong)(uVar10 * uVar10));
    memset(__s,0,(ulong)(uVar10 * uVar10));
    if (param_2 != 0) {
      iVar3 = (int)uVar4 >> 1;
      uVar9 = 0;
      while( true ) {
        piVar2 = (int *)(param_1 + uVar9 * 0x10);
        uVar4 = uVar10;
        if ((int)uVar10 < 0) {
          uVar4 = uVar10 + 1;
        }
        uVar1 = ((int)uVar4 >> 1) + *piVar2;
        uVar4 = piVar2[1] + ((int)uVar4 >> 1);
        uVar12 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        uVar5 = uVar1 + piVar2[2];
        if ((int)uVar10 <= (int)(uVar1 + piVar2[2])) {
          uVar5 = uVar10;
        }
        uVar6 = piVar2[3] + uVar4;
        if ((int)uVar10 <= (int)(piVar2[3] + uVar4)) {
          uVar6 = uVar10;
        }
        if ((int)uVar12 < (int)uVar6) {
          uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
          while( true ) {
            uVar4 = uVar12 + 1;
            if ((int)uVar1 < (int)uVar5) {
              uVar11 = (ulong)uVar1;
              do {
                if (*(char *)((long)__s + uVar11 + (long)(int)(uVar10 * uVar12)) == '\0') {
                  if (((((long)uVar11 < (long)(iVar3 + param_3)) ||
                       ((long)(iVar3 + param_5) <= (long)uVar11)) || ((int)uVar12 < iVar3 + param_4)
                      ) || (iVar3 + param_6 <= (int)uVar12)) {
                    if (*(int *)(this + 0x690) != 0) {
                      iVar7 = *(int *)(this + 0x6b0);
                      iVar8 = iVar7 * (int)uVar11;
                      updateDensityTextureTile
                                (this,0,iVar8,iVar7 * uVar12,iVar7 + iVar8,iVar7 * uVar4,param_7);
                    }
                    if (*(int *)(this + 0x694) != 0) {
                      iVar7 = *(int *)(this + 0x6b0);
                      iVar8 = iVar7 * (int)uVar11;
                      updateDensityTextureTile
                                (this,1,iVar8,iVar7 * uVar12,iVar7 + iVar8,iVar7 * uVar4,param_7);
                    }
                  }
                  *(undefined *)((long)__s + uVar11 + (long)(int)(uVar10 * uVar12)) = 1;
                }
                uVar11 = uVar11 + 1;
              } while (uVar5 != uVar11);
            }
            if (uVar4 == uVar6) break;
            uVar10 = *(uint *)(this + 0x210);
            uVar12 = uVar4;
          }
        }
        uVar9 = uVar9 + 1;
        if (uVar9 == param_2) break;
        uVar10 = *(uint *)(this + 0x210);
      }
    }
    operator_delete__(__s);
    return;
  }
  return;
}


