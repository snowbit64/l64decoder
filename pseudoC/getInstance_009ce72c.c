// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 009ce72c
// Size: 236 bytes
// Signature: undefined getInstance(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementManager::getInstance() */

undefined8 * ProceduralPlacementManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02111d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02111d80), iVar1 != 0)) {
    DAT_02111cc0 = 0;
    DAT_02111cb8 = 0;
    DAT_02111c18 = &PTR__ProceduralPlacementManager_00fe2310;
    DAT_02111cb0 = &DAT_02111cb8;
    DAT_02111d38 = 0;
    DAT_02111d40 = 0;
    uRam0000000002111c28 = 0;
    _DAT_02111c20 = 0;
    uRam0000000002111c38 = 0;
    _DAT_02111c30 = 0;
    DAT_02111d30 = &DAT_02111d38;
    uRam0000000002111c48 = 0;
    _DAT_02111c40 = 0;
    uRam0000000002111c58 = 0;
    _DAT_02111c50 = 0;
    uRam0000000002111c68 = 0;
    _DAT_02111c60 = 0;
    uRam0000000002111c78 = 0;
    _DAT_02111c70 = 0;
    uRam0000000002111c88 = 0;
    _DAT_02111c80 = 0;
    uRam0000000002111c98 = 0;
    _DAT_02111c90 = 0;
    uRam0000000002111ca8 = 0;
    _DAT_02111ca0 = 0;
    uRam0000000002111cd0 = 0;
    _DAT_02111cc8 = 0;
    uRam0000000002111ce0 = 0;
    _DAT_02111cd8 = 0;
    uRam0000000002111cf0 = 0;
    _DAT_02111ce8 = 0;
    DAT_02111d00 = 0;
    _DAT_02111cf8 = 0;
    uRam0000000002111d10 = 0;
    _DAT_02111d08 = 0;
    uRam0000000002111d1a = 0;
    _DAT_02111d12 = 0;
    uRam0000000002111d18 = 0;
    DAT_02111d48 = 0x7fffffff;
    DAT_02111d50 = 0x7fffffff;
    uRam0000000002111d5c = 0;
    _DAT_02111d54 = 0;
    uRam0000000002111d6c = 0;
    _DAT_02111d64 = 0;
    DAT_02111d73._0_1_ = 0;
    DAT_02111d73._1_7_ = 0;
    __cxa_atexit(~ProceduralPlacementManager,&DAT_02111c18,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02111d80);
  }
  return &DAT_02111c18;
}


