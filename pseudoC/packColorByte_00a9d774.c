// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: packColorByte
// Entry Point: 00a9d774
// Size: 212 bytes
// Signature: undefined __cdecl packColorByte(uchar param_1, uchar param_2, uchar param_3, uchar param_4, PIXEL_FORMAT param_5, uchar * param_6)


/* PixelFormatUtil::packColorByte(unsigned char, unsigned char, unsigned char, unsigned char,
   PixelFormat::PIXEL_FORMAT, unsigned char*) */

void PixelFormatUtil::packColorByte
               (uchar param_1,uchar param_2,uchar param_3,uchar param_4,PIXEL_FORMAT param_5,
               uchar *param_6)

{
  switch(param_5) {
  case 1:
  case 0x21:
    *param_6 = param_1;
    return;
  case 2:
  case 0x22:
    *param_6 = param_1;
    param_6[1] = param_2;
    return;
  case 3:
    *param_6 = param_1;
    param_6[1] = param_2;
    param_6[2] = param_3;
    return;
  case 4:
    *param_6 = param_3;
    param_6[1] = param_2;
    param_6[2] = param_1;
    return;
  case 5:
  case 0x23:
    *param_6 = param_1;
    param_6[1] = param_2;
    param_6[2] = param_3;
    param_6[3] = param_4;
    return;
  case 6:
    *param_6 = param_3;
    param_6[1] = param_2;
    param_6[2] = param_1;
    param_6[3] = param_4;
    return;
  case 0x1f:
    *(ushort *)param_6 =
         (ushort)(byte)round8to5(unsigned_char)::clamp[(ulong)param_1 + 4 >> 3] << 10 |
         (ushort)((param_4 & 0x80) << 8) |
         (ushort)(byte)round8to5(unsigned_char)::clamp[(ulong)param_2 + 4 >> 3] << 5 |
         (ushort)(byte)round8to5(unsigned_char)::clamp[(ulong)param_3 + 4 >> 3];
  }
  return;
}


