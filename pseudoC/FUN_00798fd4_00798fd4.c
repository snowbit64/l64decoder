// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798fd4
// Entry Point: 00798fd4
// Size: 36 bytes
// Signature: undefined FUN_00798fd4(void)


void FUN_00798fd4(void)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined *)(lVar1 + 0x28) = 1;
  return;
}


