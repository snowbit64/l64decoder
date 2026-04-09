// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b93b60
// Size: 368 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroUndef::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

void PreprocessorMetaMacroUndef::processMacro
               (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,uint *param_8,uint *param_9)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  Preprocessor *this;
  ulong __n;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_78;
  ulong local_70;
  void *local_68;
  uint local_60;
  uint local_5c;
  long local_58;
  
  this = (Preprocessor *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = param_4;
  local_5c = param_3;
  if (*(int *)(this + (ulong)*(uint *)(this + 300) * 4 + 100) == 0) {
    if ((param_7 == 2) && (this[0x60] != (Preprocessor)0x0)) {
      Preprocessor::printWarning(this,"extra argument to #undef ignored");
    }
    Preprocessor::whiteout(this,&local_5c,&local_60);
    if ((local_5c == local_60) ||
       (uVar2 = Preprocessor::identifierEnd(this,local_5c), uVar2 != local_60)) {
      Preprocessor::printError(this,"#undef requires an identififier");
      uVar3 = 0;
      goto LAB_00b93c3c;
    }
    uVar5 = (ulong)local_5c;
    lVar6 = **(long **)(this + 0x38);
    uVar2 = uVar2 - local_5c;
    __n = (ulong)uVar2;
    if (uVar2 < 0x17) {
      __dest = (void *)((ulong)&local_78 | 1);
      local_78 = CONCAT71(local_78._1_7_,(char)uVar2 * '\x02');
      if (uVar2 != 0) goto LAB_00b93c88;
    }
    else {
      uVar4 = __n + 0x10 & 0x1fffffff0;
      __dest = operator_new(uVar4);
      local_78 = uVar4 | 1;
      local_70 = __n;
      local_68 = __dest;
LAB_00b93c88:
      memcpy(__dest,(void *)(lVar6 + uVar5),__n);
    }
    *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b93c9c to 00b93cb7 has its CatchHandler @ 00b93cd0 */
    lVar6 = Preprocessor::findMacro(this,(basic_string *)&local_78);
    if (lVar6 != 0) {
      Preprocessor::deleteMacro(this,(basic_string *)&local_78);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  uVar3 = 1;
LAB_00b93c3c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


