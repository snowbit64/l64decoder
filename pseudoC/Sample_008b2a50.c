// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Sample
// Entry Point: 008b2a50
// Size: 128 bytes
// Signature: undefined __thiscall Sample(Sample * this, char * param_1)


/* Sample::Sample(char const*) */

void __thiscall Sample::Sample(Sample *this,char *param_1)

{
  Entity::Entity((Entity *)this,param_1,true);
                    /* try { // try from 008b2a6c to 008b2a6f has its CatchHandler @ 008b2ad0 */
  Streamable::Streamable((Streamable *)(this + 0x20));
  *(undefined2 *)(this + 0x30) = 0x100;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x20) = &PTR__Sample_00fdd7d0;
  *(undefined ***)this = &PTR__Sample_00fdd6e8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x2000000000;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x58) = 0x3f800000;
  return;
}


