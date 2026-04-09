// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMinMaxHeightAtCell
// Entry Point: 008e75a8
// Size: 112 bytes
// Signature: undefined __thiscall getMinMaxHeightAtCell(BaseTerrain * this, uint param_1, uint param_2, ushort * param_3, ushort * param_4)


/* BaseTerrain::getMinMaxHeightAtCell(unsigned int, unsigned int, unsigned short&, unsigned short&)
    */

void __thiscall
BaseTerrain::getMinMaxHeightAtCell
          (BaseTerrain *this,uint param_1,uint param_2,ushort *param_3,ushort *param_4)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  
  lVar9 = *(long *)(this + 0x80);
  iVar8 = *(int *)(this + 0x90) * param_2;
  iVar1 = *(int *)(this + 0x90) + iVar8;
  uVar3 = *(ushort *)(lVar9 + (ulong)(iVar8 + param_1) * 2);
  uVar4 = *(ushort *)(lVar9 + (ulong)(iVar1 + param_1) * 2);
  uVar5 = *(ushort *)(lVar9 + (ulong)(iVar1 + param_1 + 1) * 2);
  uVar6 = *(ushort *)(lVar9 + (ulong)(iVar8 + param_1 + 1) * 2);
  uVar2 = uVar5;
  if (uVar4 <= uVar5) {
    uVar2 = uVar4;
  }
  uVar7 = uVar6;
  if (uVar3 <= uVar6) {
    uVar7 = uVar3;
  }
  if (uVar7 <= uVar2) {
    uVar2 = uVar7;
  }
  if (uVar6 <= uVar3) {
    uVar6 = uVar3;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  *param_3 = uVar2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  *param_4 = uVar5;
  return;
}


