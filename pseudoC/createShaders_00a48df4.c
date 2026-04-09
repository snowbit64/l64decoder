// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShaders
// Entry Point: 00a48df4
// Size: 196 bytes
// Signature: undefined createShaders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Upscaler::createShaders() */

uint Upscaler::createShaders(void)

{
  uint uVar1;
  int iVar2;
  ShaderStructLayout **in_x0;
  Logger *this;
  
  uVar1 = AdhocShader::load((AdhocShader *)(in_x0 + 0xe),(IRenderDevice *)in_x0[3],"postfx/sgsr.cg",
                            (char *)0x0,0,*in_x0,(uint)((ulong)((long)in_x0[1] - (long)*in_x0) >> 6)
                           );
  if ((uVar1 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00a48e78 to 00a48e7f has its CatchHandler @ 00a48ec8 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00a48e84 to 00a48e87 has its CatchHandler @ 00a48eb8 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Cannot load postfx/sgsr.cg:0\n");
  }
  return uVar1 & 1;
}


