// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StaticSample
// Entry Point: 008b2fe8
// Size: 76 bytes
// Signature: undefined __thiscall ~StaticSample(StaticSample * this)


/* StaticSample::~StaticSample() */

void __thiscall StaticSample::~StaticSample(StaticSample *this)

{
  *(undefined ***)this = &PTR__StaticSample_00fdd838;
  *(undefined ***)(this + 0x20) = &PTR__StaticSample_00fdd920;
                    /* try { // try from 008b3010 to 008b3013 has its CatchHandler @ 008b3034 */
  Sample::unload();
  if (((byte)this[0x80] & 1) != 0) {
    operator_delete(*(void **)(this + 0x90));
  }
  Sample::~Sample((Sample *)this);
  return;
}


