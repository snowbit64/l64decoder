// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_encode_bin
// Entry Point: 00e665ec
// Size: 360 bytes
// Signature: undefined ec_encode_bin(void)


void ec_encode_bin(long *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 4);
  iVar5 = -1 << (ulong)(param_4 & 0x1f);
  uVar1 = uVar3 >> (ulong)(param_4 & 0x1f);
  if (param_2 == 0) {
    uVar4 = uVar3 + uVar1 * (iVar5 + param_3);
    *(uint *)(param_1 + 4) = uVar4;
  }
  else {
    uVar4 = uVar1 * (param_3 - param_2);
    *(uint *)(param_1 + 4) = uVar4;
    *(uint *)((long)param_1 + 0x24) =
         uVar3 + uVar1 * (iVar5 + param_2) + *(int *)((long)param_1 + 0x24);
  }
  if (uVar4 < 0x800001) {
    uVar3 = *(uint *)((long)param_1 + 0x24);
    do {
      if (uVar3 >> 0x17 == 0xff) {
        *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
      }
      else {
        cVar2 = -(char)((int)uVar3 >> 0x1f);
        if (-1 < *(int *)((long)param_1 + 0x2c)) {
          uVar1 = *(uint *)((long)param_1 + 0x1c);
          if (*(int *)((long)param_1 + 0xc) + uVar1 < *(uint *)(param_1 + 1)) {
            uVar4 = 0;
            *(uint *)((long)param_1 + 0x1c) = uVar1 + 1;
            *(char *)(*param_1 + (ulong)uVar1) = (char)*(int *)((long)param_1 + 0x2c) + cVar2;
          }
          else {
            uVar4 = 0xffffffff;
          }
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar4;
        }
        iVar5 = *(int *)(param_1 + 5);
        if (iVar5 != 0) {
          do {
            while( true ) {
              uVar1 = *(uint *)((long)param_1 + 0x1c);
              if (*(int *)((long)param_1 + 0xc) + uVar1 < *(uint *)(param_1 + 1)) break;
              iVar5 = iVar5 + -1;
              *(int *)(param_1 + 5) = iVar5;
              *(undefined4 *)(param_1 + 6) = 0xffffffff;
              if (iVar5 == 0) goto LAB_00e66740;
            }
            *(uint *)((long)param_1 + 0x1c) = uVar1 + 1;
            *(char *)(*param_1 + (ulong)uVar1) = cVar2 + -1;
            iVar5 = *(int *)(param_1 + 5) + -1;
            *(int *)(param_1 + 5) = iVar5;
            *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 6);
          } while (iVar5 != 0);
        }
LAB_00e66740:
        uVar1 = uVar3 >> 0x17;
        uVar4 = *(uint *)(param_1 + 4);
        uVar3 = *(uint *)((long)param_1 + 0x24);
        *(uint *)((long)param_1 + 0x2c) = uVar1 & 0xff;
      }
      uVar3 = (uVar3 & 0x7fffff) << 8;
      uVar4 = uVar4 << 8;
      *(uint *)(param_1 + 4) = uVar4;
      *(uint *)((long)param_1 + 0x24) = uVar3;
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 8;
    } while (uVar4 < 0x800001);
  }
  return;
}


