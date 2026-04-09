// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798f60
// Entry Point: 00798f60
// Size: 116 bytes
// Signature: undefined FUN_00798f60(void)


void FUN_00798f60(long param_1)

{
  long lVar1;
  float fVar2;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x38);
  fVar2 = *(float *)(lVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x108) = 4;
  fVar2 = log2f(fVar2 / *(float *)(lVar1 + 8));
  *(float *)(param_1 + 0x110) = fVar2;
  fVar2 = *(float *)(lVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x118) = 4;
  fVar2 = log2f(fVar2 / *(float *)(lVar1 + 0xc));
  *(undefined4 *)(param_1 + 0x128) = 4;
  *(float *)(param_1 + 0x120) = fVar2;
  return;
}


