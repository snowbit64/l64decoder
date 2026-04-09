// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTexture
// Entry Point: 00760af0
// Size: 216 bytes
// Signature: undefined __thiscall addTexture(TerrainDetailDistanceConstructor * this, MethodInvocation * param_1)


/* TerrainDetailDistanceConstructor::addTexture(MethodInvocation*) */

void __thiscall
TerrainDetailDistanceConstructor::addTexture
          (TerrainDetailDistanceConstructor *this,MethodInvocation *param_1)

{
  uint uVar1;
  int iVar2;
  Logger *this_00;
  
  uVar1 = *(uint *)param_1;
  if (uVar1 >> (ulong)(*(uint *)(this + 0xc) & 0x1f) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(*(long *)(this + 0x10) + (ulong)uVar1 * 0x18));
    *(char *)(*(long *)(this + 0x18) + (ulong)uVar1) = (char)*(undefined4 *)(param_1 + 0x20);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00760b88 to 00760b8f has its CatchHandler @ 00760bd8 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00760b94 to 00760b97 has its CatchHandler @ 00760bc8 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Distance add texture invalid index %u\n",(ulong)uVar1);
  }
  return;
}


