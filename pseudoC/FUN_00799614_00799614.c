// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799614
// Entry Point: 00799614
// Size: 60 bytes
// Signature: undefined FUN_00799614(void)


void FUN_00799614(undefined4 *param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fmin(*param_1,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(float *)(lVar1 + 0x268) = fVar2;
  return;
}


