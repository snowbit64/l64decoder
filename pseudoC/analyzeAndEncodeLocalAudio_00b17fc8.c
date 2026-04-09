// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: analyzeAndEncodeLocalAudio
// Entry Point: 00b17fc8
// Size: 1708 bytes
// Signature: undefined __thiscall analyzeAndEncodeLocalAudio(VoiceChatManager * this, bool * param_1)


/* VoiceChatManager::analyzeAndEncodeLocalAudio(bool volatile&) */

void __thiscall VoiceChatManager::analyzeAndEncodeLocalAudio(VoiceChatManager *this,bool *param_1)

{
  char cVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  short *psVar13;
  VoiceChatManager VVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  void *pvVar18;
  ulong uVar19;
  ulong __n;
  float fVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar35;
  ushort uVar34;
  ushort uVar36;
  byte bVar37;
  byte bVar39;
  ushort uVar38;
  ushort uVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined auVar49 [16];
  undefined auVar50 [16];
  long *local_80;
  long *local_78;
  long *local_70;
  
  lVar3 = tpidr_el0;
  lVar15 = *(long *)(lVar3 + 0x28);
  Event::wait((Event *)(this + 0x42c),0xffffffff);
  if (*param_1 == false) {
    do {
      if (*(int *)(this + 0x18) == 0) {
        if (*(long **)(this + 0x58) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x58) + 8))();
          *(undefined8 *)(this + 0x58) = 0;
          *(undefined4 *)(this + 0x60) = 0xffffffff;
          Mutex::enterCriticalSection();
          this[0x2f] = (VoiceChatManager)0x0;
          Mutex::leaveCriticalSection();
        }
      }
      else {
        if (*(long **)(this + 0x50) == (long *)0x0) {
LAB_00b18140:
          plVar11 = *(long **)(this + 0x58);
          local_78 = (long *)0x0;
          local_80 = (long *)0x0;
          local_70 = (long *)0x0;
          if (plVar11 != (long *)0x0) {
            uVar9 = *(uint *)(this + 0x424);
            while( true ) {
                    /* try { // try from 00b1816c to 00b1816f has its CatchHandler @ 00b18688 */
              iVar8 = (**(code **)(*plVar11 + 0x10))
                                (plVar11,this + (ulong)uVar9 * 2 + 100,0x1e0 - uVar9);
              uVar9 = *(uint *)(this + 0x424);
              if (0 < iVar8) {
                uVar9 = uVar9 + iVar8;
                *(uint *)(this + 0x424) = uVar9;
              }
              if (uVar9 == 0x1e0) {
                    /* try { // try from 00b18190 to 00b181e7 has its CatchHandler @ 00b1868c */
                puVar12 = (undefined *)operator_new(0x28);
                sVar2 = *(short *)(this + 0x428);
                VVar14 = this[0x30];
                *puVar12 = 0;
                *(undefined2 *)(puVar12 + 4) = 0;
                *(undefined8 *)(puVar12 + 0x10) = 0;
                *(undefined8 *)(puVar12 + 0x18) = 0;
                *(void **)(puVar12 + 8) = (void *)0x0;
                *(short *)(puVar12 + 2) = sVar2;
                *(short *)(this + 0x428) = sVar2 + 1;
                *(VoiceChatManager *)(puVar12 + 0x20) = VVar14;
                if (VVar14 == (VoiceChatManager)0x0) {
                  *(undefined2 *)(puVar12 + 4) = 0x3c0;
                  pvVar18 = operator_new__(0x3c0);
                  *(void **)(puVar12 + 8) = pvVar18;
                  memcpy(pvVar18,this + 100,0x3c0);
                }
                else {
                  *(undefined2 *)(puVar12 + 4) = 0;
                  *(undefined8 *)(puVar12 + 8) = 0;
                }
                    /* try { // try from 00b181f8 to 00b1825f has its CatchHandler @ 00b1868c */
                uVar4 = Watch::getTimeSec();
                *(undefined8 *)(puVar12 + 0x18) = uVar4;
                if (local_78 == local_70) {
                  __n = (long)local_78 - (long)local_80;
                  uVar19 = ((long)__n >> 3) + 1;
                  if (uVar19 >> 0x3d != 0) {
                    /* try { // try from 00b1865c to 00b1866f has its CatchHandler @ 00b18684 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar19 <= (ulong)((long)__n >> 2)) {
                    uVar19 = (long)__n >> 2;
                  }
                  if (0x7ffffffffffffff7 < __n) {
                    uVar19 = 0x1fffffffffffffff;
                  }
                  if (uVar19 == 0) {
                    plVar11 = (long *)0x0;
                  }
                  else {
                    if (uVar19 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    plVar11 = (long *)operator_new(uVar19 << 3);
                  }
                  local_78 = plVar11 + ((long)__n >> 3) + 1;
                  plVar11[(long)__n >> 3] = (long)puVar12;
                  if (0 < (long)__n) {
                    memcpy(plVar11,local_80,__n);
                  }
                  local_70 = plVar11 + uVar19;
                  if (local_80 != (long *)0x0) {
                    operator_delete(local_80);
                  }
                }
                else {
                  *local_78 = (long)puVar12;
                  plVar11 = local_80;
                  local_78 = local_78 + 1;
                }
                local_80 = plVar11;
                uVar9 = 0;
                *(undefined4 *)(this + 0x424) = 0;
              }
              if (iVar8 < 1) break;
              plVar11 = *(long **)(this + 0x58);
            }
          }
        }
        else {
          (**(code **)(**(long **)(this + 0x50) + 0x198))();
          iVar8 = (**(code **)(**(long **)(this + 0x50) + 0x188))();
          if (*(int *)(this + 0x60) == iVar8) goto LAB_00b18140;
          if (*(long **)(this + 0x58) != (long *)0x0) {
            (**(code **)(**(long **)(this + 0x58) + 8))();
            *(undefined4 *)(this + 0x60) = 0xffffffff;
          }
          lVar10 = (**(code **)(**(long **)(this + 0x50) + 0x1a0))
                             (*(long **)(this + 0x50),iVar8,0,0x5622);
          *(long *)(this + 0x58) = lVar10;
          if (lVar10 != 0) {
            *(int *)(this + 0x60) = iVar8;
            VoiceAutoLevelDetector::reset();
            goto LAB_00b18140;
          }
          local_78 = (long *)0x0;
          local_80 = (long *)0x0;
        }
        iVar8 = *(int *)(this + 0x18);
        if (iVar8 == 4) {
          if ((long)local_78 - (long)local_80 == 0) {
            iVar8 = 4;
          }
          else {
            uVar19 = 0;
            do {
              pvVar18 = (void *)local_80[uVar19];
              if (pvVar18 != (void *)0x0) {
                if (*(void **)((long)pvVar18 + 8) != (void *)0x0) {
                  operator_delete__(*(void **)((long)pvVar18 + 8));
                  *(undefined8 *)((long)pvVar18 + 8) = 0;
                }
                operator_delete(pvVar18);
              }
              uVar19 = (ulong)((int)uVar19 + 1);
            } while (uVar19 < (ulong)((long)local_78 - (long)local_80 >> 3));
            iVar8 = *(int *)(this + 0x18);
          }
          iVar17 = -1;
          local_78 = local_80;
        }
        else {
          iVar17 = 0;
        }
        if (((iVar8 == 1) || (this[0x2e] != (VoiceChatManager)0x0)) ||
           (this[0x2c] == (VoiceChatManager)0x0)) {
          if ((long)local_78 - (long)local_80 != 0) {
            uVar19 = 0;
            do {
              pvVar18 = (void *)local_80[uVar19];
              if (pvVar18 != (void *)0x0) {
                if (*(void **)((long)pvVar18 + 8) != (void *)0x0) {
                  operator_delete__(*(void **)((long)pvVar18 + 8));
                  *(undefined8 *)((long)pvVar18 + 8) = 0;
                }
                operator_delete(pvVar18);
              }
              uVar19 = (ulong)((int)uVar19 + 1);
            } while (uVar19 < (ulong)((long)local_78 - (long)local_80 >> 3));
          }
          iVar17 = -1;
          bVar7 = true;
          local_78 = local_80;
LAB_00b185dc:
          cVar1 = *param_1;
        }
        else {
          bVar7 = local_80 == local_78;
          if (!bVar7) {
            lVar10 = *local_80;
            cVar1 = *param_1;
            plVar11 = local_80;
            while (cVar1 == '\0') {
              if (*(char *)(lVar10 + 0x20) == '\0') {
                if (*(int *)(this + 0x18) != 2) {
                  if (*(int *)(this + 0x18) == 3) {
                    if (0.0 <= *(float *)(this + 0x24)) {
                      lVar16 = 0;
                      do {
                        sVar2 = *(short *)((long)*(short **)(lVar10 + 8) + lVar16);
                        uVar9 = -(int)sVar2;
                        if (-1 < sVar2) {
                          uVar9 = (uint)sVar2;
                        }
                        if ((int)(*(float *)(this + 0x28) * 32767.0) < (int)(uVar9 & 0xffff))
                        goto LAB_00b18428;
                        lVar16 = lVar16 + 2;
                      } while (lVar16 != 0x3c0);
                    }
                    else {
                      uVar19 = VoiceActivityDetector::process
                                         ((VoiceActivityDetector *)(this + 0x1538),
                                          *(short **)(lVar10 + 8),0x1e0);
                      if ((uVar19 & 1) != 0) {
LAB_00b18428:
                        *(undefined4 *)(this + 0x1650) = 0;
                        goto LAB_00b18484;
                      }
                    }
                    iVar8 = *(int *)(this + 0x1650);
                    *(uint *)(this + 0x1650) = iVar8 + 1U;
                    if (iVar8 + 1U < *(uint *)(this + 0x164c)) goto LAB_00b18484;
                  }
                  goto LAB_00b183b8;
                }
LAB_00b18484:
                fVar20 = *(float *)(this + 0x1c);
                psVar13 = *(short **)(lVar10 + 8);
                if (0.0 <= fVar20) {
                  lVar16 = 0;
                  auVar6._8_8_ = 0x46fffe0046fffe00;
                  auVar6._0_8_ = 0x46fffe0046fffe00;
                  auVar5._8_8_ = 0x46fffe0046fffe00;
                  auVar5._0_8_ = 0x46fffe0046fffe00;
                  do {
                    auVar21 = *(undefined (*) [16])((long)psVar13 + lVar16);
                    auVar25._0_4_ = (int)auVar21._8_2_;
                    auVar25._4_4_ = (int)auVar21._10_2_;
                    auVar25._8_4_ = (int)auVar21._12_2_;
                    auVar25._12_4_ = (int)auVar21._14_2_;
                    auVar50._0_4_ = (int)auVar21._0_2_;
                    auVar50._4_4_ = (int)auVar21._2_2_;
                    auVar50._8_4_ = (int)auVar21._4_2_;
                    auVar50._12_4_ = (int)auVar21._6_2_;
                    auVar26 = NEON_scvtf(auVar25,4);
                    auVar21 = NEON_scvtf(auVar50,4);
                    auVar27._0_4_ = auVar26._0_4_ * fVar20;
                    auVar27._4_4_ = auVar26._4_4_ * fVar20;
                    auVar27._8_4_ = auVar26._8_4_ * fVar20;
                    auVar27._12_4_ = auVar26._12_4_ * fVar20;
                    auVar22._0_4_ = fVar20 * auVar21._0_4_;
                    auVar22._4_4_ = fVar20 * auVar21._4_4_;
                    auVar22._8_4_ = fVar20 * auVar21._8_4_;
                    auVar22._12_4_ = fVar20 * auVar21._12_4_;
                    auVar21._8_4_ = 0xc7000000;
                    auVar21._0_8_ = 0xc7000000c7000000;
                    auVar21._12_4_ = 0xc7000000;
                    auVar21 = NEON_fcmgt(auVar21,auVar27,4);
                    auVar26._8_4_ = 0xc7000000;
                    auVar26._0_8_ = 0xc7000000c7000000;
                    auVar26._12_4_ = 0xc7000000;
                    auVar26 = NEON_fcmgt(auVar26,auVar22,4);
                    auVar49 = NEON_fcmgt(auVar22,auVar5,4);
                    auVar50 = NEON_fcmgt(auVar27,auVar6,4);
                    bVar29 = auVar50[0] & ~auVar21[0];
                    bVar30 = auVar50[1] & ~auVar21[1];
                    bVar31 = auVar50[4] & ~auVar21[4];
                    bVar32 = auVar50[5] & ~auVar21[5];
                    bVar33 = auVar50[8] & ~auVar21[8];
                    bVar35 = auVar50[9] & ~auVar21[9];
                    bVar37 = auVar50[12] & ~auVar21[12];
                    bVar39 = auVar50[13] & ~auVar21[13];
                    bVar41 = auVar49[0] & ~auVar26[0];
                    bVar42 = auVar49[1] & ~auVar26[1];
                    bVar43 = auVar49[4] & ~auVar26[4];
                    bVar44 = auVar49[5] & ~auVar26[5];
                    bVar45 = auVar49[8] & ~auVar26[8];
                    bVar46 = auVar49[9] & ~auVar26[9];
                    bVar47 = auVar49[12] & ~auVar26[12];
                    bVar48 = auVar49[13] & ~auVar26[13];
                    auVar23._2_2_ = (short)(int)auVar22._4_4_;
                    auVar23._0_2_ = (short)(int)auVar22._0_4_;
                    auVar23._4_2_ = (short)(int)auVar22._8_4_;
                    auVar23._6_2_ = (short)(int)auVar22._12_4_;
                    auVar23._8_2_ = (short)(int)auVar27._0_4_;
                    auVar23._10_2_ = (short)(int)auVar27._4_4_;
                    auVar23._12_2_ = (short)(int)auVar27._8_4_;
                    auVar23._14_2_ = (short)(int)auVar27._12_4_;
                    auVar28[9] = ~auVar21[1] & ~auVar50[1];
                    auVar28[8] = ~auVar21[0] & ~auVar50[0];
                    auVar28[11] = ~auVar21[5] & ~auVar50[5];
                    auVar28[10] = ~auVar21[4] & ~auVar50[4];
                    auVar28[13] = ~auVar21[9] & ~auVar50[9];
                    auVar28[12] = ~auVar21[8] & ~auVar50[8];
                    auVar28[15] = ~auVar21[13] & ~auVar50[13];
                    auVar28[14] = ~auVar21[12] & ~auVar50[12];
                    auVar28[1] = ~auVar26[1] & ~auVar49[1];
                    auVar28[0] = ~auVar26[0] & ~auVar49[0];
                    auVar28[3] = ~auVar26[5] & ~auVar49[5];
                    auVar28[2] = ~auVar26[4] & ~auVar49[4];
                    auVar28[5] = ~auVar26[9] & ~auVar49[9];
                    auVar28[4] = ~auVar26[8] & ~auVar49[8];
                    auVar28[7] = ~auVar26[13] & ~auVar49[13];
                    auVar28[6] = ~auVar26[12] & ~auVar49[12];
                    auVar49._8_2_ = 0x8000;
                    auVar49._0_8_ = 0x8000800080008000;
                    auVar49._10_2_ = 0x8000;
                    auVar49._12_2_ = 0x8000;
                    auVar49._14_2_ = 0x8000;
                    auVar21 = NEON_bif(auVar23,auVar49,auVar28,1);
                    uVar19 = CONCAT26(CONCAT11(bVar48,bVar47),
                                      CONCAT24(CONCAT11(bVar46,bVar45),
                                               CONCAT22(CONCAT11(bVar44,bVar43),
                                                        CONCAT11(bVar42,bVar41)))) &
                             0x7fff7fff7fff7fff;
                    uVar34 = CONCAT11(bVar30,bVar29) & 0x7fff;
                    uVar36 = CONCAT11(bVar32,bVar31) & 0x7fff;
                    uVar38 = CONCAT11(bVar35,bVar33) & 0x7fff;
                    uVar40 = CONCAT11(bVar39,bVar37) & 0x7fff;
                    auVar24._0_8_ =
                         CONCAT17((byte)(uVar19 >> 0x38) | auVar21[7] & ~bVar48,
                                  CONCAT16((byte)(uVar19 >> 0x30) | auVar21[6] & ~bVar47,
                                           CONCAT15((byte)(uVar19 >> 0x28) | auVar21[5] & ~bVar46,
                                                    CONCAT14((byte)(uVar19 >> 0x20) |
                                                             auVar21[4] & ~bVar45,
                                                             CONCAT13((byte)(uVar19 >> 0x18) |
                                                                      auVar21[3] & ~bVar44,
                                                                      CONCAT12((byte)(uVar19 >> 0x10
                                                                                     ) | auVar21[2]
                                                                                         & ~bVar43,
                                                                               CONCAT11((byte)(
                                                  uVar19 >> 8) | auVar21[1] & ~bVar42,
                                                  (byte)uVar19 | auVar21[0] & ~bVar41)))))));
                    auVar24[8] = (byte)uVar34 | auVar21[8] & ~bVar29;
                    auVar24[9] = (byte)(uVar34 >> 8) | auVar21[9] & ~bVar30;
                    auVar24[10] = (byte)uVar36 | auVar21[10] & ~bVar31;
                    auVar24[11] = (byte)(uVar36 >> 8) | auVar21[11] & ~bVar32;
                    auVar24[12] = (byte)uVar38 | auVar21[12] & ~bVar33;
                    auVar24[13] = (byte)(uVar38 >> 8) | auVar21[13] & ~bVar35;
                    auVar24[14] = (byte)uVar40 | auVar21[14] & ~bVar37;
                    auVar24[15] = (byte)(uVar40 >> 8) | auVar21[15] & ~bVar39;
                    ((undefined8 *)((long)psVar13 + lVar16))[1] = auVar24._8_8_;
                    *(undefined8 *)((long)psVar13 + lVar16) = auVar24._0_8_;
                    lVar16 = lVar16 + 0x10;
                  } while (lVar16 != 0x3c0);
                }
                else {
                  VoiceAutoLevelDetector::process
                            ((VoiceAutoLevelDetector *)(this + 0x160c),psVar13,0x1e0);
                  psVar13 = *(short **)(lVar10 + 8);
                }
                    /* try { // try from 00b18538 to 00b18567 has its CatchHandler @ 00b18678 */
                uVar9 = OpusVoiceCodec::encode
                                  (*(short **)(this + 0x4d0),(uint)psVar13,(uchar *)0x1e0,
                                   (uint)(this + 0x4d8));
                if (*(void **)(lVar10 + 8) != (void *)0x0) {
                  operator_delete__(*(void **)(lVar10 + 8));
                }
                if ((int)uVar9 < 0) {
                  iVar17 = 1;
                  goto LAB_00b183d0;
                }
                pvVar18 = operator_new__((ulong)uVar9);
                *(void **)(lVar10 + 8) = pvVar18;
                *(short *)(lVar10 + 4) = (short)uVar9;
                memcpy(pvVar18,this + 0x4d8,(ulong)uVar9);
                iVar17 = 1;
              }
              else {
LAB_00b183b8:
                    /* try { // try from 00b183bc to 00b1849f has its CatchHandler @ 00b1867c */
                OpusVoiceCodec::resetEncoder();
                if (*(void **)(lVar10 + 8) != (void *)0x0) {
                  operator_delete__(*(void **)(lVar10 + 8));
                }
                iVar17 = -1;
LAB_00b183d0:
                *(undefined8 *)(lVar10 + 8) = 0;
                *(undefined2 *)(lVar10 + 4) = 0;
              }
              plVar11 = plVar11 + 1;
              if (plVar11 == local_78) break;
              lVar10 = *plVar11;
              cVar1 = *param_1;
            }
            goto LAB_00b185dc;
          }
          bVar7 = true;
          cVar1 = *param_1;
        }
        if (cVar1 != '\0') {
          if (local_80 != (long *)0x0) {
            operator_delete(local_80);
          }
          break;
        }
                    /* try { // try from 00b185e4 to 00b185eb has its CatchHandler @ 00b18680 */
        Mutex::enterCriticalSection();
        if (!bVar7) {
                    /* try { // try from 00b185f4 to 00b18603 has its CatchHandler @ 00b18674 */
          std::__ndk1::
          vector<VoiceChatManager::AudioData*,std::__ndk1::allocator<VoiceChatManager::AudioData*>>
          ::insert<std::__ndk1::__wrap_iter<VoiceChatManager::AudioData**>>
                    ((vector<VoiceChatManager::AudioData*,std::__ndk1::allocator<VoiceChatManager::AudioData*>>
                      *)(this + 0x14d0),(__wrap_iter)*(undefined8 *)(this + 0x14d8),
                     (__wrap_iter)local_80,(__wrap_iter)local_78);
        }
        if (iVar17 < 1) {
          if (iVar17 < 0) {
            VVar14 = (VoiceChatManager)0x0;
            goto LAB_00b18610;
          }
        }
        else {
          VVar14 = (VoiceChatManager)0x1;
LAB_00b18610:
          this[0x2f] = VVar14;
        }
                    /* try { // try from 00b1861c to 00b18623 has its CatchHandler @ 00b18680 */
        Mutex::leaveCriticalSection();
        if (local_80 != (long *)0x0) {
          operator_delete(local_80);
        }
      }
      Event::wait((Event *)(this + 0x42c),0xffffffff);
    } while (*param_1 == false);
  }
  if (*(long *)(lVar3 + 0x28) == lVar15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


