// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 007116d0
// Size: 132 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalEatAction::onInitialize() */

undefined8 AnimalEatAction::onInitialize(void)

{
  long lVar1;
  long in_x0;
  ScenegraphNode *this;
  undefined4 local_50;
  undefined4 local_4c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = 2;
  local_4c = MathUtil::getRandomMinMax
                       (*(float *)(*(long *)(in_x0 + 0x28) + 0x574),
                        *(float *)(*(long *)(in_x0 + 0x28) + 0x578));
  AnimalLocomotionSystem::request
            (*(AnimalLocomotionSystem **)(in_x0 + 0x38),(CommandDesc *)&local_50);
  this = *(ScenegraphNode **)(*(long *)(in_x0 + 0x30) + 0x188);
  if (this != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(this,true);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


