// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRegionSum<ChunkedBitSquare>
// Entry Point: 00b8a2a4
// Size: 584 bytes
// Signature: uint __thiscall getRegionSum<ChunkedBitSquare>(DensityMapOldOperations * this, int param_1, int param_2, uint param_3, uint param_4, int param_5, Helper * param_6, HelperSource * param_7)


/* unsigned int DensityMapOldOperations::getRegionSum<ChunkedBitSquare>(int, int, unsigned int,
   unsigned int, int, DensityMapAccessUtil::Helper&,
   DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&) */

uint __thiscall
DensityMapOldOperations::getRegionSum<ChunkedBitSquare>
          (DensityMapOldOperations *this,int param_1,int param_2,uint param_3,uint param_4,
          int param_5,Helper *param_6,HelperSource *param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  Helper HVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  code **ppcVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  uint local_80;
  
  if (param_4 == 0) {
    local_80 = 0;
  }
  else {
    uVar11 = 0;
    local_80 = 0;
    do {
      uVar12 = uVar11 + param_2;
      uVar2 = uVar12;
      if (*(int *)(this + 0x28) <= (int)uVar12) {
        uVar2 = *(int *)(this + 0x28) - 1;
      }
      uVar3 = 0;
      if (-1 < (int)uVar12) {
        uVar3 = uVar2;
      }
      if (param_3 != 0) {
        uVar12 = 0;
        do {
          puVar13 = *(uint **)(param_7 + 0x10);
          uVar2 = uVar12 + param_1;
          uVar8 = puVar13[0xf];
          uVar7 = uVar2;
          if (*(int *)(this + 0x24) <= (int)uVar2) {
            uVar7 = *(int *)(this + 0x24) - 1;
          }
          uVar4 = *puVar13;
          uVar5 = 0;
          if (-1 < (int)uVar2) {
            uVar5 = uVar7;
          }
          *(uint *)(param_7 + 0x18) = uVar5;
          *(uint *)(param_7 + 0x1c) = uVar3;
          uVar2 = (((uVar3 >> 5) << (ulong)(uVar4 & 0x1f)) + (uVar5 >> 5)) * puVar13[0xd];
          ppcVar10 = *(code ***)(*(long *)(puVar13 + 10) + (ulong)uVar2 * 8);
          uVar7 = uVar5 & 0x1f | (uVar3 & 0x1f) << 5;
          uVar8 = (**ppcVar10)(ppcVar10,uVar7,0,uVar8);
          if (1 < puVar13[0xd]) {
            puVar15 = puVar13 + 0x11;
            uVar14 = 1;
            do {
              ppcVar10 = *(code ***)(*(long *)(puVar13 + 10) + (ulong)(uVar2 + (int)uVar14) * 8);
              iVar9 = (**ppcVar10)(ppcVar10,uVar7,0,*puVar15);
              puVar1 = puVar15 + -1;
              uVar14 = uVar14 + 1;
              puVar15 = puVar15 + 2;
              uVar8 = iVar9 << (ulong)(*puVar1 & 0x1f) | uVar8;
            } while (uVar14 < puVar13[0xd]);
          }
          uVar2 = *(uint *)(param_6 + 0xc);
          uVar7 = *(uint *)(param_6 + 0x10);
          uVar5 = *(uint *)(param_6 + 4);
          *(uint *)(param_7 + 0x20) = uVar8;
          uVar2 = uVar8 >> (ulong)(uVar5 & 0x1f) & uVar2;
          *(uint *)(param_6 + 0x30) = uVar2;
          *(uint *)(param_6 + 0x34) = uVar7 & uVar8;
          if ((*(int *)(param_6 + 0x14) == 2) ||
             ((*(int *)(param_6 + 0x14) == 0) != (*(uint *)(param_6 + 0x18) != (uVar7 & uVar8)))) {
            if ((int)uVar2 < *(int *)(param_6 + 0x1c)) {
              HVar6 = param_6[0x24];
joined_r0x00b8a4a4:
              if (HVar6 == (Helper)0x0) goto LAB_00b8a364;
            }
            else {
              HVar6 = param_6[0x24];
              if (*(int *)(param_6 + 0x20) < (int)uVar2) goto joined_r0x00b8a4a4;
              if (HVar6 != (Helper)0x0) goto LAB_00b8a364;
            }
            if ((*(uint *)(param_6 + 0x28) == 0) || ((*(uint *)(param_6 + 0x28) & uVar2) != 0)) {
              local_80 = (uVar2 + param_5 & ((int)(uVar2 + param_5) >> 0x1f ^ 0xffffffffU)) +
                         local_80;
            }
          }
LAB_00b8a364:
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_3);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_4);
  }
  return local_80;
}


