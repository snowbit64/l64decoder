// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_20
// Entry Point: 0090136c
// Size: 64 bytes
// Signature: undefined _INIT_20(void)


void _INIT_20(void)

{
  Mutex::Mutex((Mutex *)I3DLoad::s_mutex,true);
  __cxa_atexit(Mutex::~Mutex,I3DLoad::s_mutex,&PTR_LOOP_00fd8de0);
  return;
}


