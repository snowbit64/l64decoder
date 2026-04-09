// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007baea0
// Entry Point: 007baea0
// Size: 112 bytes
// Signature: undefined FUN_007baea0(void)


void FUN_007baea0(uint *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  AnimalHusbandry::getAnimalFromCollisionNode
            (*param_1,(uint *)((long)&local_30 + 4),(uint *)&local_30);
  param_1[0x40] = local_30._4_4_;
  param_1[0x42] = 1;
  param_1[0x44] = (uint)local_30;
  param_1[0x46] = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


