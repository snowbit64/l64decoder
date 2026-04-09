// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaders
// Entry Point: 00a6d420
// Size: 196 bytes
// Signature: undefined __thiscall compileShaders(FullScreenRenderController * this, IRenderDevice * param_1)


/* FullScreenRenderController::compileShaders(IRenderDevice*) */

undefined8 __thiscall
FullScreenRenderController::compileShaders(FullScreenRenderController *this,IRenderDevice *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  Logger *this_00;
  
  if ((*(long *)(this + 0x50) == 0) &&
     (uVar2 = AdhocShader::load((AdhocShader *)(this + 0x48),param_1,"copyTile.cg",(char *)0x0,0,
                                (ShaderStructLayout *)0x0,0), (uVar2 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00a6d4a4 to 00a6d4ab has its CatchHandler @ 00a6d4f4 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a6d4b0 to 00a6d4b3 has its CatchHandler @ 00a6d4e4 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Cannot load copyTile.cg\n");
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


