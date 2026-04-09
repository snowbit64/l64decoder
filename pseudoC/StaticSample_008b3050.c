// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StaticSample
// Entry Point: 008b3050
// Size: 80 bytes
// Signature: undefined __thiscall ~StaticSample(StaticSample * this)


/* non-virtual thunk to StaticSample::~StaticSample() */

void __thiscall StaticSample::~StaticSample(StaticSample *this)

{
  *(undefined ***)this = &PTR__StaticSample_00fdd920;
  *(undefined ***)(this + -0x20) = &PTR__StaticSample_00fdd838;
                    /* try { // try from 008b3078 to 008b307f has its CatchHandler @ 008b30a0 */
  Sample::unload();
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  Sample::~Sample((Sample *)(this + -0x20));
  return;
}


