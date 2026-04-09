// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798ff8
// Entry Point: 00798ff8
// Size: 76 bytes
// Signature: undefined FUN_00798ff8(void)


void FUN_00798ff8(char **param_1)

{
  PostFxParams *this;
  ulong uVar1;
  long lVar2;
  
  EngineManager::getInstance();
  this = (PostFxParams *)Renderer::getPostFxParams();
  uVar1 = PostFxParams::blendColorGradingParams(this,*param_1,param_1[2],*(float *)(param_1 + 4));
  if ((uVar1 & 1) != 0) {
    lVar2 = EngineManager::getInstance();
    *(undefined *)(*(long *)(lVar2 + 0xb8) + 0xf06) = 1;
  }
  return;
}


