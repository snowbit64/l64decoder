// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init_destination
// Entry Point: 00a98414
// Size: 60 bytes
// Signature: undefined __cdecl init_destination(jpeg_compress_struct * param_1)


/* JPEGUtil::init_destination(jpeg_compress_struct*) */

void JPEGUtil::init_destination(jpeg_compress_struct *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = (***(code ***)(param_1 + 8))(param_1,1,0x1000);
  *puVar2 = uVar1;
  puVar2[1] = 0x1000;
  puVar2[5] = uVar1;
  return;
}


