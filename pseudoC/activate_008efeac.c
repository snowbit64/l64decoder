// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008efeac
// Size: 76 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* GeoMipMappingTerrain::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool GeoMipMappingTerrain::activate
               (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x180);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x180) = 4;
    uVar1 = initGraphics((GeoMipMappingTerrain *)param_1,(IRenderDevice *)param_2);
    if ((uVar1 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x180);
    }
    else {
      iVar2 = 3;
      *(undefined4 *)(param_1 + 0x180) = 3;
    }
  }
  return iVar2 == 3;
}


