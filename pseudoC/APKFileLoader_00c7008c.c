// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: APKFileLoader
// Entry Point: 00c7008c
// Size: 388 bytes
// Signature: undefined __thiscall APKFileLoader(APKFileLoader * this, char * param_1, uint param_2, char * param_3)


/* APKFileLoader::APKFileLoader(char const*, unsigned int, char const*) */

void __thiscall
APKFileLoader::APKFileLoader(APKFileLoader *this,char *param_1,uint param_2,char *param_3)

{
  int iVar1;
  long *this_00;
  ulong uVar2;
  long lVar3;
  
  *(uint *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__APKFileLoader_00feea00;
                    /* try { // try from 00c700cc to 00c700d3 has its CatchHandler @ 00c70238 */
  this_00 = (long *)operator_new(0x80e0);
                    /* try { // try from 00c700d8 to 00c700e3 has its CatchHandler @ 00c70228 */
  ZIPFileArchive::ZIPFileArchive((ZIPFileArchive *)this_00,param_1,true);
  lVar3 = *this_00;
  *(long **)(this + 0x10) = this_00;
                    /* try { // try from 00c700f0 to 00c70143 has its CatchHandler @ 00c70238 */
  uVar2 = (**(code **)(lVar3 + 0x10))(this_00);
  if ((uVar2 & 1) == 0) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c70190 to 00c7019b has its CatchHandler @ 00c70214 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"APK found: %s\n",
                      param_1);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c701d8 to 00c701e3 has its CatchHandler @ 00c70210 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"APK found: %s\n",
                      param_1);
  }
                    /* try { // try from 00c70160 to 00c7016b has its CatchHandler @ 00c70238 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0x18));
  return;
}


