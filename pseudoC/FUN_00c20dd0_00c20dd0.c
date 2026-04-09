// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c20dd0
// Entry Point: 00c20dd0
// Size: 556 bytes
// Signature: undefined FUN_00c20dd0(void)


void FUN_00c20dd0(char **param_1,GISLParserContext *param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pcVar1 = "";
  if (*param_1 != (char *)0x0) {
    pcVar1 = *param_1;
  }
  sVar7 = strlen(pcVar1);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    pcVar9 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_00c20e68;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pcVar9 = (char *)operator_new(uVar10);
    local_70 = uVar10 | 1;
    local_68 = sVar7;
    local_60 = pcVar9;
LAB_00c20e68:
    memcpy(pcVar9,pcVar1,sVar7);
  }
  pcVar9[sVar7] = '\0';
  do {
                    /* try { // try from 00c20e7c to 00c20e83 has its CatchHandler @ 00c21010 */
    uVar4 = FUN_00c21e50(param_3);
    uVar8 = (uint)sVar7;
    if (0x20 < uVar4) {
      uVar8 = uVar4;
    }
    uVar6 = uVar4;
    if (uVar4 != 10) {
      uVar6 = uVar8;
    }
    sVar7 = (size_t)uVar6;
  } while ((uVar4 != 10) && (uVar4 < 0x21));
  if ((uVar6 & 0xff) == 10) goto LAB_00c20fb4;
  if ((uVar6 & 0xff) == 0x22) {
    if ((local_70 & 1) == 0) {
      local_70 = local_70 & 0xffffffffffff0000;
    }
    else {
      *local_60 = '\0';
      local_68 = 0;
    }
                    /* try { // try from 00c20ed0 to 00c20ef3 has its CatchHandler @ 00c2100c */
    while (iVar5 = FUN_00c21e50(param_3), iVar5 != 10) {
      if (iVar5 == 0x22) goto LAB_00c20ef8;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)&local_70);
    }
    goto LAB_00c20fb4;
  }
LAB_00c20f28:
  uVar8 = (uVar6 & 0xff) - 0x30;
  if (uVar8 < 10) {
                    /* try { // try from 00c20f3c to 00c20f43 has its CatchHandler @ 00c21000 */
    while ((uVar6 = FUN_00c21e50(param_3), uVar6 != 10 && (uVar6 - 0x30 < 10))) {
      uVar8 = (uVar6 - 0x30) + uVar8 * 10;
    }
    bVar3 = (local_70 & 1) != 0;
    sVar7 = local_70 >> 1 & 0x7f;
    if (bVar3) {
      sVar7 = local_68;
    }
    pcVar1 = (char *)((ulong)&local_70 | 1);
    if (bVar3) {
      pcVar1 = local_60;
    }
    pcVar9 = (char *)0x0;
    if (sVar7 != 0) {
      pcVar9 = pcVar1;
    }
                    /* try { // try from 00c20f8c to 00c20f97 has its CatchHandler @ 00c20ffc */
    GISLParserContext::onHashLine(param_2,pcVar9,uVar8);
  }
  uVar6 = uVar6 & 0xff;
  while (uVar6 != 10) {
                    /* try { // try from 00c20fa4 to 00c20fab has its CatchHandler @ 00c21008 */
    uVar6 = FUN_00c21e50(param_3);
  }
LAB_00c20fb4:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00c20ef8:
  do {
                    /* try { // try from 00c20ef8 to 00c20eff has its CatchHandler @ 00c21004 */
    uVar4 = FUN_00c21e50(param_3);
    uVar8 = (uint)sVar7;
    if (0x20 < uVar4) {
      uVar8 = uVar4;
    }
    uVar6 = uVar4;
    if (uVar4 != 10) {
      uVar6 = uVar8;
    }
    sVar7 = (size_t)uVar6;
  } while ((uVar4 != 10) && (uVar4 < 0x21));
  if ((uVar6 & 0xff) == 10) goto LAB_00c20fb4;
  goto LAB_00c20f28;
}


