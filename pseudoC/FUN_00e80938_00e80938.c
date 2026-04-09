// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e80938
// Entry Point: 00e80938
// Size: 812 bytes
// Signature: undefined FUN_00e80938(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void FUN_00e80938(long param_1,long param_2,uint param_3,int param_4,undefined8 param_5,int param_6,
                 int param_7,undefined4 param_8,undefined4 param_9)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 auStack_2d0 [6];
  undefined8 uStack_2b8;
  undefined4 auStack_2b0 [4];
  undefined auStack_2a0 [496];
  undefined auStack_b0 [8];
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  int local_8c;
  long local_88;
  uint local_80;
  undefined4 local_7c;
  long local_78;
  undefined4 local_6c;
  long local_68;
  
  uVar7 = (ulong)(param_3 - 1);
  local_88 = tpidr_el0;
  local_68 = *(long *)(local_88 + 0x28);
  iVar6 = -3;
  if (param_3 != 2) {
    iVar6 = (param_3 - 1) * -2 + -2;
  }
  local_8c = param_6;
  if ((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0xa4) != -1)) {
    iVar8 = 0;
    if (param_4 * param_3 != 0) {
      iVar8 = (*(int *)(param_1 + 0x90) * 0x18) / (int)(param_4 * param_3);
    }
    local_8c = 0;
    if (iVar8 != 0) {
      local_8c = (*(int *)(param_1 + 0xa0) * 3) / iVar8;
    }
    if (param_6 <= local_8c) {
      local_8c = param_6;
    }
  }
  iVar8 = 0;
  if (param_3 != 0) {
    iVar8 = (local_8c + iVar6) / (int)param_3;
  }
  iVar6 = 0x4fc;
  if (iVar8 < 0x4fc) {
    iVar6 = iVar8 + 1;
  }
  lVar2 = -((long)(int)(iVar6 * param_3) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_b0 + lVar2;
  puVar10 = auStack_2a0 + lVar2;
  local_98 = param_5;
  local_78 = param_2;
  local_6c = param_8;
  opus_repacketizer_init(puVar10);
  local_9c = *(undefined4 *)(param_1 + 0x88);
  local_a0 = *(undefined4 *)(param_1 + 0x80);
  local_a4 = *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x37a0);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x3790);
  local_a8 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x3770);
  if (local_a4 == 0) {
    *(undefined4 *)(param_1 + 0x3798) = *(undefined4 *)(param_1 + 0x3770);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  local_80 = param_3;
  if (0 < (int)param_3) {
    iVar8 = 0;
    local_7c = param_9;
    if (param_7 == 0) {
      uVar9 = 0;
      do {
        uVar3 = local_6c;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(uint *)(param_1 + 0x3f54) = (uint)(uVar9 < uVar7);
        lVar1 = local_78 + (long)(iVar8 * *(int *)(param_1 + 0x70)) * 2;
        *(undefined4 *)((long)auStack_2b0 + lVar2) = local_7c;
        *(undefined8 *)((long)&uStack_2b8 + lVar2) = 0;
        *(undefined4 *)((long)auStack_2d0 + lVar2 + 0x10) = 0;
        *(undefined4 *)((long)auStack_2d0 + lVar2 + 8) = 0;
        *(undefined4 *)((long)auStack_2d0 + lVar2) = 0;
        iVar4 = opus_encode_native(param_1,lVar1,param_4,puVar11,iVar6,uVar3,0,0);
        if ((iVar4 < 0) || (iVar4 = opus_repacketizer_cat(puVar10,puVar11,iVar4), iVar4 < 0))
        goto LAB_00e80c28;
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + iVar6;
        iVar8 = iVar8 + param_4;
      } while (param_3 != uVar9);
    }
    else {
      uVar9 = 0;
      do {
        uVar3 = local_6c;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(uint *)(param_1 + 0x3f54) = (uint)(uVar9 < uVar7);
        if (uVar7 == uVar9) {
          *(undefined4 *)(param_1 + 0x88) = 0x3ea;
        }
        lVar1 = local_78 + (long)(iVar8 * *(int *)(param_1 + 0x70)) * 2;
        *(undefined4 *)((long)auStack_2b0 + lVar2) = local_7c;
        *(undefined8 *)((long)&uStack_2b8 + lVar2) = 0;
        *(undefined4 *)((long)auStack_2d0 + lVar2 + 0x10) = 0;
        *(undefined4 *)((long)auStack_2d0 + lVar2 + 8) = 0;
        *(undefined4 *)((long)auStack_2d0 + lVar2) = 0;
        iVar4 = opus_encode_native(param_1,lVar1,param_4,puVar11,iVar6,uVar3,0,0);
        if ((iVar4 < 0) || (iVar4 = opus_repacketizer_cat(puVar10,puVar11,iVar4), iVar4 < 0))
        goto LAB_00e80c28;
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + iVar6;
        iVar8 = iVar8 + param_4;
      } while (param_3 != uVar9);
    }
  }
  uVar5 = opus_repacketizer_out_range_impl
                    (puVar10,0,local_80,local_98,local_8c,0,*(int *)(param_1 + 0x94) == 0);
  if ((int)uVar5 < 0) {
LAB_00e80c28:
    uVar5 = 0xfffffffd;
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = local_9c;
    *(undefined4 *)(param_1 + 0x80) = local_a0;
    *(undefined4 *)(param_1 + 0x78) = local_a8;
    *(int *)(param_1 + 0x44) = local_a4;
  }
  if (*(long *)(local_88 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


