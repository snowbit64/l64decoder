// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readMips
// Entry Point: 00a7a440
// Size: 736 bytes
// Signature: undefined __cdecl readMips(File * param_1, ImageDesc * param_2, bool param_3, uint param_4, uint param_5, uchar * param_6, char * param_7)


/* DDSUtil::readMips(File&, ImageDesc const&, bool, unsigned int, unsigned int, unsigned char*, char
   const*) */

undefined8
DDSUtil::readMips(File *param_1,ImageDesc *param_2,bool param_3,uint param_4,uint param_5,
                 uchar *param_6,char *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  
  iVar7 = 6;
  if (*(int *)(param_2 + 0x1c) != 1) {
    iVar7 = 1;
  }
  uVar4 = iVar7 * *(int *)(param_2 + 0xc);
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      if (param_4 != 0) {
        lVar8 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
        uVar9 = (**(code **)(*(long *)param_1 + 0x38))(param_1,lVar8 + (ulong)param_4);
        if ((uVar9 & 1) != 0) goto LAB_00a7a4ec;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00a7a67c to 00a7a687 has its CatchHandler @ 00a7a724 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
LAB_00a7a714:
          pcVar11 = "Error: failed to seek in dds file \'%s\'\n";
LAB_00a7a6cc:
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          goto LAB_00a7a624;
        }
LAB_00a7a69c:
        pcVar11 = "Error: failed to seek in dds file \'%s\'\n";
LAB_00a7a624:
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11,param_7);
        return 0;
      }
LAB_00a7a4ec:
      if (*(int *)(param_2 + 0x10) != -1) {
        uVar10 = 0;
        do {
          uVar1 = *(uint *)param_2 >> (ulong)(uVar10 & 0x1f);
          uVar2 = *(uint *)(param_2 + 4) >> (ulong)(uVar10 & 0x1f);
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          uVar3 = *(uint *)(param_2 + 8) >> (ulong)(uVar10 & 0x1f);
          if (uVar2 < 2) {
            uVar2 = 1;
          }
          if (uVar3 < 2) {
            uVar3 = 1;
          }
          uVar5 = ImageUtil::getMemorySize
                            (uVar1,uVar2,uVar3,*(FORMAT *)(param_2 + 0x40),*(TYPE *)(param_2 + 0x18)
                            );
          uVar6 = (**(code **)(*(long *)param_1 + 0x28))(param_1,param_6,(ulong)uVar5);
          if (uVar6 != uVar5) {
            if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
               (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar7 == 0)) {
              pcVar11 = "Error: failed to read from dds file \'%s\'\n";
              goto LAB_00a7a624;
            }
                    /* try { // try from 00a7a6b8 to 00a7a6c3 has its CatchHandler @ 00a7a728 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            pcVar11 = "Error: failed to read from dds file \'%s\'\n";
            goto LAB_00a7a6cc;
          }
          if (param_3) {
            ImageUtil::flipY(param_6,uVar5,uVar1,uVar2,uVar3,*(FORMAT *)(param_2 + 0x40),param_7,
                             (uVar12 | uVar10) == 0);
          }
          param_6 = param_6 + uVar5;
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(int *)(param_2 + 0x10) + 1U);
      }
      if ((param_5 != 0) && (uVar12 != uVar4 - 1)) {
        lVar8 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
        uVar9 = (**(code **)(*(long *)param_1 + 0x38))(param_1,lVar8 + (ulong)param_5);
        if ((uVar9 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar7 != 0)) {
                    /* try { // try from 00a7a708 to 00a7a713 has its CatchHandler @ 00a7a720 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            goto LAB_00a7a714;
          }
          goto LAB_00a7a69c;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  return 1;
}


