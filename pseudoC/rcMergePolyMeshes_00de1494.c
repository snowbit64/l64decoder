// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcMergePolyMeshes
// Entry Point: 00de1494
// Size: 1580 bytes
// Signature: undefined __cdecl rcMergePolyMeshes(rcContext * param_1, rcPolyMesh * * param_2, int param_3, rcPolyMesh * param_4)


/* rcMergePolyMeshes(rcContext*, rcPolyMesh**, int, rcPolyMesh&) */

undefined4
rcMergePolyMeshes(rcContext *param_1,rcPolyMesh **param_2,int param_3,rcPolyMesh *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  rcContext rVar4;
  ushort uVar5;
  uint uVar6;
  rcLogCategory rVar7;
  long lVar8;
  void *pvVar9;
  void *__s;
  void *__s_00;
  long lVar10;
  char *pcVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  rcPolyMesh *prVar17;
  rcPolyMesh **pprVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined2 *puVar22;
  int iVar23;
  ulong uVar24;
  undefined4 uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  if (param_2 == (rcPolyMesh **)0x0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0xc);
  }
  prVar17 = *param_2;
  uVar25 = *(undefined4 *)(prVar17 + 0x34);
  *(undefined8 *)(param_4 + 0x50) = *(undefined8 *)(prVar17 + 0x50);
  fVar27 = *(float *)(prVar17 + 0x38);
  *(undefined4 *)(param_4 + 0x34) = uVar25;
  *(float *)(param_4 + 0x38) = fVar27;
  fVar28 = *(float *)(prVar17 + 0x3c);
  *(float *)(param_4 + 0x3c) = fVar28;
  fVar29 = *(float *)(prVar17 + 0x40);
  *(float *)(param_4 + 0x40) = fVar29;
  fVar30 = *(float *)(prVar17 + 0x44);
  *(float *)(param_4 + 0x44) = fVar30;
  fVar31 = *(float *)(prVar17 + 0x48);
  *(float *)(param_4 + 0x48) = fVar31;
  fVar32 = *(float *)(prVar17 + 0x4c);
  *(float *)(param_4 + 0x4c) = fVar32;
  if (param_3 < 1) {
    uVar26 = 0;
    uVar24 = 0;
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar24 = 0;
    uVar26 = 0;
    uVar19 = (ulong)(uint)param_3;
    pprVar18 = param_2 + 1;
    while( true ) {
      uVar19 = uVar19 - 1;
      if (*(float *)(prVar17 + 0x38) <= fVar27) {
        fVar27 = *(float *)(prVar17 + 0x38);
      }
      *(float *)(param_4 + 0x38) = fVar27;
      if (*(float *)(prVar17 + 0x3c) <= fVar28) {
        fVar28 = *(float *)(prVar17 + 0x3c);
      }
      *(float *)(param_4 + 0x3c) = fVar28;
      if (*(float *)(prVar17 + 0x40) <= fVar29) {
        fVar29 = *(float *)(prVar17 + 0x40);
      }
      *(float *)(param_4 + 0x40) = fVar29;
      if (fVar30 <= *(float *)(prVar17 + 0x44)) {
        fVar30 = *(float *)(prVar17 + 0x44);
      }
      *(float *)(param_4 + 0x44) = fVar30;
      if (fVar31 <= *(float *)(prVar17 + 0x48)) {
        fVar31 = *(float *)(prVar17 + 0x48);
      }
      *(float *)(param_4 + 0x48) = fVar31;
      uVar3 = *(uint *)(prVar17 + 0x28);
      uVar16 = uVar3 + uVar16;
      uVar24 = (ulong)(uint)(*(int *)(prVar17 + 0x2c) + (int)uVar24);
      if (fVar32 <= *(float *)(prVar17 + 0x4c)) {
        fVar32 = *(float *)(prVar17 + 0x4c);
      }
      uVar2 = (uint)uVar26;
      if ((int)(uint)uVar26 <= (int)uVar3) {
        uVar2 = uVar3;
      }
      uVar26 = (ulong)uVar2;
      *(float *)(param_4 + 0x4c) = fVar32;
      if (uVar19 == 0) break;
      prVar17 = *pprVar18;
      pprVar18 = pprVar18 + 1;
    }
  }
  *(undefined4 *)(param_4 + 0x28) = 0;
  lVar8 = rcAlloc(uVar16 * 6,0);
  *(long *)param_4 = lVar8;
  rVar7 = (rcLogCategory)param_1;
  if (lVar8 == 0) {
    uVar16 = uVar16 * 3;
    pcVar11 = "rcMergePolyMeshes: Out of memory \'mesh.verts\' (%d).";
  }
  else {
    *(undefined4 *)(param_4 + 0x2c) = 0;
    pvVar9 = (void *)rcAlloc(*(int *)(param_4 + 0x34) * (int)(uVar24 << 2),0);
    *(void **)(param_4 + 8) = pvVar9;
    iVar23 = (int)uVar24;
    if (pvVar9 != (void *)0x0) {
      uVar19 = -(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1;
      memset(pvVar9,0xff,
             (-(uVar24 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2) * (long)*(int *)(param_4 + 0x34)
            );
      iVar15 = (int)(uVar24 << 1);
      pvVar9 = (void *)rcAlloc(iVar15,0);
      *(void **)(param_4 + 0x10) = pvVar9;
      if (pvVar9 == (void *)0x0) {
        pcVar11 = "rcMergePolyMeshes: Out of memory \'mesh.regs\' (%d).";
        goto LAB_00de1970;
      }
      memset(pvVar9,0,uVar19);
      pvVar9 = (void *)rcAlloc(iVar23,0);
      *(void **)(param_4 + 0x20) = pvVar9;
      if (pvVar9 == (void *)0x0) {
        pcVar11 = "rcMergePolyMeshes: Out of memory \'mesh.areas\' (%d).";
        goto LAB_00de1970;
      }
      memset(pvVar9,0,(long)iVar23);
      pvVar9 = (void *)rcAlloc(iVar15,0);
      *(void **)(param_4 + 0x18) = pvVar9;
      if (pvVar9 == (void *)0x0) {
        pcVar11 = "rcMergePolyMeshes: Out of memory \'mesh.flags\' (%d).";
        goto LAB_00de1970;
      }
      memset(pvVar9,0,uVar19);
      pvVar9 = (void *)rcAlloc((int)((long)(int)uVar16 << 2),1);
      if (pvVar9 == (void *)0x0) {
        rcContext::log(rVar7,(char *)0x3,"rcMergePolyMeshes: Out of memory \'nextVert\' (%d).",
                       (ulong)uVar16);
        uVar25 = 0;
        goto LAB_00de1a84;
      }
      memset(pvVar9,0,(long)(int)uVar16 << 2);
      __s = (void *)rcAlloc(0x4000,1);
      if (__s == (void *)0x0) {
        rcContext::log(rVar7,(char *)0x3,"rcMergePolyMeshes: Out of memory \'firstVert\' (%d).",
                       0x1000);
        uVar25 = 0;
      }
      else {
        memset(__s,0xff,0x4000);
        __s_00 = (void *)rcAlloc((int)(uVar26 << 1),0);
        if (__s_00 == (void *)0x0) {
          rcContext::log(rVar7,(char *)0x3,"rcMergePolyMeshes: Out of memory \'vremap\' (%d).",
                         uVar26);
LAB_00de1a70:
          uVar25 = 0;
        }
        else {
          memset(__s_00,0,-(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1);
          if (0 < param_3) {
            uVar24 = 0;
            do {
              plVar20 = (long *)param_2[uVar24];
              iVar23 = *(int *)(plVar20 + 5);
              if (0 < iVar23) {
                fVar28 = *(float *)(plVar20 + 7);
                lVar8 = 0;
                fVar29 = *(float *)(param_4 + 0x38);
                fVar31 = *(float *)(plVar20 + 8);
                fVar32 = *(float *)(param_4 + 0x40);
                fVar30 = *(float *)(param_4 + 0x50);
                lVar21 = *(long *)param_4;
                lVar10 = *plVar20;
                do {
                  puVar13 = (ushort *)(lVar10 + lVar8 * 6);
                  uVar5 = puVar13[1];
                  uVar16 = (uint)*puVar13 + (int)((fVar28 - fVar29) / fVar30 + 0.5);
                  uVar3 = (uint)puVar13[2] + (int)((fVar31 - fVar32) / fVar30 + 0.5);
                  uVar26 = (ulong)(uVar16 * 0xb343 + uVar3 * 0xb31f) & 0xfff;
                  for (iVar15 = *(int *)((long)__s + uVar26 * 4); iVar15 != -1;
                      iVar15 = *(int *)((long)pvVar9 + (long)iVar15 * 4)) {
                    puVar13 = (ushort *)(lVar21 + (long)iVar15 * 6);
                    if ((uint)*puVar13 == (uVar16 & 0xffff)) {
                      uVar6 = (uint)puVar13[1] - (uint)uVar5;
                      uVar2 = -uVar6;
                      if (-1 < (int)uVar6) {
                        uVar2 = uVar6;
                      }
                      if ((uVar2 < 3) && ((uint)puVar13[2] == (uVar3 & 0xffff))) goto LAB_00de17c4;
                    }
                  }
                  iVar15 = *(int *)(param_4 + 0x28);
                  lVar12 = uVar26 * 4;
                  puVar22 = (undefined2 *)(lVar21 + (long)(iVar15 * 3) * 2);
                  *(int *)(param_4 + 0x28) = iVar15 + 1;
                  uVar25 = *(undefined4 *)((long)__s + lVar12);
                  *puVar22 = (short)uVar16;
                  puVar22[1] = uVar5;
                  *(undefined4 *)((long)pvVar9 + (long)iVar15 * 4) = uVar25;
                  *(int *)((long)__s + lVar12) = iVar15;
                  iVar23 = *(int *)(plVar20 + 5);
                  puVar22[2] = (short)uVar3;
LAB_00de17c4:
                  *(short *)((long)__s_00 + lVar8 * 2) = (short)iVar15;
                  lVar8 = lVar8 + 1;
                } while (lVar8 < iVar23);
              }
              if (0 < *(int *)((long)plVar20 + 0x2c)) {
                iVar23 = 0;
                lVar8 = 0;
                iVar15 = *(int *)(param_4 + 0x2c);
                uVar16 = *(uint *)(param_4 + 0x34);
                do {
                  lVar21 = plVar20[4];
                  lVar14 = *(long *)(param_4 + 0x20);
                  *(undefined2 *)(*(long *)(param_4 + 0x10) + (long)iVar15 * 2) =
                       *(undefined2 *)(plVar20[2] + lVar8 * 2);
                  lVar10 = plVar20[1];
                  lVar12 = *(long *)(param_4 + 8);
                  *(undefined *)(lVar14 + iVar15) = *(undefined *)(lVar21 + lVar8);
                  uVar3 = *(uint *)(param_4 + 0x34);
                  uVar26 = (ulong)uVar3;
                  iVar1 = *(int *)(param_4 + 0x2c) + 1;
                  *(undefined2 *)(*(long *)(param_4 + 0x18) + (long)*(int *)(param_4 + 0x2c) * 2) =
                       *(undefined2 *)(plVar20[3] + lVar8 * 2);
                  *(int *)(param_4 + 0x2c) = iVar1;
                  if (0 < (int)uVar3) {
                    puVar13 = (ushort *)(lVar10 + (long)(int)(uVar16 * iVar23) * 2);
                    puVar22 = (undefined2 *)(lVar12 + (long)(int)(iVar15 * uVar16 * 2) * 2);
                    do {
                      uVar5 = *puVar13;
                      if ((ulong)uVar5 == 0xffff) break;
                      puVar13 = puVar13 + 1;
                      uVar26 = uVar26 - 1;
                      *puVar22 = *(undefined2 *)((long)__s_00 + (ulong)uVar5 * 2);
                      puVar22 = puVar22 + 1;
                    } while (uVar26 != 0);
                  }
                  lVar8 = lVar8 + 1;
                  iVar23 = iVar23 + 2;
                  iVar15 = iVar1;
                  uVar16 = uVar3;
                } while (lVar8 < *(int *)((long)plVar20 + 0x2c));
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 != (uint)param_3);
          }
          uVar24 = FUN_00de11c0(*(undefined8 *)(param_4 + 8),*(undefined4 *)(param_4 + 0x2c),
                                *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x34));
          if ((uVar24 & 1) == 0) {
            rcContext::log(rVar7,(char *)0x3,"rcMergePolyMeshes: Adjacency failed.");
            goto LAB_00de1a70;
          }
          if ((int)*(uint *)(param_4 + 0x28) < 0x10000) {
            uVar16 = *(uint *)(param_4 + 0x2c);
            if ((int)uVar16 < 0x10000) goto LAB_00de19fc;
LAB_00de1a9c:
            rcContext::log(rVar7,(char *)0x3,
                           "rcMergePolyMeshes: The resulting mesh has too many polygons %d (max %d). Data can be corrupted."
                           ,(ulong)uVar16,0xffff);
            rVar4 = param_1[9];
          }
          else {
            rcContext::log(rVar7,(char *)0x3,
                           "rcMergePolyMeshes: The resulting mesh has too many vertices %d (max %d). Data can be corrupted."
                           ,(ulong)*(uint *)(param_4 + 0x28),0xffff);
            uVar16 = *(uint *)(param_4 + 0x2c);
            if (0xffff < (int)uVar16) goto LAB_00de1a9c;
LAB_00de19fc:
            rVar4 = param_1[9];
          }
          if (rVar4 != (rcContext)0x0) {
            (**(code **)(*(long *)param_1 + 0x30))(param_1,0xc);
          }
          uVar25 = 1;
        }
        rcFree(__s_00);
      }
      rcFree(__s);
LAB_00de1a84:
      rcFree(pvVar9);
      return uVar25;
    }
    pcVar11 = "rcMergePolyMeshes: Out of memory \'mesh.polys\' (%d).";
    uVar16 = iVar23 * *(int *)(param_4 + 0x34) * 2;
  }
  uVar24 = (ulong)uVar16;
LAB_00de1970:
  rcContext::log(rVar7,(char *)0x3,pcVar11,uVar24);
  return 0;
}


