// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00711968
// Size: 124 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalIdleAction::onInitialize() */

undefined8 AnimalIdleAction::onInitialize(void)

{
  long lVar1;
  long in_x0;
  undefined4 local_50;
  undefined4 local_4c;
  undefined local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_4c = MathUtil::getRandomMinMax
                       (*(float *)(*(long *)(in_x0 + 0x30) + 0x554),
                        *(float *)(*(long *)(in_x0 + 0x30) + 0x558));
  local_30 = 0;
  AnimalLocomotionSystem::request
            (*(AnimalLocomotionSystem **)(in_x0 + 0x38),(CommandDesc *)&local_50);
  *(undefined *)(*(long *)(in_x0 + 0x28) + 0x178) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


