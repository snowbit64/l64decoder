// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00a69744
// Size: 56 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* FoliageTransformGroup::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool FoliageTransformGroup::activate
               (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1e8);
  if (iVar1 == 0) {
    LocalGeometryTransformGroup::allocateGrid
              ((LocalGeometryTransformGroup *)param_1,(IRenderDevice *)param_2);
    iVar1 = 3;
    *(undefined4 *)(param_1 + 0x1e8) = 3;
  }
  return iVar1 == 3;
}


