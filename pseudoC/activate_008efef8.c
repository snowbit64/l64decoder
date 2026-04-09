// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008efef8
// Size: 80 bytes
// Signature: undefined __thiscall activate(GeoMipMappingTerrain * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to GeoMipMappingTerrain::activate(IRenderDevice*, IAudioDevice*,
   LuauScriptSystem*) */

bool __thiscall
GeoMipMappingTerrain::activate
          (GeoMipMappingTerrain *this,IRenderDevice *param_1,IAudioDevice *param_2,
          LuauScriptSystem *param_3)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 8);
  if (iVar2 == 0) {
    *(undefined4 *)(this + 8) = 4;
    uVar1 = initGraphics(this + -0x178,param_1);
    if ((uVar1 & 1) == 0) {
      iVar2 = *(int *)(this + 8);
    }
    else {
      iVar2 = 3;
      *(undefined4 *)(this + 8) = 3;
    }
  }
  return iVar2 == 3;
}


