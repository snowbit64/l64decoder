// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearRegion
// Entry Point: 0098c6ec
// Size: 316 bytes
// Signature: undefined __thiscall clearRegion(PlayerCenteredCollisionHeightmap * this, uint param_1, uint param_2, uint param_3, uint param_4, ClearMode param_5)


/* PlayerCenteredCollisionHeightmap::clearRegion(unsigned int, unsigned int, unsigned int, unsigned
   int, PlayerCenteredCollisionHeightmap::ClearMode) */

void __thiscall
PlayerCenteredCollisionHeightmap::clearRegion
          (PlayerCenteredCollisionHeightmap *this,uint param_1,uint param_2,uint param_3,
          uint param_4,ClearMode param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = (param_5 >> 2 & 1) + param_3;
  uVar7 = (ulong)uVar11;
  uVar12 = ((param_5 >> 3 ^ 0xffffffff) & 1) + param_4;
  if (uVar11 < uVar12) {
    lVar4 = *(long *)(this + 0x28);
    uVar1 = (param_5 & 1) + param_1;
    uVar8 = (ulong)uVar1;
    uVar2 = ((param_5 >> 1 ^ 0xffffffff) & 1) + param_2;
    iVar3 = *(int *)(this + 8);
    uVar9 = uVar2 - uVar8;
    uVar10 = uVar9 & 0xfffffffffffffffe;
    uVar11 = iVar3 * uVar11;
    do {
      if (uVar1 < uVar2) {
        uVar6 = uVar8;
        if (1 < uVar9) {
          puVar5 = (undefined *)(lVar4 + uVar8 * 0xc + 0x14 + (ulong)uVar11 * 0xc);
          uVar6 = uVar10;
          do {
            uVar6 = uVar6 - 2;
            puVar5[-0xc] = 0;
            *puVar5 = 0;
            puVar5 = puVar5 + 0x18;
          } while (uVar6 != 0);
          uVar6 = uVar10 + uVar8;
          if (uVar9 == uVar10) goto LAB_0098c76c;
        }
        puVar5 = (undefined *)(lVar4 + 8 + (ulong)uVar11 * 0xc + uVar6 * 0xc);
        do {
          uVar6 = uVar6 + 1;
          *puVar5 = 0;
          puVar5 = puVar5 + 0xc;
        } while (uVar6 < uVar2);
      }
LAB_0098c76c:
      uVar7 = uVar7 + 1;
      uVar11 = uVar11 + iVar3;
    } while (uVar7 < uVar12);
  }
  if (param_3 < param_4) {
    do {
      uVar12 = param_1;
      if (param_1 < param_2) {
        do {
          computeCell(this,uVar12,param_3);
          uVar12 = uVar12 + 1;
        } while (param_2 != uVar12);
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  return;
}


