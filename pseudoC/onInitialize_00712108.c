// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00712108
// Size: 160 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalWanderAction::onInitialize() */

undefined8 AnimalWanderAction::onInitialize(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(in_x0 + 0x30);
  local_50 = 7;
  local_48 = *(undefined8 *)(lVar1 + 0x18);
  local_40 = *(undefined4 *)(lVar1 + 0x20);
  local_30 = 0;
  local_3c = *(undefined8 *)(lVar1 + 0x24);
  local_34 = *(undefined4 *)(lVar1 + 0x2c);
  local_4c = MathUtil::getRandomMinMax
                       (*(float *)(*(long *)(in_x0 + 0x28) + 0x58c),
                        *(float *)(*(long *)(in_x0 + 0x28) + 0x590));
  AnimalLocomotionSystem::request
            (*(AnimalLocomotionSystem **)(in_x0 + 0x38),(CommandDesc *)&local_50);
  *(undefined *)(*(long *)(in_x0 + 0x30) + 0x178) = 1;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


