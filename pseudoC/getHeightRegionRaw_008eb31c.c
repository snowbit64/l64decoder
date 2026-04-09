// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeightRegionRaw
// Entry Point: 008eb31c
// Size: 132 bytes
// Signature: undefined __thiscall getHeightRegionRaw(BaseTerrain * this, int param_1, int param_2, uint param_3, uint param_4, ushort * param_5)


/* BaseTerrain::getHeightRegionRaw(int, int, unsigned int, unsigned int, unsigned short*) const */

void __thiscall
BaseTerrain::getHeightRegionRaw
          (BaseTerrain *this,int param_1,int param_2,uint param_3,uint param_4,ushort *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_4 != 0) {
    iVar5 = *(int *)(this + 0x90);
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = iVar5 - 1;
    do {
      uVar3 = uVar8 + param_2;
      if ((int)uVar6 <= (int)(uVar8 + param_2)) {
        uVar3 = uVar6;
      }
      if (param_3 != 0) {
        lVar9 = *(long *)(this + 0x80);
        uVar10 = (ulong)param_3;
        uVar1 = param_1;
        uVar2 = uVar7;
        do {
          uVar4 = uVar1;
          if ((int)uVar6 <= (int)uVar1) {
            uVar4 = uVar6;
          }
          uVar1 = uVar1 + 1;
          uVar10 = uVar10 - 1;
          param_5[uVar2] =
               *(ushort *)
                (lVar9 + (ulong)((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) +
                                (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) * iVar5) * 2);
          uVar2 = uVar2 + 1;
        } while (uVar10 != 0);
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + param_3;
    } while (uVar8 != param_4);
  }
  return;
}


