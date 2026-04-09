// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPixelFormat
// Entry Point: 00a9d9fc
// Size: 28 bytes
// Signature: undefined __cdecl getPixelFormat(BitmapImage * param_1, bool param_2, char * param_3)


/* PixelFormatUtil::getPixelFormat(BitmapImage const&, bool, char const*) */

void PixelFormatUtil::getPixelFormat(BitmapImage *param_1,bool param_2,char *param_3)

{
  getPixelFormat(*(uint *)(param_1 + 0x14),*(FORMAT *)(param_1 + 0x30),*(TYPE *)(param_1 + 0x34),
                 param_2,param_3);
  return;
}


