// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bb854
// Entry Point: 007bb854
// Size: 168 bytes
// Signature: undefined FUN_007bb854(void)


void FUN_007bb854(AnimalCompanionManager *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  uint local_48;
  uint uStack_44;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = AnimalCompanionManager::getAnimalNode(param_1,*param_2);
  if (lVar2 != 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
                    /* try { // try from 007bb890 to 007bb8c3 has its CatchHandler @ 007bb8fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_78);
    local_48 = param_2[4];
    uStack_44 = param_2[8];
    local_40 = param_2[0xc];
    AnimalCompanionManager::changeBehaviorState
              (param_1,*param_2,(BehaviorStateChangeParams *)&local_78);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


