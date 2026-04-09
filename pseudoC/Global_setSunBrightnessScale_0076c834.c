// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Global_setSunBrightnessScale
// Entry Point: 0076c834
// Size: 44 bytes
// Signature: undefined __cdecl Global_setSunBrightnessScale(MethodInvocation * param_1)


/* Global_setSunBrightnessScale(MethodInvocation*) */

void Global_setSunBrightnessScale(MethodInvocation *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x2a8) = uVar2;
  return;
}


