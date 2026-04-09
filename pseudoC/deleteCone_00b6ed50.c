// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteCone
// Entry Point: 00b6ed50
// Size: 300 bytes
// Signature: undefined __thiscall deleteCone(Brep * this, ushort param_1)


/* Brep::deleteCone(unsigned short) */

void __thiscall Brep::deleteCone(Brep *this,ushort param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ushort *puVar9;
  int iVar10;
  
  lVar5 = *(long *)(this + 0x2f50);
  puVar4 = (undefined8 *)(lVar5 + (ulong)param_1 * 0xc);
  if ((ulong)*(ushort *)puVar4 != 0xffff) {
    puVar9 = (ushort *)(*(long *)(this + 0x2ef0) + (ulong)*(ushort *)puVar4 * 0x10 + 0xc);
    uVar2 = *puVar9;
    while (uVar2 != param_1) {
      puVar9 = (ushort *)(lVar5 + (ulong)uVar2 * 0xc + 2);
      uVar2 = *puVar9;
    }
    *puVar9 = *(ushort *)(lVar5 + (ulong)param_1 * 0xc + 2);
  }
  lVar6 = *(long *)(this + 0x2f58);
  uVar3 = ((uint)((int)lVar6 - (int)lVar5) >> 2) * -0x5555 - 1;
  if ((uVar3 & 0xffff) != (uint)param_1) {
    puVar7 = (undefined8 *)(lVar5 + ((ulong)uVar3 & 0xffff) * 0xc);
    puVar9 = (ushort *)(*(long *)(this + 0x2ef0) + (ulong)*(ushort *)puVar7 * 0x10 + 0xc);
    uVar2 = *puVar9;
    if ((uint)uVar2 != (uVar3 & 0xffff)) {
      do {
        puVar9 = (ushort *)(lVar5 + (ulong)uVar2 * 0xc + 2);
        uVar2 = *puVar9;
      } while ((uint)uVar2 != (uVar3 & 0xffff));
    }
    *puVar9 = param_1;
    iVar1 = *(int *)(lVar5 + ((ulong)uVar3 & 0xffff) * 0xc + 4);
    if (iVar1 != -1) {
      lVar5 = *(long *)(this + 0x2f68);
      iVar10 = iVar1;
      do {
        uVar3 = iVar10 + 2;
        if ((iVar10 - 1U & 3) != 0) {
          uVar3 = iVar10 - 1U;
        }
        puVar9 = (ushort *)(lVar5 + (ulong)uVar3 * 8);
        iVar10 = *(int *)(puVar9 + 2);
        *puVar9 = param_1;
      } while (iVar10 != iVar1 && iVar10 != -1);
    }
    uVar8 = *puVar7;
    *(ushort *)(puVar4 + 1) = *(ushort *)(puVar7 + 1);
    *puVar4 = uVar8;
    lVar6 = *(long *)(this + 0x2f58);
  }
  *(long *)(this + 0x2f58) = lVar6 + -0xc;
  return;
}


