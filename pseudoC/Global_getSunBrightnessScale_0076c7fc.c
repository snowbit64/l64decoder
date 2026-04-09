// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Global_getSunBrightnessScale
// Entry Point: 0076c7fc
// Size: 56 bytes
// Signature: undefined __cdecl Global_getSunBrightnessScale(MethodInvocation * param_1)


/* Global_getSunBrightnessScale(MethodInvocation*) */

void Global_getSunBrightnessScale(MethodInvocation *param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


