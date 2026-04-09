// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImagePlanePixelsPerMeter
// Entry Point: 00a05758
// Size: 52 bytes
// Signature: undefined __thiscall getImagePlanePixelsPerMeter(TransformArgs * this, uint param_1, uint param_2)


/* TransformArgs::getImagePlanePixelsPerMeter(unsigned int, unsigned int) const */

float __thiscall
TransformArgs::getImagePlanePixelsPerMeter(TransformArgs *this,uint param_1,uint param_2)

{
  return ((float)(ulong)param_1 / (2.0 / *(float *)(this + 0x80)) +
         (float)(ulong)param_2 / (2.0 / *(float *)(this + 0x94))) * 0.5;
}


