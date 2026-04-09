// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createInstance
// Entry Point: 00e44850
// Size: 168 bytes
// Signature: undefined createInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::BiquadResonantFilter::createInstance() */

undefined8 * SoLoud::BiquadResonantFilter::createInstance(void)

{
  long in_x0;
  undefined8 *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  this = (undefined8 *)operator_new(200);
  FilterInstance::FilterInstance((FilterInstance *)this);
  this[0x18] = in_x0;
  *(undefined8 *)((long)this + 0x2c) = 0;
  *(undefined8 *)((long)this + 0x24) = 0;
  *(undefined8 *)((long)this + 0x3c) = 0;
  *(undefined8 *)((long)this + 0x34) = 0;
  *(undefined8 *)((long)this + 0x4c) = 0;
  *(undefined8 *)((long)this + 0x44) = 0;
  *(undefined8 *)((long)this + 0x5c) = 0;
  *(undefined8 *)((long)this + 0x54) = 0;
  *this = &PTR_initParams_01013e30;
  uVar2 = *(undefined4 *)(in_x0 + 8);
  *(undefined8 *)((long)this + 0x6c) = 0;
  *(undefined8 *)((long)this + 100) = 0;
  *(undefined8 *)((long)this + 0x7c) = 0;
  *(undefined8 *)((long)this + 0x74) = 0;
  *(undefined8 *)((long)this + 0x8c) = 0;
  *(undefined8 *)((long)this + 0x84) = 0;
  *(undefined8 *)((long)this + 0x9c) = 0;
  *(undefined8 *)((long)this + 0x94) = 0;
  *(undefined4 *)((long)this + 0xbc) = uVar2;
  FilterInstance::initParams((FilterInstance *)this,4);
  puVar1 = (undefined4 *)this[2];
  puVar1[1] = *(undefined4 *)(in_x0 + 0xc);
  puVar1[3] = *(undefined4 *)(in_x0 + 0x14);
  uVar2 = *(undefined4 *)(in_x0 + 0x10);
  *puVar1 = 0x3f800000;
  puVar1[2] = uVar2;
  BiquadResonantFilterInstance::calcBQRParams();
  return this;
}


