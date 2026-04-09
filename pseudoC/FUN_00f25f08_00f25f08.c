// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f25f08
// Entry Point: 00f25f08
// Size: 512 bytes
// Signature: undefined FUN_00f25f08(void)


void FUN_00f25f08(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long local_70;
  long lStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  iVar7 = 100;
  local_58 = *(long *)(lVar1 + 0x28);
  do {
    if (*(int *)((long)param_2 + 0xc) == 6) {
      lVar6 = *param_2;
      plVar2 = (long *)FUN_00f171e0(lVar6,param_3);
      if ((((*(int *)((long)plVar2 + 0xc) != 0) || (lVar3 = *(long *)(lVar6 + 0x10), lVar3 == 0)) ||
          ((*(byte *)(lVar3 + 3) >> 1 & 1) != 0)) ||
         (plVar4 = (long *)FUN_00f197a4(lVar3,1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb48)),
         plVar4 == (long *)0x0)) {
        if (*(char *)(lVar6 + 4) != '\0') goto LAB_00f260fc;
        *(undefined *)(lVar6 + 3) = 0;
        if (plVar2 == (long *)&DAT_0056fdf8) {
          plVar2 = (long *)FUN_00f175ec(param_1,lVar6,param_3);
        }
        *(int *)(param_1 + 0x54) = (int)((ulong)((long)plVar2 - *(long *)(lVar6 + 0x20)) >> 5);
        lVar3 = *param_4;
        plVar2[1] = param_4[1];
        *plVar2 = lVar3;
        if ((4 < *(int *)((long)param_4 + 0xc)) && ((*(byte *)(lVar6 + 1) >> 2 & 1) != 0)) {
          if ((*(byte *)(*param_4 + 1) & 3) != 0) {
            FUN_00f0c9ec(param_1,lVar6);
          }
        }
        goto LAB_00f260c0;
      }
      iVar5 = *(int *)((long)plVar4 + 0xc);
    }
    else {
      plVar4 = (long *)FUN_00f197f8(param_1,param_2,1);
      iVar5 = *(int *)((long)plVar4 + 0xc);
      if (iVar5 == 0) {
        FUN_00f09d58(param_1,param_2,param_3);
LAB_00f260fc:
                    /* WARNING: Subroutine does not return */
        FUN_00f09e04(param_1);
      }
    }
    if (iVar5 == 7) {
      plVar2 = *(long **)(param_1 + 8);
      lVar6 = *plVar4;
      plVar2[1] = plVar4[1];
      *plVar2 = lVar6;
      lVar6 = *(long *)(param_1 + 8);
      lVar3 = *param_2;
      *(long *)(lVar6 + 0x18) = param_2[1];
      *(long *)(lVar6 + 0x10) = lVar3;
      lVar6 = *(long *)(param_1 + 8);
      uVar8 = *param_3;
      *(undefined8 *)(lVar6 + 0x28) = param_3[1];
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      lVar6 = *(long *)(param_1 + 8);
      lVar3 = *param_4;
      *(long *)(lVar6 + 0x38) = param_4[1];
      *(long *)(lVar6 + 0x30) = lVar3;
      lVar6 = *(long *)(param_1 + 8);
      if (*(long *)(param_1 + 0x28) - lVar6 < 0x41) {
        FUN_00f0ab24(param_1,4);
        lVar6 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 8) = lVar6 + 0x40;
      FUN_00f0ac4c(param_1,lVar6,0);
LAB_00f260c0:
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar7 = iVar7 + -1;
    lStack_68 = plVar4[1];
    local_70 = *plVar4;
    param_2 = &local_70;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00f09b70(param_1,"\'__newindex\' chain too long; possible loop");
    }
  } while( true );
}


