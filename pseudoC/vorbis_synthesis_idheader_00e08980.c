// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_idheader
// Entry Point: 00e08980
// Size: 296 bytes
// Signature: undefined vorbis_synthesis_idheader(void)


void vorbis_synthesis_idheader(undefined8 *param_1)

{
  long lVar1;
  undefined uVar2;
  long lVar3;
  undefined auStack_58 [40];
  undefined4 local_30;
  undefined2 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (undefined8 *)0x0) {
    oggpack_readinit(auStack_58,*param_1,*(undefined4 *)(param_1 + 1));
    if (param_1[2] != 0) {
      lVar3 = oggpack_read(auStack_58,8);
      if (lVar3 == 1) {
        uVar2 = oggpack_read(auStack_58,8);
        local_30 = CONCAT31(local_30._1_3_,uVar2);
        uVar2 = oggpack_read(auStack_58,8);
        local_30._0_2_ = CONCAT11(uVar2,(undefined)local_30);
        uVar2 = oggpack_read(auStack_58,8);
        local_30._0_3_ = CONCAT12(uVar2,(undefined2)local_30);
        uVar2 = oggpack_read(auStack_58,8);
        local_30 = CONCAT13(uVar2,(undefined3)local_30);
        uVar2 = oggpack_read(auStack_58,8);
        local_2c = CONCAT11(local_2c._1_1_,uVar2);
        uVar2 = oggpack_read(auStack_58,8);
        local_2c = CONCAT11(uVar2,(undefined)local_2c);
        param_1 = (undefined8 *)(ulong)((local_30 ^ 0x62726f76 | local_2c ^ 0x7369) == 0);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          return;
        }
      }
      else {
        param_1 = (undefined8 *)0x0;
        if (*(long *)(lVar1 + 0x28) == local_28) {
          return;
        }
      }
      goto LAB_00e08aa4;
    }
    param_1 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_00e08aa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


