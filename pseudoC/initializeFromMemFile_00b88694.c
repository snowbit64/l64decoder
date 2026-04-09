// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeFromMemFile
// Entry Point: 00b88694
// Size: 2840 bytes
// Signature: undefined __thiscall initializeFromMemFile(ChunkedBitSquare * this, uchar * param_1, uint param_2)


/* ChunkedBitSquare::initializeFromMemFile(unsigned char const*, unsigned int) */

bool __thiscall
ChunkedBitSquare::initializeFromMemFile(ChunkedBitSquare *this,uchar *param_1,uint param_2)

{
  bool bVar1;
  byte *pbVar2;
  undefined (*pauVar3) [12];
  code ***pppcVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [12];
  bool bVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uchar *puVar19;
  ulong uVar20;
  char *pcVar21;
  void *pvVar22;
  undefined8 uVar23;
  code **ppcVar24;
  long lVar25;
  ushort *puVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  uint *puVar32;
  undefined4 *puVar33;
  uint *puVar34;
  undefined (*pauVar35) [12];
  long lVar36;
  ulong uVar37;
  uint uVar38;
  code ***pppcVar39;
  code **unaff_x25;
  uint *puVar40;
  ushort *__src;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  uint local_13c;
  ushort local_f0 [4];
  code **local_e8 [5];
  uint auStack_c0 [11];
  undefined4 local_94 [3];
  uint uStack_88;
  undefined8 local_84 [2];
  undefined auStack_74 [8];
  undefined8 uStack_6c;
  
  lVar8 = tpidr_el0;
  register0x00004040 = *(long *)(lVar8 + 0x28);
  if (*(int *)param_1 == 0x46444d21) {
    bVar14 = param_1[5];
    if (bVar14 != 5) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 00b890e0 to 00b890eb has its CatchHandler @ 00b891b4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar21 = "Error: GDM file has wrong chunk size (%u should be %u) \n";
      uVar20 = (ulong)(uint)bVar14;
      uVar27 = 5;
LAB_00b8880c:
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar21,uVar20,
                         uVar27);
      goto LAB_00b88814;
    }
    bVar14 = param_1[6];
    if (2 < bVar14) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 00b89128 to 00b89133 has its CatchHandler @ 00b891b0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar21 = "Error: GDM file has bad max bpp (%u should be %u) \n";
      uVar20 = (ulong)(uint)bVar14;
      uVar27 = 2;
      goto LAB_00b8880c;
    }
    bVar14 = param_1[7];
    puVar40 = (uint *)(this + 0x20);
    if (*puVar40 != (uint)bVar14) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 00b89170 to 00b8917b has its CatchHandler @ 00b891ac */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar27 = (ulong)*puVar40;
      uVar20 = (ulong)(uint)bVar14;
      pcVar21 = "Error: GDM file has wrong number of channels (%u should be %u)\n";
      goto LAB_00b8880c;
    }
    bVar5 = param_1[8];
    uVar20 = (ulong)bVar5;
    uVar17 = *(uint *)(this + 0x34);
    bVar6 = param_1[4];
    uVar38 = (uint)bVar5;
    if (uVar17 != bVar5) {
      if (bVar5 != 0) {
        uVar28 = (uint)bVar14;
        if (5 < uVar28) {
          uVar28 = 6;
        }
        if (uVar38 <= uVar28) {
          pcVar21 = (char *)LogManager::getInstance();
          LogManager::warnf(pcVar21,
                            "Warning: GDM file has wrong number of compression ranges (%u  should be %u). Converting format.\n"
                            ,(ulong)uVar38,(ulong)*(uint *)(this + 0x34));
          goto LAB_00b888ec;
        }
      }
      pcVar21 = (char *)LogManager::getInstance();
      LogManager::errorf(pcVar21,"Error: GDM file has invalid number of compression ranges (%u)\n",
                         (ulong)(uint)bVar5);
      goto LAB_00b88814;
    }
