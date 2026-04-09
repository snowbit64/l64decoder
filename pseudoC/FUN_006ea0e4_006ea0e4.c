// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea0e4
// Entry Point: 006ea0e4
// Size: 168 bytes
// Signature: undefined FUN_006ea0e4(void)


void FUN_006ea0e4(char **param_1)

{
  long lVar1;
  ulong uVar2;
  MasterServerManager *this;
  uint local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  uint local_3c;
  ulonglong local_38;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  local_38 = 0;
  local_3c = 0;
  uVar2 = FileManager::getProductData
                    ((FileManager *)FileManager::s_singletonFileManager,*param_1,&local_3c,
                     (KEY_TYPE *)&local_2c,&local_38);
  if ((((uVar2 & 1) != 0) && (local_2c - 1U < 3)) && (local_38 != 0)) {
    local_48 = local_38;
    uStack_4c = *(undefined4 *)(&DAT_00516cf0 + (long)(int)(local_2c - 1U) * 4);
    local_50 = local_3c;
    this = (MasterServerManager *)MasterServerManager::getInstance();
    MasterServerManager::addDlc(this,(DlcInfo *)&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


