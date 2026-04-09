// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008a36c0
// Size: 80 bytes
// Signature: undefined __thiscall activate(LoopSynthesisResource * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to LoopSynthesisResource::activate(IRenderDevice*, IAudioDevice*,
   LuauScriptSystem*) */

bool __thiscall
LoopSynthesisResource::activate
          (LoopSynthesisResource *this,IRenderDevice *param_1,IAudioDevice *param_2,
          LuauScriptSystem *param_3)

{
  if ((this[0x10] != (LoopSynthesisResource)0x0) && (*(int *)(this + 8) == 0)) {
    *(undefined4 *)(this + 8) = 3;
    (**(code **)(*(long *)(this + -0x10) + 0x20))(this + -0x10);
  }
  return *(int *)(this + 8) == 3;
}


