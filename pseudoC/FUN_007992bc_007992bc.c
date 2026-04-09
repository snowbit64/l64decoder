// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007992bc
// Entry Point: 007992bc
// Size: 56 bytes
// Signature: undefined FUN_007992bc(void)


void FUN_007992bc(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x240);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


