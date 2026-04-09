// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlocksBC7Y
// Entry Point: 00a95868
// Size: 72 bytes
// Signature: undefined __cdecl flipBlocksBC7Y(uchar * param_1, uint param_2, bool * param_3)


/* ImageUtil::flipBlocksBC7Y(unsigned char*, unsigned int, bool&) */

void ImageUtil::flipBlocksBC7Y(uchar *param_1,uint param_2,bool *param_3)

{
  if (param_2 != 0) {
    do {
      BC6BC7Util::flipBlockBC7Y(param_1,param_3);
      param_1 = param_1 + 0x10;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}


