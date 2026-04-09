// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swapEdge
// Entry Point: 00b74620
// Size: 272 bytes
// Signature: undefined __thiscall swapEdge(Brep * this, uint param_1)


/* Brep::swapEdge(unsigned int) */

void __thiscall Brep::swapEdge(Brep *this,uint param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort uVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  lVar10 = *(long *)(this + 0x2f68);
  lVar11 = *(long *)(this + 0x2f50);
  puVar1 = (ushort *)(lVar10 + (ulong)param_1 * 8);
  uVar12 = param_1 + 2;
  if ((param_1 - 1 & 3) != 0) {
    uVar12 = param_1 - 1;
  }
  uVar8 = *puVar1;
  uVar5 = *(uint *)(lVar11 + (ulong)*(ushort *)
                                     (*(long *)(this + 0x2ef0) +
                                      (ulong)*(ushort *)(lVar11 + (ulong)uVar8 * 0xc) * 0x10 + 0xc)
                             * 0xc + 4);
  uVar6 = uVar5;
  do {
    if (*(short *)(lVar11 + (ulong)*(ushort *)(lVar10 + (ulong)uVar6 * 8) * 0xc) ==
        *(short *)(lVar11 + (ulong)*(ushort *)(lVar10 + (ulong)uVar12 * 8) * 0xc)) {
      uVar12 = *(uint *)(lVar10 + (ulong)uVar6 * 8 + 4);
      goto LAB_00b746cc;
    }
    uVar4 = uVar6 + 2;
    if ((uVar6 - 1 & 3) != 0) {
      uVar4 = uVar6 - 1;
    }
    uVar6 = *(uint *)(lVar10 + (ulong)uVar4 * 8 + 4);
  } while (uVar6 != uVar5 && uVar6 != 0xffffffff);
  uVar12 = 0xffffffff;
LAB_00b746cc:
  puVar2 = (ushort *)(lVar10 + (ulong)uVar12 * 8);
  lVar3 = lVar10 + (ulong)param_1 * 8;
  uVar7 = *(undefined4 *)(lVar3 + 4);
  *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(puVar2 + 2);
  *(undefined4 *)(puVar2 + 2) = uVar7;
  uVar5 = *(uint *)(lVar3 + 4);
  *puVar1 = *puVar2;
  *puVar2 = uVar8;
  uVar9 = *puVar1;
  *(uint *)(lVar10 + (ulong)uVar5 * 8 + 4) = param_1;
  *(uint *)(lVar10 + (ulong)*(uint *)(puVar2 + 2) * 8 + 4) = uVar12;
  uVar7 = *(undefined4 *)(puVar2 + 2);
  *(undefined4 *)(lVar11 + (ulong)uVar9 * 0xc + 4) = *(undefined4 *)(lVar3 + 4);
  *(undefined4 *)(lVar11 + (ulong)uVar8 * 0xc + 4) = uVar7;
  return;
}


