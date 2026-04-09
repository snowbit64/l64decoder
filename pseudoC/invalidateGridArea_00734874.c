// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invalidateGridArea
// Entry Point: 00734874
// Size: 168 bytes
// Signature: undefined __thiscall invalidateGridArea(VehicleNavigationAgentEntity * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* VehicleNavigationAgentEntity::invalidateGridArea(unsigned int, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
VehicleNavigationAgentEntity::invalidateGridArea
          (VehicleNavigationAgentEntity *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  if (((*(byte *)(*(long *)(this + 0x38) + 0x1383) & 1) == 0) &&
     (this[0x54] != (VehicleNavigationAgentEntity)0x0)) {
    uVar1 = *(ushort *)(*(long *)(this + 0x38) + 0x30);
    uVar2 = *(ushort *)(*(long *)(*(long *)(this + 0x30) + 0x108) + 0x24);
    uVar4 = 0;
    uVar8 = (uint)uVar2;
    if (uVar2 != 0) {
      uVar4 = (uVar1 * param_3) / uVar8;
    }
    uVar5 = 0;
    if (uVar8 != 0) {
      uVar5 = (uVar2 - 1) / uVar8;
    }
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = (uVar1 * param_1) / uVar8;
    }
    uVar10 = (uint)uVar1;
    uVar3 = uVar5 + uVar10 * param_4;
    uVar5 = uVar5 + uVar10 * param_2;
    uVar10 = uVar10 - 1;
    uVar8 = uVar10;
    if (uVar3 <= uVar10) {
      uVar8 = uVar3;
    }
    if (uVar5 <= uVar10) {
      uVar10 = uVar5;
    }
    uVar7 = SearchTree::touchesGridArea
                      ((SearchTree *)(*(long *)(this + 0x38) + 0x28),uVar6,uVar10,uVar4,uVar8);
    if ((uVar7 & 1) != 0) {
      lVar9 = *(long *)(this + 0x38);
      *(undefined4 *)(lVar9 + 0x1376) = 0xffffffff;
      *(undefined2 *)(lVar9 + 0x137a) = 0xffff;
      this[0x54] = (VehicleNavigationAgentEntity)0x0;
    }
  }
  return;
}


