// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Write_Zip64EndOfCentralDirectoryLocator
// Entry Point: 00e36034
// Size: 272 bytes
// Signature: undefined Write_Zip64EndOfCentralDirectoryLocator(void)


void Write_Zip64EndOfCentralDirectoryLocator(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x10188);
  local_40 = CONCAT44(local_40._4_4_,0x7064b50);
  lVar3 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_40,4);
  if (lVar3 == 4) {
    local_40 = local_40 & 0xffffffff00000000;
    lVar3 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_40,4);
    if (lVar3 == 4) {
      local_40 = param_2 - lVar4;
      lVar3 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_40,8
                        );
      if (lVar3 == 8) {
        local_40 = CONCAT44(local_40._4_4_,1);
        lVar3 = (**(code **)(param_1 + 0x10))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_40
                           ,4);
        iVar2 = -(uint)(lVar3 != 4);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
        goto LAB_00e36118;
      }
    }
  }
  iVar2 = -1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00e36118:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


