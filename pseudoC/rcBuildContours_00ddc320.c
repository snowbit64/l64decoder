// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcBuildContours
// Entry Point: 00ddc320
// Size: 6980 bytes
// Signature: undefined __cdecl rcBuildContours(rcContext * param_1, rcCompactHeightfield * param_2, float param_3, int param_4, rcContourSet * param_5, int param_6)


/* rcBuildContours(rcContext*, rcCompactHeightfield&, float, int, rcContourSet&, int) */

undefined4
rcBuildContours(rcContext *param_1,rcCompactHeightfield *param_2,float param_3,int param_4,
               rcContourSet *param_5,int param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void **ppvVar7;
  undefined4 uVar8;
  undefined uVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  short sVar13;
  long lVar14;
  bool bVar15;
  bool bVar16;
  rcLogCategory rVar17;
  long lVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  long lVar22;
  short sVar23;
  int iVar24;
  long lVar25;
  char *pcVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined4 *puVar37;
  void *pvVar38;
  ulong uVar39;
  int *piVar40;
  int iVar41;
  int iVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  int iVar48;
  ulong uVar49;
  uint uVar50;
  int iVar51;
  int iVar52;
  uint uVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  uint uVar57;
  ulong uVar58;
  uint uVar59;
  uint uVar60;
  int iVar61;
  undefined4 uVar62;
  ulong uVar63;
  uint uVar64;
  int iVar65;
  int iVar66;
  void **ppvVar67;
  uint *puVar68;
  int iVar69;
  int iVar70;
  void **ppvVar71;
  ulong uVar72;
  int iVar73;
  uint uVar74;
  void **ppvVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  uint local_11c;
  void *local_a0;
  undefined8 local_98;
  int *local_90;
  ulong local_88;
  long local_80;
  
  lVar14 = tpidr_el0;
  local_80 = *(long *)(lVar14 + 0x28);
  uVar64 = *(uint *)param_2;
  uVar35 = (ulong)uVar64;
  iVar52 = *(int *)(param_2 + 0x14);
  uVar74 = *(uint *)(param_2 + 4);
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,4);
  }
  fVar76 = *(float *)(param_2 + 0x1c);
  *(float *)(param_5 + 0xc) = fVar76;
  *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)(param_2 + 0x20);
  fVar78 = *(float *)(param_2 + 0x24);
  *(float *)(param_5 + 0x14) = fVar78;
  fVar81 = *(float *)(param_2 + 0x28);
  *(float *)(param_5 + 0x18) = fVar81;
  *(undefined4 *)(param_5 + 0x1c) = *(undefined4 *)(param_2 + 0x2c);
  fVar82 = *(float *)(param_2 + 0x30);
  *(float *)(param_5 + 0x20) = fVar82;
  if (0 < iVar52) {
    fVar83 = *(float *)(param_2 + 0x34) * (float)iVar52;
    *(float *)(param_5 + 0xc) = fVar76 + fVar83;
    *(float *)(param_5 + 0x14) = fVar83 + fVar78;
    *(float *)(param_5 + 0x18) = fVar81 - fVar83;
    *(float *)(param_5 + 0x20) = fVar82 - fVar83;
  }
  *(undefined8 *)(param_5 + 0x24) = *(undefined8 *)(param_2 + 0x34);
  uVar79 = *(undefined8 *)param_2;
  iVar48 = *(int *)(param_2 + 0x14) * -2;
  *(int *)(param_5 + 0x34) = *(int *)(param_2 + 0x14);
  *(ulong *)(param_5 + 0x2c) = CONCAT44(iVar48 + (int)((ulong)uVar79 >> 0x20),iVar48 + (int)uVar79);
  local_11c = (uint)*(ushort *)(param_2 + 0x1a);
  if (*(ushort *)(param_2 + 0x1a) < 9) {
    local_11c = 8;
  }
  lVar18 = rcAlloc(local_11c << 5,0);
  *(long *)param_5 = lVar18;
  if (lVar18 == 0) {
    uVar62 = 0;
  }
  else {
    *(undefined4 *)(param_5 + 8) = 0;
    pvVar19 = (void *)rcAlloc(*(int *)(param_2 + 8),1);
    rVar17 = (rcLogCategory)param_1;
    if (pvVar19 == (void *)0x0) {
      rcContext::log(rVar17,(char *)0x3,"rcBuildContours: Out of memory \'flags\' (%d).",
                     (ulong)*(uint *)(param_2 + 8));
      uVar62 = 0;
    }
    else {
      if (param_1[9] != (rcContext)0x0) {
        (**(code **)(*(long *)param_1 + 0x28))(param_1,5);
      }
      if ((0 < (int)uVar74) && (0 < (int)uVar64)) {
        uVar36 = 0;
        do {
          uVar39 = 0;
          do {
            lVar18 = uVar39 + uVar36 * uVar35;
            uVar59 = *(uint *)(*(long *)(param_2 + 0x40) + lVar18 * 4);
            if (uVar59 >> 0x18 != 0) {
              uVar49 = (ulong)uVar59 & 0xffffff;
              uVar72 = uVar49 + (uVar59 >> 0x18);
              lVar22 = uVar49 << 3;
              do {
                while( true ) {
                  lVar25 = *(long *)(param_2 + 0x48);
                  sVar13 = *(short *)(lVar25 + lVar22 + 2);
                  if (sVar13 < 1) break;
                  uVar59 = *(uint *)(lVar25 + lVar22 + 4);
                  lVar27 = *(long *)(param_2 + 0x40);
                  if ((int)((ulong)uVar59 & 0x3f) == 0x3f) {
                    bVar16 = sVar13 == 0;
                    uVar31 = (ulong)(uVar59 >> 6) & 0x3f;
                    if ((int)uVar31 == 0x3f) goto LAB_00ddc5fc;
LAB_00ddc568:
                    uVar63 = (ulong)(uVar59 >> 0xc) & 0x3f;
                    uVar30 = (uint)(*(short *)(lVar25 + (((ulong)*(uint *)(lVar27 + (uVar39 + uVar35
                                                                                              + 
                                                  uVar36 * uVar35) * 4) & 0xffffff) + uVar31) * 8 +
                                              2) == sVar13);
                    if ((int)uVar63 == 0x3f) goto LAB_00ddc614;
LAB_00ddc590:
                    uVar31 = (ulong)(uVar59 >> 0x12) & 0x3f;
                    uVar59 = (uint)(*(short *)(lVar25 + (((ulong)*(uint *)(lVar27 + (lVar18 + 1) * 4
                                                                          ) & 0xffffff) + uVar63) *
                                                        8 + 2) == sVar13);
                    if ((int)uVar31 == 0x3f) goto LAB_00ddc62c;
LAB_00ddc5b8:
                    sVar23 = *(short *)(lVar25 + (((ulong)*(uint *)(lVar27 + (uVar39 + (uVar36 - 1)
                                                                                       * uVar35) * 4
                                                                   ) & 0xffffff) + uVar31) * 8 + 2);
                  }
                  else {
                    bVar16 = *(short *)(lVar25 + (((ulong)*(uint *)(lVar27 + (lVar18 + -1) * 4) &
                                                  0xffffff) + ((ulong)uVar59 & 0x3f)) * 8 + 2) ==
                             sVar13;
                    uVar31 = (ulong)(uVar59 >> 6) & 0x3f;
                    if ((int)uVar31 != 0x3f) goto LAB_00ddc568;
LAB_00ddc5fc:
                    uVar63 = (ulong)(uVar59 >> 0xc) & 0x3f;
                    uVar30 = (uint)(sVar13 == 0);
                    if ((int)uVar63 != 0x3f) goto LAB_00ddc590;
LAB_00ddc614:
                    uVar31 = (ulong)(uVar59 >> 0x12) & 0x3f;
                    uVar59 = (uint)(sVar13 == 0);
                    if ((int)uVar31 != 0x3f) goto LAB_00ddc5b8;
LAB_00ddc62c:
                    sVar23 = 0;
                  }
                  *(byte *)((long)pvVar19 + uVar49) =
                       (bVar16 | (byte)(uVar30 << 1) | (byte)(uVar59 << 2) | (sVar23 == sVar13) << 3
                       ) ^ 0xf;
                  uVar49 = uVar49 + 1;
                  lVar22 = lVar22 + 8;
                  if (uVar72 <= uVar49) goto LAB_00ddc4cc;
                }
                *(undefined *)((long)pvVar19 + uVar49) = 0;
                uVar49 = uVar49 + 1;
                lVar22 = lVar22 + 8;
              } while (uVar49 < uVar72);
            }
LAB_00ddc4cc:
            uVar39 = uVar39 + 1;
          } while (uVar39 != uVar35);
          uVar36 = uVar36 + 1;
        } while (uVar36 != uVar74);
      }
      if (param_1[9] != (rcContext)0x0) {
        (**(code **)(*(long *)param_1 + 0x30))(param_1,5);
      }
      local_90 = (int *)0x0;
      local_88 = 0;
      rcIntArray::resize((rcIntArray *)&local_90,0x100);
      local_a0 = (void *)0x0;
      local_98 = 0;
      rcIntArray::resize((rcIntArray *)&local_a0,0x40);
      if ((0 < (int)uVar74) && (0 < (int)uVar64)) {
        uVar36 = 0;
        do {
          uVar39 = 0;
          do {
            uVar64 = *(uint *)(*(long *)(param_2 + 0x40) + (uVar39 + uVar36 * uVar35) * 4);
            if (uVar64 >> 0x18 != 0) {
              uVar49 = (ulong)uVar64 & 0xffffff;
              uVar72 = uVar49 + (uVar64 >> 0x18);
              do {
                if (*(char *)((long)pvVar19 + uVar49) == '\x0f' ||
                    *(char *)((long)pvVar19 + uVar49) == '\0') {
                  *(undefined *)((long)pvVar19 + uVar49) = 0;
                }
                else {
                  sVar13 = *(short *)(*(long *)(param_2 + 0x48) + uVar49 * 8 + 2);
                  if (0 < sVar13) {
                    uVar9 = *(undefined *)(*(long *)(param_2 + 0x58) + uVar49);
                    rcIntArray::resize((rcIntArray *)&local_90,0);
                    rcIntArray::resize((rcIntArray *)&local_a0,0);
                    if (param_1[9] != (rcContext)0x0) {
                      (**(code **)(*(long *)param_1 + 0x28))(param_1,5);
                    }
                    uVar64 = 0;
                    do {
                      uVar59 = uVar64;
                      uVar31 = (ulong)uVar59;
                      uVar64 = uVar59 + 1;
                    } while ((*(byte *)((long)pvVar19 + uVar49) >> (ulong)(uVar59 & 0x1f) & 1) == 0)
                    ;
                    iVar48 = 40000;
                    uVar43 = uVar49 & 0xffffffff;
                    cVar10 = *(char *)(*(long *)(param_2 + 0x58) + uVar49);
                    uVar63 = uVar36 & 0xffffffff;
                    uVar32 = uVar39 & 0xffffffff;
                    do {
                      iVar66 = (int)uVar32;
                      iVar61 = (int)uVar63;
                      iVar48 = iVar48 + -1;
                      if (iVar48 == 0) break;
                      lVar18 = (long)(int)uVar43;
                      uVar64 = (uint)uVar31;
                      uVar30 = 1 << (ulong)(uVar64 & 0x1f);
                      if ((uVar30 & *(byte *)((long)pvVar19 + lVar18)) == 0) {
                        uVar30 = (*(uint *)(*(long *)(param_2 + 0x48) + lVar18 * 8 + 4) & 0xffffff)
                                 >> (ulong)((uVar64 & 0xff) * 6 & 0x1f) & 0x3f;
                        if (uVar30 == 0x3f) break;
                        uVar63 = (ulong)(uint)(*(int *)("A0123456789ABCDEF" +
                                                       (ulong)(uVar64 & 3) * 4 + 0x11) + iVar61);
                        uVar32 = (ulong)(uint)((&DAT_004c3e80)[uVar64 & 3] + iVar66);
                        uVar43 = (ulong)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                   (long)((&DAT_004c3e80)[uVar64 & 3] + iVar66 +
                                                         *(int *)param_2 *
                                                         (*(int *)("A0123456789ABCDEF" +
                                                                  (ulong)(uVar64 & 3) * 4 + 0x11) +
                                                         iVar61)) * 4) & 0xffffff) + uVar30);
                        uVar64 = uVar64 + 3;
                      }
                      else {
                        lVar22 = *(long *)(param_2 + 0x48);
                        puVar3 = (ushort *)(lVar22 + lVar18 * 8);
                        uVar54 = ((uVar31 & 0xff) + (uVar31 & 0xff) * 2) * 2;
                        uVar56 = (ulong)(uVar64 + 1) & 3;
                        lVar25 = *(long *)(param_2 + 0x58);
                        uVar60 = (uint)*puVar3;
                        uVar58 = (ulong)*(uint *)(puVar3 + 2) & 0xffffff;
                        uVar44 = uVar58 >> (uVar54 & 0x3f) & 0x3f;
                        iVar42 = (int)uVar44;
                        iVar69 = iVar66;
                        if (iVar42 == 0x3f) {
                          uVar34 = 0;
                          uVar45 = 0;
                          uVar58 = uVar58 >> (int)uVar56 * 6 & 0x3f;
                          iVar24 = (int)uVar58;
joined_r0x00ddca28:
                          uVar46 = uVar45;
                          if (iVar24 != 0x3f) goto LAB_00ddca2c;
LAB_00ddc8b0:
                          uVar53 = 0;
                          uVar55 = (uint)puVar3[1];
                          bVar11 = *(byte *)(lVar25 + lVar18);
                          uVar57 = (uint)bVar11;
                          uVar50 = (uint)CONCAT12(bVar11,puVar3[1]);
                          uVar46 = uVar45;
                          if (uVar50 != 0) goto LAB_00ddcaec;
LAB_00ddcb1c:
                          if (((((uVar34 != 0) && (((uVar34 & uVar45) >> 0xf & 1) != 0)) &&
                               ((uVar34 == uVar45 &&
                                (((((uVar53 | uVar55) >> 0xf & 1) == 0 &&
                                  ((uVar53 ^ uVar57 << 0x10) >> 0x10 == 0)) && (uVar45 != 0)))))) &&
                              ((uVar53 != 0 && (uVar50 != 0)))) ||
                             (((uVar45 != 0 &&
                               (((((uVar45 & uVar53) >> 0xf & 1) != 0 && (uVar45 == uVar53)) &&
                                ((((uVar34 | uVar55) >> 0xf & 1) == 0 &&
                                 ((((uVar34 ^ uVar57 << 0x10) >> 0x10 == 0 && (uVar53 != 0)) &&
                                  (uVar50 != 0)))))))) && (uVar34 != 0)))) goto LAB_00ddcbc0;
                          if (uVar53 != 0) {
                            bVar16 = true;
                            if ((((((uVar53 & uVar50) >> 0xf & 1) != 0) && (uVar53 == uVar50)) &&
                                ((((uVar45 | uVar34) >> 0xf & 1) == 0 &&
                                 (((uVar45 ^ uVar34) >> 0x10 == 0 && (uVar50 != 0)))))) &&
                               ((uVar34 != 0 && (uVar45 != 0)))) goto LAB_00ddcbc0;
                            goto LAB_00ddcbc4;
                          }
                          bVar16 = true;
                          if ((uVar31 & 0xff) == 0) goto LAB_00ddcc44;
LAB_00ddcbd4:
                          if ((uVar64 & 0xff) == 1) {
                            iVar69 = iVar66 + 1;
                            iVar24 = iVar61 + 1;
                          }
                          else {
                            iVar24 = iVar61;
                            if ((uVar64 & 0xff) == 2) {
                              iVar69 = iVar66 + 1;
                            }
                          }
                          if (iVar42 != 0x3f) goto LAB_00ddcc58;
LAB_00ddcc18:
                          uVar34 = 0;
                          if (!bVar16) {
                            uVar34 = 0x10000;
                          }
                        }
                        else {
                          lVar27 = ((ulong)*(uint *)(*(long *)(param_2 + 0x40) +
                                                    (long)((&DAT_004c3e80)[uVar64 & 3] + iVar66 +
                                                          *(int *)param_2 *
                                                          (*(int *)("A0123456789ABCDEF" +
                                                                   (ulong)(uVar64 & 3) * 4 + 0x11) +
                                                          iVar61)) * 4) & 0xffffff) + uVar44;
                          puVar4 = (ushort *)(lVar22 + lVar27 * 8);
                          lVar33 = uVar56 * 6;
                          uVar34 = (uint)CONCAT12(*(undefined *)(lVar25 + lVar27),puVar4[1]);
                          if (*puVar3 <= *puVar4) {
                            uVar60 = (uint)*puVar4;
                          }
                          uVar28 = ((ulong)*(uint *)(puVar4 + 2) & 0xffffff) >> lVar33 & 0x3f;
                          if ((int)uVar28 != 0x3f) {
                            lVar27 = ((ulong)*(uint *)(*(long *)(param_2 + 0x40) +
                                                      (long)((&DAT_004c3e80)[uVar56] +
                                                             (&DAT_004c3e80)[uVar64 & 3] + iVar66 +
                                                            (*(int *)("A0123456789ABCDEF" +
                                                                     uVar56 * 4 + 0x11) +
                                                            *(int *)("A0123456789ABCDEF" +
                                                                    (ulong)(uVar64 & 3) * 4 + 0x11)
                                                            + iVar61) * *(int *)param_2) * 4) &
                                     0xffffff) + uVar28;
                            puVar4 = (ushort *)(lVar22 + lVar27 * 8);
                            uVar12 = *puVar4;
                            if (uVar60 <= uVar12) {
                              uVar60 = (uint)uVar12;
                            }
                            uVar45 = (uint)CONCAT12(*(undefined *)(lVar25 + lVar27),puVar4[1]);
                            uVar58 = uVar58 >> lVar33 & 0x3f;
                            iVar24 = (int)uVar58;
                            goto joined_r0x00ddca28;
                          }
                          uVar45 = 0;
                          uVar46 = 0;
                          uVar58 = uVar58 >> lVar33 & 0x3f;
                          if ((int)uVar58 == 0x3f) goto LAB_00ddc8b0;
LAB_00ddca2c:
                          lVar27 = ((ulong)*(uint *)(*(long *)(param_2 + 0x40) +
                                                    (long)((&DAT_004c3e80)[uVar56] + iVar66 +
                                                          *(int *)param_2 *
                                                          (*(int *)("A0123456789ABCDEF" +
                                                                   uVar56 * 4 + 0x11) + iVar61)) * 4
                                                    ) & 0xffffff) + uVar58;
                          puVar4 = (ushort *)(lVar22 + lVar27 * 8);
                          if (uVar60 <= *puVar4) {
                            uVar60 = (uint)*puVar4;
                          }
                          uVar53 = (uint)CONCAT12(*(undefined *)(lVar25 + lVar27),puVar4[1]);
                          uVar54 = ((ulong)*(uint *)(puVar4 + 2) & 0xffffff) >> (uVar54 & 0x3f) &
                                   0x3f;
                          if ((int)uVar54 != 0x3f) {
                            lVar27 = ((ulong)*(uint *)(*(long *)(param_2 + 0x40) +
                                                      (long)((&DAT_004c3e80)[uVar64 & 3] +
                                                             (&DAT_004c3e80)[uVar56] + iVar66 +
                                                            (*(int *)("A0123456789ABCDEF" +
                                                                     (ulong)(uVar64 & 3) * 4 + 0x11)
                                                            + *(int *)("A0123456789ABCDEF" +
                                                                      uVar56 * 4 + 0x11) + iVar61) *
                                                            *(int *)param_2) * 4) & 0xffffff) +
                                     uVar54;
                            puVar4 = (ushort *)(lVar22 + lVar27 * 8);
                            uVar12 = *puVar4;
                            if (uVar60 <= uVar12) {
                              uVar60 = (uint)uVar12;
                            }
                            uVar46 = (uint)CONCAT12(*(undefined *)(lVar25 + lVar27),puVar4[1]);
                          }
                          uVar55 = (uint)puVar3[1];
                          bVar11 = *(byte *)(lVar25 + lVar18);
                          uVar57 = (uint)bVar11;
                          uVar50 = (uint)CONCAT12(bVar11,puVar3[1]);
                          uVar45 = uVar46;
                          if (uVar50 == 0) goto LAB_00ddcb1c;
LAB_00ddcaec:
                          uVar57 = (uint)bVar11;
                          uVar45 = uVar46;
                          if (((((((uVar34 & uVar55) >> 0xf == 0) || (uVar50 != uVar34)) ||
                                (((uVar53 | uVar46) >> 0xf & 1) != 0)) ||
                               (((uVar53 ^ uVar46) >> 0x10 != 0 || (uVar34 == 0)))) || (uVar46 == 0)
                              ) || (uVar53 == 0)) goto LAB_00ddcb1c;
LAB_00ddcbc0:
                          bVar16 = false;
LAB_00ddcbc4:
                          if ((uVar31 & 0xff) != 0) goto LAB_00ddcbd4;
LAB_00ddcc44:
                          iVar24 = iVar61 + 1;
                          if (iVar42 == 0x3f) goto LAB_00ddcc18;
LAB_00ddcc58:
                          lVar27 = ((ulong)*(uint *)(*(long *)(param_2 + 0x40) +
                                                    (long)((&DAT_004c3e80)[uVar64 & 3] + iVar66 +
                                                          *(int *)param_2 *
                                                          (*(int *)("A0123456789ABCDEF" +
                                                                   (ulong)(uVar64 & 3) * 4 + 0x11) +
                                                          iVar61)) * 4) & 0xffffff) + uVar44;
                          uVar34 = (uint)*(ushort *)(lVar22 + lVar27 * 8 + 2);
                          if (!bVar16) {
                            uVar34 = uVar34 | 0x10000;
                          }
                          if (cVar10 != *(char *)(lVar25 + lVar27)) {
                            uVar34 = uVar34 | 0x20000;
                          }
                        }
                        rcIntArray::resize((rcIntArray *)&local_90,(int)local_88 + 1);
                        local_90[(long)(int)local_88 + -1] = iVar69;
                        rcIntArray::resize((rcIntArray *)&local_90,(int)local_88 + 1);
                        local_90[(long)(int)local_88 + -1] = uVar60;
                        rcIntArray::resize((rcIntArray *)&local_90,(int)local_88 + 1);
                        local_90[(long)(int)local_88 + -1] = iVar24;
                        rcIntArray::resize((rcIntArray *)&local_90,(int)local_88 + 1);
                        local_90[(long)(int)local_88 + -1] = uVar34;
                        *(byte *)((long)pvVar19 + lVar18) =
                             *(byte *)((long)pvVar19 + lVar18) & ((byte)uVar30 ^ 0xff);
                        uVar64 = uVar64 + 1;
                      }
                      uVar31 = (ulong)(uVar64 & 3);
                    } while ((uVar49 != uVar43) || ((uVar64 & 3) != (uVar59 & 0xff)));
                    if ((param_1[9] != (rcContext)0x0) &&
                       ((**(code **)(*(long *)param_1 + 0x30))(param_1,5),
                       param_1[9] != (rcContext)0x0)) {
                      (**(code **)(*(long *)param_1 + 0x28))(param_1,6);
                    }
                    if (0 < (int)local_88) {
                      lVar18 = 0;
                      do {
                        if (*(short *)(local_90 + lVar18 + 3) != 0) {
                          if (3 < (int)local_88) {
                            lVar18 = 0;
                            iVar48 = 0;
                            lVar22 = (local_88 & 0xfffffffc) - 4;
                            while( true ) {
                              lVar25 = 3;
                              if (lVar22 != lVar18) {
                                lVar25 = lVar18 + 7;
                              }
                              if (((local_90[lVar25] ^ local_90[lVar18 + 3]) & 0x2ffffU) != 0) {
                                iVar66 = local_90[lVar18];
                                rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                                *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) =
                                     iVar66;
                                iVar66 = local_90[lVar18 + 1];
                                rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                                *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) =
                                     iVar66;
                                iVar66 = local_90[lVar18 + 2];
                                rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                                *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) =
                                     iVar66;
                                rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                                *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) =
                                     iVar48;
                              }
                              if (lVar22 == lVar18) break;
                              iVar48 = iVar48 + 1;
                              lVar18 = lVar18 + 4;
                            }
                          }
                          break;
                        }
                        lVar18 = lVar18 + 4;
                      } while ((int)lVar18 < (int)local_88);
                    }
                    if ((uint)local_98 == 0) {
                      iVar48 = *local_90;
                      iVar66 = local_90[1];
                      iVar61 = local_90[2];
                      iVar69 = iVar48;
                      iVar42 = iVar66;
                      iVar24 = iVar61;
                      if (0 < (int)local_88) {
                        iVar41 = 0;
                        uVar31 = 0;
                        iVar73 = 0;
                        iVar65 = 0;
                        bVar16 = true;
                        iVar47 = local_90[1];
                        iVar51 = local_90[2];
                        iVar70 = iVar48;
                        if (SBORROW4(iVar48,iVar48) != false) goto LAB_00ddcf98;
LAB_00ddcf80:
                        if ((bVar16) && (iVar51 < iVar24)) goto LAB_00ddcf98;
                        bVar16 = iVar70 == iVar48;
                        if (!bVar16 && iVar48 <= iVar70) goto LAB_00ddcfbc;
                        do {
                          uVar63 = uVar31;
                          if (!bVar16) goto LAB_00ddcfcc;
                          if (iVar51 <= iVar61) goto LAB_00ddcfcc;
LAB_00ddcfbc:
                          do {
                            iVar61 = iVar51;
                            iVar66 = iVar47;
                            uVar63 = uVar31;
                            iVar65 = iVar41;
                            iVar48 = iVar70;
LAB_00ddcfcc:
                            uVar31 = uVar63 + 4;
                            if ((local_88 & 0xffffffff) <= uVar31) goto LAB_00ddcff4;
                            iVar41 = iVar41 + 1;
                            iVar70 = local_90[uVar63 + 4];
                            bVar16 = iVar70 == iVar69;
                            iVar47 = local_90[uVar63 + 5];
                            iVar51 = local_90[uVar63 + 6];
                            if (iVar69 <= iVar70) goto LAB_00ddcf80;
LAB_00ddcf98:
                            bVar16 = iVar70 == iVar48;
                            iVar73 = iVar41;
                            iVar69 = iVar70;
                            iVar42 = iVar47;
                            iVar24 = iVar51;
                          } while (!bVar16 && iVar48 <= iVar70);
                        } while( true );
                      }
                      iVar65 = 0;
                      iVar73 = 0;
LAB_00ddcff4:
                      rcIntArray::resize((rcIntArray *)&local_a0,1);
                      *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) = iVar69;
                      rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                      *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) = iVar42;
                      rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                      *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) = iVar24;
                      rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                      *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) = iVar73;
                      rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                      *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) = iVar48;
                      rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                      *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) = iVar66;
                      rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                      *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) = iVar61;
                      rcIntArray::resize((rcIntArray *)&local_a0,(uint)local_98 + 1);
                      *(int *)((long)local_a0 + (long)(int)(uint)local_98 * 4 + -4) = iVar65;
                    }
                    iVar48 = (int)local_88 + 3;
                    if (-1 < (int)local_88) {
                      iVar48 = (int)local_88;
                    }
                    iVar48 = iVar48 >> 2;
                    uVar64 = (uint)local_98;
                    if (3 < (int)(uint)local_98) {
                      uVar59 = (uint)local_98 >> 2;
                      pvVar20 = local_a0;
                      iVar66 = 0;
LAB_00ddd154:
                      do {
                        iVar69 = 0;
                        iVar61 = (int)((long)iVar66 + 1);
                        if (uVar59 != 0) {
                          iVar69 = iVar61 / (int)uVar59;
                        }
                        iVar47 = iVar61 - iVar69 * uVar59;
                        piVar40 = (int *)((long)pvVar20 + (long)(iVar66 << 2) * 4);
                        piVar29 = (int *)((long)pvVar20 + (long)(iVar47 * 4) * 4);
                        iVar69 = *(int *)((long)pvVar20 + (long)iVar66 * 0x10 + 8);
                        iVar42 = *piVar40;
                        iVar24 = piVar40[3];
                        iVar41 = *piVar29;
                        iVar47 = *(int *)((long)pvVar20 + (long)iVar47 * 0x10 + 8);
                        iVar51 = piVar29[3];
                        iVar70 = iVar41 - iVar42;
                        bVar16 = iVar70 != 0;
                        if (bVar16 && iVar42 <= iVar41) {
LAB_00ddd1b4:
                          iVar41 = iVar24 + 1;
                          iVar24 = 1;
                        }
                        else {
                          bVar15 = false;
                          if (!bVar16) {
                            bVar15 = iVar47 - iVar69 < 0;
                          }
                          if ((!bVar16 && iVar47 != iVar69) &&
                              bVar15 == (!bVar16 && SBORROW4(iVar47,iVar69))) goto LAB_00ddd1b4;
                          iVar41 = iVar51 + iVar48 + -1;
                          iVar51 = iVar24;
                          iVar24 = iVar48 + -1;
                        }
                        iVar73 = 0;
                        if (iVar48 != 0) {
                          iVar73 = iVar41 / iVar48;
                        }
                        iVar41 = iVar41 - iVar73 * iVar48;
                        if ((local_90[(int)(iVar41 * 4 | 3)] & 0xffffU) != 0 &&
                            (local_90[(int)(iVar41 * 4 | 3)] & 0x20000U) == 0) {
LAB_00ddd138:
                          uVar59 = uVar64 + 3;
                          if (-1 < (int)uVar64) {
                            uVar59 = uVar64;
                          }
                          uVar59 = (int)uVar59 >> 2;
                          iVar66 = iVar61;
                          if ((int)uVar59 <= iVar61) break;
                          goto LAB_00ddd154;
                        }
                        fVar78 = (float)iVar70;
                        fVar76 = (float)(iVar47 - iVar69);
                        fVar81 = (float)NEON_fmadd(fVar78,fVar78,fVar76 * fVar76);
                        if (fVar81 <= 0.0) {
                          fVar81 = 1.0;
                        }
                        if (iVar41 == iVar51) goto LAB_00ddd138;
                        fVar82 = 0.0;
                        iVar47 = -1;
                        do {
                          fVar84 = (float)NEON_fmadd(fVar78,(float)(local_90[iVar41 << 2] - iVar42),
                                                     fVar76 * (float)(local_90[(long)iVar41 * 4 + 2]
                                                                     - iVar69));
                          fVar84 = fVar84 / fVar81;
                          fVar83 = 0.0;
                          if ((0.0 <= fVar84) && (fVar83 = fVar84, 1.0 < fVar84)) {
                            fVar83 = 1.0;
                          }
                          fVar84 = (float)NEON_fmadd(fVar83,fVar76,(float)iVar69);
                          fVar83 = (float)NEON_fmadd(fVar83,fVar78,(float)iVar42);
                          fVar84 = fVar84 - (float)local_90[(long)iVar41 * 4 + 2];
                          iVar70 = 0;
                          if (iVar48 != 0) {
                            iVar70 = (iVar41 + iVar24) / iVar48;
                          }
                          fVar83 = fVar83 - (float)local_90[iVar41 << 2];
                          fVar83 = (float)NEON_fmadd(fVar83,fVar83,fVar84 * fVar84);
                          iVar73 = iVar41;
                          if (fVar83 <= fVar82) {
                            fVar83 = fVar82;
                            iVar73 = iVar47;
                          }
                          iVar47 = iVar73;
                          fVar82 = fVar83;
                          iVar41 = (iVar41 + iVar24) - iVar70 * iVar48;
                        } while (iVar41 != iVar51);
                        if ((iVar47 == -1 || fVar82 == param_3 * param_3) ||
                            iVar47 != -1 && fVar82 < param_3 * param_3) goto LAB_00ddd138;
                        rcIntArray::resize((rcIntArray *)&local_a0,uVar64 + 4);
                        uVar64 = (uint)local_98 + 3;
                        if (-1 < (int)(uint)local_98) {
                          uVar64 = (uint)local_98;
                        }
                        iVar69 = (int)uVar64 >> 2;
                        if (iVar66 < iVar69 + -1) {
                          lVar18 = (long)iVar69 + -1;
                          iVar69 = iVar69 * 4 + -8;
                          do {
                            lVar18 = lVar18 + -1;
                            uVar62 = *(undefined4 *)((long)local_a0 + (long)(iVar69 + 1) * 4);
                            *(undefined4 *)((long)local_a0 + (long)(iVar69 + 4) * 4) =
                                 *(undefined4 *)((long)local_a0 + (long)iVar69 * 4);
                            uVar8 = *(undefined4 *)((long)local_a0 + (long)(iVar69 + 2) * 4);
                            *(undefined4 *)((long)local_a0 + (long)(iVar69 + 5) * 4) = uVar62;
                            iVar42 = iVar69 + 6;
                            iVar24 = iVar69 + 7;
                            uVar62 = *(undefined4 *)((long)local_a0 + (long)(iVar69 + 3) * 4);
                            iVar69 = iVar69 + -4;
                            *(undefined4 *)((long)local_a0 + (long)iVar42 * 4) = uVar8;
                            *(undefined4 *)((long)local_a0 + (long)iVar24 * 4) = uVar62;
                          } while (iVar66 < lVar18);
                        }
                        iVar61 = iVar61 << 2;
                        *(int *)((long)local_a0 + ((long)iVar66 + 1) * 0x10) = local_90[iVar47 << 2]
                        ;
                        *(int *)((long)local_a0 + (long)iVar61 * 4 + 4) =
                             local_90[(long)iVar47 * 4 + 1];
                        *(int *)((long)local_a0 + (long)iVar61 * 4 + 8) =
                             (local_90 + (iVar47 << 2))[2];
                        *(int *)((long)local_a0 + (long)iVar61 * 4 + 0xc) = iVar47;
                        uVar59 = (uint)local_98 + 3;
                        if (-1 < (int)(uint)local_98) {
                          uVar59 = (uint)local_98;
                        }
                        uVar59 = (int)uVar59 >> 2;
                        pvVar20 = local_a0;
                        uVar64 = (uint)local_98;
                      } while (iVar66 < (int)uVar59);
                    }
                    if (param_4 < 1 || (param_6 & 3U) == 0) {
LAB_00ddd3b4:
                      if (3 < (int)uVar64) {
                        lVar18 = 0;
                        puVar68 = (uint *)((long)local_a0 + 0xc);
                        do {
                          lVar18 = lVar18 + 1;
                          iVar66 = *puVar68 + 1;
                          iVar61 = 0;
                          if (iVar48 != 0) {
                            iVar61 = iVar66 / iVar48;
                          }
                          *puVar68 = local_90[(int)(*puVar68 << 2 | 3)] & 0x10000U |
                                     local_90[(int)((iVar66 - iVar61 * iVar48) * 4 | 3)] & 0x2ffffU;
                          uVar64 = (uint)local_98 + 3;
                          if (-1 < (int)(uint)local_98) {
                            uVar64 = (uint)local_98;
                          }
                          puVar68 = puVar68 + 4;
                        } while (lVar18 < (int)uVar64 >> 2);
                        uVar64 = (uint)local_98;
                        if (3 < (int)(uint)local_98) {
                          uVar59 = (uint)local_98 >> 2;
                          lVar18 = 0;
                          do {
                            lVar22 = lVar18 + 1;
                            uVar30 = (int)lVar22 << 2;
                            if ((int)uVar59 <= lVar22) {
                              uVar30 = 0;
                            }
                            if ((*(int *)((long)local_a0 + lVar18 * 0x10) ==
                                 *(int *)((long)local_a0 + (ulong)uVar30 * 4)) &&
                               (*(int *)((long)local_a0 + (lVar18 << 4 | 8U)) ==
                                *(int *)((long)local_a0 + (ulong)(uVar30 | 2) * 4))) {
                              uVar59 = uVar64 + 3;
                              if (-1 < (int)uVar64) {
                                uVar59 = uVar64;
                              }
                              if (lVar18 < ((int)uVar59 >> 2) + -1) {
                                do {
                                  puVar5 = (undefined8 *)((long)local_a0 + lVar18 * 0x10);
                                  lVar18 = lVar18 + 1;
                                  puVar5[1] = puVar5[3];
                                  *puVar5 = puVar5[2];
                                  uVar59 = (uint)local_98 + 3;
                                  if (-1 < (int)(uint)local_98) {
                                    uVar59 = (uint)local_98;
                                  }
                                  uVar64 = (uint)local_98;
                                } while (lVar18 < ((int)uVar59 >> 2) + -1);
                              }
                              rcIntArray::resize((rcIntArray *)&local_a0,uVar64 - 4);
                              uVar64 = (uint)local_98;
                            }
                            uVar59 = uVar64 + 3;
                            if (-1 < (int)uVar64) {
                              uVar59 = uVar64;
                            }
                            uVar59 = (int)uVar59 >> 2;
                            lVar18 = lVar22;
                          } while (lVar22 < (int)uVar59);
                        }
                      }
                    }
                    else if (3 < (int)uVar64) {
                      uVar59 = uVar64 >> 2;
                      pvVar20 = local_a0;
                      iVar66 = 0;
                      do {
                        while( true ) {
                          piVar40 = (int *)((long)pvVar20 + (long)(iVar66 << 2) * 4);
                          iVar69 = 0;
                          iVar61 = (int)((long)iVar66 + 1);
                          if (uVar59 != 0) {
                            iVar69 = iVar61 / (int)uVar59;
                          }
                          iVar42 = piVar40[3];
                          iVar24 = *(int *)((long)pvVar20 + (long)iVar66 * 0x10 + 8);
                          iVar69 = iVar61 - iVar69 * uVar59;
                          iVar41 = 0;
                          if (iVar48 != 0) {
                            iVar41 = (iVar42 + 1) / iVar48;
                          }
                          iVar47 = *piVar40;
                          piVar40 = (int *)((long)pvVar20 + (long)(iVar69 * 4) * 4);
                          iVar69 = *(int *)((long)pvVar20 + (long)iVar69 * 0x10 + 8);
                          iVar51 = *piVar40;
                          iVar70 = (iVar42 + 1) - iVar41 * iVar48;
                          iVar41 = piVar40[3];
                          if ((param_6 & 1U) != 0) break;
                          if (((uint)param_6 >> 1 & 1) != 0) {
                            bVar16 = false;
                            uVar59 = iVar70 * 4 | 3;
LAB_00ddd5ac:
                            if ((((uint)local_90[(int)uVar59] >> 0x11 & 1) != 0) || (bVar16))
                            goto LAB_00ddd5bc;
                          }
LAB_00ddd6f8:
                          uVar59 = uVar64 + 3;
                          if (-1 < (int)uVar64) {
                            uVar59 = uVar64;
                          }
                          uVar59 = (int)uVar59 >> 2;
                          iVar66 = iVar61;
                          if ((int)uVar59 <= iVar61) goto LAB_00ddd3b4;
                        }
                        uVar30 = iVar70 * 4;
                        uVar59 = uVar30 | 3;
                        sVar23 = *(short *)((long)local_90 +
                                           (-(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 |
                                           (ulong)uVar59 << 2));
                        bVar16 = sVar23 == 0;
                        if (((uint)param_6 >> 1 & 1) != 0) goto LAB_00ddd5ac;
                        if (sVar23 != 0) goto LAB_00ddd6f8;
LAB_00ddd5bc:
                        iVar70 = iVar69 - iVar24;
                        if ((uint)((iVar51 - iVar47) * (iVar51 - iVar47) + iVar70 * iVar70) <=
                            (uint)(param_4 * param_4)) goto LAB_00ddd6f8;
                        iVar70 = iVar48;
                        if (iVar42 <= iVar41) {
                          iVar70 = 0;
                        }
                        uVar59 = iVar70 + (iVar41 - iVar42);
                        if ((int)uVar59 < 2) goto LAB_00ddd6f8;
                        if (iVar51 <= iVar47) {
                          uVar59 = uVar59 + (iVar51 != iVar47 || iVar69 <= iVar24);
                        }
                        iVar42 = iVar42 + (uVar59 >> 1);
                        iVar69 = 0;
                        if (iVar48 != 0) {
                          iVar69 = iVar42 / iVar48;
                        }
                        iVar42 = iVar42 - iVar69 * iVar48;
                        if (iVar42 != -1) {
                          rcIntArray::resize((rcIntArray *)&local_a0,uVar64 + 4);
                          uVar64 = (uint)local_98 + 3;
                          if (-1 < (int)(uint)local_98) {
                            uVar64 = (uint)local_98;
                          }
                          iVar69 = (int)uVar64 >> 2;
                          if (iVar66 < iVar69 + -1) {
                            lVar18 = (long)iVar69 + -1;
                            iVar69 = iVar69 * 4 + -8;
                            do {
                              lVar18 = lVar18 + -1;
                              uVar62 = *(undefined4 *)((long)local_a0 + (long)(iVar69 + 1) * 4);
                              *(undefined4 *)((long)local_a0 + (long)(iVar69 + 4) * 4) =
                                   *(undefined4 *)((long)local_a0 + (long)iVar69 * 4);
                              uVar8 = *(undefined4 *)((long)local_a0 + (long)(iVar69 + 2) * 4);
                              *(undefined4 *)((long)local_a0 + (long)(iVar69 + 5) * 4) = uVar62;
                              iVar24 = iVar69 + 6;
                              iVar41 = iVar69 + 7;
                              uVar62 = *(undefined4 *)((long)local_a0 + (long)(iVar69 + 3) * 4);
                              iVar69 = iVar69 + -4;
                              *(undefined4 *)((long)local_a0 + (long)iVar24 * 4) = uVar8;
                              *(undefined4 *)((long)local_a0 + (long)iVar41 * 4) = uVar62;
                            } while (iVar66 < lVar18);
                          }
                          iVar61 = iVar61 << 2;
                          *(int *)((long)local_a0 + ((long)iVar66 + 1) * 0x10) =
                               local_90[iVar42 * 4];
                          *(int *)((long)local_a0 + (long)iVar61 * 4 + 4) =
                               local_90[(long)iVar42 * 4 + 1];
                          *(int *)((long)local_a0 + (long)iVar61 * 4 + 8) =
                               (local_90 + iVar42 * 4)[2];
                          *(int *)((long)local_a0 + (long)iVar61 * 4 + 0xc) = iVar42;
                          pvVar20 = local_a0;
                          uVar64 = (uint)local_98;
                          iVar61 = iVar66;
                        }
                        uVar59 = uVar64 + 3;
                        if (-1 < (int)uVar64) {
                          uVar59 = uVar64;
                        }
                        uVar59 = (int)uVar59 >> 2;
                        iVar66 = iVar61;
                      } while (iVar61 < (int)uVar59);
                      goto LAB_00ddd3b4;
                    }
                    if (param_1[9] != (rcContext)0x0) {
                      (**(code **)(*(long *)param_1 + 0x30))(param_1,6);
                      uVar64 = (uint)local_98;
                    }
                    if (0xb < (int)uVar64) {
                      iVar48 = *(int *)(param_5 + 8);
                      if ((int)local_11c <= iVar48) {
                        lVar18 = rcAlloc(local_11c << 6,0);
                        if (*(int *)(param_5 + 8) < 1) {
                          pvVar20 = *(void **)param_5;
                        }
                        else {
                          lVar25 = 0;
                          lVar22 = 0;
                          pvVar20 = *(void **)param_5;
                          do {
                            puVar5 = (undefined8 *)((long)pvVar20 + lVar25);
                            puVar6 = (undefined8 *)(lVar18 + lVar25);
                            lVar22 = lVar22 + 1;
                            uVar80 = *puVar5;
                            uVar77 = puVar5[3];
                            uVar79 = puVar5[2];
                            puVar6[1] = puVar5[1];
                            *puVar6 = uVar80;
                            puVar6[3] = uVar77;
                            puVar6[2] = uVar79;
                            pvVar20 = *(void **)param_5;
                            puVar5 = (undefined8 *)((long)pvVar20 + lVar25);
                            lVar25 = lVar25 + 0x20;
                            *puVar5 = 0;
                            puVar5[2] = 0;
                          } while (lVar22 < *(int *)(param_5 + 8));
                        }
                        uVar31 = (ulong)local_11c;
                        local_11c = local_11c << 1;
                        rcFree(pvVar20);
                        *(long *)param_5 = lVar18;
                        rcContext::log(rVar17,(char *)0x2,
                                       "rcBuildContours: Expanding max contours from %d to %d.",
                                       uVar31,(ulong)local_11c);
                        iVar48 = *(int *)(param_5 + 8);
                        uVar64 = (uint)local_98;
                      }
                      lVar18 = *(long *)param_5;
                      lVar22 = (long)iVar48;
                      uVar59 = uVar64 + 3;
                      if (-1 < (int)uVar64) {
                        uVar59 = uVar64;
                      }
                      ppvVar71 = (void **)(lVar18 + lVar22 * 0x20);
                      *(int *)(param_5 + 8) = iVar48 + 1;
                      ppvVar67 = ppvVar71 + 1;
                      *(int *)ppvVar67 = (int)uVar59 >> 2;
                      pvVar20 = (void *)rcAlloc(((int)uVar59 >> 2) << 4,0);
                      *ppvVar71 = pvVar20;
                      if (pvVar20 == (void *)0x0) {
                        uVar64 = *(uint *)ppvVar67;
                        pcVar26 = "rcBuildContours: Out of memory \'verts\' (%d).";
                      }
                      else {
                        memcpy(pvVar20,local_a0,(long)(int)*(uint *)ppvVar67 << 4);
                        if ((0 < iVar52) && (0 < (int)*(uint *)ppvVar67)) {
                          lVar25 = 0;
                          piVar40 = (int *)((long)*ppvVar71 + 8);
                          do {
                            lVar25 = lVar25 + 1;
                            piVar40[-2] = piVar40[-2] - iVar52;
                            *piVar40 = *piVar40 - iVar52;
                            piVar40 = piVar40 + 4;
                          } while (lVar25 < (int)*(uint *)ppvVar67);
                        }
                        lVar25 = lVar18 + lVar22 * 0x20;
                        iVar48 = (int)local_88 + 3;
                        if (-1 < (int)local_88) {
                          iVar48 = (int)local_88;
                        }
                        puVar68 = (uint *)(lVar25 + 0x18);
                        *puVar68 = iVar48 >> 2;
                        pvVar20 = (void *)rcAlloc((iVar48 >> 2) << 4,0);
                        ppvVar71 = (void **)(lVar25 + 0x10);
                        *ppvVar71 = pvVar20;
                        if (pvVar20 != (void *)0x0) {
                          memcpy(pvVar20,local_90,(long)(int)*puVar68 << 4);
                          if ((0 < iVar52) && (0 < (int)*puVar68)) {
                            lVar25 = 0;
                            piVar40 = (int *)((long)*ppvVar71 + 8);
                            do {
                              lVar25 = lVar25 + 1;
                              piVar40[-2] = piVar40[-2] - iVar52;
                              *piVar40 = *piVar40 - iVar52;
                              piVar40 = piVar40 + 4;
                            } while (lVar25 < (int)*puVar68);
                          }
                          lVar18 = lVar18 + lVar22 * 0x20;
                          *(short *)(lVar18 + 0x1c) = sVar13;
                          *(undefined *)(lVar18 + 0x1e) = uVar9;
                          goto LAB_00ddc758;
                        }
                        uVar64 = *puVar68;
                        pcVar26 = "rcBuildContours: Out of memory \'rverts\' (%d).";
                      }
                      rcContext::log(rVar17,(char *)0x3,pcVar26,(ulong)uVar64);
                      uVar62 = 0;
                      goto LAB_00ddde0c;
                    }
                  }
                }
