// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e5dd4
// Entry Point: 006e5dd4
// Size: 180 bytes
// Signature: undefined FUN_006e5dd4(void)


void FUN_006e5dd4(char **param_1)

{
  long lVar1;
  ResourceManager *this;
  bool abStack_5c [4];
  undefined **local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = &PTR__ScriptDesc_00fd93f0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  if (*(int *)(param_1 + 3) == 6) {
                    /* try { // try from 006e5e24 to 006e5e27 has its CatchHandler @ 006e5e88 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_50);
  }
                    /* try { // try from 006e5e28 to 006e5e47 has its CatchHandler @ 006e5e8c */
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::getStaticDelete(this,*param_1,0,(ResourceDesc *)&local_58,1,true,abStack_5c);
  local_58 = &PTR__ScriptDesc_00fd93f0;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


