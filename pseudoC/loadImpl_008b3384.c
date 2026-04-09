// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImpl
// Entry Point: 008b3384
// Size: 260 bytes
// Signature: undefined __thiscall loadImpl(StaticSample * this, char * param_1, STREAM_QUEUE param_2)


/* StaticSample::loadImpl(char const*, StreamManager::STREAM_QUEUE) */

bool __thiscall StaticSample::loadImpl(StaticSample *this,char *param_1,STREAM_QUEUE param_2)

{
  StaticSample *pSVar1;
  int iVar2;
  ResourceManager *this_00;
  long lVar3;
  Logger *this_01;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x80));
  PathUtil::makeUnifiedPathInPlace((basic_string *)(this + 0x80));
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  pSVar1 = this + 0x81;
  if (((byte)this[0x80] & 1) != 0) {
    pSVar1 = *(StaticSample **)(this + 0x90);
  }
  lVar3 = ResourceManager::get(this_00,(char *)pSVar1,3,(ResourceDesc *)0x0,param_2,true,false);
  *(long *)(this + 0x70) = lVar3;
  if (lVar3 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008b3448 to 008b344f has its CatchHandler @ 008b3498 */
      this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b3454 to 008b3457 has its CatchHandler @ 008b3488 */
      Logger::Logger(this_01);
      LogManager::getInstance()::singletonLogManager = this_01;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pSVar1 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pSVar1 = *(StaticSample **)(this + 0x90);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t load sample \'%s\'.\n",pSVar1);
  }
  return lVar3 != 0;
}


