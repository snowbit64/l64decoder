// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bb6d0
// Entry Point: 007bb6d0
// Size: 136 bytes
// Signature: undefined FUN_007bb6d0(void)


void FUN_007bb6d0(AnimalCompanionManager *param_1,uint *param_2)

{
  long lVar1;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
                    /* try { // try from 007bb700 to 007bb71f has its CatchHandler @ 007bb758 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_78);
  AnimalCompanionManager::changeBehaviorState
            (param_1,*param_2,(BehaviorStateChangeParams *)&local_78);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


