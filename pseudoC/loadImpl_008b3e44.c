// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImpl
// Entry Point: 008b3e44
// Size: 260 bytes
// Signature: undefined __thiscall loadImpl(LoopSynthesisSample * this, char * param_1, STREAM_QUEUE param_2)


/* LoopSynthesisSample::loadImpl(char const*, StreamManager::STREAM_QUEUE) */

bool __thiscall
LoopSynthesisSample::loadImpl(LoopSynthesisSample *this,char *param_1,STREAM_QUEUE param_2)

{
  LoopSynthesisSample *pLVar1;
  int iVar2;
  ResourceManager *this_00;
  long lVar3;
  Logger *this_01;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x120));
  PathUtil::makeUnifiedPathInPlace((basic_string *)(this + 0x120));
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  pLVar1 = this + 0x121;
  if (((byte)this[0x120] & 1) != 0) {
    pLVar1 = *(LoopSynthesisSample **)(this + 0x130);
  }
  lVar3 = ResourceManager::get(this_00,(char *)pLVar1,4,(ResourceDesc *)0x0,param_2,true,false);
  *(long *)(this + 0x70) = lVar3;
  if (lVar3 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008b3f08 to 008b3f0f has its CatchHandler @ 008b3f58 */
      this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b3f14 to 008b3f17 has its CatchHandler @ 008b3f48 */
      Logger::Logger(this_01);
      LogManager::getInstance()::singletonLogManager = this_01;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pLVar1 = this + 0x121;
    if (((byte)this[0x120] & 1) != 0) {
      pLVar1 = *(LoopSynthesisSample **)(this + 0x130);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t load sample \'%s\'.\n",pLVar1);
  }
  return lVar3 != 0;
}


