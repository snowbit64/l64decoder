// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectExtOffMeshLinks
// Entry Point: 00dcf540
// Size: 624 bytes
// Signature: undefined __thiscall connectExtOffMeshLinks(dtNavMesh * this, dtMeshTile * param_1, dtMeshTile * param_2, int param_3)


/* dtNavMesh::connectExtOffMeshLinks(dtMeshTile*, dtMeshTile*, int) */

void __thiscall
dtNavMesh::connectExtOffMeshLinks
          (dtNavMesh *this,dtMeshTile *param_1,dtMeshTile *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (param_1 != (dtMeshTile *)0x0) {
    lVar10 = *(long *)(param_2 + 8);
    uVar2 = param_3 + 4U & 7;
    if (param_3 == -1) {
      uVar2 = 0xffffffff;
    }
    if (0 < *(int *)(lVar10 + 0x34)) {
      lVar17 = 0;
      lVar18 = 0;
      do {
        lVar15 = *(long *)(param_2 + 0x48);
        lVar14 = lVar15 + lVar17;
        if ((uint)*(byte *)(lVar14 + 0x1f) == (uVar2 & 0xff)) {
          lVar16 = *(long *)(param_2 + 0x10);
          uVar7 = *(ushort *)(lVar14 + 0x1c);
          puVar13 = (uint *)(lVar16 + (ulong)uVar7 * 0x20);
          if (*puVar13 != 0xffffffff) {
            lVar1 = lVar15 + lVar17;
            uStack_70 = *(undefined4 *)(lVar10 + 0x44);
            local_74 = *(float *)(lVar1 + 0x18);
            local_6c = local_74;
            uVar9 = findNearestPolyInTile(this,param_1,(float *)(lVar1 + 0xc),&local_74,&local_80);
            if ((uVar9 != 0) &&
               (fVar19 = local_80 - *(float *)(lVar1 + 0xc),
               fVar20 = local_78 - *(float *)(lVar1 + 0x14),
               fVar19 * fVar19 + fVar20 * fVar20 <=
               *(float *)(lVar1 + 0x18) * *(float *)(lVar1 + 0x18))) {
              pfVar11 = (float *)(*(long *)(param_2 + 0x18) +
                                 (ulong)*(ushort *)(lVar16 + (ulong)uVar7 * 0x20 + 6) * 0xc);
              *pfVar11 = local_80;
              pfVar11[1] = local_7c;
              pfVar11[2] = local_78;
              uVar5 = *(uint *)(param_2 + 4);
              if (uVar5 != 0xffffffff) {
                puVar12 = (uint *)(*(long *)(param_2 + 0x20) + (ulong)uVar5 * 0xc);
                *(uint *)(param_2 + 4) = puVar12[1];
                *puVar12 = uVar9;
                *(char *)((long)puVar12 + 9) = (char)uVar2;
                *(undefined *)(puVar12 + 2) = 1;
                *(undefined2 *)((long)puVar12 + 10) = 0;
                puVar12[1] = *puVar13;
                *puVar13 = uVar5;
              }
              if ((*(byte *)(lVar15 + lVar17 + 0x1e) & 1) != 0) {
                uVar5 = *(uint *)(param_1 + 4);
                if (uVar5 != 0xffffffff) {
                  puVar13 = (uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 0xc);
                  *(uint *)(param_1 + 4) = puVar13[1];
                  lVar15 = *(long *)(param_1 + 0x10);
                  lVar10 = *(long *)(this + 0x50);
                  iVar3 = *(int *)(this + 0x5c);
                  uVar4 = *(uint *)(this + 0x60);
                  iVar6 = *(int *)param_2;
                  uVar7 = *(ushort *)(lVar14 + 0x1c);
                  *(undefined2 *)((long)puVar13 + 10) = 0;
                  lVar14 = (ulong)(uVar9 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU) & 0xffff) *
                           0x20;
                  *(undefined *)(puVar13 + 2) = 0xff;
                  *(char *)((long)puVar13 + 9) = (char)param_3;
                  *puVar13 = iVar6 << (ulong)(iVar3 + uVar4 & 0x1f) | (uint)uVar7 |
                             (int)((ulong)((long)param_2 - lVar10) >> 3) * -0x3b13b13b <<
                             (ulong)(uVar4 & 0x1f);
                  puVar13[1] = *(uint *)(lVar15 + lVar14);
                  *(uint *)(lVar15 + lVar14) = uVar5;
                }
              }
            }
            lVar10 = *(long *)(param_2 + 8);
          }
        }
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x24;
      } while (lVar18 < *(int *)(lVar10 + 0x34));
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


