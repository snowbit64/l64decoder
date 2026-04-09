// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_warning_parameter_signed
// Entry Point: 00daeca0
// Size: 492 bytes
// Signature: undefined png_warning_parameter_signed(void)


void png_warning_parameter_signed(long param_1,int param_2,int param_3,int param_4)

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
  char acStack_40 [23];
  char local_29;
  long local_28;
  
  lVar2 = tpidr_el0;
  uVar9 = (ulong)param_4;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar10 = -uVar9;
  if (-1 < (long)uVar9) {
    uVar10 = uVar9;
  }
  cVar7 = '\0';
  bVar3 = false;
  pcVar8 = &local_29;
  iVar6 = 1;
  local_29 = '\0';
  iVar5 = 0;
  do {
    if ((uVar10 == 0) && (iVar6 <= iVar5)) break;
    switch(param_3) {
    case 2:
      iVar6 = 2;
    case 1:
      uVar9 = uVar10 % 10;
      uVar10 = uVar10 / 10;
      break;
    case 4:
      iVar6 = 2;
    case 3:
      uVar9 = uVar10 & 0xf;
      uVar10 = uVar10 >> 4;
      break;
    case 5:
      if ((bVar3) || (uVar10 % 10 != 0)) {
        cVar7 = "0123456789ABCDEF"[uVar10 % 10];
        bVar3 = true;
        pcVar8 = pcVar8 + -1;
        *pcVar8 = cVar7;
        iVar6 = 5;
        uVar10 = uVar10 / 10;
      }
      else {
        bVar3 = false;
        iVar6 = 5;
        uVar10 = uVar10 / 10;
      }
      goto joined_r0x00daedc4;
    default:
      uVar10 = 0;
joined_r0x00daedc4:
      iVar4 = iVar5 + 1;
      if (((param_3 == 5) && (iVar4 = iVar5 + 1, iVar4 == 5)) && (acStack_40 < pcVar8)) {
        if (bVar3) {
          cVar7 = '.';
        }
        else {
          bVar3 = false;
          if (uVar10 != 0) {
            iVar4 = 5;
            goto LAB_00daed24;
          }
          cVar7 = '0';
        }
        iVar4 = 5;
        pcVar8 = pcVar8 + -1;
        *pcVar8 = cVar7;
      }
      goto LAB_00daed24;
    }
    cVar7 = "0123456789ABCDEF"[uVar9];
    pcVar8 = pcVar8 + -1;
    *pcVar8 = cVar7;
    iVar4 = iVar5 + 1;
LAB_00daed24:
    iVar5 = iVar4;
  } while (acStack_40 < pcVar8);
  if ((param_4 < 0) && (acStack_40 < pcVar8)) {
    cVar7 = '-';
    pcVar8 = pcVar8 + -1;
    *pcVar8 = '-';
  }
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
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


