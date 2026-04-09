// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b94498
// Size: 752 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroEval::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

undefined8
PreprocessorMetaMacroEval::processMacro
          (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  size_t __n;
  long *plVar7;
  Preprocessor *this;
  char *pcVar8;
  char **ppcVar9;
  long lVar10;
  undefined8 local_a0;
  ulong local_98;
  char *local_90;
  int local_84;
  ulong local_80;
  undefined8 local_78;
  char *local_70;
  char acStack_68 [16];
  long local_58;
  
  this = (Preprocessor *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_80 = 0;
  local_78 = 0;
  local_70 = (char *)0x0;
  lVar10 = **(long **)(this + 0x38);
                    /* try { // try from 00b944e4 to 00b9451b has its CatchHandler @ 00b947c8 */
  bVar5 = Preprocessor::getIsLineStart(this,param_3);
  if (param_7 != 2) {
    param_6 = param_4;
  }
  Preprocessor::processText
            (this,(char *)(lVar10 + (ulong)param_3),param_6 - param_3,(bool)(bVar5 & 1),0,
             (basic_string *)&local_80,false);
  bVar4 = (local_80 & 1) != 0;
  pcVar8 = (char *)((ulong)&local_80 | 1);
  if (bVar4) {
    pcVar8 = local_70;
  }
  uVar1 = (uint)((byte)local_80 >> 1);
  if (bVar4) {
    uVar1 = (uint)local_78;
  }
                    /* try { // try from 00b9453c to 00b94547 has its CatchHandler @ 00b94794 */
  uVar6 = StringArithmeticUtil::doArithmeticEval(pcVar8,0,uVar1,&local_84);
  if ((uVar6 & 1) == 0) {
    local_a0 = 0;
    local_98 = 0;
    local_90 = (char *)0x0;
    bVar4 = (local_80 & 1) != 0;
    pcVar8 = (char *)((ulong)&local_80 | 1);
    if (bVar4) {
      pcVar8 = local_70;
    }
    uVar1 = (uint)((byte)local_80 >> 1);
    if (bVar4) {
      uVar1 = (uint)local_78;
    }
                    /* try { // try from 00b945b8 to 00b94627 has its CatchHandler @ 00b94798 */
    Preprocessor::processText(this,pcVar8,uVar1,false,0,(basic_string *)&local_a0,false);
    ppcVar9 = *(char ***)(*(long *)(this + 0x38) + 0x78);
    pcVar8 = (char *)((ulong)&local_a0 | 1);
    uVar6 = local_a0 >> 1 & 0x7f;
    if ((local_a0 & 1) != 0) {
      pcVar8 = local_90;
      uVar6 = local_98;
    }
    if (*ppcVar9 != (char *)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(*ppcVar9,(ulong)pcVar8);
    }
    plVar7 = (long *)ppcVar9[1];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,pcVar8,uVar6 & 0xffffffff);
    }
    if ((int)uVar6 != 0) {
      uVar6 = uVar6 & 0xffffffff;
      do {
        cVar2 = *pcVar8;
        if (cVar2 == '\n') {
          *(int *)(ppcVar9 + 5) = *(int *)(ppcVar9 + 5) + 1;
        }
        uVar6 = uVar6 - 1;
        pcVar8 = pcVar8 + 1;
        *(bool *)((long)ppcVar9 + 0x2e) = cVar2 == '\n';
      } while (uVar6 != 0);
    }
    goto LAB_00b9472c;
  }
                    /* try { // try from 00b94550 to 00b94557 has its CatchHandler @ 00b94788 */
  FUN_00b947e4(acStack_68);
  ppcVar9 = *(char ***)(*(long *)(this + 0x38) + 0x78);
  __n = strlen(acStack_68);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b9477c to 00b94783 has its CatchHandler @ 00b94790 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar8 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b94688;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b94670 to 00b94677 has its CatchHandler @ 00b94790 */
    pcVar8 = (char *)operator_new(uVar6);
    local_a0 = uVar6 | 1;
    local_98 = __n;
    local_90 = pcVar8;
LAB_00b94688:
    memcpy(pcVar8,acStack_68,__n);
  }
  pcVar8[__n] = '\0';
  uVar6 = local_a0 >> 1 & 0x7f;
  pcVar8 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    uVar6 = local_98;
    pcVar8 = local_90;
  }
  if (*ppcVar9 != (char *)0x0) {
                    /* try { // try from 00b946c8 to 00b946eb has its CatchHandler @ 00b9478c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(*ppcVar9,(ulong)pcVar8);
  }
  plVar7 = (long *)ppcVar9[1];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,pcVar8,uVar6 & 0xffffffff);
  }
  if ((int)uVar6 != 0) {
    uVar6 = uVar6 & 0xffffffff;
    do {
      cVar2 = *pcVar8;
      if (cVar2 == '\n') {
        *(int *)(ppcVar9 + 5) = *(int *)(ppcVar9 + 5) + 1;
      }
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar8 + 1;
      *(bool *)((long)ppcVar9 + 0x2e) = cVar2 == '\n';
    } while (uVar6 != 0);
  }
LAB_00b9472c:
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


