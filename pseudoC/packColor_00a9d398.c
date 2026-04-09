// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: packColor
// Entry Point: 00a9d398
// Size: 196 bytes
// Signature: undefined __cdecl packColor(uchar param_1, uchar param_2, uchar param_3, uchar param_4, PIXEL_FORMAT param_5, void * param_6)


/* PixelFormatUtil::packColor(unsigned char, unsigned char, unsigned char, unsigned char,
   PixelFormat::PIXEL_FORMAT, void*) */

void PixelFormatUtil::packColor
               (uchar param_1,uchar param_2,uchar param_3,uchar param_4,PIXEL_FORMAT param_5,
               void *param_6)

{
  short sVar1;
  
  if (((byte)s_pixelFormats[(ulong)param_5 * 0x18 + 0xc] >> 2 & 1) != 0) {
    packColorFloat((float)(ulong)param_1 / 255.0,(float)(ulong)param_2 / 255.0,
                   (float)(ulong)param_3 / 255.0,(float)(ulong)param_4 / 255.0,param_5,
                   (float *)param_6);
    return;
  }
  if ((param_5 & 0xfffffffc) == 0x24) {
    sVar1 = (ushort)param_1 << 8;
    if (param_5 == 0x27) {
      *(short *)param_6 = sVar1;
      *(ushort *)((long)param_6 + 2) = (ushort)param_2 << 8;
      *(ushort *)((long)param_6 + 4) = (ushort)param_3 << 8;
      *(ushort *)((long)param_6 + 6) = (ushort)param_4 << 8;
      return;
    }
    if (param_5 == 0x25) {
      *(short *)param_6 = sVar1;
      *(ushort *)((long)param_6 + 2) = (ushort)param_2 << 8;
    }
    else if (param_5 == 0x24) {
      *(short *)param_6 = sVar1;
      return;
    }
    return;
  }
  packColorByte(param_1,param_2,param_3,param_4,param_5,(uchar *)param_6);
  return;
}


