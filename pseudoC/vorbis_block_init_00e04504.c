// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_block_init
// Entry Point: 00e04504
// Size: 412 bytes
// Signature: undefined vorbis_block_init(void)


undefined8 vorbis_block_init(int *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  iVar1 = *param_1;
  param_2[0x10] = 0;
  param_2[0xd] = param_1;
  param_2[0xe] = 0;
  if (iVar1 != 0) {
    pvVar2 = calloc(1,0x88);
    param_2[0x17] = pvVar2;
    *(undefined4 *)((long)pvVar2 + 8) = 0xc61c3c00;
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x10) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x18) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x20) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x28) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x30) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x38) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x40) = pvVar3;
    oggpack_writeinit();
    *(undefined8 **)((long)pvVar2 + 0x48) = param_2 + 1;
    oggpack_writeinit(param_2 + 1);
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x50) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x58) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x60) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x68) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x70) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x78) = pvVar3;
    oggpack_writeinit();
    pvVar3 = calloc(1,0x28);
    *(void **)((long)pvVar2 + 0x80) = pvVar3;
    oggpack_writeinit();
  }
  return 0;
}


