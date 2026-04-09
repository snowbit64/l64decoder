// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTextureArray
// Entry Point: 009630b0
// Size: 1760 bytes
// Signature: undefined __cdecl createTextureArray(char * * param_1, uint param_2, ORIGIN param_3, uint param_4, bool param_5, bool param_6, char * param_7, IRenderDevice * param_8, bool param_9, PIXEL_FORMAT param_10, bool * param_11)


/* TextureUtil::createTextureArray(char const**, unsigned int, ImageDesc::ORIGIN, unsigned int,
   bool, bool, char const*, IRenderDevice*, bool, PixelFormat::PIXEL_FORMAT, bool&) */

undefined8
TextureUtil::createTextureArray
          (char **param_1,uint param_2,ORIGIN param_3,uint param_4,bool param_5,bool param_6,
          char *param_7,IRenderDevice *param_8,bool param_9,PIXEL_FORMAT param_10,bool *param_11)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  PIXEL_FORMAT PVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  void **ppvVar8;
  void *pvVar9;
  ulong uVar10;
  void **ppvVar11;
  undefined8 uVar12;
  ulong __n;
  char **ppcVar13;
  uint uVar14;
  void **ppvVar15;
  void **local_278;
  BitmapImage local_240 [32];
  void *local_220;
  BitmapImage local_200 [4];
  int local_1fc;
  undefined8 local_1f8;
  int local_1ec;
  void *local_1e0;
  uint local_1d8;
  void **local_1c0;
  undefined uStack_1b8;
  char cStack_1b7;
  undefined2 uStack_1b6;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  char *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00963634 to 0096363f has its CatchHandler @ 009637b0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t create texture array with zero layers\n");
    uVar12 = 0;
    goto LAB_009631d8;
  }
  local_1e0 = (void *)0x0;
  local_200[0] = (BitmapImage)0x1;
                    /* try { // try from 00963110 to 0096311b has its CatchHandler @ 00963800 */
  uVar6 = loadImage(*param_1,local_200,param_3,param_4,false);
  if ((uVar6 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0096367c to 00963687 has its CatchHandler @ 0096379c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 009631b8 to 009631cb has its CatchHandler @ 00963800 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to create texture array. Texture \'%s\' couldn\'t be loaded.\n"
                       ,*param_1);
LAB_009631cc:
    uVar12 = 0;
  }
  else {
                    /* try { // try from 00963124 to 00963173 has its CatchHandler @ 009637f8 */
    PVar4 = PixelFormatUtil::getPixelFormat(local_200,true,*param_1);
    if (PVar4 == 0) goto LAB_009631cc;
    if (param_10 != 0) {
      PVar4 = param_10;
    }
    if (PVar4 - 0x2e < 4) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 009636c4 to 009636cf has its CatchHandler @ 00963798 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to create texture array (not supported by the PVRTC texture format). Filename: %s\n"
                         ,*param_1);
      goto LAB_009631cc;
    }
    *param_11 = local_1ec == 4;
                    /* try { // try from 0096322c to 00963233 has its CatchHandler @ 009637f0 */
    lVar7 = (**(code **)(*(long *)param_8 + 0x28))(param_8);
    uVar6 = (ulong)param_2;
    cVar1 = *(char *)(lVar7 + 0x5b);
                    /* try { // try from 00963248 to 0096324b has its CatchHandler @ 009637ec */
    ppvVar8 = (void **)operator_new__(uVar6 << 3);
    uVar3 = local_1d8;
    __n = (ulong)local_1d8;
    if (cVar1 == '\0') {
                    /* try { // try from 00963274 to 00963277 has its CatchHandler @ 009637e8 */
      ppvVar11 = (void **)operator_new__((ulong)(local_1d8 * param_2));
      local_278 = ppvVar11;
    }
    else {
      ppvVar11 = (void **)0x0;
      local_278 = ppvVar8;
    }
    uVar14 = 0;
    uVar10 = 0;
    do {
      if (ppvVar11 == (void **)0x0) {
                    /* try { // try from 009632b4 to 009632bb has its CatchHandler @ 00963804 */
        pvVar9 = operator_new__(__n);
      }
      else {
        pvVar9 = (void *)((long)ppvVar11 + (ulong)uVar14);
      }
      ppvVar8[uVar10] = pvVar9;
      uVar10 = uVar10 + 1;
      uVar14 = uVar14 + uVar3;
    } while (uVar6 != uVar10);
    memcpy(*ppvVar8,local_1e0,__n);
    if (1 < param_2) {
      ppcVar13 = param_1 + 1;
      lVar7 = uVar6 - 1;
      ppvVar15 = ppvVar8;
      do {
        ppvVar15 = ppvVar15 + 1;
        local_220 = (void *)0x0;
        local_240[0] = (BitmapImage)0x1;
                    /* try { // try from 00963324 to 00963337 has its CatchHandler @ 0096380c */
        uVar6 = loadImage(*ppcVar13,local_240,param_3,param_4,false);
        if ((uVar6 & 1) == 0) {
          if (!param_6) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar5 != 0)) {
                    /* try { // try from 0096370c to 00963717 has its CatchHandler @ 00963794 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 009635a4 to 009635b7 has its CatchHandler @ 009637e4 */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Error: Failed to create texture array. Texture \'%s\' couldn\'t be loaded.\n"
                               ,*ppcVar13);
LAB_009635e8:
            BitmapImage::~BitmapImage(local_240);
            uVar12 = 0;
            goto joined_r0x009635f4;
          }
          memset(*ppvVar15,0,(ulong)local_1d8);
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 00963414 to 0096341f has its CatchHandler @ 009637cc */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 009633ec to 009633ff has its CatchHandler @ 0096380c */
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Texture array layer \'%s\' couldn\'t be loaded.\n",*ppcVar13);
        }
        else {
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          local_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          local_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_118 = 0;
          local_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_138 = 0;
          local_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_158 = 0;
          local_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          local_180 = 0;
          uStack_17c = 0;
          uStack_168 = 0;
          local_170 = (char *)0x0;
          uStack_198 = 0;
          local_1a0 = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          local_190 = 0;
          local_18c = 0;
          uStack_1b8 = 0;
          cStack_1b7 = '\0';
          uStack_1b6 = 0;
          iStack_1b4 = 0;
          local_1c0 = (void **)0x0;
          uStack_1a8 = 0;
          local_1a4 = 0;
          uStack_1b0 = 0;
          local_1ac = 0;
                    /* try { // try from 00963368 to 0096337b has its CatchHandler @ 009637fc */
          uVar6 = BitmapImage::compareProperties(local_240,local_200,(char *)&local_1c0,0x140);
          if ((uVar6 & 1) == 0) {
            if (!param_6) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar5 != 0)) {
                    /* try { // try from 00963754 to 0096375f has its CatchHandler @ 00963790 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 009635d0 to 009635e7 has its CatchHandler @ 009637e0 */
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error: Failed to create texture array. Texture \'%s\' doesn\'t match the image properties of the other layers. %s\n"
                                 ,*ppcVar13,&local_1c0);
              goto LAB_009635e8;
            }
            memset(*ppvVar15,0,(ulong)local_1d8);
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar5 != 0)) {
                    /* try { // try from 00963460 to 0096346b has its CatchHandler @ 009637c8 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 009633a8 to 009633bf has its CatchHandler @ 009637fc */
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Texture array layer \'%s\' doesn\'t match the image properties of the other layers. %s\n"
                              ,*ppcVar13,&local_1c0);
          }
          else {
            memcpy(*ppvVar15,local_220,(ulong)local_1d8);
          }
        }
        BitmapImage::~BitmapImage(local_240);
        ppcVar13 = ppcVar13 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uStack_1b8 = 0;
    uStack_174 = 0;
    iStack_1b4 = -1;
    uStack_1b0 = 0xffffffff;
    local_18c = 1;
    uStack_188 = 1;
    local_190 = CONCAT31(local_190._1_3_,param_5) & 0xffffff01;
    uStack_17c = 0;
    uStack_178 = 0x3f800000;
    uStack_184 = 0;
    local_180 = 0;
    local_1ac = (undefined4)local_1f8;
    uStack_1a8 = (undefined4)((ulong)local_1f8 >> 0x20);
    local_1c0 = local_278;
    local_1a4 = 1;
    if (local_1fc == 0) {
      if (!param_9) {
        iStack_1b4 = 0;
      }
    }
    else {
      iStack_1b4 = local_1fc;
      uStack_1b8 = 1;
    }
    local_1a0 = CONCAT44(local_1d8,param_2);
    uStack_198 = CONCAT44(PVar4,3);
    cStack_1b7 = cVar1;
    local_170 = param_7;
                    /* try { // try from 00963550 to 0096356f has its CatchHandler @ 009637f4 */
    uVar12 = (**(code **)(*(long *)param_8 + 0x138))(param_8);
    uVar12 = (**(code **)(*(long *)param_8 + 0x100))(param_8,uVar12,&local_1c0);
joined_r0x009635f4:
    if (ppvVar11 == (void **)0x0) {
      if (param_2 < 2) {
        param_2 = 1;
      }
      uVar6 = (ulong)param_2;
      ppvVar11 = ppvVar8;
      do {
        if (*ppvVar11 != (void *)0x0) {
          operator_delete__(*ppvVar11);
        }
        ppvVar11 = ppvVar11 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    else {
      operator_delete__(ppvVar11);
    }
    operator_delete__(ppvVar8);
  }
  BitmapImage::~BitmapImage(local_200);
LAB_009631d8:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


