// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_120
// Entry Point: 00fa7904
// Size: 140 bytes
// Signature: undefined _INIT_120(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_120(void)

{
  DAT_02125d68 = (timeval *)operator_new(0x10);
  gettimeofday(DAT_02125d68,(__timezone_ptr_t)0x0);
  __cxa_atexit(btClock::~btClock,&DAT_02125d68,&PTR_LOOP_00fd8de0);
  _DAT_02125d78 = 0;
  DAT_02125d80 = 0;
  CProfileManager::Root = &DAT_00507e03;
  DAT_02125d88 = 0;
  DAT_02125d98 = 0;
  DAT_02125d90 = 0;
  uRam0000000002125da8 = 0;
  _DAT_02125da0 = 0;
  CProfileNode::Reset();
  __cxa_atexit(CProfileNode::~CProfileNode,&CProfileManager::Root,&PTR_LOOP_00fd8de0);
  return;
}


