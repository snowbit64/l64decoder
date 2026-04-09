// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_write_init
// Entry Point: 00a984b8
// Size: 104 bytes
// Signature: undefined __cdecl jpeg_write_init(jpeg_compress_struct * param_1, File * param_2)


/* JPEGUtil::jpeg_write_init(jpeg_compress_struct*, File*) */

void JPEGUtil::jpeg_write_init(jpeg_compress_struct *param_1,File *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = (***(code ***)(param_1 + 8))(param_1,0,0x40);
    *(long *)(param_1 + 0x28) = lVar1;
    *(File **)(lVar1 + 0x38) = param_2;
  }
  *(code **)(lVar1 + 0x10) = init_destination;
  *(code **)(lVar1 + 0x18) = empty_output_buffer;
  *(code **)(lVar1 + 0x20) = term_destination;
  return;
}


