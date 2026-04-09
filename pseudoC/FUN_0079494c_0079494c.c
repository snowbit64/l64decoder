// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079494c
// Entry Point: 0079494c
// Size: 52 bytes
// Signature: undefined FUN_0079494c(void)


void FUN_0079494c(float *param_1)

{
  long lVar1;
  
  lVar1 = EngineManager::getInstance();
  Renderer::setViewport(*(Renderer **)(lVar1 + 0xb8),*param_1,param_1[4],param_1[8],param_1[0xc]);
  return;
}


