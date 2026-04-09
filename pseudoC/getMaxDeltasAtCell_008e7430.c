// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxDeltasAtCell
// Entry Point: 008e7430
// Size: 160 bytes
// Signature: undefined __thiscall getMaxDeltasAtCell(BaseTerrain * this, uint param_1, uint param_2, ushort * param_3, ushort * param_4)


/* BaseTerrain::getMaxDeltasAtCell(unsigned int, unsigned int, unsigned short&, unsigned short&) */

void __thiscall
BaseTerrain::getMaxDeltasAtCell
          (BaseTerrain *this,uint param_1,uint param_2,ushort *param_3,ushort *param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  lVar7 = *(long *)(this + 0x80);
  iVar5 = *(int *)(this + 0x90) * param_2;
  iVar1 = *(int *)(this + 0x90) + iVar5;
  uVar3 = *(ushort *)(lVar7 + (ulong)(iVar5 + param_1) * 2);
  uVar4 = *(ushort *)(lVar7 + (ulong)(iVar1 + param_1 + 1) * 2);
  uVar8 = (uint)*(ushort *)(lVar7 + (ulong)(iVar5 + param_1 + 1) * 2);
  uVar10 = *(ushort *)(lVar7 + (ulong)(iVar1 + param_1) * 2);
  uVar14 = NEON_rev64((ulong)CONCAT24(uVar10,uVar8),4);
  uVar9 = MP_INT_ABS(uVar3 - uVar8);
  uVar11 = MP_INT_ABS((uint)uVar3 - (uint)uVar10);
  uVar13 = MP_INT_ABS((int)uVar14 - (uint)uVar4);
  uVar15 = MP_INT_ABS((int)((ulong)uVar14 >> 0x20) - (uint)uVar4);
  uVar14 = NEON_umax(CONCAT44(uVar11,uVar9),CONCAT44(uVar15,uVar13),4);
  uVar12 = (uint)((ulong)uVar14 >> 0x20);
  if (uVar12 <= (uint)uVar14) {
    uVar12 = (uint)uVar14;
  }
  uVar6 = (uint)uVar3 - (uint)uVar4;
  uVar2 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar2 = uVar6;
  }
  uVar8 = uVar8 - uVar10;
  uVar6 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar6 = uVar8;
  }
  *param_3 = (ushort)uVar12;
  if (uVar6 <= uVar2) {
    uVar6 = uVar2;
  }
  *param_4 = (ushort)uVar6;
  return;
}


