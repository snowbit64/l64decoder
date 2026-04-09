// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007995b0
// Entry Point: 007995b0
// Size: 44 bytes
// Signature: undefined FUN_007995b0(void)


void FUN_007995b0(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x2a4) = uVar2;
  return;
}


