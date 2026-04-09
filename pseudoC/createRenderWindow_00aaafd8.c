// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderWindow
// Entry Point: 00aaafd8
// Size: 56 bytes
// Signature: undefined __cdecl createRenderWindow(RenderWindowDesc * param_1)


/* NullRenderDevice::createRenderWindow(RenderWindowDesc&) */

void NullRenderDevice::createRenderWindow(RenderWindowDesc *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  *puVar1 = &PTR__IRenderWindow_00fe5888;
  return;
}


