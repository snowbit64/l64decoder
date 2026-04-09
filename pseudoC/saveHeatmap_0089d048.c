// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveHeatmap
// Entry Point: 0089d048
// Size: 1396 bytes
// Signature: undefined __cdecl saveHeatmap(char * param_1, uint param_2, uint param_3, uint param_4, float * param_5, char * param_6)


/* HeatmapUtil::saveHeatmap(char const*, unsigned int, unsigned int, unsigned int, float const*,
   char const*) */

uint HeatmapUtil::saveHeatmap
               (char *param_1,uint param_2,uint param_3,uint param_4,float *param_5,char *param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uchar *puVar9;
  float *pfVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  uint local_118;
  uint uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  uchar *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_74;
  undefined2 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (param_4 == 3) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_c0 = 0;
    local_80 = 0;
    local_b8 = 0x100000001;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_98 = (uchar *)0x0;
    uVar8 = ImageLoadUtil::loadImage(param_6,0,(ImageDesc *)&local_c0,0);
    if ((uVar8 & 1) != 0) {
      if (local_b0._4_4_ != 3) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 0089d4a8 to 0089d4b3 has its CatchHandler @ 0089d5c8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar11 = "Error: Expected background image data on 3 channels (RGB).\n";
        goto LAB_0089d140;
      }
      if ((int)local_80 == 3) {
        puVar9 = local_98;
        if (local_98 != (uchar *)0x0) goto LAB_0089d1d4;
LAB_0089d3cc:
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 0089d4f0 to 0089d4fb has its CatchHandler @ 0089d5c4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: The background image \'%s\' format not supported.\n",param_6);
        uVar6 = 0;
      }
      else {
        if ((int)local_80 != 7) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar7 != 0)) {
                    /* try { // try from 0089d538 to 0089d543 has its CatchHandler @ 0089d5c0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: The background image \'%s\' format not supported.\n",param_6);
          goto LAB_0089d3cc;
        }
        uVar6 = (uint)local_c0;
        uVar14 = local_c0._4_4_;
        puVar9 = (uchar *)operator_new__((ulong)((uint)local_c0 * local_c0._4_4_ * 3));
        DXTUtil::decodeBC1(local_98,uVar6,uVar14,puVar9);
LAB_0089d1d4:
        uVar6 = (uint)local_c0;
        uVar14 = local_c0._4_4_;
        pfVar10 = (float *)operator_new__((ulong)((uint)local_c0 * local_c0._4_4_ * 3) << 2);
        ImageScale::scaleImageCubic(param_5,param_2,param_3,3,pfVar10,0,uVar6,uVar14,0);
        uVar6 = (uint)local_c0;
        uVar14 = local_c0._4_4_;
        local_108 = 0;
        uStack_fc = 0;
        local_f8 = 0;
        local_110 = 0x100000001;
        local_d0 = 0;
        iStack_104 = 3;
        uStack_100 = 1;
        local_cc = 0;
        local_c8 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_118 = (uint)local_c0;
        uStack_114 = local_c0._4_4_;
        local_d8 = 3;
        local_f0 = operator_new__((ulong)((uint)local_c0 * local_c0._4_4_ * 3));
        if (uVar14 != 0) {
          uVar12 = 0;
          iVar7 = -1;
          do {
            if (uVar6 != 0) {
              uVar13 = 0;
              do {
                iVar2 = uVar13 + uVar12 * uVar6;
                uVar4 = local_b0._4_4_ * iVar2;
                iVar3 = uVar13 + uVar6 * (iVar7 + uVar14);
                uVar13 = uVar13 + 1;
                uVar6 = iVar3 * 3;
                uVar15 = NEON_ucvtf((uint)puVar9[uVar4]);
                uVar17 = NEON_ucvtf((uint)puVar9[uVar4 + 1]);
                uVar19 = NEON_ucvtf((uint)puVar9[uVar4 + 2]);
                fVar16 = (float)NEON_fmadd(pfVar10[uVar6],0x437f0000,uVar15);
                fVar18 = (float)NEON_fmadd(pfVar10[uVar6 + 1],0x437f0000,uVar17);
                fVar20 = (float)NEON_fmadd(pfVar10[uVar6 + 2],0x437f0000,uVar19);
                puVar1 = (undefined *)((long)local_f0 + (ulong)(uint)(iStack_104 * iVar2));
                *puVar1 = (char)(int)(fVar16 * 0.5);
                puVar1[1] = (char)(int)(fVar18 * 0.5);
                puVar1[2] = (char)(int)(fVar20 * 0.5);
                uVar6 = (uint)local_c0;
                uVar14 = local_c0._4_4_;
              } while (uVar13 < (uint)local_c0);
            }
            uVar12 = uVar12 + 1;
            iVar7 = iVar7 + -1;
          } while (uVar12 < uVar14);
        }
        if (puVar9 != local_98) {
          operator_delete__(puVar9);
        }
        operator_delete__(pfVar10);
        uVar6 = ImageSaveUtil::saveImage(param_1,(ImageDesc *)&local_118,true);
        if ((uVar6 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar7 != 0)) {
                    /* try { // try from 0089d580 to 0089d58b has its CatchHandler @ 0089d5bc */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Failed to save image \'%s\'.\n",param_1);
        }
        if (local_f0 != (void *)0x0) {
          operator_delete__(local_f0);
        }
      }
      if (local_98 != (uchar *)0x0) {
        operator_delete__(local_98);
      }
      goto LAB_0089d178;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 0089d460 to 0089d46b has its CatchHandler @ 0089d5cc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to load image \'%s\'.\n",param_6);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 0089d418 to 0089d423 has its CatchHandler @ 0089d5d0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar11 = "Error: Expected input data on 3 channels (RGB).\n";
LAB_0089d140:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11);
  }
  uVar6 = 0;
LAB_0089d178:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


