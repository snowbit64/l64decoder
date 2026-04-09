// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSaveFilename
// Entry Point: 00b86b74
// Size: 248 bytes
// Signature: undefined __thiscall getSaveFilename(DensityMap * this, char * param_1, basic_string * param_2)


/* DensityMap::getSaveFilename(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall DensityMap::getSaveFilename(DensityMap *this,char *param_1,basic_string *param_2)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  Logger *this_00;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_2);
  if (param_1 == (char *)0x0) {
    bVar2 = ((byte)this[0xe0] & 1) != 0;
    uVar1 = (ulong)((byte)this[0xe0] >> 1);
    if (bVar2) {
      uVar1 = *(ulong *)(this + 0xe8);
    }
    if (uVar1 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00b86c2c to 00b86c33 has its CatchHandler @ 00b86c7c */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b86c38 to 00b86c3b has its CatchHandler @ 00b86c6c */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: No filename to save DensityMap.\n");
      return;
    }
    param_1 = *(char **)(this + 0xf0);
    if (!bVar2) {
      param_1 = (char *)(this + 0xe1);
    }
  }
  getOptimizedFilename(this,param_1,param_2);
  return;
}


