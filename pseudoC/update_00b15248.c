// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b15248
// Size: 1208 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VoiceChatManager::update() */

void VoiceChatManager::update(void)

{
  VoiceChatManager **ppVVar1;
  long lVar2;
  VoiceChatManager **ppVVar3;
  ulong uVar4;
  PLATFORM_ID PVar5;
  char *pcVar6;
  byte bVar7;
  VoiceChatManager VVar8;
  bool bVar9;
  int iVar10;
  VoiceChatManager *in_x0;
  void *pvVar11;
  long *plVar12;
  byte **ppbVar13;
  undefined8 *puVar14;
  long lVar15;
  VoiceChatManager **ppVVar16;
  long *plVar17;
  long *plVar18;
  VoiceChatManager **ppVVar19;
  VoiceChatManager **ppVVar20;
  void *pvVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  float fVar26;
  
  if (*(int *)(in_x0 + 0x18) != 0) {
    Event::post();
  }
  if (*(long **)(in_x0 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x50) + 0x160))();
  }
  discardOutdatedData();
  lVar23 = *(long *)(in_x0 + 0x1498);
  if (*(long *)(in_x0 + 0x1490) != lVar23) {
    lVar15 = *(long *)(in_x0 + 0x1490) + 0x48;
    do {
      if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00b1537c to 00b15383 has its CatchHandler @ 00b15700 */
        UserBlockManager::UserBlockManager
                  ((UserBlockManager *)UserBlockManager::getInstance()::instance);
        __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&UserBlockManager::getInstance()::instance);
      }
      pcVar6 = (char *)(lVar15 + -0x47);
      if ((*(byte *)(lVar15 + -0x48) & 1) != 0) {
        pcVar6 = *(char **)(lVar15 + -0x38);
      }
      PVar5 = (int)lVar15 - 0x2f;
      if ((*(byte *)(lVar15 + -0x30) & 1) != 0) {
        PVar5 = (PLATFORM_ID)*(undefined8 *)(lVar15 + -0x20);
      }
      iVar10 = UserBlockManager::getAllowVoiceCommunicationWithUser
                         (UserBlockManager::getInstance()::instance,pcVar6,PVar5);
      if ((bool)*(char *)(lVar15 + 0x25) != (iVar10 != 1)) {
        plVar12 = *(long **)(lVar15 + 0x18);
        *(bool *)(lVar15 + 0x25) = iVar10 != 1;
        if (plVar12 != (long *)0x0) {
          fVar26 = 0.0;
          if (iVar10 == 1) {
            fVar26 = *(float *)(lVar15 + 0x20) * *(float *)(in_x0 + 0x20);
          }
          (**(code **)(*plVar12 + 0x50))(fVar26,plVar12);
        }
      }
      lVar2 = lVar15 + 0x28;
      lVar15 = lVar15 + 0x70;
    } while (lVar2 != lVar23);
  }
  if (in_x0[0x30] != (VoiceChatManager)0x0) {
    synchronizeUnavailability(in_x0,false);
    in_x0[0x30] = (VoiceChatManager)0x0;
  }
  Mutex::enterCriticalSection();
  if (in_x0[0x2d] == (VoiceChatManager)0x0) {
    lVar23 = *(long *)(in_x0 + 0x14d8);
    if (lVar23 != *(long *)(in_x0 + 0x14d0)) {
      uVar24 = 0;
      lVar23 = *(long *)(in_x0 + 0x14d0);
      do {
        puVar14 = *(undefined8 **)(in_x0 + 0x14f0);
        if (puVar14 == *(undefined8 **)(in_x0 + 0x14f8)) {
          pvVar21 = *(void **)(in_x0 + 0x14e8);
          uVar22 = (long)puVar14 - (long)pvVar21;
          uVar4 = ((long)uVar22 >> 3) + 1;
          if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar4 <= (ulong)((long)uVar22 >> 2)) {
            uVar4 = (long)uVar22 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar22) {
            uVar4 = 0x1fffffffffffffff;
          }
          if (uVar4 == 0) {
            pvVar11 = (void *)0x0;
          }
          else {
            if (uVar4 >> 0x3d != 0) goto LAB_00b156ec;
            pvVar11 = operator_new(uVar4 << 3);
          }
          puVar14 = (undefined8 *)((long)pvVar11 + ((long)uVar22 >> 3) * 8);
          *puVar14 = *(undefined8 *)(lVar23 + uVar24 * 8);
          if (0 < (long)uVar22) {
            memcpy(pvVar11,pvVar21,uVar22);
          }
          *(void **)(in_x0 + 0x14e8) = pvVar11;
          *(undefined8 **)(in_x0 + 0x14f0) = puVar14 + 1;
          *(void **)(in_x0 + 0x14f8) = (void *)((long)pvVar11 + uVar4 * 8);
          if (pvVar21 != (void *)0x0) {
            operator_delete(pvVar21);
          }
        }
        else {
          *puVar14 = *(undefined8 *)(lVar23 + uVar24 * 8);
          *(undefined8 **)(in_x0 + 0x14f0) = puVar14 + 1;
        }
        uVar24 = (ulong)((int)uVar24 + 1);
        lVar23 = *(long *)(in_x0 + 0x14d0);
      } while (uVar24 < (ulong)(*(long *)(in_x0 + 0x14d8) - lVar23 >> 3));
    }
  }
  else {
    lVar23 = *(long *)(in_x0 + 0x14d8);
    if (lVar23 != *(long *)(in_x0 + 0x14d0)) {
      uVar24 = 0;
      ppVVar3 = (VoiceChatManager **)(in_x0 + 0x40);
      lVar23 = *(long *)(in_x0 + 0x14d0);
      do {
        pbVar25 = *(byte **)(lVar23 + uVar24 * 8);
        lVar23 = *(long *)(in_x0 + 0x1490);
        lVar15 = *(long *)(in_x0 + 0x1498);
        bVar7 = *pbVar25;
        bVar9 = lVar23 != lVar15;
        if (bVar7 == 0) {
          if (bVar9) {
            ppVVar16 = (VoiceChatManager **)*ppVVar3;
            do {
              VVar8 = *(VoiceChatManager *)(lVar23 + 0x6c);
              ppVVar19 = ppVVar3;
              ppVVar20 = ppVVar16;
              if (ppVVar16 == (VoiceChatManager **)0x0) {
LAB_00b15558:
                *(ulong *)(pbVar25 + 0x10) =
                     *(ulong *)(pbVar25 + 0x10) | 1L << ((ulong)(byte)VVar8 & 0x3f);
              }
              else {
                do {
                  bVar9 = (byte)*(VoiceChatManager *)((long)ppVVar20 + 0x19) < (byte)VVar8;
                  if (!bVar9) {
                    ppVVar19 = ppVVar20;
                  }
                  ppVVar1 = ppVVar20 + bVar9;
                  ppVVar20 = (VoiceChatManager **)*ppVVar1;
                } while ((VoiceChatManager **)*ppVVar1 != (VoiceChatManager **)0x0);
                if ((ppVVar19 == ppVVar3) ||
                   ((byte)VVar8 < (byte)*(VoiceChatManager *)((long)ppVVar19 + 0x19)))
                goto LAB_00b15558;
              }
              if (*(char *)(lVar23 + 0x6d) != '\0') {
                *(ulong *)(pbVar25 + 0x10) =
                     *(ulong *)(pbVar25 + 0x10) | 1L << ((ulong)(byte)VVar8 & 0x3f);
              }
              lVar23 = lVar23 + 0x70;
            } while (lVar23 != lVar15);
          }
        }
        else {
          while (bVar9) {
            plVar17 = (long *)(lVar23 + 0x38);
            plVar18 = (long *)*plVar17;
            plVar12 = plVar17;
            if (plVar18 == (long *)0x0) {
LAB_00b15450:
              *(ulong *)(pbVar25 + 0x10) =
                   1L << ((ulong)*(byte *)(lVar23 + 0x6c) & 0x3f) | *(ulong *)(pbVar25 + 0x10);
            }
            else {
              do {
                bVar9 = *(byte *)((long)plVar18 + 0x19) < bVar7;
                if (!bVar9) {
                  plVar12 = plVar18;
                }
                plVar18 = (long *)plVar18[bVar9];
              } while (plVar18 != (long *)0x0);
              if ((plVar12 == plVar17) || (bVar7 < *(byte *)((long)plVar12 + 0x19)))
              goto LAB_00b15450;
            }
            lVar23 = lVar23 + 0x70;
            bVar9 = lVar23 != lVar15;
          }
        }
        ppbVar13 = *(byte ***)(in_x0 + 0x14f0);
        if (ppbVar13 == *(byte ***)(in_x0 + 0x14f8)) {
          pvVar21 = *(void **)(in_x0 + 0x14e8);
          uVar22 = (long)ppbVar13 - (long)pvVar21;
          uVar4 = ((long)uVar22 >> 3) + 1;
          if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar4 <= (ulong)((long)uVar22 >> 2)) {
            uVar4 = (long)uVar22 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar22) {
            uVar4 = 0x1fffffffffffffff;
          }
          if (uVar4 == 0) {
            pvVar11 = (void *)0x0;
          }
          else {
            if (uVar4 >> 0x3d != 0) {
LAB_00b156ec:
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            pvVar11 = operator_new(uVar4 << 3);
          }
          ppbVar13 = (byte **)((long)pvVar11 + ((long)uVar22 >> 3) * 8);
          *ppbVar13 = pbVar25;
          if (0 < (long)uVar22) {
            memcpy(pvVar11,pvVar21,uVar22);
          }
          *(void **)(in_x0 + 0x14e8) = pvVar11;
          *(byte ***)(in_x0 + 0x14f0) = ppbVar13 + 1;
          *(void **)(in_x0 + 0x14f8) = (void *)((long)pvVar11 + uVar4 * 8);
          if (pvVar21 != (void *)0x0) {
            operator_delete(pvVar21);
          }
        }
        else {
          *ppbVar13 = pbVar25;
          *(byte ***)(in_x0 + 0x14f0) = ppbVar13 + 1;
        }
        uVar24 = (ulong)((int)uVar24 + 1);
        lVar23 = *(long *)(in_x0 + 0x14d0);
      } while (uVar24 < (ulong)(*(long *)(in_x0 + 0x14d8) - lVar23 >> 3));
    }
  }
  *(long *)(in_x0 + 0x14d8) = lVar23;
  Mutex::leaveCriticalSection();
  return;
}


