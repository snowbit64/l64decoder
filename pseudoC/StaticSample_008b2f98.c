// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticSample
// Entry Point: 008b2f98
// Size: 80 bytes
// Signature: undefined __thiscall StaticSample(StaticSample * this, char * param_1)


/* StaticSample::StaticSample(char const*) */

void __thiscall StaticSample::StaticSample(StaticSample *this,char *param_1)

{
  Sample::Sample((Sample *)this,param_1);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined ***)this = &PTR__StaticSample_00fdd838;
  *(undefined ***)(this + 0x20) = &PTR__StaticSample_00fdd920;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x4000000000;
  return;
}


