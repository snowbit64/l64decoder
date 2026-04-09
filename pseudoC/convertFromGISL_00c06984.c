// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertFromGISL
// Entry Point: 00c06984
// Size: 596 bytes
// Signature: undefined __thiscall convertFromGISL(ShaderConverter * this, char * param_1, ShaderLanguage * param_2, map * param_3, basic_string * param_4, basic_string * param_5, basic_string * param_6, vector * param_7, uint * param_8, CodeStringStream * param_9, ulonglong * param_10, char * param_11)


/* ShaderConverter::convertFromGISL(char const*, ShaderLanguage const&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, ShaderStructLayout,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, ShaderStructLayout> > >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::vector<ShaderStructLayout,
   std::__ndk1::allocator<ShaderStructLayout> >&, unsigned int&, CodeStringStream*, unsigned long
   long&, char const*) */

uint __thiscall
ShaderConverter::convertFromGISL
          (ShaderConverter *this,char *param_1,ShaderLanguage *param_2,map *param_3,
          basic_string *param_4,basic_string *param_5,basic_string *param_6,vector *param_7,
          uint *param_8,CodeStringStream *param_9,ulonglong *param_10,char *param_11)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  Logger *this_00;
  char *pcVar4;
  
  uVar3 = HlslParser::isInitialized((Context *)this);
  if ((uVar3 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    if (param_9 != (CodeStringStream *)0x0) {
      CodeStringStream::writeLine((char *)param_9,"// INPUT PROGRAM\n\n");
      StringStream::pushString((StringStream *)param_9,param_1);
      StringStream::pushString((StringStream *)param_9,"\n\n\n");
    }
    uVar1 = compileProgram(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           param_9,param_10);
    if ((uVar1 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00c06b94 to 00c06b9b has its CatchHandler @ 00c06be8 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c06ba0 to 00c06ba3 has its CatchHandler @ 00c06bd8 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Error: failed compiling shader \'%s\'\n",param_11);
    }
    if (param_9 != (CodeStringStream *)0x0) {
      uVar3 = (ulong)(*(byte *)param_4 >> 1);
      if ((*(byte *)param_4 & 1) != 0) {
        uVar3 = *(ulong *)(param_4 + 2);
      }
      if (uVar3 != 0) {
        CodeStringStream::writeLine((char *)param_9,"// VERTEX SHADER\n\n");
        pcVar4 = *(char **)(param_4 + 4);
        if ((*(byte *)param_4 & 1) == 0) {
          pcVar4 = (char *)((long)param_4 + 1);
        }
        StringStream::pushString((StringStream *)param_9,pcVar4);
        StringStream::pushString((StringStream *)param_9,"\n");
      }
      uVar3 = (ulong)(*(byte *)param_5 >> 1);
      if ((*(byte *)param_5 & 1) != 0) {
        uVar3 = *(ulong *)(param_5 + 2);
      }
      if (uVar3 != 0) {
        CodeStringStream::writeLine((char *)param_9,"// FRAGMENT SHADER\n\n");
        pcVar4 = *(char **)(param_5 + 4);
        if ((*(byte *)param_5 & 1) == 0) {
          pcVar4 = (char *)((long)param_5 + 1);
        }
        StringStream::pushString((StringStream *)param_9,pcVar4);
        StringStream::pushString((StringStream *)param_9,"\n");
      }
      uVar3 = (ulong)(*(byte *)param_6 >> 1);
      if ((*(byte *)param_6 & 1) != 0) {
        uVar3 = *(ulong *)(param_6 + 2);
      }
      if (uVar3 != 0) {
        CodeStringStream::writeLine((char *)param_9,"// COMPUTE SHADER\n\n");
        pcVar4 = *(char **)(param_6 + 4);
        if ((*(byte *)param_6 & 1) == 0) {
          pcVar4 = (char *)((long)param_6 + 1);
        }
        StringStream::pushString((StringStream *)param_9,pcVar4);
        StringStream::pushString((StringStream *)param_9,"\n");
      }
    }
  }
  return uVar1 & 1;
}


