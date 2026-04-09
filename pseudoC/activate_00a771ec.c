// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00a771ec
// Size: 60 bytes
// Signature: undefined __thiscall activate(TerrainTransformGroup * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to TerrainTransformGroup::activate(IRenderDevice*, IAudioDevice*,
   LuauScriptSystem*) */

bool __thiscall
TerrainTransformGroup::activate
          (TerrainTransformGroup *this,IRenderDevice *param_1,IAudioDevice *param_2,
          LuauScriptSystem *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 0) {
    createMaterials(this + -0x160,param_1);
    iVar1 = 3;
    *(undefined4 *)(this + 8) = 3;
  }
  return iVar1 == 3;
}


