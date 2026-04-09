// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_27
// Entry Point: 00996034
// Size: 44 bytes
// Signature: undefined _INIT_27(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_27(void)

{
  _DAT_021103e0 = 0;
  DAT_021103d8 = 0;
  Bt2PhysicsRBObject::s_objectMap = &DAT_021103d8;
  __cxa_atexit(FUN_009943c4,&Bt2PhysicsRBObject::s_objectMap,&PTR_LOOP_00fd8de0);
  return;
}


