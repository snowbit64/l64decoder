// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_read_init
// Entry Point: 00a98364
// Size: 176 bytes
// Signature: undefined __cdecl jpeg_read_init(jpeg_decompress_struct * param_1, uchar * param_2, uint param_3)


/* JPEGUtil::jpeg_read_init(jpeg_decompress_struct*, unsigned char*, unsigned int) */

void JPEGUtil::jpeg_read_init(jpeg_decompress_struct *param_1,uchar *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  code *pcVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    lVar1 = (***(code ***)(param_1 + 8))(param_1,0,0x58);
    ppcVar4 = *(code ***)(param_1 + 8);
    *(long *)(param_1 + 0x28) = lVar1;
    *(uchar **)(lVar1 + 0x48) = param_2;
    pcVar5 = *ppcVar4;
    *(uint *)(lVar1 + 0x50) = param_3;
    *(undefined4 *)(lVar1 + 0x54) = 0;
    uVar2 = (*pcVar5)(param_1,0,0x1000);
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
  }
  puVar3[2] = init_source;
  puVar3[3] = fill_input_buffer;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = skip_input_data;
  puVar3[5] = jpeg_resync_to_restart;
  puVar3[6] = term_source;
  return;
}


