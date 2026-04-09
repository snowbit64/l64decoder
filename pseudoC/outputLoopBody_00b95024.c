// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputLoopBody
// Entry Point: 00b95024
// Size: 412 bytes
// Signature: undefined __cdecl outputLoopBody(Preprocessor * param_1, basic_string * param_2, int param_3, uint param_4, uint param_5)


/* PreprocessorMetaMacro::outputLoopBody(Preprocessor*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, unsigned int,
   unsigned int) */

void PreprocessorMetaMacro::outputLoopBody
               (Preprocessor *param_1,basic_string *param_2,int param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  OutputContext *pOVar2;
  Macro MVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  bool bVar7;
  byte bVar8;
  Macro *pMVar9;
  char *pcVar10;
  OutputContext *this;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  ulong local_80;
  ulong local_78;
  byte *local_70;
  undefined auStack_68 [16];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar14 = *(long **)(param_1 + 0x38);
  pMVar9 = (Macro *)Preprocessor::createNewMacro(param_1,param_2);
  Preprocessor::addMacro(param_1,pMVar9);
  FUN_00b947e4(auStack_68);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(pMVar9 + 0x18));
  MVar3 = *(Macro *)((long)plVar14 + 0x4d);
  *(undefined4 *)(pMVar9 + 0x30) = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = (byte *)0x0;
  pMVar9[0x40] = MVar3;
  lVar13 = *plVar14;
                    /* try { // try from 00b950a8 to 00b950d7 has its CatchHandler @ 00b951c0 */
  bVar8 = Preprocessor::getIsLineStart(param_1,param_4);
  Preprocessor::processText
            (param_1,(char *)(lVar13 + (ulong)param_4),param_5 - param_4,(bool)(bVar8 & 1),0,
             (basic_string *)&local_80,true);
  pbVar6 = local_70;
  uVar5 = local_80;
  bVar7 = (local_80 & 1) != 0;
  pbVar11 = (byte *)((ulong)&local_80 | 1);
  if (bVar7) {
    pbVar11 = local_70;
  }
  uVar1 = local_80 >> 1 & 0x7f;
  if (bVar7) {
    uVar1 = local_78;
  }
  pbVar12 = pbVar11 + uVar1;
  pcVar10 = strchr(*(char **)(*(long *)(param_1 + 0x30) + 0x80),(uint)*pbVar11);
  if (pcVar10 != (char *)0x0) {
    pbVar11 = (byte *)((ulong)&local_80 | 2);
    if ((uVar5 & 1) != 0) {
      pbVar11 = pbVar6 + 1;
    }
    pcVar10 = strchr(*(char **)(*(long *)(param_1 + 0x30) + 0x88),(uint)pbVar12[-1]);
    if (pcVar10 != (char *)0x0) {
      pbVar12 = pbVar12 + -1;
    }
  }
  this = *(OutputContext **)(*(long *)(param_1 + 0x38) + 0x78);
  pOVar2 = this + 0x11;
  if (((byte)this[0x10] & 1) != 0) {
    pOVar2 = *(OutputContext **)(this + 0x20);
  }
                    /* try { // try from 00b95158 to 00b9517f has its CatchHandler @ 00b951c4 */
  Preprocessor::OutputContext::setLine
            (this,(char *)pOVar2,*(uint *)(*(long *)(param_1 + 0x38) + 0x40),0xffffffff);
  Preprocessor::sendout(param_1,(char *)pbVar11,(int)pbVar12 - (int)pbVar11,false);
  Preprocessor::deleteMacro(param_1,param_2);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


