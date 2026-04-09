// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00886b8c
// Size: 112 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTSoundPlay::update() */

undefined8 BTSoundPlay::update(void)

{
  long lVar1;
  long in_x0;
  Vector3 aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  AnimalSteering::getPosition(*(AnimalSteering **)(*(long *)(in_x0 + 0x28) + 0xb0),aVStack_38);
  AnimalSoundSystem::playSound
            (*(AnimalSoundSystem **)(*(long *)(in_x0 + 0x28) + 0xa8),*(uint *)(in_x0 + 0x30),
             aVStack_38,*(bool *)(in_x0 + 0x34));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


