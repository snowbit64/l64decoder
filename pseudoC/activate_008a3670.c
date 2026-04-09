// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008a3670
// Size: 80 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* LoopSynthesisResource::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool LoopSynthesisResource::activate
               (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  if ((param_1[0x20] != (IRenderDevice)0x0) && (*(int *)(param_1 + 0x18) == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 3;
    (**(code **)(*(long *)param_1 + 0x20))(param_1);
  }
  return *(int *)(param_1 + 0x18) == 3;
}


