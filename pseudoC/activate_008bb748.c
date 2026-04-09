// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008bb748
// Size: 116 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* SampleChunk::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool SampleChunk::activate(IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  long lVar1;
  
  if ((param_1[0x20] != (IRenderDevice)0x0) && (*(int *)(param_1 + 0x18) == 0)) {
    lVar1 = *(long *)param_3;
    *(undefined4 *)(param_1 + 0x18) = 4;
    lVar1 = (**(code **)(lVar1 + 0x30))(param_3,param_1 + 0x50);
    *(long *)(param_1 + 0x48) = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 3;
    }
    (**(code **)(*(long *)param_1 + 0x20))(param_1);
  }
  return *(int *)(param_1 + 0x18) == 3;
}


