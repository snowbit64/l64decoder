// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Equalizer
// Entry Point: 008b8a34
// Size: 48 bytes
// Signature: undefined __thiscall Equalizer(Equalizer * this, uint param_1)


/* Equalizer::Equalizer(unsigned int) */

void __thiscall Equalizer::Equalizer(Equalizer *this,uint param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
                    /* try { // try from 008b8a54 to 008b8a57 has its CatchHandler @ 008b8a64 */
    std::__ndk1::vector<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>>::__append
              ((vector<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>> *)this,
               (ulong)param_1);
  }
  return;
}


