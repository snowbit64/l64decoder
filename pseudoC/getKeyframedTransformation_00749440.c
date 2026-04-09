// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getKeyframedTransformation
// Entry Point: 00749440
// Size: 12 bytes
// Signature: undefined __thiscall getKeyframedTransformation(Clip * this, int param_1)


/* Clip::getKeyframedTransformation(int) */

undefined8 __thiscall Clip::getKeyframedTransformation(Clip *this,int param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x20) + (long)param_1 * 8);
}


