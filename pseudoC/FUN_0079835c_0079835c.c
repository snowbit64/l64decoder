// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079835c
// Entry Point: 0079835c
// Size: 40 bytes
// Signature: undefined FUN_0079835c(void)


void FUN_0079835c(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  HardwareScalability::setVolumeMeshTessellationCoeff
            ((HardwareScalability *)(lVar1 + 0x198),*param_1);
  return;
}


