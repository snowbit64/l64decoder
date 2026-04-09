// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: user_flush_data
// Entry Point: 00a99028
// Size: 20 bytes
// Signature: undefined __cdecl user_flush_data(png_struct_def * param_1)


/* PNGUtil::user_flush_data(png_struct_def*) */

void PNGUtil::user_flush_data(png_struct_def *param_1)

{
  png_get_io_ptr();
  CompressedIoUtil::CompressedFileOutput<unsigned_char>::finishWriting();
  return;
}


