// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fill_input_buffer
// Entry Point: 00a981e0
// Size: 152 bytes
// Signature: undefined __cdecl fill_input_buffer(jpeg_decompress_struct * param_1)


/* JPEGUtil::fill_input_buffer(jpeg_decompress_struct*) */

undefined8 JPEGUtil::fill_input_buffer(jpeg_decompress_struct *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2[9] != 0) {
    uVar1 = *(int *)(puVar2 + 10) - *(uint *)((long)puVar2 + 0x54);
    if (0xfff < uVar1) {
      uVar1 = 0x1000;
    }
    memcpy((void *)puVar2[7],(void *)(puVar2[9] + (ulong)*(uint *)((long)puVar2 + 0x54)),
           (ulong)uVar1);
    *(uint *)((long)puVar2 + 0x54) = *(int *)((long)puVar2 + 0x54) + uVar1;
    if (uVar1 != 0) {
      *(undefined *)(puVar2 + 8) = 0;
      *puVar2 = puVar2[7];
      puVar2[1] = (ulong)uVar1;
      return 1;
    }
  }
  if (*(char *)(puVar2 + 8) == '\0') {
    *(undefined *)puVar2[7] = 0xff;
    *(undefined *)(puVar2[7] + 1) = 0xd9;
  }
  return 0;
}


