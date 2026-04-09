// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPointOnPolyBoundary
// Entry Point: 00dd4284
// Size: 424 bytes
// Signature: undefined __thiscall closestPointOnPolyBoundary(dtNavMeshQuery * this, uint param_1, float * param_2, float * param_3)


/* dtNavMeshQuery::closestPointOnPolyBoundary(unsigned int, float const*, float*) const */

void __thiscall
dtNavMeshQuery::closestPointOnPolyBoundary
          (dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3)

{
  dtPoly dVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ushort *puVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  dtPoly *local_d0;
  dtMeshTile *local_c8;
  float afStack_c0 [6];
  float local_a8 [6];
  undefined8 local_90;
  float local_88 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_d0 = (dtPoly *)0x0;
  local_c8 = (dtMeshTile *)0x0;
  iVar4 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&local_c8,&local_d0);
  if (iVar4 < 0) {
    uVar14 = 0x80000008;
    goto LAB_00dd4400;
  }
  dVar1 = local_d0[0x1e];
  uVar12 = (ulong)(byte)dVar1;
  if ((byte)dVar1 == 0) {
    uVar12 = dtDistancePtPolyEdgesSqr(param_2,(float *)&local_90,0,local_a8,afStack_c0);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0;
      iVar4 = -1;
      goto LAB_00dd43b0;
    }
LAB_00dd4390:
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    fVar13 = param_2[2];
  }
  else {
    lVar9 = *(long *)(local_c8 + 0x18);
    puVar7 = (ushort *)(local_d0 + 4);
    pfVar8 = local_88;
    uVar5 = uVar12;
    do {
      uVar5 = uVar5 - 1;
      pfVar10 = (float *)(lVar9 + (ulong)*puVar7 * 0xc);
      pfVar8[-2] = *pfVar10;
      pfVar8[-1] = pfVar10[1];
      *pfVar8 = pfVar10[2];
      puVar7 = puVar7 + 1;
      pfVar8 = pfVar8 + 3;
    } while (uVar5 != 0);
    uVar5 = dtDistancePtPolyEdgesSqr
                      (param_2,(float *)&local_90,(uint)(byte)dVar1,local_a8,afStack_c0);
    if ((uVar5 & 1) != 0) goto LAB_00dd4390;
    uVar5 = 0;
    fVar13 = 3.402823e+38;
    iVar6 = -1;
    do {
      fVar15 = local_a8[uVar5];
      bVar3 = fVar13 <= fVar15;
      if (bVar3) {
        fVar15 = fVar13;
      }
      fVar13 = fVar15;
      iVar4 = (int)uVar5;
      if (bVar3) {
        iVar4 = iVar6;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar4;
    } while (uVar12 != uVar5);
LAB_00dd43b0:
    iVar6 = 0;
    iVar11 = (int)uVar12;
    if (iVar11 != 0) {
      iVar6 = (iVar4 + 1) / iVar11;
    }
    lVar9 = (long)((iVar4 + 1) - iVar6 * iVar11);
    uVar16 = *(undefined8 *)((long)&local_90 + (long)iVar4 * 0xc);
    uVar14 = *(undefined8 *)((long)&local_90 + lVar9 * 0xc);
    fVar18 = afStack_c0[iVar4];
    fVar15 = (float)uVar16;
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    fVar13 = (float)NEON_fmadd(local_88[lVar9 * 3] - local_88[(long)iVar4 * 3],fVar18,
                               local_88[(long)iVar4 * 3]);
    *(ulong *)param_3 =
         CONCAT44(fVar17 + ((float)((ulong)uVar14 >> 0x20) - fVar17) * fVar18,
                  fVar15 + ((float)uVar14 - fVar15) * fVar18);
  }
  uVar14 = 0x40000000;
  param_3[2] = fVar13;
LAB_00dd4400:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar14);
  }
  return;
}


