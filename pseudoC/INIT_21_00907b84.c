// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_21
// Entry Point: 00907b84
// Size: 80 bytes
// Signature: undefined _INIT_21(void)


void _INIT_21(void)

{
  I3DManager::s_instance = 0;
  DAT_010fe288 = 0;
  DAT_010fe2a0 = 0;
  DAT_010fe290 = 0;
  DAT_010fe298 = &DAT_010fe2a0;
  DAT_010fe2b8 = 0;
  DAT_010fe2a8 = 0;
  DAT_010fe2b0 = &DAT_010fe2b8;
  DAT_010fe2d0 = 0;
  DAT_010fe2c0 = 0;
  DAT_010fe2c8 = &DAT_010fe2d0;
  DAT_010fe2e0 = 0;
  DAT_010fe2e8 = 0;
  DAT_010fe2d8 = 0;
  DAT_010fe2f0 = 0;
  __cxa_atexit(I3DManager::~I3DManager,&I3DManager::s_instance,&PTR_LOOP_00fd8de0);
  return;
}


