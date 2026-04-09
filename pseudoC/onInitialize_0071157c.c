// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 0071157c
// Size: 132 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalDrinkAction::onInitialize() */

undefined8 AnimalDrinkAction::onInitialize(void)

{
  long lVar1;
  long in_x0;
  ScenegraphNode *this;
  undefined4 local_50;
  undefined4 local_4c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = 3;
  local_4c = MathUtil::getRandomMinMax
                       (*(float *)(*(long *)(in_x0 + 0x28) + 0x57c),
                        *(float *)(*(long *)(in_x0 + 0x28) + 0x580));
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


