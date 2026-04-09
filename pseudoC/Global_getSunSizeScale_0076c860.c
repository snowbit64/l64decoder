// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Global_getSunSizeScale
// Entry Point: 0076c860
// Size: 56 bytes
// Signature: undefined __cdecl Global_getSunSizeScale(MethodInvocation * param_1)


/* Global_getSunSizeScale(MethodInvocation*) */

void Global_getSunSizeScale(MethodInvocation *param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x2ac);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


