// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bb774
// Entry Point: 007bb774
// Size: 196 bytes
// Signature: undefined FUN_007bb774(void)


void FUN_007bb774(AnimalCompanionManager *param_1,uint *param_2)

{
  long lVar1;
  EntityRegistryManager *this;
  long lVar2;
  long lVar3;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  long local_70;
  long lStack_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,param_2[4]);
  lVar3 = AnimalCompanionManager::getAnimalNode(param_1,*param_2);
  if (((lVar2 != 0) && (lVar3 != 0)) && ((*(byte *)(lVar2 + 0x10) >> 5 & 1) != 0)) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
                    /* try { // try from 007bb7d8 to 007bb7fb has its CatchHandler @ 007bb838 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_88);
    local_70 = lVar2;
    lStack_68 = lVar3;
    AnimalCompanionManager::changeBehaviorState
              (param_1,*param_2,(BehaviorStateChangeParams *)&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


