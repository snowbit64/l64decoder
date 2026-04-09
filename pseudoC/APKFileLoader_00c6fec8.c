// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: APKFileLoader
// Entry Point: 00c6fec8
// Size: 372 bytes
// Signature: undefined __thiscall APKFileLoader(APKFileLoader * this, uint param_1, char * param_2)


/* APKFileLoader::APKFileLoader(unsigned int, char const*) */

void __thiscall APKFileLoader::APKFileLoader(APKFileLoader *this,uint param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  long *this_00;
  ulong uVar3;
  long lVar4;
  uint local_2c4;
  char acStack_2c0 [512];
  AndroidJNICall aAStack_c0 [120];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(uint *)(this + 8) = param_1;
  *(undefined ***)this = &PTR__APKFileLoader_00feea00;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00c6ff14 to 00c6ff1f has its CatchHandler @ 00c70060 */
  AndroidJNICall::AndroidJNICall(aAStack_c0,0);
  local_2c4 = 0x200;
                    /* try { // try from 00c6ff28 to 00c6ff47 has its CatchHandler @ 00c70068 */
  AndroidJNICall::callString(aAStack_c0,"getApkPath",acStack_2c0,&local_2c4);
  this_00 = (long *)operator_new(0x80e0);
                    /* try { // try from 00c6ff4c to 00c6ff57 has its CatchHandler @ 00c70050 */
  ZIPFileArchive::ZIPFileArchive((ZIPFileArchive *)this_00,acStack_2c0,true);
  lVar4 = *this_00;
  *(long **)(this + 0x10) = this_00;
                    /* try { // try from 00c6ff64 to 00c6ff97 has its CatchHandler @ 00c70068 */
  uVar3 = (**(code **)(lVar4 + 0x10))(this_00);
  if ((uVar3 & 1) == 0) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00c70000 to 00c7000b has its CatchHandler @ 00c7003c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"APK found: %s\n",
                      acStack_2c0);
  }
                    /* try { // try from 00c6ffb4 to 00c6ffbf has its CatchHandler @ 00c70068 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0x18));
  AndroidJNICall::~AndroidJNICall(aAStack_c0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


