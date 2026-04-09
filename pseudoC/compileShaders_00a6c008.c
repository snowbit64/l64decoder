// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaders
// Entry Point: 00a6c008
// Size: 336 bytes
// Signature: undefined __thiscall compileShaders(DensityAnimationMap * this, IRenderDevice * param_1)


/* DensityAnimationMap::compileShaders(IRenderDevice*) */

undefined8 __thiscall
DensityAnimationMap::compileShaders(DensityAnimationMap *this,IRenderDevice *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  
  if ((*(long *)(this + 200) == 0) &&
     (uVar2 = AdhocShader::load((AdhocShader *)(this + 0xc0),param_1,"foliage_update.cg",(char *)0x0
                                ,0,*(ShaderStructLayout **)(this + 0xa8),
                                (uint)((ulong)(*(long *)(this + 0xb0) -
                                              (long)*(ShaderStructLayout **)(this + 0xa8)) >> 6)),
     (uVar2 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 == 0)) {
      pcVar3 = "Error: Cannot load foliage_update.cg\n";
      goto LAB_00a6c0c0;
    }
                    /* try { // try from 00a6c0ec to 00a6c0f7 has its CatchHandler @ 00a6c15c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    pcVar3 = "Error: Cannot load foliage_update.cg\n";
  }
  else {
    if ((*(long *)(this + 0x1c8) != 0) ||
       (uVar2 = AdhocShader::load((AdhocShader *)(this + 0x1c0),param_1,"foliage_affectCrops.cg",
                                  (char *)0x0,0,*(ShaderStructLayout **)(this + 0xa8),
                                  (uint)((ulong)(*(long *)(this + 0xb0) -
                                                (long)*(ShaderStructLayout **)(this + 0xa8)) >> 6)),
       (uVar2 & 1) != 0)) {
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 == 0)) {
      pcVar3 = "Error: Cannot load foliage_affectCrops.cg\n";
      goto LAB_00a6c0c0;
    }
                    /* try { // try from 00a6c114 to 00a6c11f has its CatchHandler @ 00a6c158 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    pcVar3 = "Error: Cannot load foliage_affectCrops.cg\n";
  }
  __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
               &PTR_LOOP_00fd8de0);
  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
LAB_00a6c0c0:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar3);
  return 0;
}


