// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycast
// Entry Point: 00dd6fbc
// Size: 952 bytes
// Signature: undefined __thiscall raycast(dtNavMeshQuery * this, uint param_1, float * param_2, float * param_3, dtQueryFilter * param_4, float * param_5, float * param_6, uint * param_7, int * param_8, int param_9)


/* dtNavMeshQuery::raycast(unsigned int, float const*, float const*, dtQueryFilter const*, float*,
   float*, unsigned int*, int*, int) const */

ulong __thiscall
dtNavMeshQuery::raycast
          (dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3,dtQueryFilter *param_4,
          float *param_5,float *param_6,uint *param_7,int *param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  dtPoly *local_e8;
  dtMeshTile *local_e0;
  uint local_d8;
  int iStack_d4;
  float local_d0;
  float fStack_cc;
  uint *local_c8;
  dtMeshTile *local_c0;
  float local_b8 [18];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  *param_5 = 0.0;
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  uVar14 = 0x80000008;
  if ((param_1 != 0) &&
     (uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar7 & 1) != 0)) {
    iVar12 = 0;
    uVar14 = 0x40000000;
    *(undefined8 *)param_6 = 0;
    param_6[2] = 0.0;
LAB_00dd705c:
    local_c0 = (dtMeshTile *)0x0;
    local_c8 = (uint *)0x0;
    dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,param_1,&local_c0,(dtPoly **)&local_c8)
    ;
    bVar3 = *(byte *)((long)local_c8 + 0x1e);
    uVar7 = (ulong)bVar3;
    if (bVar3 != 0) {
      lVar9 = *(long *)(local_c0 + 0x18);
      puVar13 = local_c8 + 1;
      pfVar10 = local_b8 + 2;
      do {
        uVar7 = uVar7 - 1;
        pfVar11 = (float *)(lVar9 + (ulong)*(ushort *)puVar13 * 0xc);
        pfVar10[-2] = *pfVar11;
        pfVar10[-1] = pfVar11[1];
        *pfVar10 = pfVar11[2];
        puVar13 = (uint *)((long)puVar13 + 2);
        pfVar10 = pfVar10 + 3;
      } while (uVar7 != 0);
    }
    uVar7 = dtIntersectSegmentPoly2D
                      (param_2,param_3,local_b8,(uint)bVar3,&fStack_cc,&local_d0,&iStack_d4,
                       (int *)&local_d8);
    if ((uVar7 & 1) == 0) goto joined_r0x00dd7420;
    if (*param_5 < local_d0) {
      *param_5 = local_d0;
    }
    if (iVar12 < param_9) {
      param_7[iVar12] = param_1;
      iVar12 = iVar12 + 1;
    }
    else {
      uVar14 = uVar14 | 0x10;
    }
    if (local_d8 == 0xffffffff) {
      *param_5 = 3.402823e+38;
      goto joined_r0x00dd7420;
    }
    uVar2 = *local_c8;
    if (uVar2 != 0xffffffff) {
      lVar9 = *(long *)(local_c0 + 0x20);
      uVar7 = (ulong)uVar2;
      if (local_d8 != *(byte *)(lVar9 + (ulong)uVar2 * 0xc + 8)) goto code_r0x00dd72f4;
      do {
        puVar13 = (uint *)(lVar9 + uVar7 * 0xc);
        local_e8 = (dtPoly *)0x0;
        local_e0 = (dtMeshTile *)0x0;
        dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,*puVar13,&local_e0,&local_e8);
        if ((((byte)local_e8[0x1f] & 0xc0) != 0x40) &&
           (uVar8 = (***(code ***)param_4)(param_4,*puVar13,local_e0), (uVar8 & 1) != 0)) {
          bVar4 = *(byte *)(lVar9 + uVar7 * 0xc + 9);
          if ((bVar4 == 0xff) ||
             ((*(char *)(lVar9 + uVar7 * 0xc + 10) == '\0' &&
              (*(char *)(lVar9 + uVar7 * 0xc + 0xb) == -1)))) goto LAB_00dd7324;
          if (bVar4 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00dd722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*(code *)(&UNK_00dd7230 + (ulong)(byte)(&DAT_0054a1fa)[bVar4] * 4))();
            return uVar7;
          }
        }
        lVar9 = *(long *)(local_c0 + 0x20);
code_r0x00dd72f4:
        do {
          uVar2 = *(uint *)(lVar9 + uVar7 * 0xc + 4);
          if (uVar2 == 0xffffffff) goto LAB_00dd733c;
          uVar7 = (ulong)uVar2;
        } while (local_d8 != *(byte *)(lVar9 + (ulong)uVar2 * 0xc + 8));
      } while( true );
    }
    goto LAB_00dd733c;
  }
LAB_00dd73d8:
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return (ulong)uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00dd7324:
  param_1 = *puVar13;
  if (param_1 == 0) goto LAB_00dd733c;
  goto LAB_00dd705c;
LAB_00dd733c:
  param_6[1] = 0.0;
  iVar6 = local_d8 * 3;
  iVar1 = iVar6 + 3;
  if ((int)(uint)bVar3 <= (int)(local_d8 + 1)) {
    iVar1 = 0;
  }
  fVar16 = local_b8[(long)iVar1 + 2] - local_b8[(long)iVar6 + 2];
  fVar15 = local_b8[iVar1] - local_b8[iVar6];
  *param_6 = fVar16;
  param_6[2] = -fVar15;
  fVar15 = (float)dtSqrt(fVar15 * fVar15 + fVar16 * fVar16 + 0.0);
  fVar15 = 1.0 / fVar15;
  *(ulong *)param_6 =
       CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) * fVar15,
                (float)*(undefined8 *)param_6 * fVar15);
  param_6[2] = fVar15 * param_6[2];
joined_r0x00dd7420:
  if (param_8 != (int *)0x0) {
    *param_8 = iVar12;
  }
  goto LAB_00dd73d8;
}


