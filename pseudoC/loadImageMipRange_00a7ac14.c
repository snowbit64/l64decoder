// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageMipRange
// Entry Point: 00a7ac14
// Size: 756 bytes
// Signature: undefined __cdecl loadImageMipRange(char * param_1, uint param_2, uint param_3, ImageStreamingDesc * param_4, uchar * * param_5, uint * param_6, uint * param_7)


/* DDSUtil::loadImageMipRange(char const*, unsigned int, unsigned int, ImageStreamingDesc const&,
   unsigned char*&, unsigned int&, unsigned int&) */

uint DDSUtil::loadImageMipRange
               (char *param_1,uint param_2,uint param_3,ImageStreamingDesc *param_4,uchar **param_5,
               uint *param_6,uint *param_7)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uchar *puVar8;
  undefined8 uVar9;
  File *local_d0 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_74;
  undefined2 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FileReader::FileReader((FileReader *)local_d0,param_1);
                    /* try { // try from 00a7ac68 to 00a7ac7f has its CatchHandler @ 00a7af34 */
  uVar7 = FileReader::isValid();
  if ((uVar7 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00a7ae84 to 00a7ae8f has its CatchHandler @ 00a7af0c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00a7ad38 to 00a7ad7b has its CatchHandler @ 00a7af34 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Missing dds file \'%s\'\n",param_1);
  }
  else {
    uVar7 = FileReader::seek((ulonglong)local_d0);
    if ((uVar7 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00a7aecc to 00a7aed7 has its CatchHandler @ 00a7af08 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Can\'t seek to data for dds file \'%s\'\n",param_1);
    }
    else {
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_b8 = 0x100000001;
      local_c0 = 0;
      local_80 = 0;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_98 = 0;
                    /* try { // try from 00a7acc0 to 00a7accb has its CatchHandler @ 00a7af30 */
      uVar7 = buildDesc(*(DDSHeader **)(param_4 + 0x10),
                        (DDSHeaderDX10 *)(*(DDSHeader **)(param_4 + 0x10) + 0x7c),
                        *(ORIGIN *)(param_4 + 0x5c),(ImageDesc *)&local_c0,param_1);
      if ((uVar7 & 1) != 0) {
        if (param_2 == 0) {
          uVar3 = 0;
          iVar6 = (int)local_b0;
        }
        else {
                    /* try { // try from 00a7acd4 to 00a7ace3 has its CatchHandler @ 00a7af24 */
          uVar3 = MipMapUtil::getMipRangeSize((ImageDesc *)&local_c0,0,param_2);
          uVar9 = NEON_neg(CONCAT44(param_2,param_2),4);
          uVar1 = (uint)local_b8 >> (ulong)(param_2 & 0x1f);
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          iVar6 = (int)local_b0 - param_2;
          uVar9 = NEON_ushl(local_c0,uVar9,4);
          local_b8 = CONCAT44(local_b8._4_4_,uVar1);
          local_b0 = CONCAT44(local_b0._4_4_,iVar6);
          local_c0 = NEON_umax(uVar9,0x100000001,4);
        }
        uVar1 = (iVar6 - param_3) + 1;
        if (uVar1 == 0) {
          uVar4 = 0;
        }
        else {
                    /* try { // try from 00a7add0 to 00a7addf has its CatchHandler @ 00a7af2c */
          uVar4 = MipMapUtil::getMipRangeSize((ImageDesc *)&local_c0,param_3,uVar1);
          local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 - uVar1);
        }
                    /* try { // try from 00a7adf8 to 00a7ae07 has its CatchHandler @ 00a7af28 */
        iVar5 = MipMapUtil::getMipRangeSize((ImageDesc *)&local_c0,0,param_3);
        iVar6 = 6;
        if (uStack_a8._4_4_ != 1) {
          iVar6 = 1;
        }
        uVar1 = local_b8._4_4_ * iVar5 * iVar6;
        if (*param_7 < uVar1) {
                    /* try { // try from 00a7ae30 to 00a7ae37 has its CatchHandler @ 00a7af20 */
          puVar8 = (uchar *)operator_new__((ulong)uVar1);
          *param_5 = puVar8;
          *param_6 = uVar1;
        }
        else {
          puVar8 = *param_5;
        }
        *param_7 = uVar1;
                    /* try { // try from 00a7ae58 to 00a7ae6b has its CatchHandler @ 00a7af2c */
        uVar3 = readMips(local_d0[0],(ImageDesc *)&local_c0,(bool)param_4[0x70],uVar3,uVar4,puVar8,
                         param_1);
        goto LAB_00a7ad80;
      }
    }
  }
  uVar3 = 0;
LAB_00a7ad80:
  FileReader::~FileReader((FileReader *)local_d0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


