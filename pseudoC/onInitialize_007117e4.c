// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 007117e4
// Size: 180 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalGrazingAction::onInitialize() */

undefined8 AnimalGrazingAction::onInitialize(void)

{
  long lVar1;
  long in_x0;
  ScenegraphNode *this;
  float *pfVar2;
  undefined4 local_50;
  undefined4 local_4c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pfVar2 = *(float **)(in_x0 + 0x28);
  if ((*(char *)(pfVar2 + 0x154) != '\0') || (*pfVar2 <= 7.92e+07 && 1.8e+07 <= *pfVar2)) {
    local_50 = 5;
    local_4c = MathUtil::getRandomMinMax(pfVar2[0x161],pfVar2[0x162]);
    AnimalLocomotionSystem::request
              (*(AnimalLocomotionSystem **)(in_x0 + 0x38),(CommandDesc *)&local_50);
    this = *(ScenegraphNode **)(*(long *)(in_x0 + 0x30) + 0x188);
    if (this != (ScenegraphNode *)0x0) {
      ScenegraphNode::setVisibility(this,true);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


