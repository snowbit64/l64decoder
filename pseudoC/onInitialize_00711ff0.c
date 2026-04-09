// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00711ff0
// Size: 160 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalSleepingAction::onInitialize() */

void AnimalSleepingAction::onInitialize(void)

{
  long lVar1;
  long in_x0;
  undefined8 uVar2;
  float *pfVar3;
  undefined4 local_50;
  undefined4 local_4c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pfVar3 = *(float **)(in_x0 + 0x28);
  if (*pfVar3 <= 7.92e+07 && 1.8e+07 <= *pfVar3) {
    uVar2 = 2;
  }
  else {
    local_50 = 6;
    local_4c = MathUtil::getRandomMinMax(pfVar3[0x157],pfVar3[0x158]);
    AnimalLocomotionSystem::request
              (*(AnimalLocomotionSystem **)(in_x0 + 0x30),(CommandDesc *)&local_50);
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


