// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e46bd4
// Entry Point: 00e46bd4
// Size: 7724 bytes
// Signature: undefined FUN_00e46bd4(void)


void FUN_00e46bd4(int *param_1)

{
  short *psVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint3 uVar7;
  char cVar8;
  byte bVar9;
  undefined uVar10;
  byte bVar11;
  ushort uVar12;
  short sVar13;
  undefined2 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 *__s;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  void *__src;
  undefined4 *puVar25;
  float *pfVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  char *pcVar30;
  undefined *puVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined (*pauVar34) [16];
  short *psVar35;
  undefined4 uVar36;
  undefined2 *puVar37;
  undefined *puVar38;
  ulong uVar39;
  uint uVar40;
  void **ppvVar41;
  undefined4 *puVar42;
  byte *pbVar43;
  long *plVar44;
  char *pcVar45;
  undefined8 *puVar46;
  int *piVar47;
  uint *puVar48;
  undefined4 *puVar49;
  ulong uVar50;
  ulong uVar51;
  uint *puVar52;
  byte *pbVar53;
  ushort *puVar54;
  long lVar55;
  uint *puVar56;
  float fVar57;
  int iVar59;
  undefined8 uVar58;
  int iVar60;
  float fVar61;
  short sVar62;
  short sVar63;
  int iVar64;
  short sVar65;
  short sVar66;
  int iVar67;
  short sVar68;
  short sVar69;
  int iVar70;
  short sVar71;
  int iVar72;
  int iVar74;
  undefined8 uVar73;
  int iVar75;
  int iVar77;
  undefined8 uVar76;
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
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  uint5 uVar98;
  undefined auVar99 [16];
  undefined auVar100 [16];
  uint5 uVar101;
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  uint *local_498;
  long local_478;
  undefined4 local_470;
  undefined2 local_46c;
  byte local_468 [32];
  undefined2 local_448 [484];
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  *(undefined *)((long)param_1 + 0x6e5) = 1;
  __s = (undefined4 *)FUN_00e4ca1c();
  if ((int)__s == 0) goto LAB_00e46d38;
  bVar9 = *(byte *)((long)param_1 + 0x6e3);
  if (((((bVar9 >> 1 & 1) == 0) || ((bVar9 >> 2 & 1) != 0)) || ((bVar9 & 1) != 0)) ||
     (param_1[0x178] != 1)) goto LAB_00e46d2c;
  if (*(char *)(param_1 + 0x179) == '\x1e') {
    cVar8 = FUN_00e4c9c0(param_1);
    if (cVar8 != '\x01') goto LAB_00e46d2c;
    __s = (undefined4 *)FUN_00e4a398(param_1,&local_470,6);
    if ((int)__s != 0) {
      if (((local_470 ^ s_OggSvorbis_010484d8._4_4_ |
           (uint)(local_46c ^ s_OggSvorbis_010484d8._8_2_)) == 0) &&
         (iVar15 = FUN_00e4a434(param_1), iVar15 == 0)) {
        bVar9 = FUN_00e4c9c0(param_1);
        param_1[1] = (uint)bVar9;
        if (bVar9 != 0) {
          if (0x10 < bVar9) {
            iVar15 = 5;
            goto LAB_00e46d30;
          }
          __s = (undefined4 *)FUN_00e4a434(param_1);
          *param_1 = (int)__s;
          if ((int)__s == 0) {
            iVar15 = 0x22;
            goto LAB_00e46d34;
          }
          FUN_00e4a434(param_1);
          FUN_00e4a434(param_1);
          FUN_00e4a434(param_1);
          uVar16 = FUN_00e4c9c0(param_1);
          uVar17 = uVar16 & 0xf;
          uVar18 = uVar16 >> 4 & 0xf;
          param_1[0x2a] = 1 << (ulong)uVar17;
          param_1[0x2b] = 1 << (ulong)uVar18;
          if (((uVar17 - 0xe < 0xfffffff8) || ((uVar16 + 0x20 >> 7 & 1) == 0)) || (uVar18 < uVar17))
          goto LAB_00e46e00;
          uVar22 = FUN_00e4c9c0(param_1);
          if ((uVar22 & 1) == 0) goto LAB_00e46d2c;
          __s = (undefined4 *)FUN_00e4ca1c(param_1);
          if ((((int)__s == 0) || (__s = (undefined4 *)FUN_00e4ef2c(param_1), (int)__s == 0)) ||
             (__s = (undefined4 *)FUN_00e4c908(param_1), (int)__s == 0)) goto LAB_00e46d38;
          iVar15 = FUN_00e4c7e4(param_1);
          param_1[0x1be] = 0;
          if (iVar15 == 3) {
            uVar10 = FUN_00e4c7e4(param_1);
            local_470 = CONCAT31(local_470._1_3_,uVar10);
            param_1[0x1be] = 0;
            uVar10 = FUN_00e4c7e4(param_1);
            local_470._0_2_ = CONCAT11(uVar10,(char)local_470);
            param_1[0x1be] = 0;
            uVar10 = FUN_00e4c7e4(param_1);
            local_470._0_3_ = CONCAT12(uVar10,(undefined2)local_470);
            param_1[0x1be] = 0;
            uVar10 = FUN_00e4c7e4(param_1);
            local_470 = CONCAT13(uVar10,(undefined3)local_470);
            param_1[0x1be] = 0;
            uVar10 = FUN_00e4c7e4(param_1);
            local_46c = CONCAT11(local_46c._1_1_,uVar10);
            param_1[0x1be] = 0;
            uVar10 = FUN_00e4c7e4(param_1);
            uVar19 = s_OggSvorbis_010484d8._4_4_;
            local_46c = CONCAT11(uVar10,(char)local_46c);
            param_1[0x1be] = 0;
            if ((local_470 ^ uVar19 | (uint)(local_46c ^ s_OggSvorbis_010484d8._8_2_)) == 0) {
              uVar17 = FUN_00e4ef8c(param_1);
              lVar23 = FUN_00e4efe4(param_1,uVar17 + 1);
              *(long *)(param_1 + 6) = lVar23;
              if (0 < (int)uVar17) {
                uVar22 = 0;
                do {
                  uVar10 = FUN_00e4c7e4(param_1);
                  param_1[0x1be] = 0;
                  *(undefined *)(*(long *)(param_1 + 6) + uVar22) = uVar10;
                  uVar22 = uVar22 + 1;
                } while (uVar17 != uVar22);
                lVar23 = *(long *)(param_1 + 6);
              }
              *(undefined *)(lVar23 + (int)uVar17) = 0;
              iVar15 = FUN_00e4ef8c(param_1);
              param_1[8] = iVar15;
              uVar24 = FUN_00e4efe4(param_1,iVar15 << 3);
              *(undefined8 *)(param_1 + 10) = uVar24;
              if (0 < param_1[8]) {
                lVar23 = 0;
                do {
                  uVar17 = FUN_00e4ef8c(param_1);
                  uVar24 = FUN_00e4efe4(param_1,uVar17 + 1);
                  *(undefined8 *)(*(long *)(param_1 + 10) + lVar23 * 8) = uVar24;
                  if (0 < (int)uVar17) {
                    uVar22 = 0;
                    do {
                      uVar10 = FUN_00e4c7e4(param_1);
                      param_1[0x1be] = 0;
                      *(undefined *)(*(long *)(*(long *)(param_1 + 10) + lVar23 * 8) + uVar22) =
                           uVar10;
                      uVar22 = uVar22 + 1;
                    } while (uVar17 != uVar22);
                  }
                  lVar28 = lVar23 * 8;
                  lVar23 = lVar23 + 1;
                  *(undefined *)(*(long *)(*(long *)(param_1 + 10) + lVar28) + (long)(int)uVar17) =
                       0;
                } while (lVar23 < param_1[8]);
              }
              uVar22 = FUN_00e4c7e4(param_1);
              param_1[0x1be] = 0;
              if ((uVar22 & 1) != 0) {
                FUN_00e4f038(param_1,*(undefined *)(param_1 + 0x1b9));
                *(undefined *)(param_1 + 0x1b9) = 0;
                do {
                  iVar15 = FUN_00e4c908(param_1);
                  FUN_00e4f038(param_1,iVar15);
                  *(undefined *)(param_1 + 0x1b9) = 0;
                } while (iVar15 != 0);
                __s = (undefined4 *)FUN_00e4ef2c(param_1);
                if ((int)__s == 0) goto LAB_00e46d38;
                if ((*(char *)(param_1 + 0x17) == '\0') ||
                   (iVar15 = FUN_00e45758(param_1), iVar15 != 0)) {
                  FUN_00e4f0a0();
                  iVar15 = FUN_00e4c7e4(param_1);
                  param_1[0x1be] = 0;
                  if (iVar15 == 5) {
                    uVar10 = FUN_00e4c7e4(param_1);
                    local_470 = CONCAT31(local_470._1_3_,uVar10);
                    param_1[0x1be] = 0;
                    uVar10 = FUN_00e4c7e4(param_1);
                    local_470._0_2_ = CONCAT11(uVar10,(char)local_470);
                    param_1[0x1be] = 0;
                    uVar10 = FUN_00e4c7e4(param_1);
                    local_470._0_3_ = CONCAT12(uVar10,(undefined2)local_470);
                    param_1[0x1be] = 0;
                    uVar10 = FUN_00e4c7e4(param_1);
                    local_470 = CONCAT13(uVar10,(undefined3)local_470);
                    param_1[0x1be] = 0;
                    uVar10 = FUN_00e4c7e4(param_1);
                    local_46c = CONCAT11(local_46c._1_1_,uVar10);
                    param_1[0x1be] = 0;
                    uVar10 = FUN_00e4c7e4(param_1);
                    uVar19 = s_OggSvorbis_010484d8._4_4_;
                    local_46c = CONCAT11(uVar10,(char)local_46c);
                    param_1[0x1be] = 0;
                    if ((local_470 ^ uVar19 | (uint)(local_46c ^ s_OggSvorbis_010484d8._8_2_)) == 0)
                    {
                      iVar15 = FUN_00e4c5b8(param_1,8);
                      param_1[0x2c] = iVar15 + 1;
                      __s = (undefined4 *)FUN_00e4efe4(param_1,(iVar15 + 1) * 0x848);
                      *(undefined4 **)(param_1 + 0x2e) = __s;
                      if (__s != (undefined4 *)0x0) {
                        memset(__s,0,(long)param_1[0x2c] * 0x848);
                        if (0 < param_1[0x2c]) {
                          local_478 = 0;
                          do {
                            lVar23 = *(long *)(param_1 + 0x2e);
                            cVar8 = FUN_00e4c5b8(param_1,8);
                            if (((cVar8 != 'B') || (cVar8 = FUN_00e4c5b8(param_1,8), cVar8 != 'C'))
                               || (cVar8 = FUN_00e4c5b8(param_1,8), cVar8 != 'V'))
                            goto LAB_00e46e00;
                            puVar48 = (uint *)(lVar23 + local_478 * 0x848);
                            uVar17 = FUN_00e4c5b8(param_1,8);
                            iVar15 = FUN_00e4c5b8(param_1,8);
                            *puVar48 = uVar17 & 0xff | iVar15 << 8;
                            uVar17 = FUN_00e4c5b8(param_1,8);
                            uVar18 = FUN_00e4c5b8(param_1,8);
                            iVar15 = FUN_00e4c5b8(param_1,8);
                            puVar56 = (uint *)(lVar23 + local_478 * 0x848 + 4);
                            *puVar56 = (uVar18 & 0xff) << 8 | iVar15 << 0x10 | uVar17 & 0xff;
                            iVar15 = FUN_00e4c5b8(param_1,1);
                            if (iVar15 == 0) {
                              cVar8 = FUN_00e4c5b8(param_1,1);
                            }
                            else {
                              cVar8 = '\0';
                            }
                            uVar17 = *puVar48;
                            pcVar30 = (char *)(lVar23 + local_478 * 0x848 + 0x1b);
                            *pcVar30 = cVar8;
                            if ((uVar17 == 0) && (*puVar56 != 0)) goto LAB_00e46e00;
                            if (cVar8 == '\0') {
                              __src = (void *)FUN_00e4efe4(param_1,*puVar56);
                              *(void **)(lVar23 + local_478 * 0x848 + 8) = __src;
                            }
                            else {
                              __src = (void *)FUN_00e4e88c(param_1);
                            }
                            if (__src == (void *)0x0) goto LAB_00e488c4;
                            if (iVar15 == 0) {
                              uVar17 = *puVar56;
                              if ((int)uVar17 < 1) goto LAB_00e4735c;
                              lVar28 = 0;
                              iVar15 = 0;
                              do {
                                if ((*pcVar30 == '\0') ||
                                   (iVar21 = FUN_00e4c5b8(param_1,1), iVar21 != 0)) {
                                  cVar8 = FUN_00e4c5b8(param_1,5);
                                  *(char *)((long)__src + lVar28) = cVar8 + '\x01';
                                  if ((char)(cVar8 + '\x01') == ' ') goto LAB_00e46e00;
                                  iVar15 = iVar15 + 1;
                                }
                                else {
                                  *(undefined *)((long)__src + lVar28) = 0xff;
                                }
                                uVar17 = *puVar56;
                                lVar28 = lVar28 + 1;
                              } while (lVar28 < (int)uVar17);
                            }
                            else {
                              iVar15 = FUN_00e4c5b8(param_1,5);
                              uVar17 = *puVar56;
                              if (0 < (int)uVar17) {
                                iVar21 = 0;
                                do {
                                  iVar15 = iVar15 + 1;
                                  uVar19 = FUN_00e4c6f0(uVar17 - iVar21);
                                  iVar20 = FUN_00e4c5b8(param_1,uVar19);
                                  if ((0x1f < iVar15) ||
                                     (iVar59 = iVar20 + iVar21, (int)*puVar56 < iVar59))
                                  goto LAB_00e46e00;
                                  memset((void *)((long)__src + (long)iVar21),iVar15,(long)iVar20);
                                  uVar17 = *puVar56;
                                  iVar21 = iVar59;
                                } while (iVar59 < (int)uVar17);
                              }
LAB_00e4735c:
                              iVar15 = 0;
                            }
                            if (*pcVar30 == '\0') {
LAB_00e47490:
                              uVar17 = *puVar56;
                              uVar22 = (ulong)uVar17;
                              if ((int)uVar17 < 1) {
                                iVar15 = 0;
                              }
                              else {
                                if (uVar17 < 8) {
                                  uVar51 = 0;
                                  iVar15 = 0;
                                }
                                else {
                                  if (uVar17 < 0x20) {
                                    iVar15 = 0;
                                    uVar50 = 0;
                                  }
                                  else {
                                    uVar51 = uVar22 & 0xffffffe0;
                                    pauVar34 = (undefined (*) [16])((long)__src + 0x10);
                                    iVar15 = 0;
                                    iVar21 = 0;
                                    iVar20 = 0;
                                    iVar59 = 0;
                                    iVar78 = 0;
                                    iVar79 = 0;
                                    iVar80 = 0;
                                    iVar81 = 0;
                                    iVar60 = 0;
                                    iVar64 = 0;
                                    iVar67 = 0;
                                    iVar70 = 0;
                                    iVar72 = 0;
                                    iVar74 = 0;
                                    iVar75 = 0;
                                    iVar77 = 0;
                                    iVar82 = 0;
                                    iVar83 = 0;
                                    iVar84 = 0;
                                    iVar85 = 0;
                                    iVar94 = 0;
                                    iVar95 = 0;
                                    iVar96 = 0;
                                    iVar97 = 0;
                                    iVar86 = 0;
                                    iVar87 = 0;
                                    iVar88 = 0;
                                    iVar89 = 0;
                                    iVar90 = 0;
                                    iVar91 = 0;
                                    iVar92 = 0;
                                    iVar93 = 0;
                                    uVar50 = uVar51;
                                    do {
                                      auVar100 = pauVar34[-1];
                                      auVar103 = *pauVar34;
                                      pauVar34 = pauVar34 + 2;
                                      uVar50 = uVar50 - 0x20;
                                      auVar99[0] = auVar100[0] + -0xb;
                                      auVar99[1] = auVar100[1] + -0xb;
                                      auVar99[2] = auVar100[2] + -0xb;
                                      auVar99[3] = auVar100[3] + -0xb;
                                      auVar99[4] = auVar100[4] + -0xb;
                                      auVar99[5] = auVar100[5] + -0xb;
                                      auVar99[6] = auVar100[6] + -0xb;
                                      auVar99[7] = auVar100[7] + -0xb;
                                      auVar99[8] = auVar100[8] + -0xb;
                                      auVar99[9] = auVar100[9] + -0xb;
                                      auVar99[10] = auVar100[10] + -0xb;
                                      auVar99[11] = auVar100[11] + -0xb;
                                      auVar99[12] = auVar100[12] + -0xb;
                                      auVar99[13] = auVar100[13] + -0xb;
                                      auVar99[14] = auVar100[14] + -0xb;
                                      auVar99[15] = auVar100[15] + -0xb;
                                      auVar102[0] = auVar103[0] + -0xb;
                                      auVar102[1] = auVar103[1] + -0xb;
                                      auVar102[2] = auVar103[2] + -0xb;
                                      auVar102[3] = auVar103[3] + -0xb;
                                      auVar102[4] = auVar103[4] + -0xb;
                                      auVar102[5] = auVar103[5] + -0xb;
                                      auVar102[6] = auVar103[6] + -0xb;
                                      auVar102[7] = auVar103[7] + -0xb;
                                      auVar102[8] = auVar103[8] + -0xb;
                                      auVar102[9] = auVar103[9] + -0xb;
                                      auVar102[10] = auVar103[10] + -0xb;
                                      auVar102[11] = auVar103[11] + -0xb;
                                      auVar102[12] = auVar103[12] + -0xb;
                                      auVar102[13] = auVar103[13] + -0xb;
                                      auVar102[14] = auVar103[14] + -0xb;
                                      auVar102[15] = auVar103[15] + -0xb;
                                      auVar100[8] = 0xf4;
                                      auVar100._0_8_ = 0xf4f4f4f4f4f4f4f4;
                                      auVar100[9] = 0xf4;
                                      auVar100[10] = 0xf4;
                                      auVar100[11] = 0xf4;
                                      auVar100[12] = 0xf4;
                                      auVar100[13] = 0xf4;
                                      auVar100[14] = 0xf4;
                                      auVar100[15] = 0xf4;
                                      auVar100 = NEON_cmhi(auVar100,auVar99,1);
                                      auVar103[8] = 0xf4;
                                      auVar103._0_8_ = 0xf4f4f4f4f4f4f4f4;
                                      auVar103[9] = 0xf4;
                                      auVar103[10] = 0xf4;
                                      auVar103[11] = 0xf4;
                                      auVar103[12] = 0xf4;
                                      auVar103[13] = 0xf4;
                                      auVar103[14] = 0xf4;
                                      auVar103[15] = 0xf4;
                                      auVar103 = NEON_cmhi(auVar103,auVar102,1);
                                      uVar98 = CONCAT14(auVar100[9],(uint)(auVar100[8] & 1)) &
                                               0x1ffffffff;
                                      uVar101 = CONCAT14(auVar103[13],(uint)(auVar103[12] & 1)) &
                                                0x1ffffffff;
                                      iVar72 = iVar72 + (uint)(auVar100[12] & 1);
                                      iVar74 = iVar74 + (uint)(auVar100[13] & 1);
                                      iVar75 = iVar75 + (uint)(auVar100[14] & 1);
                                      iVar77 = iVar77 + (uint)(auVar100[15] & 1);
                                      iVar60 = iVar60 + (int)uVar98;
                                      iVar64 = iVar64 + (uint)(byte)(uVar98 >> 0x20);
                                      iVar67 = iVar67 + (uint)(auVar100[10] & 1);
                                      iVar70 = iVar70 + (uint)(auVar100[11] & 1);
                                      iVar78 = iVar78 + (uint)(auVar100[4] & 1);
                                      iVar79 = iVar79 + (uint)(auVar100[5] & 1);
                                      iVar80 = iVar80 + (uint)(auVar100[6] & 1);
                                      iVar81 = iVar81 + (uint)(auVar100[7] & 1);
                                      iVar15 = iVar15 + (uint)(auVar100[0] & 1);
                                      iVar21 = iVar21 + (uint)(auVar100[1] & 1);
                                      iVar20 = iVar20 + (uint)(auVar100[2] & 1);
                                      iVar59 = iVar59 + (uint)(auVar100[3] & 1);
                                      iVar90 = iVar90 + (int)uVar101;
                                      iVar91 = iVar91 + (uint)(byte)(uVar101 >> 0x20);
                                      iVar92 = iVar92 + (uint)(auVar103[14] & 1);
                                      iVar93 = iVar93 + (uint)(auVar103[15] & 1);
                                      iVar86 = iVar86 + (uint)(auVar103[8] & 1);
                                      iVar87 = iVar87 + (uint)(auVar103[9] & 1);
                                      iVar88 = iVar88 + (uint)(auVar103[10] & 1);
                                      iVar89 = iVar89 + (uint)(auVar103[11] & 1);
                                      iVar94 = iVar94 + (uint)(auVar103[4] & 1);
                                      iVar95 = iVar95 + (uint)(auVar103[5] & 1);
                                      iVar96 = iVar96 + (uint)(auVar103[6] & 1);
                                      iVar97 = iVar97 + (uint)(auVar103[7] & 1);
                                      iVar82 = iVar82 + (uint)(auVar103[0] & 1);
                                      iVar83 = iVar83 + (uint)(auVar103[1] & 1);
                                      iVar84 = iVar84 + (uint)(auVar103[2] & 1);
                                      iVar85 = iVar85 + (uint)(auVar103[3] & 1);
                                    } while (uVar50 != 0);
                                    iVar15 = iVar82 + iVar15 + iVar86 + iVar60 +
                                             iVar94 + iVar78 + iVar90 + iVar72 +
                                             iVar83 + iVar21 + iVar87 + iVar64 +
                                             iVar95 + iVar79 + iVar91 + iVar74 +
                                             iVar84 + iVar20 + iVar88 + iVar67 +
                                             iVar96 + iVar80 + iVar92 + iVar75 +
                                             iVar85 + iVar59 + iVar89 + iVar70 +
                                             iVar97 + iVar81 + iVar93 + iVar77;
                                    if (uVar51 == uVar22) goto LAB_00e4764c;
                                    uVar50 = uVar51;
                                    if ((uVar17 & 0x18) == 0) goto LAB_00e4762c;
                                  }
                                  iVar20 = 0;
                                  iVar59 = 0;
                                  uVar51 = uVar22 & 0xfffffff8;
                                  iVar60 = 0;
                                  iVar64 = 0;
                                  iVar67 = 0;
                                  iVar70 = 0;
                                  iVar21 = 0;
                                  lVar28 = uVar50 - uVar51;
                                  puVar46 = (undefined8 *)((long)__src + uVar50);
                                  do {
                                    uVar24 = *puVar46;
                                    lVar28 = lVar28 + 8;
                                    uVar24 = NEON_cmhi(0xf4f4f4f4f4f4f4f4,
                                                       CONCAT17((char)((ulong)uVar24 >> 0x38) + -0xb
                                                                ,CONCAT16((char)((ulong)uVar24 >>
                                                                                0x30) + -0xb,
                                                                          CONCAT15((char)((ulong)
                                                  uVar24 >> 0x28) + -0xb,
                                                  CONCAT14((char)((ulong)uVar24 >> 0x20) + -0xb,
                                                           CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                                    -0xb,CONCAT12((char)((ulong)
                                                  uVar24 >> 0x10) + -0xb,
                                                  CONCAT11((char)((ulong)uVar24 >> 8) + -0xb,
                                                           (char)uVar24 + -0xb))))))),1);
                                    uVar7 = CONCAT12((char)((ulong)uVar24 >> 8),(short)uVar24) &
                                            0xff00ff;
                                    iVar60 = iVar60 + (uint)((byte)((ulong)uVar24 >> 0x20) & 1);
                                    iVar64 = iVar64 + (uint)((byte)((ulong)uVar24 >> 0x28) & 1);
                                    iVar67 = iVar67 + (uint)((byte)((ulong)uVar24 >> 0x30) & 1);
                                    iVar70 = iVar70 + (uint)((byte)((ulong)uVar24 >> 0x38) & 1);
                                    iVar15 = iVar15 + (uint)((byte)uVar7 & 1);
                                    iVar21 = iVar21 + (uint)((byte)(uVar7 >> 0x10) & 1);
                                    iVar20 = iVar20 + (uint)((byte)((ulong)uVar24 >> 0x10) & 1);
                                    iVar59 = iVar59 + (uint)((byte)((ulong)uVar24 >> 0x18) & 1);
                                    puVar46 = puVar46 + 1;
                                  } while (lVar28 != 0);
                                  iVar15 = iVar15 + iVar60 + iVar21 + iVar64 +
                                           iVar20 + iVar67 + iVar59 + iVar70;
                                  if (uVar51 == uVar22) goto LAB_00e4764c;
                                }
LAB_00e4762c:
                                lVar28 = uVar22 - uVar51;
                                pbVar53 = (byte *)((long)__src + uVar51);
                                do {
                                  if (*pbVar53 - 0xb < 0xf4) {
                                    iVar15 = iVar15 + 1;
                                  }
                                  lVar28 = lVar28 + -1;
                                  pbVar53 = pbVar53 + 1;
                                } while (lVar28 != 0);
                              }
LAB_00e4764c:
                              lVar28 = lVar23 + local_478 * 0x848;
                              *(int *)(lVar28 + 0x840) = iVar15;
                              __s = (undefined4 *)FUN_00e4efe4(param_1,uVar17 << 2);
                              *(undefined4 **)(lVar28 + 0x28) = __s;
                              if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                              local_498 = (uint *)(lVar28 + 0x840);
                              uVar17 = *puVar56;
                              puVar25 = (undefined4 *)0x0;
                            }
                            else {
                              if ((int)uVar17 >> 2 <= iVar15) {
                                if (param_1[4] < (int)uVar17) {
                                  param_1[4] = uVar17;
                                }
                                __s = (undefined4 *)FUN_00e4efe4(param_1);
                                ppvVar41 = (void **)(lVar23 + local_478 * 0x848 + 8);
                                *ppvVar41 = __s;
                                if (__s != (undefined4 *)0x0) {
                                  memcpy(__s,__src,(long)(int)*puVar56);
                                  if (*(long *)(param_1 + 0x20) == 0) {
                                    free(__src);
                                  }
                                  else {
                                    param_1[0x25] = (*puVar56 + 3 & 0xfffffffc) + param_1[0x25];
                                  }
                                  __src = *ppvVar41;
                                  *pcVar30 = '\0';
                                  goto LAB_00e47490;
                                }
                                goto LAB_00e4877c;
                              }
                              lVar28 = lVar23 + local_478 * 0x848;
                              local_498 = (uint *)(lVar28 + 0x840);
                              *(int *)(lVar28 + 0x840) = iVar15;
                              if (iVar15 == 0) {
                                puVar25 = (undefined4 *)0x0;
                              }
                              else {
                                __s = (undefined4 *)FUN_00e4efe4(param_1,iVar15);
                                *(undefined4 **)(lVar23 + local_478 * 0x848 + 8) = __s;
                                if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                                __s = (undefined4 *)FUN_00e4e88c(param_1,*local_498 << 2);
                                *(undefined4 **)(lVar23 + local_478 * 0x848 + 0x28) = __s;
                                if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                                puVar25 = (undefined4 *)FUN_00e4e88c(param_1,*local_498 << 2);
                                if (puVar25 == (undefined4 *)0x0) {
                                  __s = (undefined4 *)0x0;
                                  goto LAB_00e4877c;
                                }
                              }
                              uVar17 = *puVar56;
                              uVar18 = uVar17 + *local_498 * 8;
                              if ((uint)param_1[4] < uVar18) {
                                param_1[4] = uVar18;
                              }
                            }
                            iVar15 = FUN_00e4f164(puVar48,__src,uVar17,puVar25);
                            if (iVar15 == 0) {
                              if ((*pcVar30 == '\0') || (*(long *)(param_1 + 0x20) != 0))
                              goto LAB_00e46e00;
LAB_00e487c0:
                              free(puVar25);
                              iVar15 = 0x14;
                              goto LAB_00e46d30;
                            }
                            if (*local_498 != 0) {
                              __s = (undefined4 *)FUN_00e4efe4(param_1,*local_498 * 4 + 4);
                              *(undefined4 **)(lVar23 + local_478 * 0x848 + 0x830) = __s;
                              if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                              __s = (undefined4 *)FUN_00e4efe4(param_1,*local_498 * 4 + 4);
                              lVar28 = lVar23 + local_478 * 0x848;
                              *(undefined4 **)(lVar28 + 0x838) = __s;
                              if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                              *__s = 0xffffffff;
                              *(undefined4 **)(lVar28 + 0x838) = __s + 1;
                              FUN_00e4f434(puVar48,__src,puVar25);
                            }
                            if (*pcVar30 != '\0') {
                              if (*(long *)(param_1 + 0x20) == 0) {
                                free(puVar25);
                                ppvVar41 = (void **)(lVar23 + local_478 * 0x848 + 0x28);
                                if (*(long *)(param_1 + 0x20) != 0) goto LAB_00e47770;
                                free(*ppvVar41);
                                if (*(long *)(param_1 + 0x20) != 0) goto LAB_00e47784;
                                free(__src);
                              }
                              else {
                                ppvVar41 = (void **)(lVar23 + local_478 * 0x848 + 0x28);
                                param_1[0x25] = param_1[0x25] + *local_498 * 4;
LAB_00e47770:
                                param_1[0x25] = param_1[0x25] + *local_498 * 4;
LAB_00e47784:
                                param_1[0x25] = (*puVar56 + 3 & 0xfffffffc) + param_1[0x25];
                              }
                              *ppvVar41 = (void *)0x0;
                            }
                            FUN_00e4f5fc(puVar48);
                            bVar9 = FUN_00e4c5b8(param_1,4);
                            pbVar53 = (byte *)(lVar23 + local_478 * 0x848 + 0x19);
                            *pbVar53 = bVar9;
                            if (2 < bVar9) goto LAB_00e46e00;
                            if (bVar9 != 0) {
                              FUN_00e4c5b8(param_1,0x20);
                              uVar19 = FUN_00e4f6c8();
                              lVar28 = lVar23 + local_478 * 0x848;
                              puVar49 = (undefined4 *)(lVar28 + 0x10);
                              *puVar49 = uVar19;
                              FUN_00e4c5b8(param_1,0x20);
                              uVar19 = FUN_00e4f6c8();
                              puVar42 = (undefined4 *)(lVar28 + 0x14);
                              *puVar42 = uVar19;
                              cVar8 = FUN_00e4c5b8(param_1,4);
                              *(char *)(lVar28 + 0x18) = cVar8 + '\x01';
                              cVar8 = FUN_00e4c5b8(param_1,1);
                              bVar9 = *pbVar53;
                              uVar17 = *puVar56;
                              uVar18 = *puVar48;
                              pcVar45 = (char *)(lVar28 + 0x1a);
                              *pcVar45 = cVar8;
                              if (bVar9 == 1) {
                                __s = (undefined4 *)FUN_00e4f704();
                                if ((int)__s < 0) goto LAB_00e46e00;
                              }
                              else {
                                __s = (undefined4 *)(ulong)(uVar18 * uVar17);
                              }
                              uVar17 = (uint)__s;
                              puVar52 = (uint *)(lVar23 + local_478 * 0x848 + 0x1c);
                              *puVar52 = uVar17;
                              if (uVar17 == 0) {
                                iVar15 = 0x14;
                                goto LAB_00e46d34;
                              }
                              __s = (undefined4 *)FUN_00e4e88c(param_1,uVar17 << 1);
                              if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                              uVar17 = *puVar52;
                              puVar25 = __s;
                              if (0 < (int)uVar17) {
                                lVar55 = 0;
LAB_00e478a0:
                                iVar15 = FUN_00e4c5b8(param_1,*(char *)(lVar28 + 0x18));
                                if (iVar15 != -1) goto code_r0x00e478b4;
                                if (*(long *)(param_1 + 0x20) != 0) {
                                  iVar15 = (*puVar52 * 2 + 3 & 0xfffffffc) + param_1[0x25];
LAB_00e487a0:
                                  param_1[0x25] = iVar15;
                                  iVar15 = 0x14;
                                  goto LAB_00e46d30;
                                }
                                goto LAB_00e487c0;
                              }
LAB_00e478c8:
                              if (*pbVar53 == 1) {
                                cVar8 = *pcVar30;
                                if (cVar8 == '\0') {
                                  uVar17 = *puVar56;
                                }
                                else {
                                  uVar17 = *local_498;
                                  if (uVar17 == 0) goto LAB_00e47a94;
                                }
                                lVar28 = FUN_00e4efe4(param_1,uVar17 * *puVar48 * 4);
                                *(long *)(lVar23 + local_478 * 0x848 + 0x20) = lVar28;
                                if (lVar28 == 0) {
LAB_00e487d8:
                                  if (*(long *)(param_1 + 0x20) == 0) {
                                    free(__s);
                                  }
                                  else {
                                    param_1[0x25] = (*puVar52 * 2 + 3 & 0xfffffffc) + param_1[0x25];
                                  }
                                  goto LAB_00e488c4;
                                }
                                if (cVar8 != '\0') {
                                  puVar56 = local_498;
                                }
                                uVar17 = *puVar56;
                                if (0 < (int)uVar17) {
                                  fVar57 = 0.0;
                                  uVar22 = 0;
                                  uVar18 = *puVar48;
                                  do {
                                    if (cVar8 == '\0') {
                                      uVar16 = (uint)uVar22;
                                    }
                                    else {
                                      uVar16 = *(uint *)(*(long *)(lVar23 + local_478 * 0x848 +
                                                                  0x838) + uVar22 * 4);
                                    }
                                    if (0 < (int)uVar18) {
                                      uVar50 = 0;
                                      uVar2 = *puVar52;
                                      uVar27 = 1;
                                      cVar3 = *pcVar45;
                                      do {
                                        uVar4 = 0;
                                        if (uVar27 != 0) {
                                          uVar4 = uVar16 / uVar27;
                                        }
                                        uVar5 = 0;
                                        if (uVar2 != 0) {
                                          uVar5 = uVar4 / uVar2;
                                        }
                                        uVar19 = NEON_ucvtf((uint)*(ushort *)
                                                                   ((long)__s +
                                                                   (long)(int)(uVar4 - uVar5 * uVar2
                                                                              ) * 2));
                                        fVar61 = (float)NEON_fmadd(uVar19,*puVar42,*puVar49);
                                        *(float *)(lVar28 + uVar50 * 4) = fVar57 + fVar61;
                                        uVar50 = uVar50 + 1;
                                        if (cVar3 != '\0') {
                                          fVar57 = fVar57 + fVar61;
                                        }
                                        if ((long)uVar50 < (long)(int)uVar18) {
                                          if (((ulong)uVar2 * (ulong)uVar27 & 0xffffffff00000000) !=
                                              0) {
                                            if (*(long *)(param_1 + 0x20) == 0) goto LAB_00e487c0;
                                            iVar15 = param_1[0x25] + (uVar2 * 2 + 3 & 0xfffffffc);
                                            goto LAB_00e487a0;
                                          }
                                          uVar27 = uVar2 * uVar27;
                                        }
                                      } while (uVar18 != uVar50);
                                    }
                                    uVar22 = uVar22 + 1;
                                    lVar28 = lVar28 + (long)(int)uVar18 * 4;
                                  } while (uVar22 != uVar17);
                                }
                                *pbVar53 = 2;
                              }
                              else {
                                pfVar26 = (float *)FUN_00e4efe4(param_1,uVar17 << 2);
                                *(float **)(lVar23 + local_478 * 0x848 + 0x20) = pfVar26;
                                if (pfVar26 == (float *)0x0) goto LAB_00e487d8;
                                uVar22 = (ulong)*puVar52;
                                if (0 < (int)*puVar52) {
                                  fVar57 = 0.0;
                                  cVar8 = *pcVar45;
                                  do {
                                    fVar61 = (float)NEON_fmadd((float)(ulong)*(ushort *)puVar25,
                                                               *puVar42,*puVar49);
                                    fVar61 = fVar57 + fVar61;
                                    if (cVar8 != '\0') {
                                      fVar57 = fVar61;
                                    }
                                    uVar22 = uVar22 - 1;
                                    *pfVar26 = fVar61;
                                    pfVar26 = pfVar26 + 1;
                                    puVar25 = (undefined4 *)((long)puVar25 + 2);
                                  } while (uVar22 != 0);
                                }
                              }
LAB_00e47a94:
                              if (*(long *)(param_1 + 0x20) == 0) {
                                free(__s);
                              }
                              else {
                                param_1[0x25] = (*puVar52 * 2 + 3 & 0xfffffffc) + param_1[0x25];
                              }
                            }
                            local_478 = local_478 + 1;
                          } while (local_478 < param_1[0x2c]);
                        }
                        iVar15 = FUN_00e4c5b8(param_1,6);
                        for (uVar17 = iVar15 + 1U & 0xff; uVar17 != 0; uVar17 = uVar17 - 1) {
                          iVar15 = FUN_00e4c5b8(param_1,0x10);
                          if (iVar15 != 0) goto LAB_00e46e00;
                        }
                        iVar15 = FUN_00e4c5b8(param_1,6);
                        param_1[0x30] = iVar15 + 1;
                        __s = (undefined4 *)FUN_00e4efe4(param_1,(iVar15 + 1) * 0x63c);
                        *(undefined4 **)(param_1 + 0x52) = __s;
                        if (__s != (undefined4 *)0x0) {
                          if (param_1[0x30] < 1) {
                            iVar15 = 0;
                          }
                          else {
                            uVar22 = 0;
                            puVar31 = (undefined *)((ulong)local_468 | 2);
                            uStack_4a8 = 0x7000600050004;
                            local_4b0 = 0x3000200010000;
                            uVar17 = 0;
                            do {
                              uVar12 = FUN_00e4c5b8(param_1,0x10);
                              *(ushort *)((long)param_1 + uVar22 * 2 + 0xc4) = uVar12;
                              if (1 < uVar12) goto LAB_00e46e00;
                              if (uVar12 == 0) {
                                lVar23 = *(long *)(param_1 + 0x52);
                                uVar10 = FUN_00e4c5b8(param_1,8);
                                puVar31 = (undefined *)(lVar23 + (uVar22 & 0xffffffff) * 0x63c);
                                *puVar31 = uVar10;
                                uVar14 = FUN_00e4c5b8(param_1,0x10);
                                *(undefined2 *)(puVar31 + 2) = uVar14;
                                uVar14 = FUN_00e4c5b8(param_1,0x10);
                                *(undefined2 *)(puVar31 + 4) = uVar14;
                                uVar10 = FUN_00e4c5b8(param_1,6);
                                puVar31[6] = uVar10;
                                uVar10 = FUN_00e4c5b8(param_1,8);
                                puVar31[7] = uVar10;
                                uVar17 = FUN_00e4c5b8(param_1,4);
                                uVar17 = (uVar17 & 0xff) + 1;
                                puVar31[8] = (byte)uVar17;
                                if (uVar17 >> 8 == 0) {
                                  uVar50 = 0;
                                  do {
                                    uVar10 = FUN_00e4c5b8(param_1,8);
                                    *(undefined *)(lVar23 + uVar22 * 0x63c + 9 + uVar50) = uVar10;
                                    uVar50 = uVar50 + 1;
                                  } while (uVar50 < (byte)puVar31[8]);
                                }
                                __s = (undefined4 *)0x0;
                                param_1[0x27] = 4;
                                goto LAB_00e46d38;
                              }
                              lVar23 = *(long *)(param_1 + 0x52);
                              bVar9 = FUN_00e4c5b8(param_1,5);
                              pbVar53 = (byte *)(lVar23 + uVar22 * 0x63c);
                              *pbVar53 = bVar9;
                              if (bVar9 != 0) {
                                uVar50 = 0;
                                uVar18 = 0xffffffff;
                                do {
                                  bVar9 = FUN_00e4c5b8(param_1,4);
                                  *(byte *)(lVar23 + uVar22 * 0x63c + 1 + uVar50) = bVar9;
                                  uVar16 = (uint)bVar9;
                                  if ((int)(uint)bVar9 <= (int)uVar18) {
                                    uVar16 = uVar18;
                                  }
                                  uVar50 = uVar50 + 1;
                                  uVar18 = uVar16;
                                } while (uVar50 < *pbVar53);
                                uVar50 = 0;
                                lVar28 = lVar23 + uVar22 * 0x63c + 0x52;
                                do {
                                  cVar8 = FUN_00e4c5b8(param_1,3);
                                  lVar55 = lVar23 + uVar22 * 0x63c + uVar50;
                                  *(char *)(lVar55 + 0x21) = cVar8 + '\x01';
                                  bVar9 = FUN_00e4c5b8(param_1,2);
                                  pbVar43 = (byte *)(lVar55 + 0x31);
                                  *pbVar43 = bVar9;
                                  if (bVar9 == 0) {
LAB_00e47c80:
                                    lVar55 = 0;
                                    do {
                                      sVar13 = FUN_00e4c5b8(param_1,8);
                                      *(short *)(lVar28 + lVar55 * 2) = sVar13 + -1;
                                      if (param_1[0x2c] <= (int)(short)(sVar13 + -1))
                                      goto LAB_00e46e00;
                                      lVar55 = lVar55 + 1;
                                    } while (lVar55 < 1 << (ulong)(*pbVar43 & 0x1f));
                                  }
                                  else {
                                    bVar9 = FUN_00e4c5b8(param_1,8);
                                    *(byte *)(lVar23 + uVar22 * 0x63c + uVar50 + 0x41) = bVar9;
                                    if (param_1[0x2c] <= (int)(uint)bVar9) goto LAB_00e46e00;
                                    if (*pbVar43 != 0x1f) goto LAB_00e47c80;
                                  }
                                  uVar50 = uVar50 + 1;
                                  lVar28 = lVar28 + 0x10;
                                } while (uVar50 != uVar16 + 1);
                              }
                              uVar18 = 2;
                              cVar8 = FUN_00e4c5b8(param_1,2);
                              lVar28 = lVar23 + uVar22 * 0x63c;
                              *(char *)(lVar28 + 0x634) = cVar8 + '\x01';
                              uVar16 = FUN_00e4c5b8(param_1,4);
                              puVar56 = (uint *)(lVar28 + 0x638);
                              *(undefined2 *)(lVar28 + 0x152) = 0;
                              *(char *)(lVar28 + 0x635) = (char)uVar16;
                              bVar9 = *pbVar53;
                              uVar50 = (ulong)bVar9;
                              *(short *)(lVar28 + 0x154) = (short)(1 << (ulong)(uVar16 & 0x1f));
                              *(undefined4 *)(lVar28 + 0x638) = 2;
                              if (bVar9 == 0) {
LAB_00e47da8:
                                uVar50 = (ulong)uVar18;
                                if ((uVar18 < 0x10) ||
                                   ((pbVar53 = (byte *)(lVar23 + uVar22 * 0x63c + 0x152),
                                    local_468 < pbVar53 + uVar50 * 2 &&
                                    (pbVar53 < local_468 + uVar50 * 4)))) {
                                  uVar51 = 0;
                                }
                                else {
                                  uVar51 = uVar50 & 0xfffffff0;
                                  puVar46 = (undefined8 *)(lVar23 + uVar22 * 0x63c + 0x162);
                                  uVar39 = uVar51;
                                  puVar37 = local_448;
                                  uVar24 = local_4b0;
                                  uVar58 = uStack_4a8;
                                  do {
                                    uVar39 = uVar39 - 0x10;
                                    sVar13 = (short)uVar24;
                                    sVar62 = (short)((ulong)uVar24 >> 0x10);
                                    sVar63 = (short)((ulong)uVar24 >> 0x20);
                                    sVar65 = (short)((ulong)uVar24 >> 0x30);
                                    sVar66 = (short)uVar58;
                                    sVar68 = (short)((ulong)uVar58 >> 0x10);
                                    sVar69 = (short)((ulong)uVar58 >> 0x20);
                                    sVar71 = (short)((ulong)uVar58 >> 0x30);
                                    uVar58 = puVar46[-1];
                                    uVar24 = puVar46[-2];
                                    uVar76 = puVar46[1];
                                    uVar73 = *puVar46;
                                    puVar46 = puVar46 + 4;
                                    puVar37[-0x10] = (short)uVar24;
                                    puVar37[-0xf] = sVar13;
                                    puVar37[-0xe] = (short)((ulong)uVar24 >> 0x10);
                                    puVar37[-0xd] = sVar62;
                                    puVar37[-0xc] = (short)((ulong)uVar24 >> 0x20);
                                    puVar37[-0xb] = sVar63;
                                    puVar37[-10] = (short)((ulong)uVar24 >> 0x30);
                                    puVar37[-9] = sVar65;
                                    puVar37[-8] = (short)uVar58;
                                    puVar37[-7] = sVar66;
                                    puVar37[-6] = (short)((ulong)uVar58 >> 0x10);
                                    puVar37[-5] = sVar68;
                                    puVar37[-4] = (short)((ulong)uVar58 >> 0x20);
                                    puVar37[-3] = sVar69;
                                    puVar37[-2] = (short)((ulong)uVar58 >> 0x30);
                                    puVar37[-1] = sVar71;
                                    uVar24 = CONCAT26(sVar65 + 0x10,
                                                      CONCAT24(sVar63 + 0x10,
                                                               CONCAT22(sVar62 + 0x10,sVar13 + 0x10)
                                                              ));
                                    uVar58 = CONCAT26(sVar71 + 0x10,
                                                      CONCAT24(sVar69 + 0x10,
                                                               CONCAT22(sVar68 + 0x10,sVar66 + 0x10)
                                                              ));
                                    *puVar37 = (short)uVar73;
                                    puVar37[1] = sVar13 + 8;
                                    puVar37[2] = (short)((ulong)uVar73 >> 0x10);
                                    puVar37[3] = sVar62 + 8;
                                    puVar37[4] = (short)((ulong)uVar73 >> 0x20);
                                    puVar37[5] = sVar63 + 8;
                                    puVar37[6] = (short)((ulong)uVar73 >> 0x30);
                                    puVar37[7] = sVar65 + 8;
                                    puVar37[8] = (short)uVar76;
                                    puVar37[9] = sVar66 + 8;
                                    puVar37[10] = (short)((ulong)uVar76 >> 0x10);
                                    puVar37[0xb] = sVar68 + 8;
                                    puVar37[0xc] = (short)((ulong)uVar76 >> 0x20);
                                    puVar37[0xd] = sVar69 + 8;
                                    puVar37[0xe] = (short)((ulong)uVar76 >> 0x30);
                                    puVar37[0xf] = sVar71 + 8;
                                    puVar37 = puVar37 + 0x20;
                                  } while (uVar39 != 0);
                                  if (uVar51 == uVar50) goto LAB_00e47e18;
                                }
                                puVar37 = (undefined2 *)(puVar31 + uVar51 * 4);
                                do {
                                  uVar14 = *(undefined2 *)
                                            (lVar23 + uVar22 * 0x63c + 0x152 + uVar51 * 2);
                                  *puVar37 = (short)uVar51;
                                  uVar51 = uVar51 + 1;
                                  puVar37[-1] = uVar14;
                                  puVar37 = puVar37 + 2;
                                } while (uVar50 != uVar51);
                              }
                              else {
                                uVar51 = 0;
                                uVar18 = 2;
                                do {
                                  lVar55 = lVar23 + uVar22 * 0x63c;
                                  pbVar43 = (byte *)(lVar55 + (ulong)*(byte *)(lVar55 + uVar51 + 1)
                                                    + 0x21);
                                  if (*pbVar43 != 0) {
                                    uVar16 = 0;
                                    do {
                                      uVar14 = FUN_00e4c5b8(param_1,*(undefined *)(lVar28 + 0x635));
                                      uVar16 = uVar16 + 1;
                                      uVar18 = *puVar56 + 1;
                                      *(undefined2 *)
                                       (lVar23 + uVar22 * 0x63c + (long)(int)*puVar56 * 2 + 0x152) =
                                           uVar14;
                                      bVar9 = *pbVar43;
                                      *puVar56 = uVar18;
                                    } while (uVar16 < bVar9);
                                    uVar50 = (ulong)*pbVar53;
                                  }
                                  uVar51 = uVar51 + 1;
                                } while (uVar51 < uVar50);
                                if (0 < (int)uVar18) goto LAB_00e47da8;
                              }
LAB_00e47e18:
                              qsort(local_468,(long)(int)uVar18,4,FUN_00e4f7c8);
                              uVar16 = *puVar56;
                              uVar18 = uVar16 - 1;
                              if ((int)uVar18 < 1) {
                                uVar18 = 0;
                              }
                              lVar28 = (ulong)uVar18 + 1;
                              psVar35 = (short *)((ulong)local_468 | 4);
                              while (lVar28 = lVar28 + -1, lVar28 != 0) {
                                psVar1 = psVar35 + -2;
                                sVar13 = *psVar35;
                                psVar35 = psVar35 + 2;
                                if (*psVar1 == sVar13) goto LAB_00e46e00;
                              }
                              if (0 < (int)uVar16) {
                                lVar28 = 0;
                                puVar38 = puVar31;
                                do {
                                  *(undefined *)(lVar23 + uVar22 * 0x63c + 0x346 + lVar28) =
                                       *puVar38;
                                  lVar28 = lVar28 + 1;
                                  uVar16 = *puVar56;
                                  puVar38 = puVar38 + 4;
                                } while (lVar28 < (int)uVar16);
                                if (2 < (int)uVar16) {
                                  lVar28 = 2;
                                  do {
                                    lVar55 = 0;
                                    uVar18 = 0xffffffff;
                                    uVar16 = 0x10000;
                                    puVar54 = (ushort *)
                                              (lVar23 + uVar22 * 0x63c + lVar28 * 2 + 0x152);
                                    uVar19 = 0;
                                    uVar33 = 0;
                                    do {
                                      uVar12 = *(ushort *)
                                                (lVar23 + uVar22 * 0x63c + 0x152 + lVar55 * 2);
                                      uVar27 = (uint)uVar12;
                                      uVar36 = uVar19;
                                      uVar2 = uVar18;
                                      if (((int)uVar18 < (int)(uint)uVar12) &&
                                         (uVar36 = (int)lVar55, uVar2 = uVar27, *puVar54 <= uVar27))
                                      {
                                        uVar36 = uVar19;
                                        uVar2 = uVar18;
                                      }
                                      uVar18 = uVar2;
                                      uVar32 = uVar33;
                                      uVar2 = uVar16;
                                      if ((uVar27 < uVar16) &&
                                         (uVar32 = (int)lVar55, uVar2 = uVar27, uVar27 <= *puVar54))
                                      {
                                        uVar32 = uVar33;
                                        uVar2 = uVar16;
                                      }
                                      uVar16 = uVar2;
                                      lVar55 = lVar55 + 1;
                                      uVar19 = uVar36;
                                      uVar33 = uVar32;
                                    } while (lVar28 != lVar55);
                                    lVar55 = lVar23 + uVar22 * 0x63c + lVar28 * 2;
                                    lVar28 = lVar28 + 1;
                                    *(char *)(lVar55 + 0x440) = (char)uVar36;
                                    *(char *)(lVar55 + 0x441) = (char)uVar32;
                                    uVar16 = *puVar56;
                                  } while (lVar28 < (int)uVar16);
                                }
                              }
                              uVar22 = uVar22 + 1;
                              if ((int)uVar16 <= (int)uVar17) {
                                uVar16 = uVar17;
                              }
                              uVar17 = uVar16;
                            } while ((long)uVar22 < (long)param_1[0x30]);
                            iVar15 = uVar16 << 1;
                          }
                          iVar21 = FUN_00e4c5b8(param_1,6);
                          param_1[0x54] = iVar21 + 1;
                          __s = (undefined4 *)FUN_00e4efe4(param_1,(iVar21 + 1) * 0x20);
                          *(undefined4 **)(param_1 + 0x76) = __s;
                          if (__s != (undefined4 *)0x0) {
                            memset(__s,0,(long)param_1[0x54] << 5);
                            if (0 < param_1[0x54]) {
                              local_478 = 0;
                              do {
                                lVar23 = *(long *)(param_1 + 0x76);
                                uVar12 = FUN_00e4c5b8(param_1,0x10);
                                *(ushort *)((long)param_1 + local_478 * 2 + 0x154) = uVar12;
                                if (2 < uVar12) goto LAB_00e46e00;
                                uVar17 = FUN_00e4c5b8(param_1,0x18);
                                puVar56 = (uint *)(lVar23 + local_478 * 0x20);
                                *puVar56 = uVar17;
                                uVar17 = FUN_00e4c5b8(param_1,0x18);
                                puVar56[1] = uVar17;
                                if (uVar17 < *puVar56) goto LAB_00e46e00;
                                iVar21 = FUN_00e4c5b8(param_1,0x18);
                                puVar56[2] = iVar21 + 1;
                                cVar8 = FUN_00e4c5b8(param_1,6);
                                puVar48 = puVar56 + 3;
                                *(char *)puVar48 = cVar8 + '\x01';
                                bVar9 = FUN_00e4c5b8(param_1,8);
                                pbVar53 = (byte *)((long)puVar56 + 0xd);
                                *pbVar53 = bVar9;
                                if (param_1[0x2c] <= (int)(uint)bVar9) goto LAB_00e46e00;
                                uVar22 = (ulong)*(byte *)puVar48;
                                if (*(byte *)puVar48 != 0) {
                                  uVar50 = 0;
                                  do {
                                    cVar8 = FUN_00e4c5b8(param_1,3);
                                    iVar21 = FUN_00e4c5b8(param_1,1);
                                    if (iVar21 != 0) {
                                      iVar21 = FUN_00e4c5b8(param_1,5);
                                    }
                                    local_468[uVar50] = cVar8 + (char)iVar21 * '\b';
                                    uVar50 = uVar50 + 1;
                                    uVar22 = (ulong)*(byte *)puVar48;
                                  } while (uVar50 < uVar22);
                                }
                                __s = (undefined4 *)FUN_00e4efe4(param_1,(int)uVar22 << 4);
                                puVar46 = (undefined8 *)(lVar23 + local_478 * 0x20 + 0x18);
                                *puVar46 = __s;
                                if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                                if (*(char *)puVar48 != '\0') {
                                  lVar28 = 0;
                                  uVar22 = 0;
                                  do {
                                    bVar9 = local_468[uVar22];
                                    lVar55 = 0;
                                    do {
                                      if ((bVar9 >> (ulong)((uint)lVar55 & 0x1f) & 1) == 0) {
                                        *(undefined2 *)((long)__s + lVar55 * 2 + lVar28) = 0xffff;
                                      }
                                      else {
                                        sVar13 = FUN_00e4c5b8(param_1,8);
                                        __s = (undefined4 *)*puVar46;
                                        *(short *)((long)__s + lVar55 * 2 + lVar28) = sVar13;
                                        if (param_1[0x2c] <= (int)sVar13) goto LAB_00e46e00;
                                      }
                                      lVar55 = lVar55 + 1;
                                    } while (lVar55 != 8);
                                    uVar22 = uVar22 + 1;
                                    lVar28 = lVar28 + 0x10;
                                  } while (uVar22 < *(byte *)puVar48);
                                }
                                __s = (undefined4 *)
                                      FUN_00e4efe4(param_1,*(int *)(*(long *)(param_1 + 0x2e) +
                                                                    (ulong)*pbVar53 * 0x848 + 4) <<
                                                           3);
                                plVar44 = (long *)(lVar23 + local_478 * 0x20 + 0x10);
                                *plVar44 = (long)__s;
                                if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                                memset(__s,0,(long)*(int *)(*(long *)(param_1 + 0x2e) +
                                                            (ulong)*pbVar53 * 0x848 + 4) << 3);
                                lVar23 = *(long *)(param_1 + 0x2e);
                                uVar22 = (ulong)*pbVar53;
                                if (0 < *(int *)(lVar23 + uVar22 * 0x848 + 4)) {
                                  uVar50 = 0;
                                  do {
                                    uVar17 = *(uint *)(lVar23 + uVar22 * 0x848);
                                    uVar22 = (ulong)uVar17;
                                    uVar24 = FUN_00e4efe4(param_1,uVar22);
                                    *(undefined8 *)(*plVar44 + uVar50 * 8) = uVar24;
                                    lVar23 = *(long *)(*plVar44 + uVar50 * 8);
                                    if (lVar23 == 0) goto LAB_00e488c4;
                                    if (0 < (int)uVar17) {
                                      bVar9 = *(byte *)puVar48;
                                      cVar8 = '\0';
                                      if (bVar9 != 0) {
                                        cVar8 = (char)((int)uVar50 / (int)(uint)bVar9);
                                      }
                                      *(byte *)(lVar23 + (ulong)(uVar17 - 1)) =
                                           (char)uVar50 - cVar8 * bVar9;
                                      if (uVar17 - 1 != 0) {
                                        uVar51 = uVar50 & 0xffffffff;
                                        do {
                                          bVar9 = *(byte *)puVar48;
                                          iVar21 = (int)uVar22;
                                          uVar22 = uVar22 - 1;
                                          uVar17 = 0;
                                          if (bVar9 != 0) {
                                            uVar17 = (int)uVar51 / (int)(uint)bVar9;
                                          }
                                          uVar51 = (ulong)uVar17;
                                          cVar8 = '\0';
                                          if (bVar9 != 0) {
                                            cVar8 = (char)((int)uVar17 / (int)(uint)bVar9);
                                          }
                                          *(byte *)(*(long *)(*plVar44 + uVar50 * 8) +
                                                   (ulong)(iVar21 - 2)) =
                                               (char)uVar17 - cVar8 * bVar9;
                                        } while (1 < (long)uVar22);
                                      }
                                    }
                                    lVar23 = *(long *)(param_1 + 0x2e);
                                    uVar22 = (ulong)*pbVar53;
                                    uVar50 = uVar50 + 1;
                                  } while ((long)uVar50 <
                                           (long)*(int *)(lVar23 + uVar22 * 0x848 + 4));
                                }
                                local_478 = local_478 + 1;
                              } while (local_478 < param_1[0x54]);
                            }
                            iVar21 = FUN_00e4c5b8(param_1,6);
                            param_1[0x78] = iVar21 + 1;
                            __s = (undefined4 *)FUN_00e4efe4(param_1,(iVar21 + 1) * 0x30);
                            *(undefined4 **)(param_1 + 0x7a) = __s;
                            if (__s != (undefined4 *)0x0) {
                              memset(__s,0,(long)param_1[0x78] * 0x30);
                              if (0 < param_1[0x78]) {
                                lVar23 = 0;
                                do {
                                  lVar28 = *(long *)(param_1 + 0x7a);
                                  iVar21 = FUN_00e4c5b8(param_1,0x10);
                                  if (iVar21 != 0) goto LAB_00e46e00;
                                  __s = (undefined4 *)FUN_00e4efe4(param_1,param_1[1] * 3);
                                  plVar44 = (long *)(lVar28 + lVar23 * 0x30 + 8);
                                  *plVar44 = (long)__s;
                                  if (__s == (undefined4 *)0x0) goto LAB_00e4877c;
                                  bVar9 = 1;
                                  iVar21 = FUN_00e4c5b8(param_1,1);
                                  if (iVar21 != 0) {
                                    cVar8 = FUN_00e4c5b8(param_1,4);
                                    bVar9 = cVar8 + 1;
                                  }
                                  puVar54 = (ushort *)(lVar28 + lVar23 * 0x30);
                                  pbVar53 = (byte *)(lVar28 + lVar23 * 0x30 + 0x10);
                                  *pbVar53 = bVar9;
                                  iVar21 = FUN_00e4c5b8(param_1,1);
                                  if (iVar21 == 0) {
                                    *puVar54 = 0;
                                  }
                                  else {
                                    sVar13 = FUN_00e4c5b8(param_1,8);
                                    uVar12 = sVar13 + 1;
                                    *puVar54 = uVar12;
                                    iVar21 = param_1[1];
                                    if (iVar21 < (int)(uint)uVar12) goto LAB_00e46e00;
                                    if (uVar12 != 0) {
                                      lVar55 = 0;
                                      uVar22 = 0;
                                      do {
                                        uVar19 = FUN_00e4c6f0(iVar21 + -1);
                                        uVar10 = FUN_00e4c5b8(param_1,uVar19);
                                        *(undefined *)(*plVar44 + lVar55) = uVar10;
                                        uVar19 = FUN_00e4c6f0(param_1[1] + -1);
                                        bVar11 = FUN_00e4c5b8(param_1,uVar19);
                                        lVar29 = *plVar44;
                                        ((byte *)(lVar29 + lVar55))[1] = bVar11;
                                        bVar9 = *(byte *)(lVar29 + lVar55);
                                        iVar21 = param_1[1];
                                        if (((iVar21 <= (int)(uint)bVar9) ||
                                            (iVar21 <= (int)(uint)bVar11)) || (bVar9 == bVar11))
                                        goto LAB_00e46e00;
                                        uVar22 = uVar22 + 1;
                                        lVar55 = lVar55 + 3;
                                      } while (uVar22 < *puVar54);
                                    }
                                  }
                                  iVar21 = FUN_00e4c5b8(param_1,2);
                                  if (iVar21 != 0) goto LAB_00e46e00;
                                  bVar9 = *pbVar53;
                                  uVar17 = param_1[1];
                                  uVar22 = (ulong)uVar17;
                                  if (bVar9 < 2) {
                                    if (0 < (int)uVar17) {
                                      lVar55 = *plVar44;
                                      if (uVar17 == 1) {
                                        uVar51 = 0;
                                      }
                                      else {
                                        uVar51 = uVar22 & 0xfffffffe;
                                        puVar31 = (undefined *)(lVar55 + 5);
                                        uVar50 = uVar51;
                                        do {
                                          uVar50 = uVar50 - 2;
                                          puVar31[-3] = 0;
                                          *puVar31 = 0;
                                          puVar31 = puVar31 + 6;
                                        } while (uVar50 != 0);
                                        if (uVar51 == uVar22) goto LAB_00e48570;
                                      }
                                      lVar29 = uVar22 - uVar51;
                                      puVar31 = (undefined *)(lVar55 + uVar51 * 3 + 2);
                                      do {
                                        lVar29 = lVar29 + -1;
                                        *puVar31 = 0;
                                        puVar31 = puVar31 + 3;
                                      } while (lVar29 != 0);
                                    }
LAB_00e48570:
                                    if (bVar9 != 0) goto LAB_00e48574;
                                  }
                                  else {
                                    if (0 < (int)uVar17) {
                                      lVar55 = 0;
                                      lVar29 = 2;
                                      do {
                                        bVar11 = FUN_00e4c5b8(param_1,4);
                                        *(byte *)(*plVar44 + lVar29) = bVar11;
                                        bVar9 = *pbVar53;
                                        if (bVar9 <= bVar11) goto LAB_00e46e00;
                                        lVar55 = lVar55 + 1;
                                        lVar29 = lVar29 + 3;
                                      } while (lVar55 < param_1[1]);
                                      goto LAB_00e48570;
                                    }
LAB_00e48574:
                                    uVar22 = 0;
                                    do {
                                      FUN_00e4c5b8(param_1,8);
                                      uVar10 = FUN_00e4c5b8(param_1,8);
                                      lVar55 = lVar28 + lVar23 * 0x30 + uVar22;
                                      *(undefined *)(lVar55 + 0x11) = uVar10;
                                      bVar9 = FUN_00e4c5b8(param_1,8);
                                      *(byte *)(lVar55 + 0x20) = bVar9;
                                      if ((param_1[0x30] <= (int)(uint)*(byte *)(lVar55 + 0x11)) ||
                                         (param_1[0x54] <= (int)(uint)bVar9)) goto LAB_00e46e00;
                                      uVar22 = uVar22 + 1;
                                    } while (uVar22 < *pbVar53);
                                  }
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 < param_1[0x78]);
                              }
                              uVar17 = FUN_00e4c5b8(param_1,6);
                              param_1[0x7c] = uVar17 + 1;
                              if (uVar17 < 0x7fffffff) {
                                lVar23 = 0;
                                piVar47 = param_1 + 0x7e;
                                do {
                                  uVar10 = FUN_00e4c5b8(param_1,1);
                                  *(undefined *)(piVar47 + -1) = uVar10;
                                  sVar13 = FUN_00e4c5b8(param_1,0x10);
                                  *(short *)((long)piVar47 + -2) = sVar13;
                                  sVar13 = FUN_00e4c5b8(param_1,0x10);
                                  *(short *)piVar47 = sVar13;
                                  bVar9 = FUN_00e4c5b8(param_1,8);
                                  *(byte *)((long)piVar47 + -3) = bVar9;
                                  if (((*(short *)((long)piVar47 + -2) != 0) ||
                                      (*(short *)piVar47 != 0)) ||
                                     (param_1[0x78] <= (int)(uint)bVar9)) goto LAB_00e46e00;
                                  lVar23 = lVar23 + 1;
                                  piVar47 = (int *)((long)piVar47 + 6);
                                } while (lVar23 < param_1[0x7c]);
                              }
                              do {
                                iVar21 = FUN_00e4c7e4(param_1);
                              } while (iVar21 != -1);
                              param_1[0x13e] = 0;
                              if (0 < param_1[1]) {
                                lVar23 = 0;
                                do {
                                  uVar24 = FUN_00e4efe4(param_1,param_1[0x2b] << 2);
                                  iVar21 = param_1[0x2b];
                                  *(undefined8 *)(param_1 + lVar23 * 2 + 0xde) = uVar24;
                                  uVar24 = FUN_00e4efe4(param_1,iVar21 << 1);
                                  *(undefined8 *)(param_1 + lVar23 * 2 + 0x11e) = uVar24;
                                  lVar28 = FUN_00e4efe4(param_1,iVar15);
                                  *(long *)(param_1 + lVar23 * 2 + 0x140) = lVar28;
                                  if (((*(void **)(param_1 + lVar23 * 2 + 0xde) == (void *)0x0) ||
                                      (*(long *)(param_1 + lVar23 * 2 + 0x11e) == 0)) ||
                                     (lVar28 == 0)) goto LAB_00e488c4;
                                  memset(*(void **)(param_1 + lVar23 * 2 + 0xde),0,
                                         (long)param_1[0x2b] << 2);
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 < param_1[1]);
                              }
                              __s = (undefined4 *)FUN_00e4f7e0(param_1,0,param_1[0x2a]);
                              if (((int)__s == 0) ||
                                 (__s = (undefined4 *)FUN_00e4f7e0(param_1,1,param_1[0x2b]),
                                 (int)__s == 0)) goto LAB_00e46d38;
                              iVar21 = param_1[0x2b];
                              uVar17 = param_1[0x54];
                              uVar22 = (ulong)uVar17;
                              iVar15 = iVar21;
                              if (iVar21 < 0) {
                                iVar15 = iVar21 + 1;
                              }
                              param_1[0x28] = param_1[0x2a];
                              param_1[0x29] = iVar21;
                              if ((int)uVar17 < 1) {
                                iVar15 = 8;
                              }
                              else {
                                uVar18 = iVar15 >> 1;
                                if (uVar17 == 1) {
                                  uVar51 = 0;
                                  uVar40 = 0;
LAB_00e48954:
                                  lVar23 = uVar22 - uVar51;
                                  puVar56 = (uint *)(*(long *)(param_1 + 0x76) + uVar51 * 0x20 + 4);
                                  uVar17 = uVar40;
                                  do {
                                    puVar52 = puVar56 + -1;
                                    uVar2 = *puVar56;
                                    puVar48 = puVar56 + 1;
                                    puVar56 = puVar56 + 8;
                                    uVar16 = *puVar52;
                                    if (uVar18 <= *puVar52) {
                                      uVar16 = uVar18;
                                    }
                                    if (uVar18 <= uVar2) {
                                      uVar2 = uVar18;
                                    }
                                    uVar40 = 0;
                                    if (*puVar48 != 0) {
                                      uVar40 = (uVar2 - uVar16) / *puVar48;
                                    }
                                    if ((int)uVar40 <= (int)uVar17) {
                                      uVar40 = uVar17;
                                    }
                                    lVar23 = lVar23 + -1;
                                    uVar17 = uVar40;
                                  } while (lVar23 != 0);
                                }
                                else {
                                  uVar51 = uVar22 & 0xfffffffe;
                                  puVar56 = (uint *)(*(long *)(param_1 + 0x76) + 0x20);
                                  uVar50 = uVar51;
                                  uVar17 = 0;
                                  uVar16 = 0;
                                  do {
                                    puVar48 = puVar56 + -6;
                                    uVar2 = puVar56[-8];
                                    if (uVar18 <= puVar56[-8]) {
                                      uVar2 = uVar18;
                                    }
                                    uVar27 = *puVar56;
                                    if (uVar18 <= *puVar56) {
                                      uVar27 = uVar18;
                                    }
                                    uVar4 = puVar56[-7];
                                    if (uVar18 <= puVar56[-7]) {
                                      uVar4 = uVar18;
                                    }
                                    puVar52 = puVar56 + 2;
                                    uVar5 = puVar56[1];
                                    if (uVar18 <= puVar56[1]) {
                                      uVar5 = uVar18;
                                    }
                                    puVar56 = puVar56 + 0x10;
                                    uVar40 = 0;
                                    if (*puVar48 != 0) {
                                      uVar40 = (uVar4 - uVar2) / *puVar48;
                                    }
                                    if ((int)uVar40 <= (int)uVar17) {
                                      uVar40 = uVar17;
                                    }
                                    uVar2 = 0;
                                    if (*puVar52 != 0) {
                                      uVar2 = (uVar5 - uVar27) / *puVar52;
                                    }
                                    if ((int)uVar2 <= (int)uVar16) {
                                      uVar2 = uVar16;
                                    }
                                    uVar50 = uVar50 - 2;
                                    uVar17 = uVar40;
                                    uVar16 = uVar2;
                                  } while (uVar50 != 0);
                                  if ((int)uVar40 <= (int)uVar2) {
                                    uVar40 = uVar2;
                                  }
                                  if (uVar51 != uVar22) goto LAB_00e48954;
                                }
                                iVar15 = uVar40 * 8 + 8;
                              }
                              uVar17 = iVar21 << 1;
                              if ((uint)(iVar21 << 1) <= (uint)(param_1[1] * iVar15)) {
                                uVar17 = param_1[1] * iVar15;
                              }
                              param_1[3] = uVar17;
                              if ((*(long *)(param_1 + 0x20) == 0) ||
                                 ((long)param_1[0x24] + (ulong)uVar17 + 0x770 <=
                                  (ulong)(uint)param_1[0x25])) {
                                if (param_1[0x1ba] == -1) {
                                  iVar15 = stb_vorbis_get_file_offset(param_1);
                                  __s = (undefined4 *)0x1;
                                  param_1[0x18] = iVar15;
                                }
                                else {
                                  __s = (undefined4 *)0x1;
                                  param_1[0x18] = 0;
                                }
                                goto LAB_00e46d38;
                              }
LAB_00e488c4:
                              iVar15 = 3;
                              goto LAB_00e46d30;
                            }
                          }
                        }
                      }
LAB_00e4877c:
                      iVar15 = 3;
                      goto LAB_00e46d34;
                    }
                  }
                }
                else if (param_1[0x27] != 0x15) {
                  __s = (undefined4 *)0x0;
                  goto LAB_00e46d38;
                }
              }
            }
          }
LAB_00e46e00:
          iVar15 = 0x14;
          goto LAB_00e46d30;
        }
      }
LAB_00e46d2c:
      iVar15 = 0x22;
      goto LAB_00e46d30;
    }
    iVar15 = 10;
  }
  else {
    if (((((((*(char *)(param_1 + 0x179) != '@') ||
            (iVar15 = FUN_00e4a398(param_1,&local_470,6), iVar15 == 0)) || ((char)local_470 != 'f'))
          || ((local_470._1_1_ != 'i' || (local_470._2_1_ != 's')))) ||
         ((local_470._3_1_ != 'h' || (((char)local_46c != 'e' || (local_46c._1_1_ != 'a')))))) ||
        (cVar8 = FUN_00e4c9c0(param_1), cVar8 != 'd')) ||
       (cVar8 = FUN_00e4c9c0(param_1), cVar8 != '\0')) goto LAB_00e46d2c;
    iVar15 = 0x26;
LAB_00e46d30:
    __s = (undefined4 *)0x0;
  }
LAB_00e46d34:
  param_1[0x27] = iVar15;
LAB_00e46d38:
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__s);
code_r0x00e478b4:
  *(short *)((long)__s + lVar55 * 2) = (short)iVar15;
  lVar55 = lVar55 + 1;
  uVar17 = *puVar52;
  if ((int)uVar17 <= lVar55) goto LAB_00e478c8;
  goto LAB_00e478a0;
}


