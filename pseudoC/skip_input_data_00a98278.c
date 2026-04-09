// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: skip_input_data
// Entry Point: 00a98278
// Size: 232 bytes
// Signature: undefined __cdecl skip_input_data(jpeg_decompress_struct * param_1, long param_2)


/* JPEGUtil::skip_input_data(jpeg_decompress_struct*, long) */

void JPEGUtil::skip_input_data(jpeg_decompress_struct *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (0 < param_2) {
    plVar3 = *(long **)(param_1 + 0x28);
    lVar2 = plVar3[1];
    plVar4 = plVar3;
    if (lVar2 < param_2) {
      do {
        param_2 = param_2 - lVar2;
        if (plVar4[9] == 0) {
LAB_00a9830c:
          if (*(char *)(plVar4 + 8) == '\0') {
            *(undefined *)plVar4[7] = 0xff;
            *(undefined *)(plVar4[7] + 1) = 0xd9;
          }
        }
        else {
          uVar1 = *(int *)(plVar4 + 10) - *(uint *)((long)plVar4 + 0x54);
          if (0xfff < uVar1) {
            uVar1 = 0x1000;
          }
          memcpy((void *)plVar4[7],(void *)(plVar4[9] + (ulong)*(uint *)((long)plVar4 + 0x54)),
                 (ulong)uVar1);
          *(uint *)((long)plVar4 + 0x54) = *(int *)((long)plVar4 + 0x54) + uVar1;
          if (uVar1 == 0) goto LAB_00a9830c;
          *(undefined *)(plVar4 + 8) = 0;
          *plVar4 = plVar4[7];
          plVar4[1] = (ulong)uVar1;
        }
        lVar2 = plVar3[1];
        if (param_2 <= lVar2) break;
        plVar4 = *(long **)(param_1 + 0x28);
      } while( true );
    }
    *plVar3 = *plVar3 + param_2;
    plVar3[1] = lVar2 - param_2;
  }
  return;
}


