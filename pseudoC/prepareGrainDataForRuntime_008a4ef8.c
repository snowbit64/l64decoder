// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareGrainDataForRuntime
// Entry Point: 008a4ef8
// Size: 1312 bytes
// Signature: undefined prepareGrainDataForRuntime(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisRuntimeSettings::prepareGrainDataForRuntime() */

undefined4 GranularSynthesisRuntimeSettings::prepareGrainDataForRuntime(void)

{
  int iVar1;
  undefined8 *puVar2;
  Grain *pGVar3;
  Grain *pGVar4;
  long lVar5;
  float fVar6;
  int iVar7;
  long in_x0;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  undefined4 uVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  SortByRpm aSStack_40 [8];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  local_50 = (undefined8 *)operator_new(0x40);
  *(undefined *)((long)local_50 + 0x3c) = 0;
  uStack_58 = 0x3c;
  local_60 = 0x41;
  local_50[1] = 0x69736568746e7953;
  *local_50 = 0x72616c756e617247;
  local_50[3] = 0x73676e6974746553;
  local_50[2] = 0x656d69746e755273;
  iVar7 = *(int *)(in_x0 + 0x10);
  local_50[5] = 0x61446e6961724765;
  local_50[4] = 0x7261706572703a3a;
  *(undefined8 *)((long)local_50 + 0x34) = 0x656d69746e755272;
  *(undefined8 *)((long)local_50 + 0x2c) = 0x6f46617461446e69;
  if (iVar7 == 0) {
                    /* try { // try from 008a4f70 to 008a5097 has its CatchHandler @ 008a5438 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_60);
    iVar7 = *(int *)(in_x0 + 0x10);
  }
  if (iVar7 == 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_60);
  }
  if (*(Grain **)(in_x0 + 0x30) != *(Grain **)(in_x0 + 0x38)) {
    if (*(long *)(in_x0 + 0x18) == *(long *)(in_x0 + 0x20)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 008a534c to 008a5357 has its CatchHandler @ 008a5420 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar2 = (undefined8 *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        puVar2 = local_50;
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "%s: Error: No ramp data.\n",puVar2);
    }
    else {
      std::__ndk1::
      __sort<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
                (*(Grain **)(in_x0 + 0x30),*(Grain **)(in_x0 + 0x38),aSStack_40);
      pGVar3 = *(Grain **)(in_x0 + 0x30);
      pGVar4 = *(Grain **)(in_x0 + 0x38);
      lVar8 = (long)pGVar4 - (long)pGVar3 >> 4;
      if (lVar8 != 1) {
        lVar12 = 0;
        iVar7 = *(int *)(in_x0 + 0x10);
        do {
          if (iVar7 == 0) {
            if ((pGVar3[(lVar12 + 1) * 0x10 + 0xc] != (Grain)0x0) &&
               (pGVar3[lVar12 * 0x10 + 0xc] != (Grain)0x0)) {
              pfVar13 = (float *)(pGVar3 + (lVar12 + 1) * 0x10 + 8);
              fVar16 = *pfVar13;
              fVar18 = *(float *)(pGVar3 + lVar12 * 0x10 + 8) - fVar16;
              fVar6 = 1e-06;
              goto joined_r0x008a507c;
            }
          }
          else if (((iVar7 == 1) && (pGVar3[(lVar12 + 1) * 0x10 + 0xc] != (Grain)0x0)) &&
                  (pGVar3[lVar12 * 0x10 + 0xc] != (Grain)0x0)) {
            pfVar13 = (float *)(pGVar3 + (lVar12 + 1) * 0x10 + 8);
            fVar16 = *pfVar13;
            fVar18 = *(float *)(pGVar3 + lVar12 * 0x10 + 8) - fVar16;
            fVar6 = -1e-06;
joined_r0x008a507c:
            if (1e-06 < ABS(fVar18)) {
              *pfVar13 = fVar16 + fVar6;
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != lVar8 + -1);
      }
      std::__ndk1::
      __sort<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
                (pGVar3,pGVar4,(SortByWavIdx *)aSStack_40);
      lVar8 = *(long *)(in_x0 + 0x30);
      iVar7 = (int)((ulong)(*(long *)(in_x0 + 0x38) - lVar8) >> 4);
      if (1 < iVar7) {
        uVar15 = 0;
        pfVar13 = (float *)(lVar8 + 0x18);
        do {
          if ((*(char *)(pfVar13 + 1) != '\0') && (*(char *)(pfVar13 + -3) != '\0')) {
            fVar18 = pfVar13[-4];
            if (*(int *)(in_x0 + 0x10) == 1) {
              if (fVar18 < *pfVar13) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar7 != 0)) {
                    /* try { // try from 008a53dc to 008a53e7 has its CatchHandler @ 008a5418 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                puVar2 = (undefined8 *)((ulong)&local_60 | 1);
                if ((local_60 & 1) != 0) {
                  puVar2 = local_50;
                }
                    /* try { // try from 008a5320 to 008a5337 has its CatchHandler @ 008a5434 */
                LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   (double)fVar18,
                                   (double)*(float *)(*(long *)(in_x0 + 0x30) +
                                                      (uVar15 + 1 & 0xffffffff) * 0x10 + 8),
                                   "%s: Error: RPM incorrect order: grain %d rpm=%.2f < %d %.2f. numGrains=%u\n"
                                   ,puVar2,uVar15 & 0xffffffff,uVar15 + 1,
                                   (ulong)(*(long *)(in_x0 + 0x38) - *(long *)(in_x0 + 0x30)) >> 4);
                goto LAB_008a5240;
              }
            }
            else if ((*(int *)(in_x0 + 0x10) == 0) && (*pfVar13 < fVar18)) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar7 != 0)) {
                    /* try { // try from 008a5394 to 008a539f has its CatchHandler @ 008a541c */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              puVar2 = (undefined8 *)((ulong)&local_60 | 1);
              if ((local_60 & 1) != 0) {
                puVar2 = local_50;
              }
                    /* try { // try from 008a5154 to 008a5173 has its CatchHandler @ 008a5434 */
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 (double)fVar18,
                                 (double)*(float *)(*(long *)(in_x0 + 0x30) +
                                                    (uVar15 + 1 & 0xffffffff) * 0x10 + 8),
                                 "%s: Error: RPM incorrect order: grain %d rpm=%.2f > %d %.2f. numGrains=%u\n"
                                 ,puVar2,uVar15 & 0xffffffff,uVar15 + 1,
                                 (ulong)(*(long *)(in_x0 + 0x38) - *(long *)(in_x0 + 0x30)) >> 4);
              print();
              goto LAB_008a5240;
            }
          }
          uVar15 = uVar15 + 1;
          pfVar13 = pfVar13 + 4;
        } while (iVar7 - 1 != uVar15);
      }
      if (lVar8 == *(long *)(in_x0 + 0x38)) {
LAB_008a52a4:
        uVar14 = 1;
        goto LAB_008a5244;
      }
                    /* try { // try from 008a5180 to 008a523f has its CatchHandler @ 008a5438 */
      uVar15 = checkGrains();
      if ((uVar15 & 1) != 0) {
        lVar8 = *(long *)(in_x0 + 0x30);
        if (lVar8 == *(long *)(in_x0 + 0x38)) {
          uVar17 = 0;
          *(undefined4 *)(in_x0 + 0x48) = 0;
        }
        else {
          uVar15 = *(long *)(in_x0 + 0x38) - lVar8;
          *(undefined8 *)(in_x0 + 0x50) = 0x7fffffff;
          if (0 < (int)(uVar15 >> 4)) {
            iVar7 = 0;
            uVar9 = uVar15 >> 4 & 0xffffffff;
            piVar10 = (int *)(lVar8 + 4);
            iVar11 = 0x7fffffff;
            do {
              iVar1 = (*piVar10 - piVar10[-1]) + 1;
              if (iVar7 < iVar1) {
                *(int *)(in_x0 + 0x54) = iVar1;
                iVar7 = iVar1;
              }
              if (iVar1 < iVar11) {
                *(int *)(in_x0 + 0x50) = iVar1;
                iVar11 = iVar1;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          if (*(int *)(in_x0 + 0x10) == 1) {
            *(undefined4 *)(in_x0 + 0x48) = *(undefined4 *)(uVar15 + lVar8 + -8);
            uVar17 = *(undefined4 *)(lVar8 + 8);
          }
          else {
            if (*(int *)(in_x0 + 0x10) != 0) goto LAB_008a52a4;
            *(undefined4 *)(in_x0 + 0x48) = *(undefined4 *)(lVar8 + 8);
            uVar17 = *(undefined4 *)(uVar15 + lVar8 + -8);
          }
        }
        uVar14 = 1;
        *(undefined4 *)(in_x0 + 0x4c) = uVar17;
        goto LAB_008a5244;
      }
    }
  }
LAB_008a5240:
  uVar14 = 0;
LAB_008a5244:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}


