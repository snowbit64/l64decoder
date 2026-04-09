// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveHistoryToDisk
// Entry Point: 006d690c
// Size: 708 bytes
// Signature: undefined saveHistoryToDisk(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::saveHistoryToDisk() */

void Console::saveHistoryToDisk(void)

{
  byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long in_x0;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long local_1a8 [5];
  byte local_180 [16];
  void *local_170;
  ulong local_168;
  undefined8 uStack_160;
  void *local_158;
  undefined8 local_150;
  uint local_148 [50];
  undefined8 local_80;
  uint local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_168 = 0;
  uStack_160 = 0;
  local_158 = (void *)0x0;
                    /* try { // try from 006d6944 to 006d695b has its CatchHandler @ 006d6bfc */
  uVar8 = PathUtil::getUserProfileAppPath
                    ("FarmingSimulator2023Mobile",(basic_string *)&local_168,false,true);
  if ((uVar8 & 1) != 0) {
                    /* try { // try from 006d6960 to 006d6973 has its CatchHandler @ 006d6bf4 */
    FUN_006cadd8(local_180,&local_168,"consoleHistory.dat");
                    /* try { // try from 006d6974 to 006d697b has its CatchHandler @ 006d6bec */
    NativeFile::NativeFile((NativeFile *)local_1a8);
    pvVar2 = (void *)((ulong)local_180 | 1);
    if ((local_180[0] & 1) != 0) {
      pvVar2 = local_170;
    }
                    /* try { // try from 006d6994 to 006d6a5f has its CatchHandler @ 006d6bf8 */
    uVar8 = NativeFile::open((char *)local_1a8,(ACCESS_MODE)pvVar2,true);
    if ((uVar8 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 006d6b94 to 006d6b9f has its CatchHandler @ 006d6bd0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pvVar2 = (void *)((ulong)local_180 | 1);
      if ((local_180[0] & 1) != 0) {
        pvVar2 = local_170;
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: failed to save the console command history to file \"%s\"\n",
                        pvVar2);
    }
    else {
      local_80 = 0;
      local_78 = 0x32;
      iVar7 = (int)((ulong)(*(long *)(in_x0 + 0x48) - *(long *)(in_x0 + 0x40)) >> 5);
      if (iVar7 == 0) {
        uVar10 = 0;
      }
      else {
        uVar9 = 0;
        uVar10 = 0;
        while( true ) {
          local_148[uVar10] = uVar9;
          uVar10 = (int)local_80 + 1;
          local_80 = CONCAT44(local_80._4_4_,uVar10);
          if (local_78 < uVar10) {
            uVar10 = 0;
            if (local_78 != 0) {
              uVar10 = (local_80._4_4_ + 1) / local_78;
            }
            local_80 = CONCAT44((local_80._4_4_ + 1) - uVar10 * local_78,local_78);
            uVar10 = local_78;
          }
          if (iVar7 - 1U == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar11 = 0;
          if (local_78 != 0) {
            uVar11 = (uVar10 + local_80._4_4_) / local_78;
          }
          uVar10 = (uVar10 + local_80._4_4_) - uVar11 * local_78;
        }
      }
      uVar9 = local_78;
      local_150 = CONCAT44(local_150._4_4_,uVar10);
                    /* try { // try from 006d6a74 to 006d6a83 has its CatchHandler @ 006d6be8 */
      (**(code **)(local_1a8[0] + 0x30))(local_1a8,&local_150,4);
      if (uVar10 != 0) {
        uVar11 = local_80._4_4_;
        do {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar11 / uVar9;
          }
          lVar12 = *(long *)(in_x0 + 0x40);
          uVar4 = local_148[uVar11 - uVar4 * uVar9];
          pbVar1 = (byte *)(lVar12 + (ulong)uVar4 * 0x20);
          local_150 = (ulong)(*pbVar1 >> 1);
          if ((*pbVar1 & 1) != 0) {
            local_150 = *(ulong *)(pbVar1 + 8);
          }
                    /* try { // try from 006d6ad8 to 006d6b1f has its CatchHandler @ 006d6c0c */
          iVar7 = (**(code **)(local_1a8[0] + 0x30))(local_1a8,&local_150,8);
          if (iVar7 == 8) {
            pbVar3 = pbVar1 + 1;
            uVar6 = (uint)(*pbVar1 >> 1);
            if ((*pbVar1 & 1) != 0) {
              pbVar3 = *(byte **)(lVar12 + (ulong)uVar4 * 0x20 + 0x10);
              uVar6 = *(uint *)(pbVar1 + 8);
            }
            (**(code **)(local_1a8[0] + 0x30))(local_1a8,pbVar3,uVar6);
          }
          uVar10 = uVar10 - 1;
          uVar11 = uVar11 + 1;
        } while (uVar10 != 0);
      }
                    /* try { // try from 006d6b24 to 006d6b2b has its CatchHandler @ 006d6be4 */
      NativeFile::close();
    }
    NativeFile::~NativeFile((NativeFile *)local_1a8);
    if ((local_180[0] & 1) != 0) {
      operator_delete(local_170);
    }
  }
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


