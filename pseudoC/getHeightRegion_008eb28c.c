// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeightRegion
// Entry Point: 008eb28c
// Size: 144 bytes
// Signature: undefined __thiscall getHeightRegion(BaseTerrain * this, int param_1, int param_2, uint param_3, uint param_4, float * param_5)


/* BaseTerrain::getHeightRegion(int, int, unsigned int, unsigned int, float*) const */

void __thiscall
BaseTerrain::getHeightRegion
          (BaseTerrain *this,int param_1,int param_2,uint param_3,uint param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_4 != 0) {
    iVar5 = *(int *)(this + 0x90);
    uVar8 = 0;
    uVar9 = 0;
    uVar6 = iVar5 - 1;
    do {
      uVar3 = uVar9 + param_2;
      if ((int)uVar6 <= (int)(uVar9 + param_2)) {
        uVar3 = uVar6;
      }
      if (param_3 != 0) {
        lVar10 = *(long *)(this + 0x80);
        uVar11 = (ulong)param_3;
        uVar1 = param_1;
        uVar2 = uVar8;
        do {
          uVar4 = uVar1;
          if ((int)uVar6 <= (int)uVar1) {
            uVar4 = uVar6;
          }
          uVar1 = uVar1 + 1;
          uVar11 = uVar11 - 1;
          fVar7 = (float)NEON_ucvtf((uint)*(ushort *)
                                           (lVar10 + (ulong)((uVar4 & ((int)uVar4 >> 0x1f ^
                                                                      0xffffffffU)) +
                                                            (uVar3 & ((int)uVar3 >> 0x1f ^
                                                                     0xffffffffU)) * iVar5) * 2));
          param_5[uVar2] = *(float *)(this + 0xa4) * fVar7;
          uVar2 = uVar2 + 1;
        } while (uVar11 != 0);
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + param_3;
    } while (uVar9 != param_4);
  }
  return;
}


