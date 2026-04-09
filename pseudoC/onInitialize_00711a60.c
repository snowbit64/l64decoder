// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00711a60
// Size: 128 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalMoveToTargetAction::onInitialize() */

undefined8 AnimalMoveToTargetAction::onInitialize(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(in_x0 + 0x28);
  local_50[0] = 1;
  local_48 = *(undefined8 *)(lVar1 + 0x18);
  local_40 = *(undefined4 *)(lVar1 + 0x20);
  local_3c = *(undefined8 *)(lVar1 + 0x24);
  local_34 = *(undefined4 *)(lVar1 + 0x2c);
  local_30 = *(undefined *)(lVar1 + 0x34);
  AnimalLocomotionSystem::request
            (*(AnimalLocomotionSystem **)(in_x0 + 0x30),(CommandDesc *)local_50);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


