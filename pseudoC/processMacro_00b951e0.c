// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b951e0
// Size: 652 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroLine::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

undefined8
PreprocessorMetaMacroLine::processMacro
          (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint *param_8,uint *param_9)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  Preprocessor *this;
  uint uVar5;
  int iVar6;
  ulong __n;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong local_b8;
  ulong uStack_b0;
  char *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  char *local_90;
  byte local_88;
  void *local_78;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  this = (Preprocessor *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = param_4;
  uStack_6c = param_3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_88);
  if (param_7 != 2) goto LAB_00b95398;
                    /* try { // try from 00b95238 to 00b95247 has its CatchHandler @ 00b954a8 */
  Preprocessor::whiteout(this,&uStack_6c,&local_70);
  uVar1 = (ulong)uStack_6c;
  lVar9 = **(long **)(this + 0x38);
  uVar5 = local_70 - uStack_6c;
  __n = (ulong)uVar5;
  if (uVar5 < 0x17) {
    pcVar7 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)uVar5 * '\x02');
    if (uVar5 != 0) goto LAB_00b95298;
  }
  else {
    uVar8 = __n + 0x10 & 0x1fffffff0;
                    /* try { // try from 00b95280 to 00b95287 has its CatchHandler @ 00b95474 */
    pcVar7 = (char *)operator_new(uVar8);
    local_a0 = uVar8 | 1;
    uStack_98 = __n;
    local_90 = pcVar7;
LAB_00b95298:
    memcpy(pcVar7,(void *)(lVar9 + uVar1),__n);
  }
  pcVar7[__n] = '\0';
  pcVar7 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar7 = local_90;
  }
  bVar2 = (byte)local_a0;
  if (*pcVar7 == '\"') {
                    /* try { // try from 00b952d0 to 00b952e7 has its CatchHandler @ 00b95470 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_b8,(ulong)&local_a0,1,(allocator *)0xffffffffffffffff);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    uVar1 = local_a0;
    local_a0._0_1_ = (byte)local_b8;
    local_90 = local_a8;
    bVar2 = (byte)local_a0;
    local_a0 = uVar1;
  }
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = uStack_98;
  }
  if (uVar1 != 0) {
    pcVar7 = (char *)((ulong)&local_a0 | 1);
    if ((bVar2 & 1) != 0) {
      pcVar7 = local_90;
    }
    if (pcVar7[uVar1 - 1] == '\"') {
                    /* try { // try from 00b95344 to 00b95357 has its CatchHandler @ 00b9546c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_b8,(ulong)&local_a0,0,(allocator *)(uVar1 - 1));
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
    }
  }
                    /* try { // try from 00b95378 to 00b95383 has its CatchHandler @ 00b95478 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_88,(basic_string *)&local_a0);
  local_70 = param_6;
  uStack_6c = param_5;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_00b95398:
  uVar5 = *(int *)(this + 300) + 1;
  *(uint *)(this + 300) = uVar5;
  if (uVar5 == 0x32) {
                    /* try { // try from 00b953ac to 00b953bb has its CatchHandler @ 00b954a8 */
    Preprocessor::printError(this,"too many nested #ifs");
    uVar5 = *(int *)(this + 300) - 1;
    *(uint *)(this + 300) = uVar5;
  }
  *(undefined4 *)(this + (ulong)uVar5 * 4 + 100) = 0;
                    /* try { // try from 00b953d4 to 00b95417 has its CatchHandler @ 00b954ac */
  iVar4 = Preprocessor::arithmeticEval(this,uStack_6c,local_70);
  iVar6 = *(int *)(this + 300);
  if (iVar6 == 0) {
    Preprocessor::printError(this,"#endif without #if");
    iVar6 = *(int *)(this + 300) + 1;
  }
  *(int *)(this + 300) = iVar6 + -1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (*(long *)(this + 0x38) + 0x28),(basic_string *)&local_88);
  *(int *)(*(long *)(this + 0x38) + 0x40) = iVar4 + -1;
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


