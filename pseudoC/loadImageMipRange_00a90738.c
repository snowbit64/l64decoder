// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageMipRange
// Entry Point: 00a90738
// Size: 628 bytes
// Signature: undefined __cdecl loadImageMipRange(char * param_1, uint param_2, uint param_3, ImageStreamingDesc * param_4, uchar * * param_5, uint * param_6, uint * param_7)


/* GS2DUtil::loadImageMipRange(char const*, unsigned int, unsigned int, ImageStreamingDesc const&,
   unsigned char*&, unsigned int&, unsigned int&) */

uint GS2DUtil::loadImageMipRange
               (char *param_1,uint param_2,uint param_3,ImageStreamingDesc *param_4,uchar **param_5,
               uint *param_6,uint *param_7)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uchar *puVar6;
  GS2DHeader *pGVar7;
  uint local_d4;
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FileReader::FileReader((FileReader *)local_d0,param_1);
                    /* try { // try from 00a9078c to 00a907a3 has its CatchHandler @ 00a909d0 */
  uVar5 = FileReader::isValid();
  if ((uVar5 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00a90928 to 00a90933 has its CatchHandler @ 00a909b0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00a90860 to 00a908a3 has its CatchHandler @ 00a909d0 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Missing gs2d file \'%s\'\n",param_1);
  }
  else {
    uVar5 = FileReader::seek((ulonglong)local_d0);
    if ((uVar5 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00a90970 to 00a9097b has its CatchHandler @ 00a909ac */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to seek at data pos in gs2d file \'%s\'\n",param_1);
    }
    else {
      pGVar7 = *(GS2DHeader **)(param_4 + 0x10);
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
      local_d4 = 0;
                    /* try { // try from 00a907e4 to 00a907fb has its CatchHandler @ 00a909cc */
      uVar5 = buildDesc(pGVar7,*(ORIGIN *)(param_4 + 0x5c),(ImageDesc *)&local_c0,param_1,&local_d4,
                        false);
      if ((uVar5 & 1) != 0) {
                    /* try { // try from 00a90800 to 00a9080f has its CatchHandler @ 00a909c8 */
        iVar2 = MipMapUtil::getMipRangeSize((ImageDesc *)&local_c0,param_2,param_3);
        iVar4 = 6;
        if (uStack_a8._4_4_ != 1) {
          iVar4 = 1;
        }
        uVar3 = local_b8._4_4_ * iVar2 * iVar4;
        if (*param_7 < uVar3) {
                    /* try { // try from 00a90838 to 00a9083f has its CatchHandler @ 00a909c4 */
          puVar6 = (uchar *)operator_new__((ulong)uVar3);
          *param_5 = puVar6;
          *param_6 = uVar3;
        }
        else {
          puVar6 = *param_5;
        }
        *param_7 = uVar3;
                    /* try { // try from 00a908f4 to 00a9090f has its CatchHandler @ 00a909cc */
        uVar3 = readMips(local_d0[0],pGVar7,(ImageDesc *)&local_c0,(bool)param_4[0x70],param_2,
                         param_3,puVar6,uVar3,param_1);
        goto LAB_00a908a8;
      }
    }
  }
  uVar3 = 0;
LAB_00a908a8:
  FileReader::~FileReader((FileReader *)local_d0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


