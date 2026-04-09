// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007990ac
// Entry Point: 007990ac
// Size: 120 bytes
// Signature: undefined FUN_007990ac(void)


void FUN_007990ac(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x3c);
  uVar2 = *(undefined4 *)(lVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x128) = 4;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  uVar2 = *(undefined4 *)(lVar1 + 0x44);
  *(undefined4 *)(param_1 + 0x138) = 4;
  *(undefined4 *)(param_1 + 0x148) = 4;
  *(undefined4 *)(param_1 + 0x158) = 3;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(lVar1 + 0x48);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(lVar1 + 0x4c);
  *(undefined *)(param_1 + 0x150) = *(undefined *)(lVar1 + 0x6c);
  return;
}


