// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b95538
// Size: 804 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroInclude::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

void PreprocessorMetaMacroInclude::processMacro
               (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Preprocessor *this;
  bool bVar5;
  ulong __n;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  char *local_288;
  undefined8 local_280;
  ulong uStack_278;
  char *local_270;
  uint local_260;
  uint uStack_25c;
  ulong local_258;
  ulong uStack_250;
  char *local_248;
  long local_58;
  
  this = (Preprocessor *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_260 = param_4;
  uStack_25c = param_3;
  if (*(int *)(this + (ulong)*(uint *)(this + 300) * 4 + 100) == 0) {
    Preprocessor::whiteout(this,&uStack_25c,&local_260);
    uVar3 = (ulong)uStack_25c;
    lVar9 = **(long **)(this + 0x38);
    uVar1 = local_260 - uStack_25c;
    __n = (ulong)uVar1;
    if (uVar1 < 0x17) {
      pcVar6 = (char *)((ulong)&local_280 | 1);
      local_280 = CONCAT71(local_280._1_7_,(char)uVar1 * '\x02');
      if (uVar1 != 0) goto LAB_00b955d8;
    }
    else {
      uVar7 = __n + 0x10 & 0x1fffffff0;
      pcVar6 = (char *)operator_new(uVar7);
      local_280 = uVar7 | 1;
      uStack_278 = __n;
      local_270 = pcVar6;
LAB_00b955d8:
      memcpy(pcVar6,(void *)(lVar9 + uVar3),__n);
    }
    pcVar6[__n] = '\0';
    pcVar8 = (char *)((ulong)&local_280 | 1);
    pcVar6 = pcVar8;
    if ((local_280 & 1) != 0) {
      pcVar6 = local_270;
    }
    if (*pcVar6 == '<') {
                    /* try { // try from 00b956bc to 00b956d3 has its CatchHandler @ 00b95864 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_258,(ulong)&local_280,1,(allocator *)0xffffffffffffffff);
      if ((local_280 & 1) != 0) {
        operator_delete(local_270);
      }
      uStack_278 = uStack_250;
      local_280 = local_258;
      local_270 = local_248;
      uVar3 = local_258 >> 1 & 0x7f;
      if ((local_258 & 1) != 0) {
        uVar3 = uStack_250;
      }
      if (uVar3 != 0) {
        if ((local_258 & 1) != 0) {
          pcVar8 = local_248;
        }
        if (pcVar8[uVar3 - 1] == '>') {
                    /* try { // try from 00b9572c to 00b9573f has its CatchHandler @ 00b9585c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_258,(ulong)&local_280,0,(allocator *)(uVar3 - 1));
          if ((local_280 & 1) != 0) {
            operator_delete(local_270);
          }
          bVar5 = false;
LAB_00b95758:
          local_270 = local_248;
          local_280 = local_258;
          uStack_278 = uStack_250;
          goto LAB_00b95774;
        }
      }
      bVar5 = false;
    }
    else {
      bVar5 = false;
      if (*pcVar6 == '\"') {
                    /* try { // try from 00b9561c to 00b95633 has its CatchHandler @ 00b95868 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_258,(ulong)&local_280,1,
                       (allocator *)0xffffffffffffffff);
        if ((local_280 & 1) != 0) {
          operator_delete(local_270);
        }
        uStack_278 = uStack_250;
        local_280 = local_258;
        local_270 = local_248;
        uVar3 = local_258 >> 1 & 0x7f;
        if ((local_258 & 1) != 0) {
          uVar3 = uStack_250;
        }
        if (uVar3 != 0) {
          if ((local_258 & 1) != 0) {
            pcVar8 = local_248;
          }
          if (pcVar8[uVar3 - 1] == '\"') {
                    /* try { // try from 00b9568c to 00b9569f has its CatchHandler @ 00b95860 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)&local_258,(ulong)&local_280,0,(allocator *)(uVar3 - 1));
            if ((local_280 & 1) != 0) {
              operator_delete(local_270);
            }
            bVar5 = true;
            goto LAB_00b95758;
          }
        }
        bVar5 = true;
      }
    }
LAB_00b95774:
    lVar9 = *(long *)(this + 0x38);
    local_288 = (char *)0x0;
    pcVar6 = (char *)(lVar9 + 0x29);
    if ((*(byte *)(lVar9 + 0x28) & 1) != 0) {
      pcVar6 = *(char **)(lVar9 + 0x38);
    }
                    /* try { // try from 00b95790 to 00b957e3 has its CatchHandler @ 00b95870 */
    uVar3 = Preprocessor::loadIncludeFile(this,(basic_string *)&local_280,bVar5,pcVar6,&local_288);
    if ((uVar3 & 1) == 0) {
      FUN_00b9588c(&local_258);
                    /* try { // try from 00b95800 to 00b9580b has its CatchHandler @ 00b9586c */
      Preprocessor::printError(this,(char *)&local_258);
    }
    else {
      Preprocessor::outchar(this,'\n');
      pcVar6 = local_288;
      pcVar8 = (char *)__strlen_chk(local_288,0xffffffffffffffff);
      Preprocessor::processTextToCurrentOutput((char *)this,(uint)pcVar6,pcVar8);
    }
    if ((local_280 & 1) != 0) {
      operator_delete(local_270);
    }
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      goto LAB_00b95824;
    }
  }
  uVar4 = 1;
LAB_00b95824:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


