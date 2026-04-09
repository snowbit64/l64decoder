// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f26eec
// Entry Point: 00f26eec
// Size: 356 bytes
// Signature: undefined FUN_00f26eec(void)


void FUN_00f26eec(long param_1,double *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (*(int *)((long)param_3 + 0xc) == 5) {
    dVar6 = (double)NEON_ucvtf((ulong)*(uint *)(*param_3 + 0x14));
LAB_00f26f60:
    *param_2 = dVar6;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    return;
  }
  if (*(int *)((long)param_3 + 0xc) == 6) {
    lVar5 = *param_3;
    lVar2 = *(long *)(lVar5 + 0x10);
    if (((lVar2 == 0) || ((*(byte *)(lVar2 + 3) >> 6 & 1) != 0)) ||
       (puVar3 = (undefined8 *)
                 FUN_00f197a4(lVar2,6,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb70)),
       puVar3 == (undefined8 *)0x0)) {
      iVar1 = FUN_00f17aac(lVar5);
      dVar6 = (double)iVar1;
      goto LAB_00f26f60;
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_00f197f8(param_1,param_3,6);
  }
  if (*(int *)((long)puVar3 + 0xc) == 0) {
    FUN_00f09b40(param_1,param_3,"get length of");
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 8);
    uVar7 = *puVar3;
    lVar5 = *(long *)(param_1 + 0x30);
    puVar4[1] = puVar3[1];
    *puVar4 = uVar7;
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = *param_3;
    *(long *)(lVar2 + 0x18) = param_3[1];
    *(long *)(lVar2 + 0x10) = lVar8;
    lVar2 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    lVar2 = *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x28) - lVar2 < 0x31) {
      FUN_00f0ab24(param_1,3);
      lVar2 = *(long *)(param_1 + 8);
    }
    *(long *)(param_1 + 8) = lVar2 + 0x30;
    FUN_00f0ac4c(param_1,lVar2,1);
    lVar2 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2 + -0x10;
    puVar3 = (undefined8 *)((long)param_2 + (*(long *)(param_1 + 0x30) - lVar5));
    uVar7 = *(undefined8 *)(lVar2 + -0x10);
    puVar3[1] = *(undefined8 *)(lVar2 + -8);
    *puVar3 = uVar7;
    if (*(int *)((long)puVar3 + 0xc) == 3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f09b70(param_1,"\'__len\' must return a number");
}


