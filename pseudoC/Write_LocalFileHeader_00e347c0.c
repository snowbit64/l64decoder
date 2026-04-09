// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Write_LocalFileHeader
// Entry Point: 00e347c0
// Size: 964 bytes
// Signature: undefined Write_LocalFileHeader(void)


void Write_LocalFileHeader(long param_1,char *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  ulong uVar10;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  sVar5 = strlen(param_2);
  local_60 = CONCAT44(local_60._4_4_,0x4034b50);
  lVar6 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_60,4);
  if (lVar6 == 4) {
    if (*(int *)(param_1 + 0x1013c) == 0) {
      uVar9 = 0x14;
    }
    else {
      uVar9 = 0x2d;
    }
    local_60 = CONCAT62(local_60._2_6_,uVar9);
    lVar6 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_60,2);
    if (lVar6 == 2) {
      local_60._0_2_ = (short)*(ulong *)(param_1 + 0x118);
      if (0xffff < *(ulong *)(param_1 + 0x118)) {
        local_60._0_2_ = 0xffff;
      }
      lVar6 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_60,2
                        );
      if (lVar6 == 2) {
        local_60._0_2_ = (short)*(uint *)(param_1 + 0x120);
        if (0xffff < *(uint *)(param_1 + 0x120)) {
          local_60._0_2_ = 0xffff;
        }
        lVar6 = (**(code **)(param_1 + 0x10))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_60
                           ,2);
        if (lVar6 == 2) {
          local_60._0_4_ = (int)*(ulong *)(param_1 + 0x10128);
          if (*(ulong *)(param_1 + 0x10128) >> 0x20 != 0) {
            local_60._0_4_ = 0xffffffff;
          }
          lVar6 = (**(code **)(param_1 + 0x10))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                             &local_60,4);
          if (lVar6 == 4) {
            local_60 = local_60 & 0xffffffff00000000;
            lVar6 = (**(code **)(param_1 + 0x10))
                              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                               &local_60,4);
            if (lVar6 == 4) {
              if (*(int *)(param_1 + 0x1013c) == 0) {
                local_60 = (ulong)local_60._4_4_ << 0x20;
                lVar6 = (**(code **)(param_1 + 0x10))
                                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                                   &local_60,4);
              }
              else {
                local_60 = CONCAT44(local_60._4_4_,0xffffffff);
                lVar6 = (**(code **)(param_1 + 0x10))
                                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                                   &local_60,4);
              }
              if (lVar6 == 4) {
                if (*(int *)(param_1 + 0x1013c) == 0) {
                  local_60 = (ulong)local_60._4_4_ << 0x20;
                  lVar6 = (**(code **)(param_1 + 0x10))
                                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58)
                                     ,&local_60,4);
                }
                else {
                  local_60 = CONCAT44(local_60._4_4_,0xffffffff);
                  lVar6 = (**(code **)(param_1 + 0x10))
                                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58)
                                     ,&local_60,4);
                }
                if (lVar6 == 4) {
                  uVar10 = sVar5 & 0xffffffff;
                  local_60._0_2_ = (short)sVar5;
                  if (0xffff < uVar10) {
                    local_60._0_2_ = 0xffff;
                  }
                  lVar6 = (**(code **)(param_1 + 0x10))
                                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58)
                                     ,&local_60,2);
                  if (lVar6 == 2) {
                    uVar1 = param_3;
                    if (*(int *)(param_1 + 0x1013c) != 0) {
                      uVar1 = param_3 + 0x14;
                    }
                    local_60._0_2_ = (short)uVar1;
                    if (0xffff < uVar1) {
                      local_60._0_2_ = 0xffff;
                    }
                    lVar6 = (**(code **)(param_1 + 0x10))
                                      (*(undefined8 *)(param_1 + 0x38),
                                       *(undefined8 *)(param_1 + 0x58),&local_60,2);
                    bVar3 = lVar6 != 2;
                    if ((!bVar3) && ((int)sVar5 != 0)) {
                      uVar7 = (**(code **)(param_1 + 0x10))
                                        (*(undefined8 *)(param_1 + 0x38),
                                         *(undefined8 *)(param_1 + 0x58),param_2,uVar10);
                      bVar3 = uVar7 != uVar10;
                    }
                    if ((param_3 == 0) || (bVar3)) {
                      if (!bVar3) goto LAB_00e34ad8;
                    }
                    else {
                      uVar10 = (**(code **)(param_1 + 0x10))
                                         (*(undefined8 *)(param_1 + 0x38),
                                          *(undefined8 *)(param_1 + 0x58),param_4,(ulong)param_3);
                      if (uVar10 == param_3) {
LAB_00e34ad8:
                        if (*(int *)(param_1 + 0x1013c) == 0) {
                          iVar4 = 0;
                        }
                        else {
                          uVar8 = call_ztell64(param_1,*(undefined8 *)(param_1 + 0x58));
                          *(undefined8 *)(param_1 + 0x10140) = uVar8;
                          local_60._0_2_ = 1;
                          (**(code **)(param_1 + 0x10))
                                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58)
                                     ,&local_60,2);
                          local_60 = CONCAT62(local_60._2_6_,0x10);
                          (**(code **)(param_1 + 0x10))
                                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58)
                                     ,&local_60,2);
                          local_60 = 0;
                          (**(code **)(param_1 + 0x10))
                                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58)
                                     ,&local_60,8);
                          local_60 = 0;
                          lVar6 = (**(code **)(param_1 + 0x10))
                                            (*(undefined8 *)(param_1 + 0x38),
                                             *(undefined8 *)(param_1 + 0x58),&local_60,8);
                          iVar4 = -(uint)(lVar6 != 8);
                        }
                        goto LAB_00e34aa8;
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
  iVar4 = -1;
LAB_00e34aa8:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


