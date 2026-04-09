// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createInstance
// Entry Point: 00e3a3e4
// Size: 124 bytes
// Signature: undefined createInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Bus::createInstance() */

undefined8 * SoLoud::Bus::createInstance(void)

{
  uint uVar1;
  long in_x0;
  undefined8 *this;
  
  if (*(int *)(in_x0 + 0xa8) != 0) {
    AudioSource::stop();
    *(undefined4 *)(in_x0 + 0xa8) = 0;
    *(undefined8 *)(in_x0 + 0xa0) = 0;
  }
  this = (undefined8 *)operator_new(0x638);
  AudioSourceInstance::AudioSourceInstance((AudioSourceInstance *)this);
  *this = &PTR__BusInstance_01013d88;
  AlignedFloatBuffer::AlignedFloatBuffer((AlignedFloatBuffer *)(this + 0x40));
  uVar1 = *(uint *)((long)this + 0x14);
  this[0x3e] = in_x0;
  *(undefined4 *)(this + 0x3f) = 0;
  *(undefined8 **)(in_x0 + 0xa0) = this;
  *(uint *)((long)this + 0x14) = uVar1 | 0x41;
  return this;
}


