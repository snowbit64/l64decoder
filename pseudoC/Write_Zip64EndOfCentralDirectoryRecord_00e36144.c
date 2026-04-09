// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Write_Zip64EndOfCentralDirectoryRecord
// Entry Point: 00e36144
// Size: 508 bytes
// Signature: undefined Write_Zip64EndOfCentralDirectoryRecord(void)


void Write_Zip64EndOfCentralDirectoryRecord(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = CONCAT44(local_50._4_4_,0x6064b50);
  lVar3 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,4);
  if (lVar3 == 4) {
    local_50 = 0x2c;
    lVar3 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,8);
    if (lVar3 == 8) {
      local_50 = CONCAT62(local_50._2_6_,0x2d);
      lVar3 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2
                        );
      if (lVar3 == 2) {
        local_50 = CONCAT62(local_50._2_6_,0x2d);
        lVar3 = (**(code **)(param_1 + 0x10))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50
                           ,2);
        if (lVar3 == 2) {
          local_50 = local_50 & 0xffffffff00000000;
          lVar3 = (**(code **)(param_1 + 0x10))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                             &local_50,4);
          if (lVar3 == 4) {
            local_50 = local_50 & 0xffffffff00000000;
            lVar3 = (**(code **)(param_1 + 0x10))
                              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                               &local_50,4);
            if (lVar3 == 4) {
              local_50 = *(ulong *)(param_1 + 0x10190);
              lVar3 = (**(code **)(param_1 + 0x10))
                                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                                 &local_50,8);
              if (lVar3 == 8) {
                local_50 = *(ulong *)(param_1 + 0x10190);
                lVar3 = (**(code **)(param_1 + 0x10))
                                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                                   &local_50,8);
                if (lVar3 == 8) {
                  local_50 = param_2;
                  lVar3 = (**(code **)(param_1 + 0x10))
                                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58)
                                     ,&local_50,8);
                  if (lVar3 == 8) {
                    local_50 = param_3 - *(long *)(param_1 + 0x10188);
                    lVar3 = (**(code **)(param_1 + 0x10))
                                      (*(undefined8 *)(param_1 + 0x38),
                                       *(undefined8 *)(param_1 + 0x58),&local_50,8);
                    iVar2 = -(uint)(lVar3 != 8);
                    goto LAB_00e36314;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar2 = -1;
LAB_00e36314:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


