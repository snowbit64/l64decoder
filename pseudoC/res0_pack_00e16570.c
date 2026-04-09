// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res0_pack
// Entry Point: 00e16570
// Size: 360 bytes
// Signature: undefined res0_pack(void)


void res0_pack(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  oggpack_write(param_2,*param_1,0x18);
  oggpack_write(param_2,param_1[1],0x18);
  oggpack_write(param_2,(long)*(int *)(param_1 + 2) + -1,0x18);
  oggpack_write(param_2,(long)*(int *)((long)param_1 + 0x14) + -1,6);
  oggpack_write(param_2,(long)*(int *)((long)param_1 + 0x1c),8);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      iVar2 = ov_ilog(*(undefined4 *)((long)param_1 + lVar7 * 4 + 0x20));
      lVar3 = (long)*(int *)((long)param_1 + lVar7 * 4 + 0x20);
      if (iVar2 < 4) {
        oggpack_write(param_2,lVar3,4);
        uVar4 = *(uint *)((long)param_1 + lVar7 * 4 + 0x20);
        if (uVar4 == 0) goto LAB_00e16600;
LAB_00e16680:
        iVar2 = 0;
        do {
          iVar2 = (uVar4 & 1) + iVar2;
          bVar1 = 1 < uVar4;
          uVar4 = uVar4 >> 1;
        } while (bVar1);
      }
      else {
        oggpack_write(param_2,lVar3,3);
        oggpack_write(param_2,1,1);
        oggpack_write(param_2,(long)((ulong)*(uint *)((long)param_1 + lVar7 * 4 + 0x20) << 0x20) >>
                              0x23,5);
        uVar4 = *(uint *)((long)param_1 + lVar7 * 4 + 0x20);
        if (uVar4 != 0) goto LAB_00e16680;
LAB_00e16600:
        iVar2 = 0;
      }
      uVar4 = iVar2 + (int)uVar6;
      uVar6 = (ulong)uVar4;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_1 + 0x14));
    if (0 < (int)uVar4) {
      puVar5 = param_1 + 0x24;
      do {
        oggpack_write(param_2,(long)*(int *)puVar5,8);
        uVar6 = uVar6 - 1;
        puVar5 = (undefined8 *)((long)puVar5 + 4);
      } while (uVar6 != 0);
    }
  }
  return;
}


