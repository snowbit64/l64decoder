// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fixCone
// Entry Point: 00b74730
// Size: 196 bytes
// Signature: undefined __thiscall fixCone(Brep * this, uint param_1)


/* Brep::fixCone(unsigned int) */

void __thiscall Brep::fixCone(Brep *this,uint param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  lVar6 = *(long *)(this + 0x2f68);
  lVar8 = *(long *)(this + 0x2f50);
  uVar4 = *(ushort *)
           (*(long *)(this + 0x2ef0) +
            (ulong)*(ushort *)(lVar8 + (ulong)*(ushort *)(lVar6 + (ulong)param_1 * 8) * 0xc) * 0x10
           + 0xc);
  lVar7 = lVar8 + (ulong)uVar4 * 0xc;
  iVar3 = *(int *)(lVar7 + 4);
  uVar5 = *(ushort *)(lVar7 + 2);
  uVar2 = iVar3 + 2;
  if ((iVar3 - 1U & 3) != 0) {
    uVar2 = iVar3 - 1U;
  }
  iVar9 = *(int *)(lVar6 + (ulong)uVar2 * 8 + 4);
  do {
    uVar2 = iVar9 + 2;
    if ((iVar9 - 1U & 3) != 0) {
      uVar2 = iVar9 - 1U;
    }
    puVar1 = (ushort *)(lVar6 + (ulong)uVar2 * 8);
    iVar9 = *(int *)(puVar1 + 2);
    *puVar1 = uVar4;
  } while (iVar9 != iVar3);
  iVar3 = *(int *)(lVar8 + (ulong)uVar5 * 0xc + 4);
  uVar2 = iVar3 + 2;
  if ((iVar3 - 1U & 3) != 0) {
    uVar2 = iVar3 - 1U;
  }
  iVar9 = *(int *)(lVar6 + (ulong)uVar2 * 8 + 4);
  do {
    uVar2 = iVar9 + 2;
    if ((iVar9 - 1U & 3) != 0) {
      uVar2 = iVar9 - 1U;
    }
    puVar1 = (ushort *)(lVar6 + (ulong)uVar2 * 8);
    iVar9 = *(int *)(puVar1 + 2);
    *puVar1 = uVar5;
  } while (iVar9 != iVar3);
  return;
}


