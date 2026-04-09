// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcBuildPolyMesh
// Entry Point: 00dde574
// Size: 4740 bytes
// Signature: undefined __cdecl rcBuildPolyMesh(rcContext * param_1, rcContourSet * param_2, int param_3, rcPolyMesh * param_4)


/* rcBuildPolyMesh(rcContext*, rcContourSet&, int, rcPolyMesh&) */

undefined4 rcBuildPolyMesh(rcContext *param_1,rcContourSet *param_2,int param_3,rcPolyMesh *param_4)

{
  undefined (*pauVar1) [16];
  undefined2 *puVar2;
  long *plVar3;
  undefined *puVar4;
  uint uVar5;
  rcContext rVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  bool bVar13;
  rcLogCategory rVar14;
  uint uVar15;
  void *__s;
  void *__s_00;
  void *__s_01;
  void *pvVar16;
  void *pvVar17;
  void *__s_02;
  undefined8 *puVar18;
  void *pvVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  ulong uVar23;
  ulong uVar24;
  ushort *puVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined2 *puVar31;
  uint *puVar32;
  ulong uVar33;
  long lVar34;
  undefined4 *puVar35;
  int iVar36;
  ulong uVar37;
  int iVar38;
  undefined8 *puVar39;
  int iVar40;
  long lVar41;
  undefined2 *puVar42;
  uint uVar43;
  ushort *puVar44;
  long lVar45;
  undefined8 *puVar46;
  undefined (*pauVar47) [16];
  undefined4 uVar48;
  int iVar49;
  ulong uVar50;
  void *pvVar51;
  ulong uVar52;
  size_t __n;
  int *piVar53;
  size_t __n_00;
  ulong uVar54;
  undefined2 uVar55;
  void *pvVar56;
  int iVar57;
  int iVar58;
  undefined8 uVar59;
  int iVar60;
  int iVar61;
  undefined8 uVar62;
  int iVar63;
  uint uVar64;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  uint5 uVar90;
  uint uVar92;
  undefined auVar91 [16];
  uint uVar93;
  int iVar94;
  uint5 uVar95;
  uint uVar97;
  uint uVar98;
  undefined auVar96 [16];
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  undefined8 local_98;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  uVar20 = (ulong)(uint)param_3;
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0xb);
  }
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_4 + 0x40) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_4 + 0x48) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_4 + 0x4c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_4 + 0x50) = *(undefined8 *)(param_2 + 0x24);
  *(undefined4 *)(param_4 + 0x58) = *(undefined4 *)(param_2 + 0x34);
  uVar15 = *(uint *)(param_2 + 8);
  uVar27 = (ulong)uVar15;
  rVar14 = (rcLogCategory)param_1;
  if ((int)uVar15 < 1) {
    uVar23 = 0;
    uVar52 = 0;
    uVar15 = 0;
  }
  else {
    if (uVar15 == 1) {
      uVar33 = 0;
      uVar23 = 0;
      uVar52 = 0;
      uVar15 = 0;
LAB_00dde924:
      lVar28 = uVar27 - uVar33;
      puVar32 = (uint *)(*(long *)param_2 + uVar33 * 0x20 + 8);
      do {
        uVar43 = *puVar32;
        if (2 < (int)uVar43) {
          uVar23 = (ulong)(uVar43 + (int)uVar23);
          uVar52 = (ulong)(((int)uVar52 + uVar43) - 2);
          if ((int)uVar15 <= (int)uVar43) {
            uVar15 = uVar43;
          }
        }
        puVar32 = puVar32 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
    }
    else {
      uVar33 = uVar27 & 0xfffffffe;
      iVar36 = 0;
      iVar38 = 0;
      iVar57 = 0;
      uVar15 = 0;
      uVar43 = 0;
      uVar23 = uVar33;
      puVar32 = (uint *)(*(long *)param_2 + 0x28);
      iVar49 = 0;
      do {
        uVar26 = puVar32[-8];
        uVar64 = *puVar32;
        uVar5 = uVar15;
        if ((int)uVar15 <= (int)uVar26) {
          uVar5 = uVar26;
        }
        uVar92 = uVar43;
        if ((int)uVar43 <= (int)uVar64) {
          uVar92 = uVar64;
        }
        iVar40 = iVar57 + uVar26 + -2;
        if ((int)uVar26 < 3) {
          uVar26 = 0;
          uVar5 = uVar15;
          iVar40 = iVar57;
        }
        iVar57 = iVar40;
        uVar15 = uVar5;
        iVar40 = iVar49 + uVar64 + -2;
        if ((int)uVar64 < 3) {
          uVar64 = 0;
          iVar40 = iVar49;
          uVar92 = uVar43;
        }
        uVar43 = uVar92;
        iVar36 = iVar36 + uVar26;
        iVar38 = iVar38 + uVar64;
        uVar23 = uVar23 - 2;
        puVar32 = puVar32 + 0x10;
        iVar49 = iVar40;
      } while (uVar23 != 0);
      uVar52 = (ulong)(uint)(iVar40 + iVar57);
      if ((int)uVar15 <= (int)uVar43) {
        uVar15 = uVar43;
      }
      uVar23 = (ulong)(uint)(iVar38 + iVar36);
      if (uVar33 != uVar27) goto LAB_00dde924;
    }
    if (0xfffd < (int)uVar23) {
      rcContext::log(rVar14,(char *)0x3,"rcBuildPolyMesh: Too many vertices %d.");
      uVar48 = 0;
      goto LAB_00ddf790;
    }
  }
  __n = (size_t)(int)uVar23;
  __s = (void *)rcAlloc((int)uVar23,1);
  if (__s == (void *)0x0) {
    pcVar22 = "rcBuildPolyMesh: Out of memory \'vflags\' (%d).";
LAB_00dde978:
    rcContext::log(rVar14,(char *)0x3,pcVar22,uVar23);
    uVar48 = 0;
  }
  else {
    memset(__s,0,__n);
    lVar28 = rcAlloc((int)(__n * 6),0);
    *(long *)param_4 = lVar28;
    if (lVar28 == 0) {
      pcVar22 = "rcBuildPolyMesh: Out of memory \'mesh.verts\' (%d).";
      goto LAB_00dde978;
    }
    uVar27 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffe00000000 | uVar20 << 1;
    uVar33 = -(uVar52 >> 0x1f) & 0xfffffffe00000000 | uVar52 << 1;
    __n_00 = uVar27 * uVar33;
    lVar28 = rcAlloc((int)__n_00,0);
    *(long *)(param_4 + 8) = lVar28;
    iVar36 = (int)uVar52;
    if (lVar28 == 0) {
      pcVar22 = "rcBuildPolyMesh: Out of memory \'mesh.polys\' (%d).";
      uVar52 = (ulong)(uint)(param_3 * iVar36 * 2);
LAB_00dde9d8:
      rcContext::log(rVar14,(char *)0x3,pcVar22,uVar52);
      uVar48 = 0;
    }
    else {
      lVar28 = rcAlloc((int)(uVar52 << 1),0);
      *(long *)(param_4 + 0x10) = lVar28;
      if (lVar28 == 0) {
        pcVar22 = "rcBuildPolyMesh: Out of memory \'mesh.regs\' (%d).";
        goto LAB_00dde9d8;
      }
      lVar28 = rcAlloc(iVar36,0);
      *(long *)(param_4 + 0x20) = lVar28;
      if (lVar28 == 0) {
        pcVar22 = "rcBuildPolyMesh: Out of memory \'mesh.areas\' (%d).";
        goto LAB_00dde9d8;
      }
      *(undefined8 *)(param_4 + 0x28) = 0;
      *(int *)(param_4 + 0x30) = iVar36;
      *(int *)(param_4 + 0x34) = param_3;
      memset(*(void **)param_4,0,__n * 6);
      memset(*(void **)(param_4 + 8),0xff,__n_00);
      memset(*(void **)(param_4 + 0x10),0,uVar33);
      memset(*(void **)(param_4 + 0x20),0,(long)iVar36);
      __s_00 = (void *)rcAlloc((int)(__n << 2),1);
      if (__s_00 == (void *)0x0) {
        rcContext::log(rVar14,(char *)0x3,"rcBuildPolyMesh: Out of memory \'nextVert\' (%d).",uVar23
                      );
        uVar48 = 0;
      }
      else {
        memset(__s_00,0,__n << 2);
        __s_01 = (void *)rcAlloc(0x4000,1);
        if (__s_01 == (void *)0x0) {
          rcContext::log(rVar14,(char *)0x3,"rcBuildPolyMesh: Out of memory \'firstVert\' (%d).",
                         0x1000);
          uVar48 = 0;
        }
        else {
          memset(__s_01,0xff,0x4000);
          pvVar16 = (void *)rcAlloc(uVar15 << 2,1);
          if (pvVar16 == (void *)0x0) {
            rcContext::log(rVar14,(char *)0x3,"rcBuildPolyMesh: Out of memory \'indices\' (%d).",
                           (ulong)uVar15);
            uVar48 = 0;
          }
          else {
            pvVar17 = (void *)rcAlloc(uVar15 * 0xc,1);
            if (pvVar17 == (void *)0x0) {
              rcContext::log(rVar14,(char *)0x3,"rcBuildPolyMesh: Out of memory \'tris\' (%d).",
                             (ulong)(uVar15 * 3));
              uVar48 = 0;
            }
            else {
              __s_02 = (void *)rcAlloc((uVar15 * 2 + 2) * param_3,1);
              uVar15 = uVar15 * param_3;
              if (__s_02 == (void *)0x0) {
                rcContext::log(rVar14,(char *)0x3,"rcBuildPolyMesh: Out of memory \'polys\' (%d).");
LAB_00ddf758:
                uVar48 = 0;
              }
              else {
                lVar28 = (long)param_3;
                iVar38 = param_3 * 2;
                if (0 < *(int *)(param_2 + 8)) {
                  uVar23 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
                  lVar21 = 0;
                  pvVar19 = (void *)((long)__s_02 + uVar23);
                  puVar2 = (undefined2 *)((long)__s_02 + (long)(int)uVar15 * 2);
                  lVar34 = lVar28 * 2;
                  uVar33 = uVar20 & 0xfffffff0;
                  do {
                    lVar29 = *(long *)param_2;
                    piVar53 = (int *)(lVar29 + lVar21 * 0x20 + 8);
                    if (2 < *piVar53) {
                      lVar30 = 0;
                      do {
                        *(int *)((long)pvVar16 + lVar30 * 4) = (int)lVar30;
                        lVar30 = lVar30 + 1;
                      } while (lVar30 < *piVar53);
                      plVar3 = (long *)(lVar29 + lVar21 * 0x20);
                      uVar15 = FUN_00ddf7f8((long)*piVar53,*plVar3,pvVar16,pvVar17);
                      if ((int)uVar15 < 1) {
                        rcContext::log(rVar14,(char *)0x2,
                                       "rcBuildPolyMesh: Bad triangulation Contour %d.",lVar21);
                        uVar15 = -uVar15;
                      }
                      if (0 < *piVar53) {
                        lVar30 = 0;
                        do {
                          puVar32 = (uint *)(*plVar3 + lVar30 * 0x10);
                          uVar43 = *puVar32;
                          uVar7 = *(ushort *)(puVar32 + 2);
                          uVar8 = *(ushort *)(puVar32 + 1);
                          uVar37 = (ulong)(uVar43 * 0xb343 + (uint)uVar7 * 0xb31f) & 0xfff;
                          uVar5 = *(uint *)((long)__s_01 + uVar37 * 4);
                          while( true ) {
                            if (uVar5 == 0xffffffff) break;
                            puVar44 = (ushort *)(*(long *)param_4 + (long)(int)uVar5 * 6);
                            if ((uint)*puVar44 == (uVar43 & 0xffff)) {
                              uVar64 = (uint)puVar44[1] - (uint)uVar8;
                              uVar26 = -uVar64;
                              if (-1 < (int)uVar64) {
                                uVar26 = uVar64;
                              }
                              if ((uVar26 < 3) && (puVar44[2] == uVar7)) {
                                uVar37 = (ulong)uVar5 & 0xffff;
                                *(int *)((long)pvVar16 + lVar30 * 4) = (int)uVar37;
                                if ((*(byte *)((long)puVar32 + 0xe) & 1) == 0) goto LAB_00ddeb24;
                                goto LAB_00ddebfc;
                              }
                            }
                            uVar5 = *(uint *)((long)__s_00 + (long)(int)uVar5 * 4);
                          }
                          uVar5 = *(uint *)(param_4 + 0x28);
                          lVar41 = uVar37 * 4;
                          puVar31 = (undefined2 *)(*(long *)param_4 + (long)(int)(uVar5 * 3) * 2);
                          *(uint *)(param_4 + 0x28) = uVar5 + 1;
                          *puVar31 = (short)uVar43;
                          puVar31[1] = uVar8;
                          puVar31[2] = uVar7;
                          *(undefined4 *)((long)__s_00 + (long)(int)uVar5 * 4) =
                               *(undefined4 *)((long)__s_01 + lVar41);
                          *(uint *)((long)__s_01 + lVar41) = uVar5;
                          uVar37 = (ulong)uVar5 & 0xffff;
                          *(int *)((long)pvVar16 + lVar30 * 4) = (int)uVar37;
                          if ((*(byte *)((long)puVar32 + 0xe) & 1) != 0) {
LAB_00ddebfc:
                            *(undefined *)((long)__s + uVar37) = 1;
                          }
LAB_00ddeb24:
                          lVar30 = lVar30 + 1;
                        } while (lVar30 < *piVar53);
                      }
                      memset(__s_02,0xff,uVar23);
                      if (0 < (int)uVar15) {
                        uVar54 = 0;
                        uVar37 = (ulong)uVar15;
                        piVar53 = (int *)((long)pvVar17 + 8);
                        do {
                          iVar57 = piVar53[-2];
                          iVar49 = *piVar53;
                          if (((iVar57 != iVar49) && (iVar40 = *piVar53, iVar57 != iVar40)) &&
                             (iVar49 != iVar40)) {
                            iVar58 = (int)uVar54;
                            uVar54 = (ulong)(iVar58 + 1);
                            puVar31 = (undefined2 *)((long)__s_02 + (long)(iVar58 * param_3) * 2);
                            *puVar31 = (short)*(undefined4 *)((long)pvVar16 + (long)iVar57 * 4);
                            puVar31[1] = (short)*(undefined4 *)((long)pvVar16 + (long)iVar49 * 4);
                            puVar31[2] = (short)*(undefined4 *)((long)pvVar16 + (long)iVar40 * 4);
                          }
                          piVar53 = piVar53 + 3;
                          uVar37 = uVar37 - 1;
                        } while (uVar37 != 0);
                        iVar57 = (int)uVar54;
                        if (iVar57 != 0) {
                          if (3 < param_3) {
                            uVar37 = (ulong)iVar57;
                            uVar54 = uVar37;
                            if (1 < iVar57) {
                              do {
                                uVar37 = uVar54 - 1;
                                iVar49 = 0;
                                iVar40 = 0;
                                iVar57 = 0;
                                lVar30 = 1;
                                local_98 = 0;
                                uVar24 = 0;
                                pvVar51 = __s_02;
                                do {
                                  pvVar51 = (void *)((long)pvVar51 + lVar34);
                                  uVar50 = uVar24 + 1;
                                  if ((long)uVar50 < (long)uVar54) {
                                    lVar41 = lVar30;
                                    pvVar56 = pvVar51;
                                    do {
                                      iVar58 = FUN_00ddfb10((void *)((long)__s_02 +
                                                                    uVar24 * lVar28 * 2),pvVar56,
                                                            *(undefined8 *)param_4,&uStack_74,
                                                            &local_78,uVar20);
                                      if (iVar57 < iVar58) {
                                        iVar40 = (int)uVar24;
                                        iVar49 = (int)lVar41;
                                        local_98 = CONCAT44(local_78,uStack_74);
                                        iVar57 = iVar58;
                                      }
                                      lVar41 = lVar41 + 1;
                                      pvVar56 = (void *)((long)pvVar56 + lVar34);
                                    } while (lVar41 < (long)uVar54);
                                  }
                                  lVar30 = lVar30 + 1;
                                  uVar24 = uVar50;
                                } while (uVar50 != (uVar37 & 0xffffffff));
                                if (iVar57 < 1) goto LAB_00ddeefc;
                                pvVar51 = (void *)((long)__s_02 + (long)(iVar40 * param_3) * 2);
                                pvVar56 = (void *)((long)__s_02 + (long)(iVar49 * param_3) * 2);
                                if (param_3 < 1) {
                                  memset(pvVar19,0xff,uVar27);
                                }
                                else {
                                  uVar54 = 0;
                                  do {
                                    uVar24 = uVar54;
                                    if (*(short *)((long)__s_02 +
                                                  uVar54 * 2 + (long)(iVar40 * param_3) * 2) == -1)
                                    break;
                                    uVar54 = uVar54 + 1;
                                    uVar24 = uVar20;
                                  } while (uVar20 != uVar54);
                                  uVar54 = 0;
                                  do {
                                    uVar50 = uVar54;
                                    if (*(short *)((long)__s_02 +
                                                  uVar54 * 2 + (long)(iVar49 * param_3) * 2) == -1)
                                    break;
                                    uVar54 = uVar54 + 1;
                                    uVar50 = uVar20;
                                  } while (uVar20 != uVar54);
                                  memset(pvVar19,0xff,uVar27);
                                  iVar57 = (int)uVar24;
                                  if (iVar57 < 2) {
                                    uVar54 = 0;
                                  }
                                  else {
                                    uVar54 = (ulong)(iVar57 - 1);
                                    uVar24 = uVar54;
                                    puVar31 = puVar2;
                                    do {
                                      local_98._0_4_ = (int)local_98 + 1;
                                      iVar49 = 0;
                                      if (iVar57 != 0) {
                                        iVar49 = (int)local_98 / iVar57;
                                      }
                                      uVar24 = uVar24 - 1;
                                      *puVar31 = *(undefined2 *)
                                                  ((long)pvVar51 +
                                                  (long)((int)local_98 - iVar49 * iVar57) * 2);
                                      puVar31 = puVar31 + 1;
                                    } while (uVar24 != 0);
                                  }
                                  iVar57 = (int)uVar50;
                                  if (1 < iVar57) {
                                    iVar49 = 1;
                                    puVar31 = puVar2 + uVar54;
                                    do {
                                      iVar40 = local_98._4_4_ + iVar49;
                                      iVar49 = iVar49 + 1;
                                      iVar58 = 0;
                                      if (iVar57 != 0) {
                                        iVar58 = iVar40 / iVar57;
                                      }
                                      *puVar31 = *(undefined2 *)
                                                  ((long)pvVar56 +
                                                  (long)(iVar40 - iVar58 * iVar57) * 2);
                                      puVar31 = puVar31 + 1;
                                    } while (iVar57 != iVar49);
                                  }
                                }
                                memcpy(pvVar51,pvVar19,uVar27);
                                memcpy(pvVar56,(void *)((long)__s_02 + uVar37 * lVar28 * 2),uVar27);
                                uVar54 = uVar37;
                              } while (1 < (long)uVar37);
                            }
                            uVar54 = uVar37 & 0xffffffff;
                          }
LAB_00ddeefc:
                          if (0 < (int)uVar54) {
                            uVar37 = 0;
                            bVar13 = true;
                            uVar24 = (ulong)*(uint *)(param_4 + 0x2c);
                            lVar29 = lVar29 + lVar21 * 0x20;
                            pvVar51 = __s_02;
                            puVar39 = (undefined8 *)((long)__s_02 + 0x10);
                            do {
                              iVar57 = (int)uVar24;
                              if (0 < param_3) {
                                lVar30 = *(long *)(param_4 + 8);
                                lVar41 = (long)(iVar38 * iVar57);
                                if (((uint)param_3 < 0x10) ||
                                   (((ulong)(lVar30 + (long)(iVar38 * iVar57) * 2) <
                                     (long)__s_02 + uVar20 * 2 + lVar34 * uVar37 &&
                                    ((void *)((long)__s_02 + lVar34 * uVar37) <
                                     (void *)(lVar30 + uVar20 * 2 + lVar41 * 2))))) {
                                  uVar24 = 0;
                                }
                                else {
                                  puVar46 = (undefined8 *)(lVar30 + lVar41 * 2 + 0x10);
                                  puVar18 = puVar39;
                                  uVar24 = uVar33;
                                  do {
                                    puVar10 = puVar18 + -1;
                                    uVar11 = puVar18[-2];
                                    uVar62 = puVar18[1];
                                    uVar59 = *puVar18;
                                    puVar18 = puVar18 + 4;
                                    uVar24 = uVar24 - 0x10;
                                    puVar46[-1] = *puVar10;
                                    puVar46[-2] = uVar11;
                                    puVar46[1] = uVar62;
                                    *puVar46 = uVar59;
                                    puVar46 = puVar46 + 4;
                                  } while (uVar24 != 0);
                                  uVar24 = uVar33;
                                  if (uVar33 == uVar20) goto LAB_00ddefac;
                                }
                                lVar45 = uVar20 - uVar24;
                                puVar31 = (undefined2 *)(lVar30 + (uVar24 + lVar41) * 2);
                                puVar42 = (undefined2 *)((long)pvVar51 + uVar24 * 2);
                                do {
                                  lVar45 = lVar45 + -1;
                                  *puVar31 = *puVar42;
                                  puVar31 = puVar31 + 1;
                                  puVar42 = puVar42 + 1;
                                } while (lVar45 != 0);
                              }
LAB_00ddefac:
                              *(undefined2 *)(*(long *)(param_4 + 0x10) + (long)iVar57 * 2) =
                                   *(undefined2 *)(lVar29 + 0x1c);
                              *(undefined *)(*(long *)(param_4 + 0x20) + (long)iVar57) =
                                   *(undefined *)(lVar29 + 0x1e);
                              iVar57 = *(int *)(param_4 + 0x2c);
                              uVar15 = iVar57 + 1;
                              uVar24 = (ulong)uVar15;
                              *(uint *)(param_4 + 0x2c) = uVar15;
                              if (iVar36 <= iVar57) {
                                rcContext::log(rVar14,(char *)0x3,
                                               "rcBuildPolyMesh: Too many polygons %d (max:%d).",
                                               uVar24,uVar52);
                                if (bVar13) goto LAB_00ddf758;
                                break;
                              }
                              uVar37 = uVar37 + 1;
                              bVar13 = uVar37 < (uVar54 & 0xffffffff);
                              puVar39 = (undefined8 *)((long)puVar39 + lVar34);
                              pvVar51 = (void *)((long)pvVar51 + lVar34);
                            } while (uVar37 != (uVar54 & 0xffffffff));
                          }
                        }
                      }
                    }
                    lVar21 = lVar21 + 1;
                  } while (lVar21 < *(int *)(param_2 + 8));
                }
                iVar36 = *(int *)(param_4 + 0x28);
                if (0 < iVar36) {
                  uVar15 = 0;
                  do {
                    lVar21 = (long)(int)uVar15;
                    if ((*(char *)((long)__s + lVar21) != '\0') &&
                       (uVar43 = *(uint *)(param_4 + 0x2c), 0 < (int)uVar43)) {
                      uVar5 = *(uint *)(param_4 + 0x34);
                      if (0 < (int)uVar5) {
                        lVar34 = *(long *)(param_4 + 8);
                        uVar23 = 0;
                        uVar27 = 0;
                        iVar57 = 0;
                        iVar36 = 0;
                        iVar49 = uVar5 * 2;
                        uVar55 = (undefined2)uVar15;
LAB_00ddf0e0:
                        do {
                          iVar40 = (int)uVar23;
                          uVar33 = -(uVar23 >> 0x1f) & 0xfffffffe00000000 | uVar23 << 1;
                          uVar23 = 0;
                          pauVar47 = (undefined (*) [16])(lVar34 + 0x10 + uVar33);
                          do {
                            if (*(short *)(lVar34 + uVar33 + uVar23 * 2) == -1) goto LAB_00ddf110;
                            uVar23 = uVar23 + 1;
                          } while (uVar5 != uVar23);
                          uVar23 = (ulong)uVar5;
LAB_00ddf110:
                          uVar26 = (uint)uVar23;
                          if ((int)uVar26 < 1) {
LAB_00ddf0c8:
                            uVar27 = uVar27 + 1;
                            uVar23 = (ulong)(uint)(iVar40 + iVar49);
                            if (uVar27 == uVar43) break;
                            goto LAB_00ddf0e0;
                          }
                          if (uVar26 < 0x10) {
                            uVar37 = 0;
                            uVar64 = 0;
LAB_00ddf1e4:
                            lVar29 = (uVar23 & 0xffffffff) - uVar37;
                            puVar44 = (ushort *)(lVar34 + (uVar37 + (long)iVar40) * 2);
                            do {
                              if ((uint)*puVar44 == (uVar15 & 0xffff)) {
                                uVar64 = uVar64 + 1;
                                iVar57 = iVar57 + 1;
                              }
                              lVar29 = lVar29 + -1;
                              puVar44 = puVar44 + 1;
                            } while (lVar29 != 0);
                          }
                          else {
                            iVar60 = 0;
                            iVar61 = 0;
                            uVar37 = uVar23 & 0xfffffff0;
                            iVar63 = 0;
                            iVar70 = 0;
                            iVar71 = 0;
                            iVar72 = 0;
                            iVar58 = 0;
                            iVar73 = 0;
                            iVar74 = 0;
                            iVar75 = 0;
                            iVar76 = 0;
                            iVar77 = 0;
                            iVar78 = 0;
                            iVar79 = 0;
                            iVar80 = 0;
                            iVar81 = 0;
                            iVar82 = 0;
                            iVar83 = 0;
                            iVar84 = 0;
                            iVar85 = 0;
                            iVar86 = 0;
                            iVar87 = 0;
                            iVar88 = 0;
                            uVar33 = uVar37;
                            auVar69 = ZEXT816(0);
                            auVar67 = ZEXT816(0);
                            do {
                              pauVar1 = pauVar47 + -1;
                              auVar65 = *pauVar47;
                              pauVar47 = pauVar47 + 2;
                              uVar33 = uVar33 - 0x10;
                              auVar91._2_2_ = uVar55;
                              auVar91._0_2_ = uVar55;
                              auVar91._4_2_ = uVar55;
                              auVar91._6_2_ = uVar55;
                              auVar91._8_2_ = uVar55;
                              auVar91._10_2_ = uVar55;
                              auVar91._12_2_ = uVar55;
                              auVar91._14_2_ = uVar55;
                              auVar91 = NEON_cmeq(*pauVar1,auVar91,2);
                              auVar96._2_2_ = uVar55;
                              auVar96._0_2_ = uVar55;
                              auVar96._4_2_ = uVar55;
                              auVar96._6_2_ = uVar55;
                              auVar96._8_2_ = uVar55;
                              auVar96._10_2_ = uVar55;
                              auVar96._12_2_ = uVar55;
                              auVar96._14_2_ = uVar55;
                              auVar96 = NEON_cmeq(auVar65,auVar96,2);
                              uVar100 = (uint)(auVar91[8] & 1);
                              uVar101 = (uint)(auVar91[10] & 1);
                              uVar102 = (uint)(auVar91[12] & 1);
                              uVar103 = (uint)(auVar91[14] & 1);
                              uVar90 = CONCAT14(auVar91[2],(uint)(auVar91[0] & 1)) & 0x1ffffffff;
                              uVar104 = (uint)(auVar96[8] & 1);
                              uVar105 = (uint)(auVar96[10] & 1);
                              uVar106 = (uint)(auVar96[12] & 1);
                              uVar107 = (uint)(auVar96[14] & 1);
                              uVar95 = CONCAT14(auVar96[2],(uint)(auVar96[0] & 1)) & 0x1ffffffff;
                              iVar77 = iVar77 + uVar100;
                              iVar78 = iVar78 + uVar101;
                              iVar79 = iVar79 + uVar102;
                              iVar80 = iVar80 + uVar103;
                              iVar89 = (int)uVar90;
                              iVar73 = iVar73 + iVar89;
                              uVar64 = (uint)(byte)(uVar90 >> 0x20);
                              iVar74 = iVar74 + uVar64;
                              uVar92 = (uint)(auVar91[4] & 1);
                              iVar75 = iVar75 + uVar92;
                              uVar93 = (uint)(auVar91[6] & 1);
                              iVar76 = iVar76 + uVar93;
                              iVar85 = iVar85 + uVar104;
                              iVar86 = iVar86 + uVar105;
                              iVar87 = iVar87 + uVar106;
                              iVar88 = iVar88 + uVar107;
                              iVar94 = (int)uVar95;
                              iVar81 = iVar81 + iVar94;
                              uVar97 = (uint)(byte)(uVar95 >> 0x20);
                              iVar82 = iVar82 + uVar97;
                              uVar98 = (uint)(auVar96[4] & 1);
                              iVar83 = iVar83 + uVar98;
                              uVar99 = (uint)(auVar96[6] & 1);
                              iVar84 = iVar84 + uVar99;
                              auVar65._0_4_ = auVar69._0_4_ + uVar100;
                              auVar65._4_4_ = auVar69._4_4_ + uVar101;
                              auVar65._8_4_ = auVar69._8_4_ + uVar102;
                              auVar65._12_4_ = auVar69._12_4_ + uVar103;
                              iVar57 = iVar57 + iVar89;
                              iVar58 = iVar58 + uVar64;
                              iVar60 = iVar60 + uVar92;
                              iVar61 = iVar61 + uVar93;
                              iVar63 = iVar63 + uVar104;
                              iVar70 = iVar70 + uVar105;
                              iVar71 = iVar71 + uVar106;
                              iVar72 = iVar72 + uVar107;
                              auVar68._0_4_ = auVar67._0_4_ + iVar94;
                              auVar68._4_4_ = auVar67._4_4_ + uVar97;
                              auVar68._8_4_ = auVar67._8_4_ + uVar98;
                              auVar68._12_4_ = auVar67._12_4_ + uVar99;
                              auVar69 = auVar65;
                              auVar67 = auVar68;
                            } while (uVar33 != 0);
                            uVar64 = iVar81 + iVar73 + iVar85 + iVar77 +
                                     iVar82 + iVar74 + iVar86 + iVar78 +
                                     iVar83 + iVar75 + iVar87 + iVar79 +
                                     iVar84 + iVar76 + iVar88 + iVar80;
                            iVar57 = auVar68._0_4_ + iVar57 + iVar63 + auVar65._0_4_ +
                                     auVar68._4_4_ + iVar58 + iVar70 + auVar65._4_4_ +
                                     auVar68._8_4_ + iVar60 + iVar71 + auVar65._8_4_ +
                                     auVar68._12_4_ + iVar61 + iVar72 + auVar65._12_4_;
                            if (uVar37 != (uVar23 & 0xffffffff)) goto LAB_00ddf1e4;
                          }
                          if (uVar64 == 0) goto LAB_00ddf0c8;
                          iVar36 = uVar26 + ~uVar64 + iVar36;
                          uVar27 = uVar27 + 1;
                          uVar23 = (ulong)(uint)(iVar40 + iVar49);
                        } while (uVar27 != uVar43);
                        if (2 < iVar36) {
                          pvVar19 = (void *)rcAlloc(iVar57 * 0x18,1);
                          if (pvVar19 == (void *)0x0) {
                            rcContext::log(rVar14,(char *)0x2,
                                           "canRemoveVertex: Out of memory \'edges\' (%d).",
                                           (ulong)(uint)(iVar57 * 6));
                            rcFree((void *)0x0);
                          }
                          else {
                            iVar36 = *(int *)(param_4 + 0x2c);
                            if (iVar36 < 1) {
LAB_00ddf3a4:
                              rcFree(pvVar19);
                            }
                            else {
                              iVar57 = 0;
                              lVar34 = 0;
                              uVar43 = 0;
                              lVar29 = *(long *)(param_4 + 8);
                              do {
                                uVar27 = 0;
                                lVar30 = lVar29 + (long)(iVar49 * (int)lVar34) * 2;
                                do {
                                  if (*(short *)(lVar29 + (long)iVar57 * 2 + uVar27 * 2) == -1)
                                  goto LAB_00ddf2b4;
                                  uVar27 = uVar27 + 1;
                                } while (uVar5 != uVar27);
                                uVar27 = (ulong)uVar5;
LAB_00ddf2b4:
                                iVar40 = (int)uVar27 + -1;
                                if (0 < (int)uVar27) {
                                  uVar23 = 0;
                                  do {
                                    uVar7 = *(ushort *)(lVar30 + uVar23 * 2);
                                    uVar8 = *(ushort *)(lVar30 + (long)iVar40 * 2);
                                    uVar26 = (uint)uVar8;
                                    if (((uint)uVar7 == (uVar15 & 0xffff)) ||
                                       (uVar26 = uVar15, (uint)uVar8 == (uVar15 & 0xffff))) {
                                      uVar26 = uVar26 & 0xffff;
                                      bVar13 = uVar26 != (uVar15 & 0xffff);
                                      uVar64 = uVar26;
                                      if (bVar13) {
                                        uVar64 = (uint)uVar7;
                                      }
                                      uVar92 = (uint)uVar7;
                                      if (bVar13) {
                                        uVar92 = uVar26;
                                      }
                                      if ((int)uVar43 < 1) {
LAB_00ddf2c8:
                                        iVar36 = uVar43 * 3;
                                        uVar43 = uVar43 + 1;
                                        puVar32 = (uint *)((long)pvVar19 + (long)iVar36 * 4);
                                        *puVar32 = uVar64;
                                        puVar32[1] = uVar92;
                                        puVar32[2] = 1;
                                      }
                                      else {
                                        uVar33 = 0;
                                        bVar13 = false;
                                        do {
                                          piVar53 = (int *)((long)pvVar19 + uVar33 * 0xc + 8);
                                          uVar37 = uVar33;
                                          while (piVar53[-1] != uVar92) {
                                            uVar37 = uVar37 + 1;
                                            piVar53 = piVar53 + 3;
                                            if (uVar43 == uVar37) {
                                              if (!bVar13) goto LAB_00ddf2c8;
                                              goto LAB_00ddf2dc;
                                            }
                                          }
                                          uVar33 = uVar37 + 1;
                                          bVar13 = true;
                                          *piVar53 = *piVar53 + 1;
                                        } while ((ulong)uVar43 - 1 != uVar37);
                                      }
                                    }
LAB_00ddf2dc:
                                    uVar33 = uVar23 + 1;
                                    iVar40 = (int)uVar23;
                                    uVar23 = uVar33;
                                  } while (uVar33 != (uVar27 & 0xffffffff));
                                  iVar36 = *(int *)(param_4 + 0x2c);
                                }
                                lVar34 = lVar34 + 1;
                                iVar57 = iVar57 + iVar49;
                              } while (lVar34 < iVar36);
                              if ((int)uVar43 < 1) goto LAB_00ddf3a4;
                              uVar27 = (ulong)uVar43;
                              if (uVar43 < 9) {
                                lVar29 = 0;
                                uVar43 = 0;
                              }
                              else {
                                uVar23 = 8;
                                if ((uVar43 & 7) != 0) {
                                  uVar23 = uVar27 & 7;
                                }
                                lVar29 = uVar27 - uVar23;
                                iVar36 = 0;
                                iVar57 = 0;
                                iVar49 = 0;
                                iVar40 = 0;
                                iVar58 = 0;
                                iVar60 = 0;
                                iVar61 = 0;
                                iVar63 = 0;
                                puVar35 = (undefined4 *)((long)pvVar19 + 0x38);
                                lVar34 = lVar29;
                                do {
                                  lVar34 = lVar34 + -8;
                                  auVar66._0_4_ = puVar35[-0xc];
                                  auVar66._4_4_ = puVar35[-9];
                                  auVar66._8_4_ = puVar35[-6];
                                  auVar66._12_4_ = puVar35[-3];
                                  auVar67._8_4_ = 2;
                                  auVar67._0_8_ = 0x200000002;
                                  auVar67._12_4_ = 2;
                                  auVar67 = NEON_cmgt(auVar67,auVar66,4);
                                  auVar69._4_4_ = puVar35[3];
                                  auVar69._0_4_ = *puVar35;
                                  auVar69._8_4_ = puVar35[6];
                                  auVar69._12_4_ = puVar35[9];
                                  auVar12._8_4_ = 2;
                                  auVar12._0_8_ = 0x200000002;
                                  auVar12._12_4_ = 2;
                                  auVar69 = NEON_cmgt(auVar12,auVar69,4);
                                  iVar36 = iVar36 - auVar67._0_4_;
                                  iVar57 = iVar57 - auVar67._4_4_;
                                  iVar49 = iVar49 - auVar67._8_4_;
                                  iVar40 = iVar40 - auVar67._12_4_;
                                  iVar58 = iVar58 - auVar69._0_4_;
                                  iVar60 = iVar60 - auVar69._4_4_;
                                  iVar61 = iVar61 - auVar69._8_4_;
                                  iVar63 = iVar63 - auVar69._12_4_;
                                  puVar35 = puVar35 + 0x18;
                                } while (lVar34 != 0);
                                uVar43 = iVar58 + iVar36 + iVar60 + iVar57 +
                                         iVar61 + iVar49 + iVar63 + iVar40;
                              }
                              lVar34 = lVar29 * 0xc + 8;
                              lVar29 = uVar27 - lVar29;
                              do {
                                piVar53 = (int *)((long)pvVar19 + lVar34);
                                lVar34 = lVar34 + 0xc;
                                if (*piVar53 < 2) {
                                  uVar43 = uVar43 + 1;
                                }
                                lVar29 = lVar29 + -1;
                              } while (lVar29 != 0);
                              rcFree(pvVar19);
                              if (2 < uVar43) goto LAB_00ddf070;
                            }
                            uVar27 = FUN_00ddfedc(param_1,param_4,uVar15,uVar52);
                            if ((uVar27 & 1) == 0) {
                              rcContext::log(rVar14,(char *)0x3,
                                             "rcBuildPolyMesh: Failed to remove edge vertex %d.",
                                             (ulong)uVar15);
                              uVar48 = 0;
                              goto LAB_00ddf75c;
                            }
                            if ((int)uVar15 < *(int *)(param_4 + 0x28)) {
                              do {
                                puVar4 = (undefined *)((long)__s + lVar21);
                                lVar21 = lVar21 + 1;
                                *puVar4 = puVar4[1];
                              } while (lVar21 < *(int *)(param_4 + 0x28));
                            }
                            uVar15 = uVar15 - 1;
                          }
                        }
                      }
                    }
LAB_00ddf070:
                    iVar36 = *(int *)(param_4 + 0x28);
                    uVar15 = uVar15 + 1;
                  } while ((int)uVar15 < iVar36);
                }
                uVar27 = FUN_00de11c0(*(undefined8 *)(param_4 + 8),*(undefined4 *)(param_4 + 0x2c),
                                      iVar36,uVar20);
                if ((uVar27 & 1) == 0) {
                  rcContext::log(rVar14,(char *)0x3,"rcBuildPolyMesh: Adjacency failed.");
                  goto LAB_00ddf758;
                }
                if (*(int *)(param_4 + 0x58) < 1) {
                  uVar15 = *(uint *)(param_4 + 0x2c);
                }
                else {
                  uVar15 = *(uint *)(param_4 + 0x2c);
                  if ((0 < param_3) && (0 < (int)uVar15)) {
                    iVar36 = 0;
                    uVar43 = *(uint *)(param_2 + 0x2c);
                    uVar5 = *(uint *)(param_2 + 0x30);
                    uVar27 = 0;
                    lVar21 = *(long *)(param_4 + 8);
                    do {
                      lVar34 = lVar21 + (long)iVar36 * 2;
                      lVar30 = *(long *)param_4;
                      lVar29 = lVar34 + lVar28 * 2;
                      uVar23 = 0;
                      do {
                        uVar52 = (ulong)*(ushort *)(lVar34 + uVar23 * 2);
                        if (uVar52 == 0xffff) break;
                        uVar33 = uVar23 + 1;
                        if (*(short *)(lVar29 + uVar23 * 2) == -1) {
                          if ((lVar28 <= (long)uVar33) ||
                             (uVar37 = uVar33, *(short *)(lVar34 + uVar23 * 2 + 2) == -1)) {
                            uVar37 = 0;
                          }
                          puVar25 = (ushort *)(lVar30 + uVar52 * 6);
                          puVar44 = (ushort *)
                                    (lVar30 + (ulong)*(ushort *)
                                                      (lVar21 + (long)(iVar38 * (int)uVar27) * 2 +
                                                      (-(uVar37 >> 0x1f & 1) & 0xfffffffe00000000 |
                                                      (uVar37 & 0xffffffff) << 1)) * 6);
                          uVar26 = (uint)*puVar25;
                          if ((uVar26 == 0) && (*puVar44 == 0)) {
                            uVar55 = 0x8000;
                          }
                          else {
                            uVar64 = (uint)puVar25[2];
                            if ((uVar5 == uVar64) && (uVar5 == puVar44[2])) {
                              uVar55 = 0x8001;
                            }
                            else if ((uVar43 == uVar26) && (uVar43 == *puVar44)) {
                              uVar55 = 0x8002;
                            }
                            else {
                              if ((uVar64 != 0) || (puVar44[2] != 0)) goto LAB_00ddf5b4;
                              uVar55 = 0x8003;
                            }
                          }
                          *(undefined2 *)(lVar29 + uVar23 * 2) = uVar55;
                        }
LAB_00ddf5b4:
                        uVar23 = uVar33;
                      } while (uVar20 != uVar33);
                      uVar27 = uVar27 + 1;
                      iVar36 = iVar36 + iVar38;
                    } while (uVar27 != uVar15);
                  }
                }
                pvVar19 = (void *)rcAlloc(uVar15 << 1,0);
                *(void **)(param_4 + 0x18) = pvVar19;
                if (pvVar19 == (void *)0x0) {
                  rcContext::log(rVar14,(char *)0x3,
                                 "rcBuildPolyMesh: Out of memory \'mesh.flags\' (%d).");
                  goto LAB_00ddf758;
                }
                memset(pvVar19,0,(long)*(int *)(param_4 + 0x2c) << 1);
                if ((int)*(uint *)(param_4 + 0x28) < 0x10000) {
                  uVar15 = *(uint *)(param_4 + 0x2c);
                  if ((int)uVar15 < 0x10000) goto LAB_00ddf6e4;
LAB_00ddf718:
                  rcContext::log(rVar14,(char *)0x3,
                                 "rcBuildPolyMesh: The resulting mesh has too many polygons %d (max %d). Data can be corrupted."
                                 ,(ulong)uVar15,0xffff);
                  rVar6 = param_1[9];
                }
                else {
                  rcContext::log(rVar14,(char *)0x3,
                                 "rcBuildPolyMesh: The resulting mesh has too many vertices %d (max %d). Data can be corrupted."
                                 ,(ulong)*(uint *)(param_4 + 0x28),0xffff);
                  uVar15 = *(uint *)(param_4 + 0x2c);
                  if (0xffff < (int)uVar15) goto LAB_00ddf718;
LAB_00ddf6e4:
                  rVar6 = param_1[9];
                }
                if (rVar6 != (rcContext)0x0) {
                  (**(code **)(*(long *)param_1 + 0x30))(param_1,0xb);
                }
                uVar48 = 1;
              }
LAB_00ddf75c:
              rcFree(__s_02);
            }
            rcFree(pvVar17);
          }
          rcFree(pvVar16);
        }
        rcFree(__s_01);
      }
      rcFree(__s_00);
    }
  }
  rcFree(__s);
LAB_00ddf790:
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar48;
}


