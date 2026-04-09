// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: baseOffMeshLinks
// Entry Point: 00dcfa7c
// Size: 504 bytes
// Signature: undefined __thiscall baseOffMeshLinks(dtNavMesh * this, dtMeshTile * param_1)


/* dtNavMesh::baseOffMeshLinks(dtMeshTile*) */

void __thiscall dtNavMesh::baseOffMeshLinks(dtNavMesh *this,dtMeshTile *param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if ((param_1 != (dtMeshTile *)0x0) &&
     (lVar10 = *(long *)(param_1 + 8), 0 < *(int *)(lVar10 + 0x34))) {
    lVar12 = *(long *)(this + 0x50);
    iVar2 = *(int *)(this + 0x5c);
    uVar3 = *(uint *)(this + 0x60);
    iVar4 = *(int *)param_1;
    lVar16 = 0;
    lVar17 = 0;
    do {
      uStack_70 = *(undefined4 *)(lVar10 + 0x44);
      pfVar1 = (float *)(*(long *)(param_1 + 0x48) + lVar16);
      lVar10 = *(long *)(param_1 + 0x10);
      local_74 = pfVar1[6];
      uVar7 = *(ushort *)(pfVar1 + 7);
      local_6c = local_74;
      uVar9 = findNearestPolyInTile(this,param_1,pfVar1,&local_74,&local_80);
      if ((uVar9 != 0) &&
         ((local_80 - *pfVar1) * (local_80 - *pfVar1) +
          (local_78 - pfVar1[2]) * (local_78 - pfVar1[2]) <= pfVar1[6] * pfVar1[6])) {
        pfVar11 = (float *)(*(long *)(param_1 + 0x18) +
                           (ulong)*(ushort *)(lVar10 + (ulong)uVar7 * 0x20 + 4) * 0xc);
        *pfVar11 = local_80;
        pfVar11[1] = local_7c;
        pfVar11[2] = local_78;
        uVar5 = *(uint *)(param_1 + 4);
        if (uVar5 != 0xffffffff) {
          lVar13 = *(long *)(param_1 + 0x20);
          lVar15 = (ulong)uVar7 * 0x20;
          puVar14 = (uint *)(lVar13 + (ulong)uVar5 * 0xc);
          uVar6 = puVar14[1];
          *(uint *)(param_1 + 4) = uVar6;
          *puVar14 = uVar9;
          puVar14[2] = 0xff00;
          puVar14[1] = *(uint *)(lVar10 + lVar15);
          *(uint *)(lVar10 + lVar15) = uVar5;
          if (uVar6 != 0xffffffff) {
            puVar14 = (uint *)(lVar13 + (ulong)uVar6 * 0xc);
            *(uint *)(param_1 + 4) = puVar14[1];
            uVar5 = *(uint *)(this + 0x60);
            uVar7 = *(ushort *)(pfVar1 + 7);
            lVar13 = *(long *)(param_1 + 0x10);
            puVar14[2] = 0xffff;
            lVar10 = (ulong)(uVar9 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) & 0xffff) * 0x20;
            *puVar14 = (int)((ulong)((long)param_1 - lVar12) >> 3) * -0x3b13b13b <<
                       (ulong)(uVar3 & 0x1f) | iVar4 << (ulong)(iVar2 + uVar3 & 0x1f) | (uint)uVar7;
            puVar14[1] = *(uint *)(lVar13 + lVar10);
            *(uint *)(lVar13 + lVar10) = uVar6;
          }
        }
      }
      lVar10 = *(long *)(param_1 + 8);
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x24;
    } while (lVar17 < *(int *)(lVar10 + 0x34));
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


