// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCloudQuality
// Entry Point: 009eccec
// Size: 208 bytes
// Signature: undefined __thiscall setCloudQuality(AtmosphereRenderController * this, IRenderDevice * param_1, uint param_2)


/* AtmosphereRenderController::setCloudQuality(IRenderDevice*, unsigned int) */

undefined8 __thiscall
AtmosphereRenderController::setCloudQuality
          (AtmosphereRenderController *this,IRenderDevice *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 < 2) {
    uVar3 = 0x2000000010;
    uVar2 = 0x1000000008;
  }
  else if (param_2 == 2) {
    uVar3 = 0x2000000010;
    uVar2 = 0x4000000030;
  }
  else if (param_2 == 3) {
    uVar3 = 0x2000000010;
    uVar2 = 0x6000000030;
  }
  else {
    uVar3 = 0x3000000018;
    uVar2 = 0x8000000060;
  }
  *(undefined8 *)(this + 0x988) = uVar3;
  *(undefined8 *)(this + 0x980) = uVar2;
  if ((*(uint *)(this + 0x97c) == param_2) ||
     (uVar1 = createCloudShaders(this,param_1,param_2), (uVar1 & 1) != 0)) {
    *(uint *)(this + 0x97c) = param_2;
    if (param_2 != 0) {
      if (*(uint *)(this + 0x954) == 0) {
        return 1;
      }
      if (*(long *)(this + 0x938) != 0) {
        return 1;
      }
      createCloudTextures(this,param_1,*(uint *)(this + 0x954),*(uint *)(this + 0x958),
                          (bool)this[0x994]);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(this + 0x97c) = 0;
  }
  return uVar2;
}


