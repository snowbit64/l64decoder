// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: empty_output_buffer
// Entry Point: 00a98450
// Size: 68 bytes
// Signature: undefined __cdecl empty_output_buffer(jpeg_compress_struct * param_1)


/* JPEGUtil::empty_output_buffer(jpeg_compress_struct*) */

undefined8 JPEGUtil::empty_output_buffer(jpeg_compress_struct *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  (**(code **)(*(long *)puVar1[7] + 0x30))((long *)puVar1[7],puVar1[5],0x1000);
  *puVar1 = puVar1[5];
  puVar1[1] = 0x1000;
  return 1;
}


