// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCallbacks
// Entry Point: 0086892c
// Size: 304 bytes
// Signature: undefined __thiscall updateCallbacks(ConditionalAnimationItem * this, CharacterSet * param_1, int param_2, int param_3)


/* ConditionalAnimationItem::updateCallbacks(CharacterSet&, int, int) */

void __thiscall
ConditionalAnimationItem::updateCallbacks
          (ConditionalAnimationItem *this,CharacterSet *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (*(long *)(this + 0xe0) != *(long *)(this + 0xd8)) {
    fVar9 = (float)CharacterSet::getSpeedScale(param_1,param_3);
    fVar10 = (float)CharacterSet::getTime(param_1,param_3);
    fVar11 = (float)CharacterSet::getDuration((uint)param_1);
    lVar5 = *(long *)(this + 0xd8);
    uVar6 = (ulong)*(uint *)(this + 0xf0);
    uVar7 = (*(long *)(this + 0xe0) - lVar5 >> 3) * -0x5555555555555555;
    if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
      puVar8 = (undefined4 *)(lVar5 + uVar6 * 0x18);
      fVar12 = (float)NEON_fmadd(fVar11,(float)puVar8[1],*puVar8);
      bVar3 = fVar12 <= fVar10;
      if (fVar9 <= 0.0) {
        bVar3 = fVar10 <= fVar12;
      }
      if (bVar3) {
        lVar5 = lVar5 + uVar6 * 0x18;
        iVar4 = 0;
        if ((int)fVar11 != 0) {
          iVar4 = (int)fVar10 / (int)fVar11;
        }
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar5 + 0x10));
        uVar1 = *(uint *)(this + 0xf0);
        uVar2 = (int)((ulong)(*(long *)(this + 0xe0) - *(long *)(this + 0xd8)) >> 3) * -0x55555555;
        *(int *)(*(long *)(this + 0xd8) + (ulong)uVar1 * 0x18 + 4) = iVar4 + 1;
        if (fVar9 <= 0.0) {
          if (0.0 <= fVar9) {
            return;
          }
          if (uVar1 != 0) {
            uVar2 = uVar1;
          }
          iVar4 = uVar2 - 1;
        }
        else {
          iVar4 = 0;
          if (uVar1 != uVar2 - 1) {
            iVar4 = uVar1 + 1;
          }
        }
        *(int *)(this + 0xf0) = iVar4;
      }
    }
  }
  return;
}


