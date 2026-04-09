// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008bb7bc
// Size: 116 bytes
// Signature: undefined __thiscall activate(SampleChunk * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to SampleChunk::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool __thiscall
SampleChunk::activate
          (SampleChunk *this,IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  long lVar1;
  
  if ((this[0x10] != (SampleChunk)0x0) && (*(int *)(this + 8) == 0)) {
    lVar1 = *(long *)param_2;
    *(undefined4 *)(this + 8) = 4;
    lVar1 = (**(code **)(lVar1 + 0x30))(param_2,this + 0x40);
    *(long *)(this + 0x38) = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)(this + 8) = 3;
    }
    (**(code **)(*(long *)(this + -0x10) + 0x20))(this + -0x10);
  }
  return *(int *)(this + 8) == 3;
}


