// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setResolveTextureResolution
// Entry Point: 009ecdbc
// Size: 264 bytes
// Signature: undefined __thiscall setResolveTextureResolution(AtmosphereRenderController * this, IRenderDevice * param_1, uint param_2, uint param_3, bool param_4)


/* AtmosphereRenderController::setResolveTextureResolution(IRenderDevice*, unsigned int, unsigned
   int, bool) */

void __thiscall
AtmosphereRenderController::setResolveTextureResolution
          (AtmosphereRenderController *this,IRenderDevice *param_1,uint param_2,uint param_3,
          bool param_4)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x938);
  bVar1 = plVar2 == (long *)0x0;
  if (((*(uint *)(this + 0x954) != param_2) || (*(uint *)(this + 0x958) != param_3)) ||
     (this[0x994] != (AtmosphereRenderController)param_4)) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (*(long **)(this + 0x940) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x940) + 8))();
    }
    if (*(long **)(this + 0x948) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x948) + 8))();
    }
    bVar1 = true;
    *(undefined8 *)(this + 0x938) = 0;
    *(undefined8 *)(this + 0x940) = 0;
    *(undefined8 *)(this + 0x948) = 0;
    *(uint *)(this + 0x954) = param_2;
    this[0x950] = (AtmosphereRenderController)0x1;
    *(uint *)(this + 0x958) = param_3;
    this[0x994] = (AtmosphereRenderController)param_4;
  }
  if ((*(int *)(this + 0x97c) != 0) && (bVar1)) {
    createCloudTextures(this,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