LAB_00ddc758:
                uVar49 = uVar49 + 1;
              } while (uVar49 < uVar72);
            }
            uVar39 = uVar39 + 1;
          } while (uVar39 != uVar35);
          uVar36 = uVar36 + 1;
        } while (uVar36 != uVar74);
      }
      uVar35 = (ulong)*(uint *)(param_5 + 8);
      if (0 < (int)*(uint *)(param_5 + 8)) {
        uVar36 = 0;
        do {
          lVar18 = *(long *)param_5;
          ppvVar71 = (void **)(lVar18 + uVar36 * 0x20);
          ppvVar67 = ppvVar71 + 1;
          uVar64 = *(uint *)ppvVar67;
          if (0 < (int)uVar64) {
            uVar39 = 0;
            iVar52 = 0;
            iVar48 = uVar64 - 1;
            piVar40 = (int *)((long)*ppvVar71 + 8);
            piVar29 = piVar40;
            do {
              piVar1 = (int *)((long)*ppvVar71 + (long)(iVar48 << 2) * 4);
              iVar48 = (int)uVar39;
              uVar39 = uVar39 + 1;
              iVar52 = (iVar52 + piVar1[2] * piVar29[-2]) - *piVar29 * *piVar1;
              piVar29 = piVar29 + 4;
            } while (uVar64 != uVar39);
            if (iVar52 + 1 == -2 || iVar52 + 3 < 0 != SCARRY4(iVar52 + 1,2)) {
              if ((int)uVar35 < 1) {
LAB_00ddd9bc:
                rcContext::log(rVar17,(char *)0x2,
                               "rcBuildContours: Could not find merge target for bad contour %d.",
                               uVar36 & 0xffffffff);
              }
              else {
                uVar39 = 0;
LAB_00ddda7c:
                if (uVar36 == uVar39) goto LAB_00ddda70;
                lVar22 = lVar18 + uVar39 * 0x20;
                uVar74 = *(uint *)(lVar22 + 8);
                if (((uVar74 == 0) ||
                    (*(short *)(lVar22 + 0x1c) != *(short *)(lVar18 + uVar36 * 0x20 + 0x1c))) ||
                   ((int)uVar74 < 1)) goto LAB_00ddda70;
                uVar49 = 0;
                iVar52 = 0;
                iVar48 = uVar74 - 1;
                lVar22 = *(long *)(lVar18 + uVar39 * 0x20);
                piVar29 = (int *)(lVar22 + 8);
                do {
                  piVar1 = (int *)(lVar22 + (long)(iVar48 << 2) * 4);
                  iVar48 = (int)uVar49;
                  uVar49 = uVar49 + 1;
                  iVar52 = (iVar52 + piVar1[2] * piVar29[-2]) - *piVar29 * *piVar1;
                  piVar29 = piVar29 + 4;
                } while (uVar74 != uVar49);
                if (iVar52 + 2U < 3) goto LAB_00ddda70;
                ppvVar7 = (void **)(lVar18 + (uVar39 & 0xffffffff) * 0x20);
                ppvVar75 = ppvVar7 + 1;
                uVar74 = *(uint *)ppvVar75;
                if (0 < (int)uVar74) {
                  iVar52 = 0xfffffff;
                  uVar49 = 0xffffffff;
                  uVar72 = 0xffffffff;
                  pvVar20 = *ppvVar7;
                  uVar35 = 0;
                  do {
                    uVar31 = 0;
                    iVar48 = (uVar74 - 1) + (int)uVar35;
                    piVar29 = (int *)((long)pvVar20 + uVar35 * 0x10);
                    iVar66 = 0;
                    if (uVar74 != 0) {
                      iVar66 = iVar48 / (int)uVar74;
                    }
                    iVar61 = *piVar29;
                    iVar69 = piVar29[2];
                    piVar29 = (int *)((long)pvVar20 +
                                     (long)(int)((iVar48 - iVar66 * uVar74) * 4) * 4);
                    uVar63 = uVar35 + 1;
                    uVar32 = 0;
                    if (uVar63 != uVar74) {
                      uVar32 = (ulong)(uint)((int)uVar63 << 2);
                    }
                    iVar48 = *piVar29;
                    iVar66 = piVar29[2];
                    piVar1 = (int *)((long)pvVar20 + uVar32 * 4);
                    piVar29 = piVar40;
                    do {
                      if ((*piVar29 - iVar66) * (iVar61 - iVar48) +
                          (iVar66 - iVar69) * (piVar29[-2] - iVar48) < 1) {
                        iVar42 = *piVar29 - iVar69;
                        iVar24 = piVar29[-2] - iVar61;
                        if (((*piVar1 - iVar61) * iVar42 + (iVar69 - piVar1[2]) * iVar24 < 1) &&
                           (iVar42 = iVar24 * iVar24 + iVar42 * iVar42, iVar42 < iVar52)) {
                          uVar49 = uVar35 & 0xffffffff;
                          uVar72 = uVar31 & 0xffffffff;
                          iVar52 = iVar42;
                        }
                      }
                      uVar31 = uVar31 + 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar64 != uVar31);
                    uVar35 = uVar63;
                  } while (uVar63 != uVar74);
                  if (((int)uVar49 != -1) && ((int)uVar72 != -1)) {
                    pvVar20 = (void *)rcAlloc((uVar64 + uVar74) * 0x10 + 0x20,0);
                    if (pvVar20 == (void *)0x0) {
                      pcVar26 = "rcBuildContours: Failed to merge contours %d and %d.";
                      goto LAB_00dddcb0;
                    }
                    uVar64 = *(uint *)ppvVar75;
                    pvVar21 = *ppvVar7;
                    if ((int)uVar64 < 0) {
                      uVar74 = 0;
                    }
                    else {
                      puVar37 = (undefined4 *)((long)pvVar20 + 8);
                      uVar59 = 0;
                      do {
                        iVar52 = (int)uVar49 + uVar59;
                        uVar74 = uVar59 + 1;
                        iVar48 = 0;
                        if (uVar64 != 0) {
                          iVar48 = iVar52 / (int)uVar64;
                        }
                        puVar2 = (undefined4 *)
                                 ((long)pvVar21 + (long)(int)((iVar52 - iVar48 * uVar64) * 4) * 4);
                        puVar37[-2] = *puVar2;
                        puVar37[-1] = puVar2[1];
                        *puVar37 = puVar2[2];
                        puVar37[1] = puVar2[3];
                        puVar37 = puVar37 + 4;
                        uVar64 = *(uint *)ppvVar75;
                        bVar16 = (int)uVar59 < (int)uVar64;
                        uVar59 = uVar74;
                      } while (bVar16);
                    }
                    iVar52 = *(int *)ppvVar67;
                    if (-1 < iVar52) {
                      pvVar38 = *ppvVar71;
                      uVar35 = (ulong)uVar74 << 2;
                      iVar48 = 0;
                      do {
                        iVar66 = (int)uVar72 + iVar48;
                        iVar61 = 0;
                        if (iVar52 != 0) {
                          iVar61 = iVar66 / iVar52;
                        }
                        uVar39 = uVar35 & 0xfffffffc;
                        uVar35 = uVar35 + 4;
                        puVar2 = (undefined4 *)((long)pvVar20 + uVar39 * 4);
                        puVar37 = (undefined4 *)
                                  ((long)pvVar38 + (long)((iVar66 - iVar61 * iVar52) * 4) * 4);
                        *puVar2 = *puVar37;
                        puVar2[1] = puVar37[1];
                        puVar2[2] = puVar37[2];
                        puVar2[3] = puVar37[3];
                        iVar66 = iVar48 + 1;
                        iVar52 = *(int *)ppvVar67;
                        bVar16 = iVar48 < iVar52;
                        iVar48 = iVar66;
                      } while (bVar16);
                      uVar74 = uVar74 + iVar66;
                    }
                    rcFree(pvVar21);
                    *(uint *)ppvVar75 = uVar74;
                    *ppvVar7 = pvVar20;
                    rcFree(*ppvVar71);
                    *ppvVar71 = (void *)0x0;
                    *(undefined4 *)ppvVar67 = 0;
                    goto LAB_00ddd9d0;
                  }
                }
                pcVar26 = "rcBuildContours: Failed to find merge points for %d and %d.";
LAB_00dddcb0:
                rcContext::log(rVar17,(char *)0x2,pcVar26,uVar36 & 0xffffffff,uVar39 & 0xffffffff);
              }
            }
          }
LAB_00ddd9d0:
          uVar36 = uVar36 + 1;
          uVar35 = (ulong)*(int *)(param_5 + 8);
        } while ((long)uVar36 < (long)uVar35);
      }
      if (param_1[9] != (rcContext)0x0) {
        (**(code **)(*(long *)param_1 + 0x30))(param_1,4);
      }
      uVar62 = 1;
LAB_00ddde0c:
      rcFree(local_a0);
      rcFree(local_90);
    }
    rcFree(pvVar19);
  }
  if (*(long *)(lVar14 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar62;
LAB_00ddda70:
  uVar39 = uVar39 + 1;
  if (uVar39 == (uVar35 & 0xffffffff)) goto LAB_00ddd9bc;
  goto LAB_00ddda7c;
}


