// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_formatted_warning
// Entry Point: 00daee8c
// Size: 348 bytes
// Signature: undefined png_formatted_warning(void)


void png_formatted_warning(undefined8 param_1,char *param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char local_e8 [192];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = 0;
  uVar5 = uVar4;
  if (param_2 == (char *)0x0) {
    do {
      uVar4 = uVar5;
      if (param_3[uVar5] == '\0') break;
      uVar4 = uVar5 + 1;
      local_e8[uVar5] = param_3[uVar5];
      uVar5 = uVar4;
    } while (uVar4 != 0xbf);
  }
  else {
    do {
      while (pcVar6 = param_3, *param_3 != '@') {
        if (*param_3 == '\0') goto LAB_00daefb4;
LAB_00daeec8:
        param_3 = pcVar6 + 1;
        local_e8[uVar4] = *pcVar6;
        uVar4 = uVar4 + 1;
joined_r0x00daeee0:
        if (0xbe < uVar4) goto LAB_00daefb4;
      }
      cVar1 = param_3[1];
      if (cVar1 == '\0') goto LAB_00daeec8;
      lVar8 = 0;
      pcVar7 = param_2;
      do {
        pcVar6 = &DAT_004d0a94 + lVar8;
        pcVar7 = pcVar7 + 0x20;
        bVar3 = lVar8 != 9;
        lVar8 = lVar8 + 1;
      } while (*pcVar6 != cVar1 && bVar3);
      pcVar6 = param_3 + 1;
      if (((int)lVar8 - 1U & 0xfffffff8) != 0) goto LAB_00daeec8;
      if (uVar4 < 0xbf) {
        lVar8 = 0;
        do {
          cVar1 = pcVar7[lVar8 + -0x20];
          if (cVar1 == '\0' || pcVar7 <= pcVar7 + lVar8 + -0x20) {
            uVar4 = uVar4 + lVar8;
            param_3 = param_3 + 2;
            goto joined_r0x00daeee0;
          }
          local_e8[lVar8 + uVar4] = cVar1;
          lVar8 = lVar8 + 1;
        } while (uVar4 + lVar8 != 0xbf);
        uVar4 = 0xbf;
      }
      param_3 = param_3 + 2;
    } while (uVar4 < 0xbf);
  }
LAB_00daefb4:
  local_e8[uVar4] = '\0';
  png_warning(param_1,local_e8);
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


