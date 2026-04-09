// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StaticSample
// Entry Point: 008b30bc
// Size: 84 bytes
// Signature: undefined __thiscall ~StaticSample(StaticSample * this)


/* StaticSample::~StaticSample() */

void __thiscall StaticSample::~StaticSample(StaticSample *this)

{
  *(undefined ***)this = &PTR__StaticSample_00fdd838;
  *(undefined ***)(this + 0x20) = &PTR__StaticSample_00fdd920;
                    /* try { // try from 008b30e4 to 008b30e7 has its CatchHandler @ 008b3110 */
  Sample::unload();
  if (((byte)this[0x80] & 1) != 0) {
    operator_delete(*(void **)(this + 0x90));
  }
  Sample::~Sample((Sample *)this);
  operator_delete(this);
  return;
}


