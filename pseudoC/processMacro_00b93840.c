// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b93840
// Size: 756 bytes
// Signature: undefined __thiscall processMacro(PreprocessorMetaMacroDefine * this, Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroDefine::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

void __thiscall
PreprocessorMetaMacroDefine::processMacro
          (PreprocessorMetaMacroDefine *this,Preprocessor *param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,uint param_7,uint *param_8,uint *param_9)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  Macro *pMVar5;
  ulong *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  void *__dest;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_88;
  ulong local_80;
  void *local_78;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = param_3;
  local_6c = param_2;
  if (*(int *)(param_1 + (ulong)*(uint *)(param_1 + 300) * 4 + 100) == 0) {
    plVar9 = *(long **)(param_1 + 0x38);
    Preprocessor::whiteout(param_1,&local_6c,&local_70);
    if ((local_6c == local_70) ||
       (uVar3 = Preprocessor::identifierEnd(param_1,local_6c), uVar3 != local_70)) {
      Preprocessor::printError(param_1,"#define requires an identifier");
LAB_00b93910:
      uVar4 = 0;
      goto LAB_00b93914;
    }
    uVar12 = (ulong)local_6c;
    lVar8 = *plVar9;
    uVar3 = uVar3 - local_6c;
    uVar10 = (ulong)uVar3;
    if (uVar3 < 0x17) {
      __dest = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)uVar3 * '\x02');
      if (uVar3 != 0) goto LAB_00b9396c;
    }
    else {
      uVar11 = uVar10 + 0x10 & 0x1fffffff0;
      __dest = operator_new(uVar11);
      local_88 = uVar11 | 1;
      local_80 = uVar10;
      local_78 = __dest;
LAB_00b9396c:
      memcpy(__dest,(void *)(lVar8 + uVar12),uVar10);
    }
    *(undefined *)((long)__dest + uVar10) = 0;
                    /* try { // try from 00b93980 to 00b9399b has its CatchHandler @ 00b93b38 */
    lVar8 = Preprocessor::findMacro(param_1,(basic_string *)&local_88);
    if (lVar8 != 0) {
      Preprocessor::deleteMacro(param_1,(basic_string *)&local_88);
    }
                    /* try { // try from 00b9399c to 00b939db has its CatchHandler @ 00b93b3c */
    pMVar5 = (Macro *)Preprocessor::createNewMacro(param_1,(basic_string *)&local_88);
    Preprocessor::addMacro(param_1,pMVar5);
    uVar3 = local_70;
    uVar2 = local_70;
    if (param_6 != 1) {
      uVar3 = param_5;
      uVar2 = param_4;
    }
    Preprocessor::removeComments(param_1,uVar2,uVar3,0,(basic_string *)(pMVar5 + 0x18));
    pMVar5[0x40] = *(Macro *)((long)plVar9 + 0x4d);
    if (param_7 == 0) {
                    /* try { // try from 00b93ae0 to 00b93aeb has its CatchHandler @ 00b93b3c */
      uVar10 = Preprocessor::usesArgRefs(param_1,pMVar5);
      if ((uVar10 & 1) == 0) {
        uVar7 = 0xffffffff;
        goto LAB_00b93af4;
      }
    }
    else {
      uVar10 = (ulong)param_7;
      lVar8 = 0;
      do {
                    /* try { // try from 00b93a00 to 00b93a07 has its CatchHandler @ 00b93b44 */
        Preprocessor::whiteout
                  (param_1,(uint *)((long)param_8 + lVar8),(uint *)((long)param_9 + lVar8));
        lVar8 = lVar8 + 4;
      } while (uVar10 * 4 - lVar8 != 0);
      if ((param_7 == 1) && (*param_9 == *param_8)) {
        uVar7 = 0;
LAB_00b93af4:
        *(undefined4 *)(pMVar5 + 0x30) = uVar7;
      }
      else {
        lVar8 = (uVar10 + (ulong)param_7 * 2) * 8;
                    /* try { // try from 00b93a40 to 00b93a43 has its CatchHandler @ 00b93b3c */
        puVar6 = (ulong *)operator_new__(lVar8 + 8);
        *puVar6 = uVar10;
        memset(puVar6 + 1,0,((lVar8 - 0x18U) / 0x18) * 0x18 + 0x18);
        lVar8 = 0;
        *(ulong **)(pMVar5 + 0x38) = puVar6 + 1;
        *(uint *)(pMVar5 + 0x30) = param_7;
        do {
                    /* try { // try from 00b93a94 to 00b93ac7 has its CatchHandler @ 00b93b40 */
          if ((*param_8 == *param_9) ||
             (uVar3 = Preprocessor::identifierEnd(param_1,*param_8), uVar3 != *param_9)) {
                    /* try { // try from 00b93b0c to 00b93b1b has its CatchHandler @ 00b93b34 */
            Preprocessor::printError
                      (param_1,"#define with named args needs identifiers as arg names");
            if ((local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            goto LAB_00b93910;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(*(long *)(pMVar5 + 0x38) + lVar8),*plVar9 + (ulong)*param_8);
          param_8 = param_8 + 1;
          param_9 = param_9 + 1;
          lVar8 = lVar8 + 0x18;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  uVar4 = 1;
LAB_00b93914:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


