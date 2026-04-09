// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: user_write_data
// Entry Point: 00a98e94
// Size: 80 bytes
// Signature: undefined __cdecl user_write_data(png_struct_def * param_1, uchar * param_2, ulong param_3)


/* PNGUtil::user_write_data(png_struct_def*, unsigned char*, unsigned long) */

void PNGUtil::user_write_data(png_struct_def *param_1,uchar *param_2,ulong param_3)

{
  CompressedFileOutput<unsigned_char> *this;
  ulong uVar1;
  
  this = (CompressedFileOutput<unsigned_char> *)png_get_io_ptr();
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar(this,param_2[uVar1]);
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < param_3);
  }
  return;
}


