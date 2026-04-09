// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unconnectExtLinks
// Entry Point: 00dcf094
// Size: 268 bytes
// Signature: undefined __thiscall unconnectExtLinks(dtNavMesh * this, dtMeshTile * param_1, dtMeshTile * param_2)


/* dtNavMesh::unconnectExtLinks(dtMeshTile*, dtMeshTile*) */

void __thiscall
dtNavMesh::unconnectExtLinks(dtNavMesh *this,dtMeshTile *param_1,dtMeshTile *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  
  if (((param_1 != (dtMeshTile *)0x0) && (param_2 != (dtMeshTile *)0x0)) &&
     (uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x18), 0 < (int)uVar5)) {
    lVar13 = *(long *)(this + 0x50);
    uVar3 = *(uint *)(this + 0x5c);
    uVar4 = *(uint *)(this + 0x60);
    iVar6 = *(int *)param_2;
    uVar12 = 0;
    lVar14 = *(long *)(param_1 + 0x10);
    do {
      puVar1 = (uint *)(lVar14 + uVar12 * 0x20);
      uVar16 = *puVar1;
      if (uVar16 != 0xffffffff) {
        lVar15 = *(long *)(param_1 + 0x20);
        uVar9 = 0xffffffff;
        do {
          while ((uVar10 = (ulong)uVar16, *(char *)(lVar15 + (ulong)uVar16 * 0xc + 9) == -1 ||
                 (((*(uint *)(lVar15 + uVar10 * 0xc) ^
                   ((int)((ulong)((long)param_2 - lVar13) >> 3) * -0x3b13b13b <<
                    (ulong)(uVar4 & 0x1f) | iVar6 << (ulong)(uVar3 + uVar4 & 0x1f))) >>
                   (ulong)(uVar4 & 0x1f) & ~(-1 << (ulong)(uVar3 & 0x1f))) != 0))) {
            uVar7 = *(uint *)(lVar15 + uVar10 * 0xc + 4);
            uVar9 = (ulong)uVar16;
            uVar16 = uVar7;
            if (uVar7 == 0xffffffff) goto LAB_00dcf0f8;
          }
          lVar11 = lVar15 + uVar10 * 0xc;
          puVar2 = puVar1;
          if ((int)uVar9 != -1) {
            puVar2 = (uint *)(lVar15 + uVar9 * 0xc + 4);
          }
          uVar7 = *(uint *)(lVar11 + 4);
          *puVar2 = uVar7;
          uVar8 = *(undefined4 *)(param_1 + 4);
          *(uint *)(param_1 + 4) = uVar16;
          *(undefined4 *)(lVar11 + 4) = uVar8;
          uVar16 = uVar7;
        } while (uVar7 != 0xffffffff);
      }
LAB_00dcf0f8:
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar5);
  }
  return;
}


