// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_36
// Entry Point: 00afc408
// Size: 88 bytes
// Signature: undefined _INIT_36(void)


void _INIT_36(void)

{
  FileHashManager::s_fileHashManager = 0;
  DAT_02113bf0 = 0;
  DAT_02113c10 = 0;
  DAT_02113c08 = 0;
  DAT_02113bf8 = 0;
  DAT_02113c00 = &DAT_02113c08;
                    /* try { // try from 00afc430 to 00afc43b has its CatchHandler @ 00afc460 */
  Mutex::Mutex((Mutex *)&DAT_02113c18,true);
  __cxa_atexit(FileHashManager::~FileHashManager,&FileHashManager::s_fileHashManager,
               &PTR_LOOP_00fd8de0);
  return;
}


