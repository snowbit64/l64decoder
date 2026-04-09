// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00929028
// Size: 28 bytes
// Signature: undefined __thiscall activate(DestructionGeometryShared * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to DestructionGeometryShared::activate(IRenderDevice*, IAudioDevice*,
   LuauScriptSystem*) */

undefined8 __thiscall
DestructionGeometryShared::activate
          (DestructionGeometryShared *this,IRenderDevice *param_1,IAudioDevice *param_2,
          LuauScriptSystem *param_3)

{
  activate((IRenderDevice *)(this + -0x10),(IAudioDevice *)param_1,(LuauScriptSystem *)param_2);
  return 1;
}


