// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startI3DElement
// Entry Point: 008fd6cc
// Size: 248 bytes
// Signature: undefined __cdecl startI3DElement(void * param_1, char * param_2, char * * param_3)


/* I3DLoad::startI3DElement(void*, char const*, char const**) */

void I3DLoad::startI3DElement(void *param_1,char *param_2,char **param_3)

{
  int iVar1;
  char *__s1;
  long lVar2;
  Logger *this;
  
  __s1 = (char *)ExpatUtil::getAttr("version",param_3);
  iVar1 = strcmp(__s1,"1.6");
  if (iVar1 != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008fd784 to 008fd78b has its CatchHandler @ 008fd7d4 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 008fd790 to 008fd793 has its CatchHandler @ 008fd7c4 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar2 = (long)param_1 + 0x211;
    if ((*(byte *)((long)param_1 + 0x210) & 1) != 0) {
      lVar2 = *(long *)((long)param_1 + 0x220);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Incorrect I3D version in file \'%s\'. Version 1.6 required.\n",lVar2)
    ;
    *(undefined *)((long)param_1 + 0x11) = 1;
  }
  lVar2 = ExpatUtil::getAttr("name",param_3);
  if (lVar2 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)((long)param_1 + 0x228));
  }
  return;
}


