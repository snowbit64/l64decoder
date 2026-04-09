// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007995dc
// Entry Point: 007995dc
// Size: 56 bytes
// Signature: undefined FUN_007995dc(void)


void FUN_007995dc(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


