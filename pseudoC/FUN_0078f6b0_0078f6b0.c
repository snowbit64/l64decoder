// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f6b0
// Entry Point: 0078f6b0
// Size: 500 bytes
// Signature: undefined FUN_0078f6b0(void)


void FUN_0078f6b0(uint *param_1)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong local_88;
  undefined8 local_80;
  char *local_78;
  ulong local_70;
  undefined8 local_68;
  char *local_60;
  ulong local_58;
  undefined8 local_50;
  char *local_48;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_48 = (char *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (char *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (char *)0x0;
  if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar5 != 0)) {
                    /* try { // try from 0078f868 to 0078f873 has its CatchHandler @ 0078f8a4 */
    UserBlockManager::UserBlockManager
              ((UserBlockManager *)UserBlockManager::getInstance()::instance);
    __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&UserBlockManager::getInstance()::instance);
  }
                    /* try { // try from 0078f700 to 0078f7d7 has its CatchHandler @ 0078f8b8 */
  UserBlockManager::getBlockedUser
            ((UserBlockManager *)UserBlockManager::getInstance()::instance,*param_1,
             (basic_string *)&local_58,(basic_string *)&local_70,&local_3c,(basic_string *)&local_88
            );
  bVar4 = (local_58 & 1) != 0;
  pcVar2 = (char *)((ulong)&local_58 | 1);
  if (bVar4) {
    pcVar2 = local_48;
  }
  uVar1 = (uint)((byte)local_58 >> 1);
  if (bVar4) {
    uVar1 = (uint)local_50;
  }
  uVar6 = StringUtil::createStrCpy(pcVar2,uVar1);
  bVar4 = (local_70 & 1) != 0;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  pcVar2 = (char *)((ulong)&local_70 | 1);
  if (bVar4) {
    pcVar2 = local_60;
  }
  uVar1 = (uint)((byte)local_70 >> 1);
  if (bVar4) {
    uVar1 = (uint)local_68;
  }
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) | 1;
  uVar6 = StringUtil::createStrCpy(pcVar2,uVar1);
  *(undefined8 *)(param_1 + 0x44) = uVar6;
  bVar4 = (local_88 & 1) != 0;
  pcVar2 = (char *)((ulong)&local_88 | 1);
  if (bVar4) {
    pcVar2 = local_78;
  }
  param_1[0x46] = 6;
  param_1[0x48] = local_3c;
  *(ushort *)(param_1 + 0x47) = *(ushort *)(param_1 + 0x47) | 1;
  uVar1 = (uint)((byte)local_88 >> 1);
  if (bVar4) {
    uVar1 = (uint)local_80;
  }
  param_1[0x4a] = 1;
  uVar6 = StringUtil::createStrCpy(pcVar2,uVar1);
  *(undefined8 *)(param_1 + 0x4c) = uVar6;
  param_1[0x4e] = 6;
  *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 1;
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


