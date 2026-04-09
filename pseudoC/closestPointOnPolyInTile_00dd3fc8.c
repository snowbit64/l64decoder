// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPointOnPolyInTile
// Entry Point: 00dd3fc8
// Size: 700 bytes
// Signature: undefined __thiscall closestPointOnPolyInTile(dtNavMeshQuery * this, dtMeshTile * param_1, dtPoly * param_2, float * param_3, float * param_4)


/* dtNavMeshQuery::closestPointOnPolyInTile(dtMeshTile const*, dtPoly const*, float const*, float*)
   const */

void __thiscall
dtNavMeshQuery::closestPointOnPolyInTile
          (dtNavMeshQuery *this,dtMeshTile *param_1,dtPoly *param_2,float *param_3,float *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  float extraout_s0;
  float fVar14;
  float local_84;
  float fStack_80;
  float local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (((byte)param_2[0x1f] & 0xc0) == 0x40) {
    pfVar9 = (float *)(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(param_2 + 4) * 0xc);
    pfVar8 = (float *)(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(param_2 + 6) * 0xc);
    uVar12 = NEON_fmadd(*pfVar9 - *param_3,*pfVar9 - *param_3,
                        (pfVar9[1] - param_3[1]) * (pfVar9[1] - param_3[1]));
    fVar13 = (float)NEON_fmadd(pfVar9[2] - param_3[2],pfVar9[2] - param_3[2],uVar12);
    fVar13 = (float)dtSqrt(fVar13);
    uVar12 = NEON_fmadd(*pfVar8 - *param_3,*pfVar8 - *param_3,
                        (pfVar8[1] - param_3[1]) * (pfVar8[1] - param_3[1]));
    fVar14 = (float)NEON_fmadd(pfVar8[2] - param_3[2],pfVar8[2] - param_3[2],uVar12);
    this = (dtNavMeshQuery *)dtSqrt(fVar14);
    fVar13 = fVar13 / (fVar13 + extraout_s0);
    fVar14 = (float)NEON_fmadd(*pfVar8 - *pfVar9,fVar13,*pfVar9);
    *param_4 = fVar14;
    fVar14 = (float)NEON_fmadd(pfVar8[1] - pfVar9[1],fVar13,pfVar9[1]);
    param_4[1] = fVar14;
    fVar13 = (float)NEON_fmadd(pfVar8[2] - pfVar9[2],fVar13,pfVar9[2]);
    param_4[2] = fVar13;
  }
  else {
    piVar10 = (int *)(*(long *)(param_1 + 0x28) +
                     ((ulong)((long)param_2 - *(long *)(param_1 + 0x10)) >> 5 & 0xffffffff) * 0xc);
    if (*(byte *)((long)piVar10 + 9) != 0) {
      uVar11 = 0;
      fVar13 = 3.402823e+38;
      do {
        pbVar1 = (byte *)(*(long *)(param_1 + 0x38) + (ulong)((uVar11 + piVar10[1]) * 4));
        bVar2 = *pbVar1;
        uVar5 = (uint)(byte)param_2[0x1e];
        uVar6 = (uint)(byte)param_2[0x1e];
        if (bVar2 < uVar5) {
          pfVar8 = (float *)(*(long *)(param_1 + 0x18) +
                            (ulong)*(ushort *)(param_2 + (ulong)bVar2 * 2 + 4) * 0xc);
          bVar2 = pbVar1[1];
          iVar7 = bVar2 - uVar6;
          if (uVar6 <= bVar2) goto LAB_00dd4170;
LAB_00dd41c8:
          pfVar9 = (float *)(*(long *)(param_1 + 0x18) +
                            (ulong)*(ushort *)(param_2 + (ulong)bVar2 * 2 + 4) * 0xc);
          bVar2 = pbVar1[2];
          iVar7 = bVar2 - uVar6;
          if (bVar2 < uVar6) goto LAB_00dd41e8;
LAB_00dd4190:
          pfVar4 = (float *)(*(long *)(param_1 + 0x30) + (ulong)(uint)((iVar7 + *piVar10) * 3) * 4);
        }
        else {
          pfVar8 = (float *)(*(long *)(param_1 + 0x30) +
                            (ulong)(((bVar2 - uVar5) + *piVar10) * 3) * 4);
          bVar2 = pbVar1[1];
          iVar7 = bVar2 - uVar5;
          if (bVar2 < uVar5) goto LAB_00dd41c8;
LAB_00dd4170:
          pfVar9 = (float *)(*(long *)(param_1 + 0x30) + (ulong)(uint)((iVar7 + *piVar10) * 3) * 4);
          bVar2 = pbVar1[2];
          iVar7 = bVar2 - uVar6;
          if (uVar6 <= bVar2) goto LAB_00dd4190;
LAB_00dd41e8:
          pfVar4 = (float *)(*(long *)(param_1 + 0x18) +
                            (ulong)*(ushort *)(param_2 + (ulong)bVar2 * 2 + 4) * 0xc);
        }
        this = (dtNavMeshQuery *)dtClosestPtPointTriangle(&local_84,param_3,pfVar8,pfVar9,pfVar4);
        uVar12 = NEON_fmadd(local_84 - *param_3,local_84 - *param_3,
                            (fStack_80 - param_3[1]) * (fStack_80 - param_3[1]));
        fVar14 = (float)NEON_fmadd(local_7c - param_3[2],local_7c - param_3[2],uVar12);
        if (fVar14 < fVar13) {
          *param_4 = local_84;
          param_4[1] = fStack_80;
          param_4[2] = local_7c;
          fVar13 = fVar14;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(byte *)((long)piVar10 + 9));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


