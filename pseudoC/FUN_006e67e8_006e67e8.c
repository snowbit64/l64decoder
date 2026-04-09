// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e67e8
// Entry Point: 006e67e8
// Size: 152 bytes
// Signature: undefined FUN_006e67e8(void)


void FUN_006e67e8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  plVar2 = (long *)EngineManager::getRenderWindow();
  (**(code **)(*plVar2 + 0xd8))(plVar2,&local_2c,&uStack_30,&local_34,&local_38);
  *(undefined4 *)(param_1 + 0x100) = local_2c;
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x128) = 4;
  *(undefined4 *)(param_1 + 0x120) = local_34;
  *(undefined4 *)(param_1 + 0x110) = uStack_30;
  *(undefined4 *)(param_1 + 0x138) = 4;
  *(undefined4 *)(param_1 + 0x130) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


