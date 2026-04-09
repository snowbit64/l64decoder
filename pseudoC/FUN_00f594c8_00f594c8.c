// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f594c8
// Entry Point: 00f594c8
// Size: 780 bytes
// Signature: undefined FUN_00f594c8(void)


undefined8 FUN_00f594c8(long param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  double *pdVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int local_94;
  undefined auStack_90 [4];
  int local_8c;
  long local_88;
  int local_7c;
  int iStack_78;
  undefined auStack_74 [4];
  long local_70;
  float local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0x20))
            (*(long **)(param_1 + 8),&local_70,auStack_74,&iStack_78,&local_7c,&local_88,&local_8c,
             auStack_90,&local_94,param_2);
  lVar2 = *(long *)(param_1 + 8);
  piVar5 = (int *)(local_88 + (long)local_8c * (long)param_3);
  lVar4 = (long)local_7c;
  if (iStack_78 == 0) {
    if (local_94 != 3) {
      puVar8 = (undefined8 *)(local_70 + lVar4 * piVar5[2]);
      uVar11 = *puVar8;
      local_40 = *(float *)(lVar2 + 0x10) * *(float *)(puVar8 + 1);
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) *
                          (float)((ulong)uVar11 >> 0x20),
                          (float)*(undefined8 *)(lVar2 + 8) * (float)uVar11);
      puVar8 = (undefined8 *)(local_70 + lVar4 * piVar5[1]);
      uVar11 = *puVar8;
      local_50 = *(float *)(lVar2 + 0x10) * *(float *)(puVar8 + 1);
      local_58 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) *
                          (float)((ulong)uVar11 >> 0x20),
                          (float)*(undefined8 *)(lVar2 + 8) * (float)uVar11);
      uVar6 = (ulong)*piVar5;
    }
    else {
      puVar8 = (undefined8 *)(local_70 + lVar4 * (ulong)*(ushort *)(piVar5 + 1));
      uVar11 = *puVar8;
      local_40 = *(float *)(lVar2 + 0x10) * *(float *)(puVar8 + 1);
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) *
                          (float)((ulong)uVar11 >> 0x20),
                          (float)*(undefined8 *)(lVar2 + 8) * (float)uVar11);
      puVar8 = (undefined8 *)(local_70 + lVar4 * (ulong)*(ushort *)((long)piVar5 + 2));
      uVar11 = *puVar8;
      local_50 = *(float *)(lVar2 + 0x10) * *(float *)(puVar8 + 1);
      local_58 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) *
                          (float)((ulong)uVar11 >> 0x20),
                          (float)*(undefined8 *)(lVar2 + 8) * (float)uVar11);
      uVar6 = (ulong)*(ushort *)piVar5;
    }
    pfVar3 = (float *)(local_70 + lVar4 * uVar6);
    uVar11 = *(undefined8 *)(pfVar3 + 1);
    local_68 = *(float *)(lVar2 + 8) * *pfVar3;
    fVar9 = (float)*(undefined8 *)(lVar2 + 0xc) * (float)uVar11;
    fVar10 = (float)((ulong)*(undefined8 *)(lVar2 + 0xc) >> 0x20) * (float)((ulong)uVar11 >> 0x20);
  }
  else {
    if (local_94 != 3) {
      pdVar7 = (double *)(local_70 + lVar4 * piVar5[2]);
      local_40 = *(float *)(lVar2 + 0x10) * (float)pdVar7[2];
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) * (float)pdVar7[1],
                          (float)*(undefined8 *)(lVar2 + 8) * (float)*pdVar7);
      pdVar7 = (double *)(local_70 + lVar4 * piVar5[1]);
      local_50 = *(float *)(lVar2 + 0x10) * (float)pdVar7[2];
      local_58 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) * (float)pdVar7[1],
                          (float)*(undefined8 *)(lVar2 + 8) * (float)*pdVar7);
      uVar6 = (ulong)*piVar5;
    }
    else {
      pdVar7 = (double *)(local_70 + lVar4 * (ulong)*(ushort *)(piVar5 + 1));
      local_40 = *(float *)(lVar2 + 0x10) * (float)pdVar7[2];
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) * (float)pdVar7[1],
                          (float)*(undefined8 *)(lVar2 + 8) * (float)*pdVar7);
      pdVar7 = (double *)(local_70 + lVar4 * (ulong)*(ushort *)((long)piVar5 + 2));
      local_50 = *(float *)(lVar2 + 0x10) * (float)pdVar7[2];
      local_58 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) * (float)pdVar7[1],
                          (float)*(undefined8 *)(lVar2 + 8) * (float)*pdVar7);
      uVar6 = (ulong)*(ushort *)piVar5;
    }
    pdVar7 = (double *)(local_70 + lVar4 * uVar6);
    local_68 = *(float *)(lVar2 + 8) * (float)*pdVar7;
    fVar9 = (float)*(undefined8 *)(lVar2 + 0xc) * (float)pdVar7[1];
    fVar10 = (float)((ulong)*(undefined8 *)(lVar2 + 0xc) >> 0x20) * (float)pdVar7[2];
  }
  local_3c = 0;
  local_4c = 0;
  local_64 = CONCAT44(fVar10,fVar9);
  local_5c = 0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),&local_68,param_2,param_3);
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


