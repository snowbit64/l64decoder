// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5ed04
// Entry Point: 00d5ed04
// Size: 296 bytes
// Signature: undefined FUN_00d5ed04(void)


void FUN_00d5ed04(long param_1,long param_2,long param_3,long param_4,uint param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  int local_170 [64];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (param_7 != 0) {
    uVar6 = 0;
    lVar7 = *(long *)(param_2 + 0x58);
    pcVar8 = *(code **)(*(long *)(param_1 + 0x218) + (long)*(int *)(param_2 + 4) * 8 + 0x58);
    do {
      (*pcVar8)(local_170,param_3 + (ulong)param_5 * 8,param_6);
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar7 + lVar4 * 4);
        iVar2 = local_170[lVar4];
        if (iVar2 < 0) {
          iVar2 = (iVar1 >> 1) - iVar2;
          if (iVar2 < iVar1) {
            sVar5 = 0;
          }
          else {
            sVar5 = 0;
            if (iVar1 != 0) {
              sVar5 = (short)(iVar2 / iVar1);
            }
            sVar5 = -sVar5;
          }
        }
        else {
          iVar2 = iVar2 + (iVar1 >> 1);
          if (iVar2 < iVar1) {
            sVar5 = 0;
          }
          else {
            sVar5 = 0;
            if (iVar1 != 0) {
              sVar5 = (short)(iVar2 / iVar1);
            }
          }
        }
        *(short *)(param_4 + lVar4 * 2) = sVar5;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x40);
      uVar6 = uVar6 + 1;
      param_4 = param_4 + 0x80;
      param_6 = *(int *)(param_2 + 0x24) + param_6;
    } while (uVar6 != param_7);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


