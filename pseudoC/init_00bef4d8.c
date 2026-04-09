// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00bef4d8
// Size: 492 bytes
// Signature: undefined __thiscall init(ShaderManager * this, bool param_1, IShaderCompiler * param_2, IShaderCreator * param_3, char * param_4, char * param_5, char * param_6)


/* ShaderManager::init(bool, IShaderCompiler*, IShaderCreator*, char const*, char const*, char
   const*) */

undefined8 __thiscall
ShaderManager::init(ShaderManager *this,bool param_1,IShaderCompiler *param_2,
                   IShaderCreator *param_3,char *param_4,char *param_5,char *param_6)

{
  int iVar1;
  ShaderCapabilities *pSVar2;
  long lVar3;
  CompiledShaderArchive *this_00;
  char *pcVar4;
  
  if (*(long *)this == 0) {
    *(IShaderCompiler **)(this + 0x10) = param_2;
    if (param_2 != (IShaderCompiler *)0x0) {
      pSVar2 = (ShaderCapabilities *)(**(code **)(*(long *)param_2 + 0x10))(param_2);
      *(ShaderCapabilities **)(this + 0x18) = pSVar2;
      lVar3 = createShaderConverter(pSVar2,param_5,param_6);
      *(long *)(this + 0x88) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      this_00 = (CompiledShaderArchive *)operator_new(0x140);
                    /* try { // try from 00bef584 to 00bef58f has its CatchHandler @ 00bef6e4 */
      CompiledShaderArchive::CompiledShaderArchive(this_00,param_2,param_3);
      *(CompiledShaderArchive **)this = this_00;
      if (param_4 != (char *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + 0x40));
      }
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,param_1),
       iVar1 != 0)) {
                    /* try { // try from 00bef644 to 00bef64f has its CatchHandler @ 00bef6c8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: No shader compiler for platform.\n");
    *(undefined8 *)(this + 0x18) = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00bef68c to 00bef697 has its CatchHandler @ 00bef6c4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "Error: Could not determine local platform ShaderCapabilities\n";
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,param_1),
       iVar1 != 0)) {
                    /* try { // try from 00bef5fc to 00bef607 has its CatchHandler @ 00bef6cc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "Error: Called ShaderManager init while it is already initialized\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar4);
  return 0;
}


