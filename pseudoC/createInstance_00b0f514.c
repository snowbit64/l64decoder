// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createInstance
// Entry Point: 00b0f514
// Size: 104 bytes
// Signature: undefined createInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioEffectBus::createInstance() */

undefined8 * SoftAudioEffectBus::createInstance(void)

{
  Bus *in_x0;
  undefined8 *this;
  
  if (*(long *)(in_x0 + 0xa0) == 0) {
    this = (undefined8 *)operator_new(0x660);
                    /* try { // try from 00b0f540 to 00b0f547 has its CatchHandler @ 00b0f58c */
    SoLoud::BusInstance::BusInstance((BusInstance *)this,in_x0);
    *this = &PTR__SoftAudioEffectBusInstance_00fe7b18;
                    /* try { // try from 00b0f55c to 00b0f55f has its CatchHandler @ 00b0f57c */
    SoLoud::AlignedFloatBuffer::AlignedFloatBuffer((AlignedFloatBuffer *)(this + 0xc9));
    this[199] = in_x0;
    *(undefined4 *)(this + 200) = 0;
    *(undefined8 **)(in_x0 + 0xa0) = this;
  }
  else {
    this = (undefined8 *)0x0;
  }
  return this;
}


