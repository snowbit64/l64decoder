// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f242d4
// Entry Point: 00f242d4
// Size: 424 bytes
// Signature: undefined FUN_00f242d4(void)


undefined8
FUN_00f242d4(undefined8 param_1,undefined8 *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined local_30 [4];
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  uVar3 = 0xffffffff;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((1 < param_4) || (7 < (int)param_6)) goto LAB_00f24454;
  if ((int)param_6 < 1) goto LAB_00f24338;
  if (*(int *)((long)param_3 + 0xc) == 3) {
    if ((uint)(int)*param_3 < 0x100) {
      local_30[0] = (undefined)(int)*param_3;
      if (param_6 < 2) goto LAB_00f24338;
      if (*(int *)((long)param_5 + 0xc) == 3) {
        if ((uint)(int)*param_5 < 0x100) {
          local_30[1] = (undefined)(int)*param_5;
          if (param_6 == 2) goto LAB_00f24338;
          if (*(int *)((long)param_5 + 0x1c) == 3) {
            if ((uint)(int)param_5[2] < 0x100) {
              local_30[2] = (undefined)(int)param_5[2];
              if (param_6 == 3) goto LAB_00f24338;
              if (*(int *)((long)param_5 + 0x2c) == 3) {
                if ((uint)(int)param_5[4] < 0x100) {
                  local_30[3] = (undefined)(int)param_5[4];
                  if (param_6 == 4) goto LAB_00f24338;
                  if (*(int *)((long)param_5 + 0x3c) == 3) {
                    if ((uint)(int)param_5[6] < 0x100) {
                      local_2c = (undefined)(int)param_5[6];
                      if (param_6 == 5) goto LAB_00f24338;
                      if (*(int *)((long)param_5 + 0x4c) == 3) {
                        if ((uint)(int)param_5[8] < 0x100) {
                          local_2b = (undefined)(int)param_5[8];
                          if (param_6 == 6) {
LAB_00f24338:
                            local_30[(int)param_6] = 0;
                            uVar2 = FUN_00f128c0(param_1,local_30);
                            uVar3 = 1;
                            *param_2 = uVar2;
                            *(undefined4 *)((long)param_2 + 0xc) = 5;
                            goto LAB_00f24454;
                          }
                          if (*(int *)((long)param_5 + 0x5c) == 3) {
                            if ((uint)(int)param_5[10] < 0x100) {
                              local_2a = (undefined)(int)param_5[10];
                              goto LAB_00f24338;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_00f24454:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


