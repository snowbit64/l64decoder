// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_colorspace_set_chromaticities
// Entry Point: 00da9cc8
// Size: 364 bytes
// Signature: undefined png_colorspace_set_chromaticities(void)


void png_colorspace_set_chromaticities
               (undefined8 param_1,long param_2,undefined8 *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar4 = FUN_00da9e34(&local_70,param_3);
  if (iVar4 == 1) {
    uVar2 = *(ushort *)(param_2 + 0x4a);
    pcVar6 = "invalid chromaticities";
LAB_00da9db8:
    *(ushort *)(param_2 + 0x4a) = uVar2 | 0x8000;
    png_benign_error(param_1,pcVar6);
  }
  else {
    if (iVar4 != 0) {
      *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal error checking chromaticities");
    }
    uVar2 = *(ushort *)(param_2 + 0x4a);
    if (-1 < (short)uVar2) {
      if ((param_4 < 2) && ((uVar2 >> 1 & 1) != 0)) {
        iVar4 = FUN_00dab25c(param_3,param_2 + 4,100);
        if (iVar4 == 0) {
          pcVar6 = "inconsistent chromaticities";
          goto LAB_00da9db8;
        }
        if (param_4 == 0) {
          uVar5 = 1;
          if (*(long *)(lVar3 + 0x28) == local_48) {
            return;
          }
          goto LAB_00da9da4;
        }
      }
      uVar5 = *param_3;
      uVar8 = param_3[3];
      uVar7 = param_3[2];
      *(undefined8 *)(param_2 + 0xc) = param_3[1];
      *(undefined8 *)(param_2 + 4) = uVar5;
      *(undefined8 *)(param_2 + 0x1c) = uVar8;
      *(undefined8 *)(param_2 + 0x14) = uVar7;
      *(undefined8 *)(param_2 + 0x2c) = uStack_68;
      *(undefined8 *)(param_2 + 0x24) = local_70;
      *(undefined8 *)(param_2 + 0x3c) = uStack_58;
      *(undefined8 *)(param_2 + 0x34) = uStack_60;
      *(undefined4 *)(param_2 + 0x44) = local_50;
      iVar4 = FUN_00dab25c(param_3,&DAT_00549308,1000);
      uVar5 = 2;
      uVar1 = uVar2 & 0xffbf | 2;
      if (iVar4 != 0) {
        uVar1 = uVar2 | 0x42;
      }
      *(ushort *)(param_2 + 0x4a) = uVar1;
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
      goto LAB_00da9da4;
    }
  }
  uVar5 = 0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00da9da4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


