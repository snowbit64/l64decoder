// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Global_setSunSizeScale
// Entry Point: 0076c898
// Size: 44 bytes
// Signature: undefined __cdecl Global_setSunSizeScale(MethodInvocation * param_1)


/* Global_setSunSizeScale(MethodInvocation*) */

void Global_setSunSizeScale(MethodInvocation *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)param_1;
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar1 + 0x2ac) = uVar2;
  return;
}


