// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_12
// Entry Point: 007000a8
// Size: 44 bytes
// Signature: undefined _INIT_12(void)


void _INIT_12(void)

{
  DAT_01052b20 = 0;
  DAT_01052b18 = 0;
  AnimalHusbandry::s_animalCollisionMap = &DAT_01052b18;
  __cxa_atexit(FUN_006fb1a0,&AnimalHusbandry::s_animalCollisionMap,&PTR_LOOP_00fd8de0);
  return;
}


