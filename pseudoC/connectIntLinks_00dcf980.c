// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectIntLinks
// Entry Point: 00dcf980
// Size: 252 bytes
// Signature: undefined __thiscall connectIntLinks(dtNavMesh * this, dtMeshTile * param_1)


/* dtNavMesh::connectIntLinks(dtMeshTile*) */

void __thiscall dtNavMesh::connectIntLinks(dtNavMesh *this,dtMeshTile *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if ((param_1 != (dtMeshTile *)0x0) &&
     (uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x18), 0 < (int)uVar5)) {
    lVar13 = *(long *)(this + 0x50);
    iVar3 = *(int *)(this + 0x5c);
    uVar4 = *(uint *)(this + 0x60);
    iVar6 = *(int *)param_1;
    uVar12 = 0;
    lVar14 = *(long *)(param_1 + 0x10);
    lVar15 = lVar14 + 0xe;
    do {
      puVar2 = (uint *)(lVar14 + uVar12 * 0x20);
      *puVar2 = 0xffffffff;
      if (((*(byte *)((long)puVar2 + 0x1f) & 0xc0) != 0x40) &&
         ((ulong)*(byte *)((long)puVar2 + 0x1e) != 0)) {
        uVar10 = 0xffffffff;
        uVar16 = (ulong)*(byte *)((long)puVar2 + 0x1e);
        do {
          uVar9 = *(ushort *)(lVar15 + uVar16 * 2);
          if (0 < (short)uVar9) {
            uVar7 = *(uint *)(param_1 + 4);
            if (uVar7 != 0xffffffff) {
              puVar11 = (uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 0xc);
              uVar8 = puVar11[1];
              *puVar11 = (int)((ulong)((long)param_1 - lVar13) >> 3) * -0x3b13b13b <<
                         (ulong)(uVar4 & 0x1f) | iVar6 << (ulong)(iVar3 + uVar4 & 0x1f) | uVar9 - 1;
              puVar11[1] = uVar10;
              *(char *)(puVar11 + 2) = (char)(uVar16 - 1);
              *(undefined *)((long)puVar11 + 0xb) = 0;
              *(uint *)(param_1 + 4) = uVar8;
              *(undefined2 *)((long)puVar11 + 9) = 0xff;
              *puVar2 = uVar7;
              uVar10 = uVar7;
            }
          }
          bVar1 = 1 < uVar16;
          uVar16 = uVar16 - 1;
        } while (bVar1);
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x20;
    } while (uVar12 != uVar5);
  }
  return;
}


