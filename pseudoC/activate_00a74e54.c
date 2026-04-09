// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00a74e54
// Size: 8 bytes
// Signature: undefined __thiscall activate(TerrainLayerTransformGroup * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to TerrainLayerTransformGroup::activate(IRenderDevice*, IAudioDevice*,
   LuauScriptSystem*) */

void __thiscall
TerrainLayerTransformGroup::activate
          (TerrainLayerTransformGroup *this,IRenderDevice *param_1,IAudioDevice *param_2,
          LuauScriptSystem *param_3)

{
  activate((IRenderDevice *)(this + -0x1e0),(IAudioDevice *)param_1,(LuauScriptSystem *)param_2);
  return;
}


