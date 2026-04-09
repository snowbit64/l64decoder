// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Write_EndOfCentralDirectoryRecord
// Entry Point: 00e36340
// Size: 548 bytes
// Signature: undefined Write_EndOfCentralDirectoryRecord(void)


void Write_EndOfCentralDirectoryRecord(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0x6054b50;
  lVar3 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,4);
  if (lVar3 == 4) {
    local_50 = local_50 & 0xffff0000;
    lVar3 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2);
    if (lVar3 == 2) {
      local_50 = local_50 & 0xffff0000;
      lVar3 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_50,2
                        );
      if (lVar3 == 2) {
        if (*(ulong *)(param_1 + 0x10190) < 0xffff) {
          local_50 = CONCAT22(local_50._2_2_,(short)*(ulong *)(param_1 + 0x10190));
          lVar3 = (**(code **)(param_1 + 0x10))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                             &local_50,2);
        }
        else {
          local_50 = CONCAT22(local_50._2_2_,0xffff);
          lVar3 = (**(code **)(param_1 + 0x10))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                             &local_50,2);
        }
        if (lVar3 == 2) {
          local_50._2_2_ = (undefined2)(local_50 >> 0x10);
          if (*(ulong *)(param_1 + 0x10190) < 0xffff) {
            local_50 = CONCAT22(local_50._2_2_,(short)*(ulong *)(param_1 + 0x10190));
            lVar3 = (**(code **)(param_1 + 0x10))
                              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                               &local_50,2);
          }
          else {
            local_50 = CONCAT22(local_50._2_2_,0xffff);
            lVar3 = (**(code **)(param_1 + 0x10))
                              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                               &local_50,2);
          }
          if (lVar3 == 2) {
            local_50 = (uint)param_2;
            if (param_2 >> 0x20 != 0) {
              local_50 = 0xffffffff;
            }
            lVar3 = (**(code **)(param_1 + 0x10))
                              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                               &local_50,4);
            if (lVar3 == 4) {
              uVar4 = param_3 - *(long *)(param_1 + 0x10188);
              if (uVar4 < 0xffffffff) {
                local_50 = (uint)uVar4;
                lVar3 = (**(code **)(param_1 + 0x10))
                                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                                   &local_50,4);
              }
              else {
                local_50 = 0xffffffff;
                lVar3 = (**(code **)(param_1 + 0x10))
                                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                                   &local_50,4);
              }
              iVar2 = -(uint)(lVar3 != 4);
              if (*(long *)(lVar1 + 0x28) == local_48) {
                return;
              }
              goto LAB_00e36560;
            }
          }
        }
      }
    }
  }
  iVar2 = -1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00e36560:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


