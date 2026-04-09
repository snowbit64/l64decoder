// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printPage
// Entry Point: 00b83858
// Size: 396 bytes
// Signature: undefined __thiscall printPage(BuddyAllocator * this, Page * param_1, char * param_2)


/* BuddyAllocator::printPage(BuddyAllocator::Page const*, char const*) const */

void __thiscall BuddyAllocator::printPage(BuddyAllocator *this,Page *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  byte local_60;
  undefined2 local_5f;
  undefined local_5d;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b839a8 to 00b839b3 has its CatchHandler @ 00b839e4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "%sOffset %8.8X %uB %s\n",param_2,(ulong)*(uint *)param_1,
                    (ulong)(uint)(*(int *)(this + 0x10) << (ulong)(*(uint *)(param_1 + 4) & 0x1f)),
                    &DAT_00525778 + *(int *)(&DAT_00525778 + (ulong)*(uint *)(param_1 + 8) * 4));
  if (*(int *)(param_1 + 8) == 2) {
    *(int *)(*(long *)(this + 8) + (ulong)*(uint *)(param_1 + 4) * 0x20) =
         *(int *)(*(long *)(this + 8) + (ulong)*(uint *)(param_1 + 4) * 0x20) + 1;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    local_5d = 0;
    local_60 = 4;
    local_5f = 0x2020;
                    /* try { // try from 00b838fc to 00b83943 has its CatchHandler @ 00b839f8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_60);
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    printPage(this,*(Page **)(param_1 + 0x10),pcVar1);
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    printPage(this,*(Page **)(param_1 + 0x18),pcVar1);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


