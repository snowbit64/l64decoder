// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_warning_parameter_unsigned
// Entry Point: 00daeae0
// Size: 448 bytes
// Signature: undefined png_warning_parameter_unsigned(void)


void png_warning_parameter_unsigned(long param_1,int param_2,int param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  char acStack_30 [23];
  char local_19;
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  cVar7 = '\0';
  bVar3 = false;
  pcVar8 = &local_19;
  iVar6 = 1;
  local_19 = '\0';
  iVar5 = 0;
  do {
    if ((param_4 == 0) && (iVar6 <= iVar5)) break;
    switch(param_3) {
    case 2:
      iVar6 = 2;
    case 1:
      uVar10 = param_4 % 10;
      param_4 = param_4 / 10;
      break;
    case 4:
      iVar6 = 2;
    case 3:
      uVar10 = param_4 & 0xf;
      param_4 = param_4 >> 4;
      break;
    case 5:
      if ((bVar3) || (param_4 % 10 != 0)) {
        cVar7 = "0123456789ABCDEF"[param_4 % 10];
        bVar3 = true;
        pcVar8 = pcVar8 + -1;
        *pcVar8 = cVar7;
        iVar6 = 5;
        param_4 = param_4 / 10;
      }
      else {
        bVar3 = false;
        iVar6 = 5;
        param_4 = param_4 / 10;
      }
      goto joined_r0x00daebf4;
    default:
      param_4 = 0;
joined_r0x00daebf4:
      iVar4 = iVar5 + 1;
      if (((param_3 == 5) && (iVar4 = iVar5 + 1, iVar4 == 5)) && (acStack_30 < pcVar8)) {
        if (bVar3) {
          cVar7 = '.';
        }
        else {
          bVar3 = false;
          if (param_4 != 0) {
            iVar4 = 5;
            goto LAB_00daeb54;
          }
          cVar7 = '0';
        }
        iVar4 = 5;
        pcVar8 = pcVar8 + -1;
        *pcVar8 = cVar7;
      }
      goto LAB_00daeb54;
    }
    cVar7 = "0123456789ABCDEF"[uVar10];
    pcVar8 = pcVar8 + -1;
    *pcVar8 = cVar7;
    iVar4 = iVar5 + 1;
LAB_00daeb54:
    iVar5 = iVar4;
  } while (acStack_30 < pcVar8);
  uVar1 = param_2 - 1;
  if ((uVar1 < 8) && (param_1 != 0)) {
    uVar10 = 0;
    if ((pcVar8 != (char *)0x0) && (cVar7 != '\0')) {
      uVar9 = 0;
      do {
        *(char *)(param_1 + (ulong)uVar1 * 0x20 + uVar9) = cVar7;
        uVar10 = uVar9 + 1;
        cVar7 = pcVar8[uVar9 + 1];
        bVar3 = uVar9 < 0x1e;
        uVar9 = uVar10;
      } while (cVar7 != '\0' && bVar3);
    }
    *(undefined *)(param_1 + (ulong)uVar1 * 0x20 + uVar10) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


