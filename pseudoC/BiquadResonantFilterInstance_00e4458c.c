// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BiquadResonantFilterInstance
// Entry Point: 00e4458c
// Size: 152 bytes
// Signature: undefined __thiscall BiquadResonantFilterInstance(BiquadResonantFilterInstance * this, BiquadResonantFilter * param_1)


/* SoLoud::BiquadResonantFilterInstance::BiquadResonantFilterInstance(SoLoud::BiquadResonantFilter*)
    */

void __thiscall
SoLoud::BiquadResonantFilterInstance::BiquadResonantFilterInstance
          (BiquadResonantFilterInstance *this,BiquadResonantFilter *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FilterInstance::FilterInstance((FilterInstance *)this);
  *(BiquadResonantFilter **)(this + 0xc0) = param_1;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_initParams_01013e30;
  *(undefined4 *)(this + 0xbc) = uVar2;
  FilterInstance::initParams((FilterInstance *)this,4);
  puVar1 = *(undefined4 **)(this + 0x10);
  puVar1[1] = *(undefined4 *)(param_1 + 0xc);
  puVar1[3] = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *puVar1 = 0x3f800000;
  puVar1[2] = uVar2;
  calcBQRParams();
  return;
}


