// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_ascii_from_fixed
// Entry Point: 00dac808
// Size: 488 bytes
// Signature: undefined png_ascii_from_fixed(void)


void png_ascii_from_fixed(undefined8 param_1,char *param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  char local_56 [14];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (param_3 < 0xd) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ASCII conversion buffer too small");
  }
  iVar8 = (int)param_4;
  if (iVar8 < 0) {
    param_4 = (ulong)(uint)-iVar8;
    pcVar7 = param_2 + 1;
    *param_2 = '-';
LAB_00dac84c:
    uVar15 = 0;
    uVar14 = 0x10;
    do {
      uVar10 = (param_4 & 0xffffffff) / 10;
      uVar9 = (uint)param_4;
      iVar8 = uVar9 + (int)uVar10 * -10;
      local_56[uVar15 + 2] = (char)iVar8 + '0';
      if (iVar8 != 0 && uVar14 == 0x10) {
        uVar14 = (int)uVar15 + 1;
      }
      uVar1 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar1;
      param_4 = uVar10;
    } while (9 < uVar9);
    param_2 = pcVar7;
    if (uVar1 != 0) {
      if (5 < uVar1) {
        uVar10 = uVar15 - 5;
        if (uVar10 < 4) {
LAB_00dac93c:
          do {
            uVar10 = uVar15 - 1;
            pcVar16 = pcVar7 + 1;
            *pcVar7 = local_56[uVar15 + 1];
            uVar15 = uVar10;
            pcVar7 = pcVar16;
          } while (5 < uVar10);
        }
        else {
          uVar11 = uVar10 & 0xfffffffffffffffc;
          pcVar16 = pcVar7 + uVar11;
          pcVar12 = local_56 + uVar15;
          uVar13 = uVar15 - 5 & 0xfffffffffffffffc;
          pcVar7 = pcVar7 + 2;
          do {
            cVar2 = *pcVar12;
            uVar13 = uVar13 - 4;
            cVar3 = pcVar12[1];
            cVar4 = pcVar12[-2];
            cVar5 = pcVar12[-1];
            pcVar12 = pcVar12 + -4;
            pcVar7[-1] = cVar2;
            pcVar7[-2] = cVar3;
            pcVar7[1] = cVar4;
            *pcVar7 = cVar5;
            pcVar7 = pcVar7 + 4;
          } while (uVar13 != 0);
          uVar15 = uVar15 - uVar11;
          pcVar7 = pcVar16;
          if (uVar10 != uVar11) goto LAB_00dac93c;
        }
        uVar15 = 5;
        pcVar7 = pcVar16;
      }
      if (uVar14 < 6) {
        uVar9 = (uint)uVar15;
        *pcVar7 = '.';
        pcVar16 = pcVar7 + 1;
        if (uVar9 < 5) {
          memset(pcVar7 + 1,0x30,(ulong)(4 - uVar9) + 1);
          pcVar16 = pcVar7 + (ulong)(4 - uVar9) + 2;
        }
        while (pcVar7 = pcVar16, uVar14 <= uVar9) {
          uVar9 = (int)uVar15 - 1;
          uVar15 = (ulong)uVar9;
          *pcVar7 = local_56[(ulong)uVar9 + 2];
          pcVar16 = pcVar7 + 1;
        }
      }
      goto LAB_00dac9b4;
    }
  }
  else {
    pcVar7 = param_2;
    if (iVar8 != 0) goto LAB_00dac84c;
  }
  pcVar7 = param_2 + 1;
  *param_2 = '0';
LAB_00dac9b4:
  *pcVar7 = '\0';
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


