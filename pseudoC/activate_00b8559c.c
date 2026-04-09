// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00b8559c
// Size: 20 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* DensityMap::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

undefined8
DensityMap::activate(IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  *(undefined4 *)(param_1 + 0x18) = 3;
  return 1;
}


