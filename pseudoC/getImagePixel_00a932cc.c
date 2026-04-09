// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImagePixel
// Entry Point: 00a932cc
// Size: 28 bytes
// Signature: undefined __thiscall getImagePixel(ImageScale * this, uint param_1, uint param_2, uint param_3)


/* ImageScale::getImagePixel(unsigned int, unsigned int, unsigned int) const */

undefined __thiscall
ImageScale::getImagePixel(ImageScale *this,uint param_1,uint param_2,uint param_3)

{
  return *(undefined *)
          (*(long *)this +
          (ulong)(param_3 + (param_1 + *(int *)(this + 8) * param_2) * *(int *)(this + 0x10)));
}


