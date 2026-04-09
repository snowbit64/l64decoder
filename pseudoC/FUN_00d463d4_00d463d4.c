// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d463d4
// Entry Point: 00d463d4
// Size: 1032 bytes
// Signature: undefined FUN_00d463d4(void)


void FUN_00d463d4(long param_1,long param_2,long param_3,long *param_4,long *param_5,long *param_6,
                 long *param_7)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte *local_80;
  long lStack_78;
  byte local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    local_80 = local_6c;
    lStack_78 = param_2;
    (**(code **)(param_1 + 0x70))(param_1,&lStack_78,param_3,&local_80,(ulong)local_6c | 1);
    uVar4 = (uint)local_6c[0];
    if (local_80 == local_6c) {
      uVar4 = 0xffffffff;
    }
    if ((0x20 < uVar4) || ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) == 0)) {
      uVar2 = 0;
      *param_7 = param_2;
      goto LAB_00d467a8;
    }
    do {
      param_2 = param_2 + *(int *)(param_1 + 0x80);
      local_80 = local_6c;
      lStack_78 = param_2;
      (**(code **)(param_1 + 0x70))(param_1,&lStack_78,param_3,&local_80,(ulong)local_6c | 1);
      uVar4 = (uint)local_6c[0];
      if (local_80 == local_6c) {
        uVar4 = 0xffffffff;
      }
    } while ((uVar4 < 0x21) && ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) != 0));
    if (param_2 != param_3) {
      *param_4 = param_2;
      do {
        local_80 = local_6c;
        lStack_78 = param_2;
        (**(code **)(param_1 + 0x70))(param_1,&lStack_78,param_3,&local_80,(ulong)local_6c | 1);
        uVar4 = (uint)local_6c[0];
        if (local_80 == local_6c) {
          uVar4 = 0xffffffff;
        }
        uVar3 = (ulong)(uVar4 + 1);
        if (uVar4 + 1 < 0x3f) {
          if ((1L << (uVar3 & 0x3f) & 0x200004c00U) != 0) {
            *param_5 = param_2;
            goto LAB_00d46578;
          }
          if (uVar3 == 0) goto LAB_00d4679c;
          if (uVar3 == 0x3e) goto code_r0x00d4654c;
        }
        param_2 = param_2 + *(int *)(param_1 + 0x80);
      } while( true );
    }
  }
  uVar2 = 1;
  *param_4 = 0;
  goto LAB_00d467a8;
code_r0x00d4654c:
  *param_5 = param_2;
LAB_00d465cc:
  if (param_2 != *param_4) {
    param_2 = param_2 + *(int *)(param_1 + 0x80);
    uVar3 = (ulong)local_6c | 1;
    local_80 = local_6c;
    lStack_78 = param_2;
    (**(code **)(param_1 + 0x70))(param_1,&lStack_78,param_3,&local_80,uVar3);
    uVar4 = (uint)local_6c[0];
    if (local_80 == local_6c) {
      uVar4 = 0xffffffff;
    }
    while (uVar4 < 0x28) {
      if ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) == 0) {
        if ((1L << ((ulong)uVar4 & 0x3f) & 0x8400000000U) != 0) {
          param_2 = param_2 + *(int *)(param_1 + 0x80);
          uVar3 = (ulong)local_6c | 1;
          *param_6 = param_2;
          local_80 = local_6c;
          lStack_78 = param_2;
          (**(code **)(param_1 + 0x70))(param_1,&lStack_78,param_3,&local_80,uVar3);
          uVar5 = (uint)local_6c[0];
          if (local_80 == local_6c) {
            uVar5 = 0xffffffff;
          }
          goto joined_r0x00d466ec;
        }
        break;
      }
      param_2 = param_2 + *(int *)(param_1 + 0x80);
      local_80 = local_6c;
      lStack_78 = param_2;
      (**(code **)(param_1 + 0x70))(param_1,&lStack_78,param_3,&local_80,uVar3);
      uVar4 = (uint)local_6c[0];
      if (local_80 == local_6c) {
        uVar4 = 0xffffffff;
      }
    }
    uVar2 = 0;
    *param_7 = param_2;
    goto LAB_00d467a8;
  }
  goto LAB_00d4679c;
joined_r0x00d466ec:
  if (uVar5 != uVar4) {
    if (((0x19 < (uVar5 & 0xffffffdf) - 0x41) && (uVar5 - 0x3a < 0xfffffff6)) &&
       ((0x32 < uVar5 - 0x2d || ((1L << ((ulong)(uVar5 - 0x2d) & 0x3f) & 0x4000000000003U) == 0))))
    goto LAB_00d4679c;
    param_2 = param_2 + *(int *)(param_1 + 0x80);
    local_80 = local_6c;
    lStack_78 = param_2;
    (**(code **)(param_1 + 0x70))(param_1,&lStack_78,param_3,&local_80,uVar3);
    uVar5 = (uint)local_6c[0];
    if (local_80 == local_6c) {
      uVar5 = 0xffffffff;
    }
    goto joined_r0x00d466ec;
  }
  uVar2 = 1;
  *param_7 = param_2 + *(int *)(param_1 + 0x80);
  goto LAB_00d467a8;
  while ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) != 0) {
LAB_00d46578:
    param_2 = param_2 + *(int *)(param_1 + 0x80);
    local_80 = local_6c;
    lStack_78 = param_2;
    (**(code **)(param_1 + 0x70))(param_1,&lStack_78,param_3,&local_80,(ulong)local_6c | 1);
    uVar4 = (uint)local_6c[0];
    if (local_80 == local_6c) {
      uVar4 = 0xffffffff;
    }
    if (0x3d < uVar4) goto LAB_00d4679c;
  }
  if ((ulong)uVar4 == 0x3d) goto LAB_00d465cc;
LAB_00d4679c:
  uVar2 = 0;
  *param_7 = param_2;
LAB_00d467a8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