LAB_00b888ec:
    bVar13 = uVar17 != bVar5;
    __src = (ushort *)(param_1 + 9);
    if (1 < uVar38) {
      puVar32 = (uint *)(this + 0x40);
      unaff_x25 = (code **)&LogManager::getInstance()::singletonLogManager;
      uVar27 = 0;
      do {
        bVar14 = *(byte *)((long)__src + uVar27);
        *(uint *)((long)local_84 + uVar27 * 4) = (uint)bVar14;
        if (bVar13) {
LAB_00b88954:
          bVar13 = true;
        }
        else {
          if (*puVar32 != (uint)bVar14) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar18 != 0)) {
                    /* try { // try from 00b889a0 to 00b889a7 has its CatchHandler @ 00b891c0 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: GDM file has wrong compression channel %u (%u should be %u)\n"
                              ,uVar27 & 0xffffffff,(ulong)bVar14,(ulong)*puVar32);
            goto LAB_00b88954;
          }
          bVar13 = false;
        }
        uVar37 = uVar27 + 1;
        puVar32 = puVar32 + 2;
        uVar29 = uVar27 + 2;
        uVar27 = uVar37;
      } while (uVar29 < uVar20);
      __src = (ushort *)((long)__src + uVar37);
    }
    pvVar22 = *(void **)(this + 0x28);
    if (pvVar22 != (void *)0x0) {
      if (*(int *)(this + 0x34) * *(int *)(this + 0xc) == 0) {
LAB_00b88a18:
        operator_delete__(pvVar22);
      }
      else {
        uVar27 = 0;
        do {
          operator_delete(*(void **)((long)pvVar22 + uVar27 * 8));
          uVar27 = uVar27 + 1;
          pvVar22 = *(void **)(this + 0x28);
        } while (uVar27 < (uint)(*(int *)(this + 0x34) * *(int *)(this + 0xc)));
        if (pvVar22 != (void *)0x0) goto LAB_00b88a18;
      }
      *(undefined8 *)(this + 0x28) = 0;
    }
    uVar28 = 0x20 << (ulong)(bVar6 & 0x1f);
    uVar17 = 0xfffffff6;
    *(uint *)(this + 0x18) = uVar28;
    uVar7 = uVar28;
    uVar38 = 0xfffffffb;
    do {
      uVar15 = uVar38;
      uVar17 = uVar17 + 2;
      uVar38 = uVar15 + 1;
      bVar1 = 3 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar1);
    uVar37 = (ulong)*(uint *)(this + 0x34);
    iVar18 = 1 << (ulong)(uVar38 & 0x1f);
    uVar7 = 1 << (ulong)(uVar17 & 0x1f);
    uVar27 = (ulong)uVar7;
    *(uint *)(this + 0x1c) = uVar28 - 1;
    *(uint *)this = uVar38;
    *(int *)(this + 4) = iVar18;
    *(int *)(this + 8) = iVar18 + -1;
    *(uint *)(this + 0xc) = uVar7;
    *(uint *)(this + 0x10) = uVar7 - 1;
    *(uint *)(this + 0x14) = uVar15 + 6;
    pvVar22 = operator_new__((ulong)(*(uint *)(this + 0x34) << (ulong)(uVar17 & 0x1f)) << 3);
    *(void **)(this + 0x28) = pvVar22;
    memset(pvVar22,0,uVar27 * uVar37 * 8);
    *(undefined4 *)(this + 0x30) = 0;
    if (bVar13) {
      auStack_c0[2] = 0;
      if (1 < bVar5) {
        uVar27 = uVar20 - 1;
        if (uVar27 < 8) {
          uVar17 = 0;
          uVar29 = 1;
        }
        else {
          uVar31 = uVar27 & 0xfffffffffffffff8;
          uVar29 = uVar31 | 1;
          iVar18 = 0;
          iVar41 = 0;
          iVar42 = 0;
          uVar17 = 0;
          puVar33 = local_94;
          pauVar35 = (undefined (*) [12])auStack_74;
          uVar37 = uVar31;
          do {
            auVar46._12_4_ = uVar17;
            auVar46._8_4_ = iVar42;
            auVar46._4_4_ = iVar41;
            auVar46._0_4_ = iVar18;
            pauVar3 = (undefined (*) [12])(pauVar35[-2] + 8);
            iVar44 = (int)*(undefined8 *)(pauVar35[-1] + 4);
            iVar45 = (int)((ulong)*(undefined8 *)(pauVar35[-1] + 4) >> 0x20);
            iVar16 = (int)*(undefined8 *)*pauVar3;
            iVar43 = (int)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
            iVar42 = (int)*(undefined8 *)(*pauVar35 + 8);
            uVar17 = (uint)((ulong)*(undefined8 *)(*pauVar35 + 8) >> 0x20);
            auVar12 = *pauVar35;
            iVar18 = (int)*(undefined8 *)*pauVar35;
            iVar41 = (int)((ulong)*(undefined8 *)*pauVar35 >> 0x20);
            pauVar35 = (undefined (*) [12])(pauVar35[2] + 8);
            uVar37 = uVar37 - 8;
            auVar10._12_4_ = iVar45;
            auVar10._0_12_ = *pauVar3;
            auVar47 = NEON_ext(auVar46,auVar10,0xc,1);
            auVar49._12_4_ = uVar17;
            auVar49._0_12_ = auVar12;
            auVar11._12_4_ = iVar45;
            auVar11._0_12_ = *pauVar3;
            auVar49 = NEON_ext(auVar11,auVar49,0xc,1);
            auVar48._0_4_ = iVar16 - auVar47._0_4_;
            auVar48._4_4_ = iVar43 - auVar47._4_4_;
            auVar48._8_4_ = iVar44 - auVar47._8_4_;
            auVar48._12_4_ = iVar45 - auVar47._12_4_;
            auVar50._0_4_ = iVar18 - auVar49._0_4_;
            auVar50._4_4_ = iVar41 - auVar49._4_4_;
            auVar50._8_4_ = iVar42 - auVar49._8_4_;
            auVar50._12_4_ = uVar17 - auVar49._12_4_;
            auVar47._8_8_ = 0xffffffffffffffff;
            auVar47._0_8_ = 0xffffffffffffffff;
            auVar49 = NEON_ushl(auVar47,auVar48,4);
            auVar9._8_8_ = 0xffffffffffffffff;
            auVar9._0_8_ = 0xffffffffffffffff;
            auVar47 = NEON_ushl(auVar9,auVar50,4);
            puVar33[-8] = CONCAT13(~auVar49[3],
                                   CONCAT12(~auVar49[2],CONCAT11(~auVar49[1],~auVar49[0])));
            puVar33[-7] = iVar16;
            puVar33[-6] = CONCAT13(~auVar49[7],
                                   CONCAT12(~auVar49[6],CONCAT11(~auVar49[5],~auVar49[4])));
            puVar33[-5] = iVar43;
            puVar33[-4] = CONCAT13(~auVar49[11],
                                   CONCAT12(~auVar49[10],CONCAT11(~auVar49[9],~auVar49[8])));
            puVar33[-3] = iVar44;
            puVar33[-2] = CONCAT13(~auVar49[15],
                                   CONCAT12(~auVar49[14],CONCAT11(~auVar49[13],~auVar49[12])));
            puVar33[-1] = iVar45;
            *puVar33 = CONCAT13(~auVar47[3],CONCAT12(~auVar47[2],CONCAT11(~auVar47[1],~auVar47[0])))
            ;
            puVar33[1] = iVar18;
            puVar33[2] = CONCAT13(~auVar47[7],
                                  CONCAT12(~auVar47[6],CONCAT11(~auVar47[5],~auVar47[4])));
            puVar33[3] = iVar41;
            puVar33[4] = CONCAT13(~auVar47[11],
                                  CONCAT12(~auVar47[10],CONCAT11(~auVar47[9],~auVar47[8])));
            puVar33[5] = iVar42;
            puVar33[6] = CONCAT13(~auVar47[15],
                                  CONCAT12(~auVar47[14],CONCAT11(~auVar47[13],~auVar47[12])));
            puVar33[7] = uVar17;
            puVar33 = puVar33 + 0x10;
          } while (uVar37 != 0);
          if (uVar27 == uVar31) goto LAB_00b88c2c;
        }
        puVar32 = auStack_c0 + uVar29 * 2 + 2;
        lVar30 = uVar20 - uVar29;
        puVar34 = &uStack_88 + uVar29;
        do {
          uVar38 = *puVar34;
          lVar30 = lVar30 + -1;
          puVar32[-1] = ~(-1 << (ulong)(uVar38 - uVar17 & 0x1f));
          *puVar32 = uVar38;
          puVar32 = puVar32 + 2;
          puVar34 = puVar34 + 1;
          uVar17 = uVar38;
        } while (lVar30 != 0);
      }
LAB_00b88c2c:
      local_13c = 0;
      pppcVar4 = local_e8 + 1;
      auStack_c0[uVar20 * 2 + 1] = ~(-1 << (ulong)(*puVar40 - auStack_c0[uVar20 * 2] & 0x1f));
      lVar30 = uVar20 - 1;
      do {
        if (bVar5 == 0) {
          uVar17 = *(uint *)(this + 0x34);
        }
        else {
          puVar32 = auStack_c0 + 4;
          uVar27 = 0;
          do {
            uVar37 = uVar27 + 1;
            bVar14 = *(byte *)__src;
            puVar34 = puVar32;
            if (uVar20 <= uVar37) {
              puVar34 = puVar40;
            }
            pbVar2 = (byte *)((long)__src + 1);
            puVar26 = __src + 1;
            __src = puVar26 + *pbVar2;
            ppcVar24 = (code **)ChunkedBitSquareChunk::createChunk
                                          ((uint)bVar14,*puVar34 - puVar32[-2],puVar26,(uint)*pbVar2
                                          );
            local_e8[uVar27] = ppcVar24;
            if (bVar14 != 0) {
              memcpy((void *)((long)ppcVar24 + 0x1c),__src,(ulong)bVar14 * 0x80);
              __src = __src + (ulong)bVar14 * 0x40;
            }
            puVar32 = puVar32 + 2;
            uVar27 = uVar37;
          } while (uVar20 != uVar37);
          uVar17 = *(uint *)(this + 0x34);
          unaff_x25 = local_e8[0];
        }
        if (uVar17 != 0) {
          uVar37 = (ulong)uVar17;
          uVar27 = 0;
          do {
            uVar29 = uVar27 + 1;
            puVar32 = (uint *)(this + uVar29 * 8 + 0x38);
            if (uVar37 <= uVar29) {
              puVar32 = puVar40;
            }
            uVar17 = 0;
            uVar38 = *(uint *)(this + uVar27 * 8 + 0x38);
            uVar28 = *(uint *)((long)(this + uVar27 * 8 + 0x38) + 4);
            uVar7 = *puVar32;
            iVar18 = 0;
            do {
              iVar41 = 0;
              do {
                iVar42 = iVar41 + iVar18 * 0x20;
                uVar15 = (**unaff_x25)(unaff_x25,iVar42,0,auStack_c0[3]);
                lVar25 = lVar30;
                pppcVar39 = pppcVar4;
                puVar32 = auStack_c0 + 5;
                if (1 < bVar5) {
                  do {
                    iVar16 = (***pppcVar39)(*pppcVar39,iVar42,0,*puVar32);
                    lVar25 = lVar25 + -1;
                    uVar15 = iVar16 << (ulong)(puVar32[-1] & 0x1f) | uVar15;
                    pppcVar39 = pppcVar39 + 1;
                    puVar32 = puVar32 + 2;
                  } while (lVar25 != 0);
                }
                uVar15 = uVar15 >> (ulong)(uVar38 & 0x1f) & uVar28;
                if (uVar17 == 0) {
                  uVar37 = 0;
                }
                else {
                  uVar37 = (ulong)uVar17;
                  puVar26 = local_f0;
                  uVar31 = uVar37;
                  do {
                    if (uVar15 == *puVar26) goto LAB_00b88dd4;
                    puVar26 = puVar26 + 1;
                    uVar31 = uVar31 - 1;
                  } while (uVar31 != 0);
                  if (3 < uVar17) goto LAB_00b88ec0;
                }
                uVar17 = uVar17 + 1;
                local_f0[uVar37] = (ushort)uVar15;
LAB_00b88dd4:
                iVar41 = iVar41 + 1;
              } while (iVar41 != 0x20);
              if (4 < uVar17) {
LAB_00b88ec0:
                puVar26 = (ushort *)0x0;
                uVar17 = 0;
                uVar15 = uVar7 - uVar38;
                goto LAB_00b88ed0;
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 != 0x20);
            puVar26 = local_f0;
            if (uVar17 == 2) {
              uVar15 = 1;
              uVar17 = 2;
            }
            else if (uVar17 == 1) {
              uVar15 = 0;
              uVar17 = 1;
            }
            else {
              uVar15 = 2;
            }
LAB_00b88ed0:
            lVar25 = ChunkedBitSquareChunk::createChunk(uVar15,uVar7 - uVar38,puVar26,uVar17);
            iVar18 = 0;
            do {
              iVar41 = 0;
              do {
                iVar42 = iVar41 + iVar18 * 0x20;
                uVar17 = (**unaff_x25)(unaff_x25,iVar42,0,auStack_c0[3]);
                lVar36 = lVar30;
                puVar32 = auStack_c0 + 5;
                pppcVar39 = pppcVar4;
                if (1 < bVar5) {
                  do {
                    iVar16 = (***pppcVar39)(*pppcVar39,iVar42,0,*puVar32);
                    lVar36 = lVar36 + -1;
                    uVar17 = iVar16 << (ulong)(puVar32[-1] & 0x1f) | uVar17;
                    puVar32 = puVar32 + 2;
                    pppcVar39 = pppcVar39 + 1;
                  } while (lVar36 != 0);
                }
                (**(code **)(lVar25 + 8))
                          (lVar25,iVar42,0,uVar28,uVar17 >> (ulong)(uVar38 & 0x1f) & uVar28);
                iVar41 = iVar41 + 1;
              } while (iVar41 != 0x20);
              iVar18 = iVar18 + 1;
            } while (iVar18 != 0x20);
            uVar37 = (ulong)*(uint *)(this + 0x34);
            *(long *)(*(long *)(this + 0x28) +
                     (ulong)((int)uVar27 + *(uint *)(this + 0x34) * local_13c) * 8) = lVar25;
            uVar27 = uVar29;
          } while (uVar29 < uVar37);
        }
        pppcVar39 = pppcVar4;
        lVar25 = lVar30;
        if (bVar5 != 0) {
          while( true ) {
            if (unaff_x25 != (code **)0x0) {
              operator_delete(unaff_x25);
            }
            if (lVar25 == 0) break;
            unaff_x25 = *pppcVar39;
            pppcVar39 = pppcVar39 + 1;
            lVar25 = lVar25 + -1;
          }
        }
        local_13c = local_13c + 1;
      } while (local_13c < *(uint *)(this + 0xc));
    }
    else {
      uVar17 = 0;
      do {
        if ((int)uVar37 != 0) {
          puVar32 = (uint *)(this + 0x40);
          uVar20 = 0;
          do {
            uVar27 = uVar20 + 1;
            bVar14 = *(byte *)__src;
            puVar34 = puVar32;
            if (uVar37 <= uVar27) {
              puVar34 = puVar40;
            }
            pbVar2 = (byte *)((long)__src + 1);
            puVar26 = __src + 1;
            __src = puVar26 + *pbVar2;
            uVar23 = ChunkedBitSquareChunk::createChunk
                               ((uint)bVar14,*puVar34 - puVar32[-2],puVar26,(uint)*pbVar2);
            uVar38 = *(uint *)(this + 0x34);
            uVar20 = (ulong)((int)uVar20 + uVar17 * uVar38);
            *(undefined8 *)(*(long *)(this + 0x28) + uVar20 * 8) = uVar23;
            if (bVar14 != 0) {
              memcpy((void *)(*(long *)(*(long *)(this + 0x28) + uVar20 * 8) + 0x1c),__src,
                     (ulong)bVar14 * 0x80);
              __src = __src + (ulong)bVar14 * 0x40;
              uVar38 = *(uint *)(this + 0x34);
            }
            uVar37 = (ulong)uVar38;
            puVar32 = puVar32 + 2;
            uVar20 = uVar27;
          } while (uVar27 < uVar37);
          uVar27 = (ulong)*(uint *)(this + 0xc);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < (uint)uVar27);
    }
    uVar17 = (int)__src - (int)param_1;
    if (param_2 < uVar17) {
      pcVar21 = (char *)LogManager::getInstance();
      LogManager::errorf(pcVar21,"GDM file is corrupted (read %u bytes should be %u\n",(ulong)uVar17
                         ,(ulong)param_2);
    }
    else if (uVar17 < param_2) {
      pcVar21 = (char *)LogManager::getInstance();
      LogManager::warnf(pcVar21,"Warning: GDM file is too large\n");
    }
    bVar13 = uVar17 <= param_2;
  }
  else {
    if (*(int *)param_1 == 0x46444d5a) {
      uVar17 = *(uint *)(param_1 + 4);
      puVar19 = (uchar *)operator_new__((ulong)uVar17);
      uVar20 = ZLIBCompressionUtil::decompress(param_1 + 8,param_2 - 8,puVar19,uVar17);
      if ((uVar20 & 1) != 0) {
        bVar14 = initializeFromMemFile(this,puVar19,uVar17);
        operator_delete__(puVar19);
        if (*(long *)(lVar8 + 0x28) == stack0xffffffffffffff90) {
          return (bool)(bVar14 & 1);
        }
        goto LAB_00b891a8;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 00b89098 to 00b890a3 has its CatchHandler @ 00b891b8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to decompress GDMZ file\n");
      operator_delete__(puVar19);
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 00b89050 to 00b8905b has its CatchHandler @ 00b891bc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: GDM file has bad signature\n");
    }
LAB_00b88814:
    bVar13 = false;
  }
  if (*(long *)(lVar8 + 0x28) == stack0xffffffffffffff90) {
    return bVar13;
  }
LAB_00b891a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


