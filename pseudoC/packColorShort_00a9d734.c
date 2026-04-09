// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: packColorShort
// Entry Point: 00a9d734
// Size: 64 bytes
// Signature: undefined __cdecl packColorShort(ushort param_1, ushort param_2, ushort param_3, ushort param_4, PIXEL_FORMAT param_5, ushort * param_6)


/* PixelFormatUtil::packColorShort(unsigned short, unsigned short, unsigned short, unsigned short,
   PixelFormat::PIXEL_FORMAT, unsigned short*) */

void PixelFormatUtil::packColorShort
               (ushort param_1,ushort param_2,ushort param_3,ushort param_4,PIXEL_FORMAT param_5,
               ushort *param_6)

{
  if (param_5 == 0x27) {
    *param_6 = param_1;
    param_6[1] = param_2;
    param_6[2] = param_3;
    param_6[3] = param_4;
  }
  else {
    if (param_5 == 0x25) {
      *param_6 = param_1;
      param_6[1] = param_2;
      return;
    }
    if (param_5 == 0x24) {
      *param_6 = param_1;
      return;
    }
  }
  return;
}


