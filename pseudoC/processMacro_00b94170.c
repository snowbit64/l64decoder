// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b94170
// Size: 768 bytes
// Signature: undefined __thiscall processMacro(PreprocessorMetaMacroDefeval * this, Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroDefeval::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

void __thiscall
PreprocessorMetaMacroDefeval::processMacro
          (PreprocessorMetaMacroDefeval *this,Preprocessor *param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,uint param_7,uint *param_8,uint *param_9)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  Macro *pMVar5;
  ulong *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  void *__dest;
  ulong uVar9;
  long lVar10;
  long *plVar11;
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
  if (*(int *)(param_1 + (ulong)*(uint *)(param_1 + 300) * 4 + 100) != 0) {
    uVar4 = 1;
    goto LAB_00b9443c;
  }
  Preprocessor::whiteout(param_1,&local_6c,&local_70);
  if ((local_6c == local_70) ||
     (uVar3 = Preprocessor::identifierEnd(param_1,local_6c), uVar3 != local_70)) {
    Preprocessor::printError(param_1,"#defeval requires an identifier");
    uVar3 = local_70;
  }
  plVar11 = *(long **)(param_1 + 0x38);
  uVar12 = (ulong)local_6c;
  lVar10 = *plVar11;
  uVar3 = uVar3 - local_6c;
  uVar8 = (ulong)uVar3;
  if (uVar3 < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)uVar3 * '\x02');
    if (uVar3 != 0) goto LAB_00b94260;
  }
  else {
    uVar9 = uVar8 + 0x10 & 0x1fffffff0;
    __dest = operator_new(uVar9);
    local_88 = uVar9 | 1;
    local_80 = uVar8;
    local_78 = __dest;
LAB_00b94260:
    memcpy(__dest,(void *)(lVar10 + uVar12),uVar8);
  }
  *(undefined *)((long)__dest + uVar8) = 0;
                    /* try { // try from 00b94274 to 00b942db has its CatchHandler @ 00b94474 */
  pMVar5 = (Macro *)Preprocessor::createNewMacro(param_1,(basic_string *)&local_88);
  lVar10 = *plVar11;
  bVar2 = Preprocessor::getIsLineStart(param_1,param_4);
  Preprocessor::processText
            (param_1,(char *)(lVar10 + (ulong)param_4),param_5 - param_4,(bool)(bVar2 & 1),0,
             (basic_string *)(pMVar5 + 0x18),false);
  lVar10 = Preprocessor::findMacro(param_1,(basic_string *)&local_88);
  if (lVar10 != 0) {
    Preprocessor::deleteMacro(param_1,(basic_string *)&local_88);
  }
  Preprocessor::addMacro(param_1,pMVar5);
  pMVar5[0x40] = *(Macro *)((long)plVar11 + 0x4d);
  if (param_7 == 0) {
                    /* try { // try from 00b943e0 to 00b943eb has its CatchHandler @ 00b94474 */
    uVar8 = Preprocessor::usesArgRefs(param_1,pMVar5);
    if ((uVar8 & 1) == 0) {
      uVar7 = 0xffffffff;
      goto LAB_00b943f4;
    }
  }
  else {
    uVar8 = (ulong)param_7;
    lVar10 = 0;
    do {
                    /* try { // try from 00b94300 to 00b94307 has its CatchHandler @ 00b9447c */
      Preprocessor::whiteout
                (param_1,(uint *)((long)param_8 + lVar10),(uint *)((long)param_9 + lVar10));
      lVar10 = lVar10 + 4;
    } while (uVar8 * 4 - lVar10 != 0);
    if ((param_7 == 1) && (*param_9 == *param_8)) {
      uVar7 = 0;
LAB_00b943f4:
      *(undefined4 *)(pMVar5 + 0x30) = uVar7;
    }
    else {
      lVar10 = (uVar8 + (ulong)param_7 * 2) * 8;
                    /* try { // try from 00b94340 to 00b94343 has its CatchHandler @ 00b94474 */
      puVar6 = (ulong *)operator_new__(lVar10 + 8);
      *puVar6 = uVar8;
      memset(puVar6 + 1,0,((lVar10 - 0x18U) / 0x18) * 0x18 + 0x18);
      lVar10 = 0;
      *(ulong **)(pMVar5 + 0x38) = puVar6 + 1;
      *(uint *)(pMVar5 + 0x30) = param_7;
      do {
                    /* try { // try from 00b94394 to 00b943c7 has its CatchHandler @ 00b94478 */
        if ((*param_8 == *param_9) ||
           (uVar3 = Preprocessor::identifierEnd(param_1,*param_8), uVar3 != *param_9)) {
                    /* try { // try from 00b94414 to 00b94423 has its CatchHandler @ 00b94470 */
          Preprocessor::printError
                    (param_1,"#defeval with named args needs identifiers as arg names");
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          uVar4 = 0;
          goto LAB_00b9443c;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(*(long *)(pMVar5 + 0x38) + lVar10),*plVar11 + (ulong)*param_8);
        param_8 = param_8 + 1;
        param_9 = param_9 + 1;
        lVar10 = lVar10 + 0x18;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  uVar4 = 1;
LAB_00b9443c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


