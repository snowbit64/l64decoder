// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_tRNS
// Entry Point: 00dc31d4
// Size: 340 bytes
// Signature: undefined png_set_tRNS(void)


void png_set_tRNS(long param_1,long param_2,void *param_3,uint param_4,undefined8 *param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  void *__dest;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (param_3 != (void *)0x0) {
    png_free_data(param_1,param_2,0x2000,0);
    if (param_4 - 1 < 0x100) {
      __dest = (void *)png_malloc(param_1,0x100);
      *(void **)(param_2 + 0xb8) = __dest;
      memcpy(__dest,param_3,(ulong)param_4);
    }
    else {
      __dest = *(void **)(param_2 + 0xb8);
    }
    *(void **)(param_1 + 800) = __dest;
  }
  if (param_5 == (undefined8 *)0x0) {
    *(short *)(param_2 + 0x22) = (short)param_4;
    if (param_4 == 0) {
      return;
    }
    goto LAB_00dc32fc;
  }
  if (*(byte *)(param_2 + 0x24) < 0x10) {
    uVar3 = ~(-1 << (ulong)(*(byte *)(param_2 + 0x24) & 0x1f));
    if (*(char *)(param_2 + 0x25) == '\x02') {
      if (((int)(uint)*(ushort *)((long)param_5 + 2) <= (int)uVar3) &&
         ((int)(uint)*(ushort *)((long)param_5 + 4) <= (int)uVar3)) {
        uVar1 = *(ushort *)((long)param_5 + 6);
        goto joined_r0x00dc32cc;
      }
LAB_00dc32d0:
      png_warning(param_1,"tRNS chunk has out-of-range samples for bit_depth");
    }
    else if (*(char *)(param_2 + 0x25) == '\0') {
      uVar1 = *(ushort *)(param_5 + 1);
joined_r0x00dc32cc:
      if ((int)uVar3 < (int)(uint)uVar1) goto LAB_00dc32d0;
    }
  }
  uVar2 = *(undefined2 *)(param_5 + 1);
  if (param_4 == 0) {
    param_4 = 1;
  }
  *(undefined8 *)(param_2 + 0xc0) = *param_5;
  *(undefined2 *)(param_2 + 200) = uVar2;
  *(short *)(param_2 + 0x22) = (short)param_4;
LAB_00dc32fc:
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
  *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x2000;
  return;
}


