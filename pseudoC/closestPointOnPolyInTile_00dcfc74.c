// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPointOnPolyInTile
// Entry Point: 00dcfc74
// Size: 516 bytes
// Signature: undefined __thiscall closestPointOnPolyInTile(dtNavMesh * this, dtMeshTile * param_1, uint param_2, float * param_3, float * param_4)


/* dtNavMesh::closestPointOnPolyInTile(dtMeshTile const*, unsigned int, float const*, float*) const
    */

void __thiscall
dtNavMesh::closestPointOnPolyInTile
          (dtNavMesh *this,dtMeshTile *param_1,uint param_2,float *param_3,float *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  float local_84;
  float fStack_80;
  float local_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  piVar12 = (int *)(*(long *)(param_1 + 0x28) + (ulong)param_2 * 0xc);
  if (*(byte *)((long)piVar12 + 9) != 0) {
    lVar14 = *(long *)(param_1 + 0x10);
    uVar15 = (ulong)param_2;
    uVar13 = 0;
    fVar8 = 3.402823e+38;
    do {
      pbVar1 = (byte *)(*(long *)(param_1 + 0x38) + (ulong)((uVar13 + piVar12[1]) * 4));
      bVar2 = *(byte *)(lVar14 + uVar15 * 0x20 + 0x1e);
      bVar3 = *pbVar1;
      uVar9 = (uint)bVar2;
      uVar10 = (uint)bVar2;
      if (bVar3 < uVar9) {
        pfVar5 = (float *)(*(long *)(param_1 + 0x18) +
                          (ulong)*(ushort *)(lVar14 + uVar15 * 0x20 + (ulong)bVar3 * 2 + 4) * 0xc);
        bVar2 = pbVar1[1];
        iVar11 = bVar2 - uVar10;
        if (uVar10 <= bVar2) goto LAB_00dcfd50;
LAB_00dcfda8:
        pfVar6 = (float *)(*(long *)(param_1 + 0x18) +
                          (ulong)*(ushort *)(lVar14 + uVar15 * 0x20 + (ulong)bVar2 * 2 + 4) * 0xc);
        bVar2 = pbVar1[2];
        iVar11 = bVar2 - uVar10;
        if (bVar2 < uVar10) goto LAB_00dcfdd0;
LAB_00dcfd70:
        pfVar7 = (float *)(*(long *)(param_1 + 0x30) + (ulong)(uint)((iVar11 + *piVar12) * 3) * 4);
      }
      else {
        pfVar5 = (float *)(*(long *)(param_1 + 0x30) + (ulong)(((bVar3 - uVar9) + *piVar12) * 3) * 4
                          );
        bVar2 = pbVar1[1];
        iVar11 = bVar2 - uVar9;
        if (bVar2 < uVar9) goto LAB_00dcfda8;
LAB_00dcfd50:
        pfVar6 = (float *)(*(long *)(param_1 + 0x30) + (ulong)(uint)((iVar11 + *piVar12) * 3) * 4);
        bVar2 = pbVar1[2];
        iVar11 = bVar2 - uVar10;
        if (uVar10 <= bVar2) goto LAB_00dcfd70;
LAB_00dcfdd0:
        pfVar7 = (float *)(*(long *)(param_1 + 0x18) +
                          (ulong)*(ushort *)(lVar14 + uVar15 * 0x20 + (ulong)bVar2 * 2 + 4) * 0xc);
      }
      this = (dtNavMesh *)dtClosestPtPointTriangle(&local_84,param_3,pfVar5,pfVar6,pfVar7);
      uVar16 = NEON_fmadd(local_84 - *param_3,local_84 - *param_3,
                          (fStack_80 - param_3[1]) * (fStack_80 - param_3[1]));
      fVar17 = (float)NEON_fmadd(local_7c - param_3[2],local_7c - param_3[2],uVar16);
      if (fVar17 < fVar8) {
        *param_4 = local_84;
        param_4[1] = fStack_80;
        param_4[2] = local_7c;
        fVar8 = fVar17;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(byte *)((long)piVar12 + 9));
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


