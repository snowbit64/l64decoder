// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 0071143c
// Size: 144 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalChewAction::onInitialize() */

undefined8 AnimalChewAction::onInitialize(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  undefined4 local_50;
  undefined4 local_4c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = 4;
  local_4c = MathUtil::getRandomMinMax
                       (*(float *)(*(long *)(in_x0 + 0x28) + 0x56c),
                        *(float *)(*(long *)(in_x0 + 0x28) + 0x570));
  AnimalLocomotionSystem::request
            (*(AnimalLocomotionSystem **)(in_x0 + 0x38),(CommandDesc *)&local_50);
  lVar2 = *(long *)(in_x0 + 0x30);
  if (*(ScenegraphNode **)(lVar2 + 0x188) != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(*(ScenegraphNode **)(lVar2 + 0x188),true);
    lVar2 = *(long *)(in_x0 + 0x30);
  }
  *(undefined *)(lVar2 + 0x19c) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


