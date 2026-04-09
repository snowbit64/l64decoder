// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_headerin
// Entry Point: 00e08aa8
// Size: 420 bytes
// Signature: undefined vorbis_synthesis_headerin(void)


void vorbis_synthesis_headerin(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined auStack_78 [40];
  undefined4 local_50;
  undefined2 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    oggpack_readinit(auStack_78,*param_3,*(undefined4 *)(param_3 + 1));
    iVar3 = oggpack_read(auStack_78,8);
    uVar2 = oggpack_read(auStack_78,8);
    local_50 = CONCAT31(local_50._1_3_,uVar2);
    uVar2 = oggpack_read(auStack_78,8);
    local_50._0_2_ = CONCAT11(uVar2,(undefined)local_50);
    uVar2 = oggpack_read(auStack_78,8);
    local_50._0_3_ = CONCAT12(uVar2,(undefined2)local_50);
    uVar2 = oggpack_read(auStack_78,8);
    local_50 = CONCAT13(uVar2,(undefined3)local_50);
    uVar2 = oggpack_read(auStack_78,8);
    local_4c = CONCAT11(local_4c._1_1_,uVar2);
    uVar2 = oggpack_read(auStack_78,8);
    local_4c = CONCAT11(uVar2,(undefined)local_4c);
    if ((local_50 ^ 0x62726f76 | local_4c ^ 0x7369) != 0) {
      uVar4 = 0xffffff7c;
      goto LAB_00e08c08;
    }
    if (iVar3 == 5) {
      if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
        if (*(long *)(param_1 + 0x30) == 0) {
          uVar4 = 0xffffff7f;
          goto LAB_00e08c08;
        }
        if (*(int *)(*(long *)(param_1 + 0x30) + 0x20) < 1) {
          uVar4 = FUN_00e08f70(param_1,auStack_78);
          goto LAB_00e08c08;
        }
      }
    }
    else if (iVar3 == 3) {
      if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_2 + 0x18) == 0)) {
        uVar4 = FUN_00e08db0(param_2,auStack_78);
        goto LAB_00e08c08;
      }
    }
    else if (((iVar3 == 1) && (param_3[2] != 0)) && (*(long *)(param_1 + 8) == 0)) {
      uVar4 = FUN_00e08c4c(param_1,auStack_78);
      goto LAB_00e08c08;
    }
  }
  uVar4 = 0xffffff7b;
LAB_00e08c08:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


