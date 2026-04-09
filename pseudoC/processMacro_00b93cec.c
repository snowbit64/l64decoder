// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b93cec
// Size: 428 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroIfdef::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

void PreprocessorMetaMacroIfdef::processMacro
               (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  Preprocessor *this;
  ulong __n;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_78;
  ulong local_70;
  void *local_68;
  uint local_60;
  uint local_5c;
  long local_58;
  
  this = (Preprocessor *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = *(int *)(this + 300) + 1;
  *(uint *)(this + 300) = uVar3;
  local_60 = param_4;
  local_5c = param_3;
  if (uVar3 == 0x32) {
    Preprocessor::printError(this,"too many nested #ifs");
    uVar3 = *(int *)(this + 300) - 1;
    *(uint *)(this + 300) = uVar3;
  }
  iVar1 = *(int *)(this + (ulong)(uVar3 - 1) * 4 + 100);
  *(int *)(this + (ulong)uVar3 * 4 + 100) = iVar1;
  if (iVar1 == 0) {
    if ((param_7 == 2) && (this[0x60] != (Preprocessor)0x0)) {
      Preprocessor::printWarning(this,"extra argument to #ifdef ignored");
    }
    Preprocessor::whiteout(this,&local_5c,&local_60);
    if ((local_5c == local_60) ||
       (uVar3 = Preprocessor::identifierEnd(this,local_5c), uVar3 != local_60)) {
      Preprocessor::printError(this,"#ifdef requires an identififier");
      uVar4 = 0;
      goto LAB_00b93e00;
    }
    uVar6 = (ulong)local_5c;
    lVar7 = **(long **)(this + 0x38);
    uVar3 = uVar3 - local_5c;
    __n = (ulong)uVar3;
    if (uVar3 < 0x17) {
      __dest = (void *)((ulong)&local_78 | 1);
      local_78 = CONCAT71(local_78._1_7_,(char)uVar3 * '\x02');
      if (uVar3 != 0) goto LAB_00b93e4c;
    }
    else {
      uVar5 = __n + 0x10 & 0x1fffffff0;
      __dest = operator_new(uVar5);
      local_78 = uVar5 | 1;
      local_70 = __n;
      local_68 = __dest;
LAB_00b93e4c:
      memcpy(__dest,(void *)(lVar7 + uVar6),__n);
    }
    *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b93e60 to 00b93e6b has its CatchHandler @ 00b93e98 */
    lVar7 = Preprocessor::findMacro(this,(basic_string *)&local_78);
    *(uint *)(this + (ulong)*(uint *)(this + 300) * 4 + 100) = (uint)(lVar7 == 0);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  uVar4 = 1;
LAB_00b93e00:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


