// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BandDistortion
// Entry Point: 008b78f8
// Size: 104 bytes
// Signature: undefined __thiscall BandDistortion(BandDistortion * this)


/* BandDistortion::BandDistortion() */

void __thiscall BandDistortion::BandDistortion(BandDistortion *this)

{
  *(undefined8 *)this = 0;
  Distortion::Distortion((Distortion *)(this + 8));
                    /* try { // try from 008b7924 to 008b792b has its CatchHandler @ 008b7990 */
  Distortion::Distortion((Distortion *)(this + 0x14));
                    /* try { // try from 008b7930 to 008b7937 has its CatchHandler @ 008b7980 */
  Distortion::Distortion((Distortion *)(this + 0x20));
                    /* try { // try from 008b793c to 008b7943 has its CatchHandler @ 008b7970 */
  BiquadResonantFilter::BiquadResonantFilter((BiquadResonantFilter *)(this + 0x2c));
                    /* try { // try from 008b7948 to 008b794b has its CatchHandler @ 008b7960 */
  BiquadResonantFilter::BiquadResonantFilter((BiquadResonantFilter *)(this + 100));
  return;
}


