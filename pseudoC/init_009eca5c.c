// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 009eca5c
// Size: 548 bytes
// Signature: undefined __thiscall init(AtmosphereRenderController * this, IRenderDevice * param_1, uint param_2, uint param_3, uint param_4, bool param_5)


/* AtmosphereRenderController::init(IRenderDevice*, unsigned int, unsigned int, unsigned int, bool)
    */

undefined8 __thiscall
AtmosphereRenderController::init
          (AtmosphereRenderController *this,IRenderDevice *param_1,uint param_2,uint param_3,
          uint param_4,bool param_5)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((*(uint *)(this + 0x954) != param_3) || (*(uint *)(this + 0x958) != param_4)) ||
     (this[0x994] != (AtmosphereRenderController)param_5)) {
    if (*(long **)(this + 0x938) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x938) + 8))();
    }
    if (*(long **)(this + 0x940) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x940) + 8))();
    }
    if (*(long **)(this + 0x948) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x948) + 8))();
    }
    *(undefined8 *)(this + 0x938) = 0;
    *(undefined8 *)(this + 0x940) = 0;
    *(undefined8 *)(this + 0x948) = 0;
    *(uint *)(this + 0x954) = param_3;
    this[0x950] = (AtmosphereRenderController)0x1;
    *(uint *)(this + 0x958) = param_4;
    this[0x994] = (AtmosphereRenderController)param_5;
  }
  if (param_2 < 2) {
    uVar5 = 0x2000000010;
    uVar4 = 0x1000000008;
  }
  else if (param_2 == 2) {
    uVar5 = 0x2000000010;
    uVar4 = 0x4000000030;
  }
  else if (param_2 == 3) {
    uVar5 = 0x2000000010;
    uVar4 = 0x6000000030;
  }
  else {
    uVar5 = 0x3000000018;
    uVar4 = 0x8000000060;
  }
  *(undefined8 *)(this + 0x988) = uVar5;
  *(undefined8 *)(this + 0x980) = uVar4;
  if ((*(uint *)(this + 0x97c) == param_2) ||
     (uVar2 = createCloudShaders(this,param_1,param_2), (uVar2 & 1) != 0)) {
    *(uint *)(this + 0x97c) = param_2;
    if ((param_2 != 0) && ((*(uint *)(this + 0x954) != 0 && (*(long *)(this + 0x938) == 0)))) {
      createCloudTextures(this,param_1,*(uint *)(this + 0x954),*(uint *)(this + 0x958),
                          (bool)this[0x994]);
    }
    plVar3 = *(long **)(this + 0x938);
    bVar1 = plVar3 == (long *)0x0;
    if (((*(uint *)(this + 0x954) != param_3) || (*(uint *)(this + 0x958) != param_4)) ||
       (this[0x994] != (AtmosphereRenderController)param_5)) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
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
      *(uint *)(this + 0x954) = param_3;
      this[0x950] = (AtmosphereRenderController)0x1;
      *(uint *)(this + 0x958) = param_4;
      this[0x994] = (AtmosphereRenderController)param_5;
    }
    uVar4 = 1;
    if ((*(int *)(this + 0x97c) != 0) && (bVar1)) {
      createCloudTextures(this,param_1,param_3,param_4,param_5);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
    *(undefined4 *)(this + 0x97c) = 0;
  }
  return uVar4;
}


