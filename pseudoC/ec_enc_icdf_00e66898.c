// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_enc_icdf
// Entry Point: 00e66898
// Size: 368 bytes
// Signature: undefined ec_enc_icdf(void)


void ec_enc_icdf(long *param_1,uint param_2,long param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = uVar2 >> (ulong)(param_4 & 0x1f);
  if ((int)param_2 < 1) {
    uVar3 = uVar2 - uVar3 * *(byte *)(param_3 + (int)param_2);
    *(uint *)(param_1 + 4) = uVar3;
  }
  else {
    *(uint *)((long)param_1 + 0x24) =
         (*(int *)((long)param_1 + 0x24) + uVar2) -
         uVar3 * *(byte *)(param_3 + (ulong)(param_2 - 1));
    uVar3 = ((uint)*(byte *)(param_3 + (ulong)(param_2 - 1)) -
            (uint)*(byte *)(param_3 + (ulong)param_2)) * uVar3;
    *(uint *)(param_1 + 4) = uVar3;
  }
  if (uVar3 < 0x800001) {
    uVar2 = *(uint *)((long)param_1 + 0x24);
    do {
      if (uVar2 >> 0x17 == 0xff) {
        *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
      }
      else {
        cVar1 = -(char)((int)uVar2 >> 0x1f);
        if (-1 < *(int *)((long)param_1 + 0x2c)) {
          uVar3 = *(uint *)((long)param_1 + 0x1c);
          if (*(int *)((long)param_1 + 0xc) + uVar3 < *(uint *)(param_1 + 1)) {
            uVar5 = 0;
            *(uint *)((long)param_1 + 0x1c) = uVar3 + 1;
            *(char *)(*param_1 + (ulong)uVar3) = (char)*(int *)((long)param_1 + 0x2c) + cVar1;
          }
          else {
            uVar5 = 0xffffffff;
          }
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar5;
        }
        iVar4 = *(int *)(param_1 + 5);
        if (iVar4 != 0) {
          do {
            while( true ) {
              uVar3 = *(uint *)((long)param_1 + 0x1c);
              if (*(int *)((long)param_1 + 0xc) + uVar3 < *(uint *)(param_1 + 1)) break;
              iVar4 = iVar4 + -1;
              *(int *)(param_1 + 5) = iVar4;
              *(undefined4 *)(param_1 + 6) = 0xffffffff;
              if (iVar4 == 0) goto LAB_00e669f4;
            }
            *(uint *)((long)param_1 + 0x1c) = uVar3 + 1;
            *(char *)(*param_1 + (ulong)uVar3) = cVar1 + -1;
            iVar4 = *(int *)(param_1 + 5) + -1;
            *(int *)(param_1 + 5) = iVar4;
            *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 6);
          } while (iVar4 != 0);
        }
LAB_00e669f4:
        uVar5 = uVar2 >> 0x17;
        uVar3 = *(uint *)(param_1 + 4);
        uVar2 = *(uint *)((long)param_1 + 0x24);
        *(uint *)((long)param_1 + 0x2c) = uVar5 & 0xff;
      }
      uVar2 = (uVar2 & 0x7fffff) << 8;
      uVar3 = uVar3 << 8;
      *(uint *)(param_1 + 4) = uVar3;
      *(uint *)((long)param_1 + 0x24) = uVar2;
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 8;
    } while (uVar3 < 0x800001);
  }
  return;
}


