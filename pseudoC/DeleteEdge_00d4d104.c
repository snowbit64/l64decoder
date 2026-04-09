// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteEdge
// Entry Point: 00d4d104
// Size: 324 bytes
// Signature: undefined __thiscall DeleteEdge(Graph * this, long param_1)


/* HACD::Graph::DeleteEdge(long) */

bool __thiscall HACD::Graph::DeleteEdge(Graph *this,long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar4 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 4) * -0x5555555555555555;
  if (lVar4 - param_1 != 0 && param_1 <= lVar4) {
    lVar10 = *(long *)(this + 0x20) + param_1 * 0x30;
    lVar5 = *(long *)(this + 0x38);
    lVar3 = *(long *)(lVar10 + 0x10);
    *(undefined *)(lVar10 + 0x28) = 1;
    lVar7 = lVar5 + *(long *)(lVar10 + 8) * 0x310;
    puVar8 = (ulong *)(lVar7 + 0x98);
    uVar6 = *puVar8;
    lVar10 = lVar7 + 0x10;
    if (*(long *)(lVar7 + 0xa0) != 0x10) {
      lVar10 = *(long *)(lVar7 + 0x90);
    }
    if (uVar6 != 0) {
      uVar9 = 0;
LAB_00d4d164:
      uVar1 = uVar9 + 1;
      if (*(long *)(lVar10 + uVar9 * 8) != param_1) goto code_r0x00d4d174;
      if (uVar1 < uVar6) {
        do {
          puVar2 = (undefined8 *)(lVar10 + uVar9 * 8);
          uVar1 = uVar9 + 2;
          *puVar2 = puVar2[1];
          uVar9 = uVar9 + 1;
          uVar6 = *puVar8;
        } while (uVar1 < uVar6);
      }
      *puVar8 = uVar6 - 1;
    }
LAB_00d4d1b8:
    lVar5 = lVar5 + lVar3 * 0x310;
    puVar8 = (ulong *)(lVar5 + 0x98);
    uVar6 = *puVar8;
    lVar10 = lVar5 + 0x10;
    if (*(long *)(lVar5 + 0xa0) != 0x10) {
      lVar10 = *(long *)(lVar5 + 0x90);
    }
    if (uVar6 != 0) {
      uVar9 = 0;
LAB_00d4d1dc:
      uVar1 = uVar9 + 1;
      if (*(long *)(lVar10 + uVar9 * 8) != param_1) goto code_r0x00d4d1ec;
      if (uVar1 < uVar6) {
        do {
          puVar2 = (undefined8 *)(lVar10 + uVar9 * 8);
          uVar1 = uVar9 + 2;
          *puVar2 = puVar2[1];
          uVar9 = uVar9 + 1;
          uVar6 = *puVar8;
        } while (uVar1 < uVar6);
      }
      *puVar8 = uVar6 - 1;
    }
LAB_00d4d230:
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
  }
  return lVar4 - param_1 != 0 && param_1 <= lVar4;
code_r0x00d4d174:
  uVar9 = uVar1;
  if (uVar6 == uVar1) goto LAB_00d4d1b8;
  goto LAB_00d4d164;
code_r0x00d4d1ec:
  uVar9 = uVar1;
  if (uVar6 == uVar1) goto LAB_00d4d230;
  goto LAB_00d4d1dc;
}


