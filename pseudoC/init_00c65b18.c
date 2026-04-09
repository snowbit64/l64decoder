// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00c65b18
// Size: 180 bytes
// Signature: undefined __cdecl init(char * param_1)


/* UserBlockManager::init(char const*) */

uint UserBlockManager::init(char *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 8);
  FUN_006cadd8(local_50,param_1 + 8,"blockedUserIds.xml");
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
                    /* try { // try from 00c65b74 to 00c65b7b has its CatchHandler @ 00c65bcc */
    uVar3 = loadBlockedUsersFile();
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


