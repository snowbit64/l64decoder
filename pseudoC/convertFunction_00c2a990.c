// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertFunction
// Entry Point: 00c2a990
// Size: 592 bytes
// Signature: undefined __cdecl convertFunction(ConversionContext * param_1, CodeStringStream * param_2, CodeStringStream * param_3, vector * param_4)


/* IR_HllConvertUtil::convertFunction(IR_HllConvertUtil::ConversionContext&, CodeStringStream&,
   CodeStringStream&, std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> > const&) */

void IR_HllConvertUtil::convertFunction
               (ConversionContext *param_1,CodeStringStream *param_2,CodeStringStream *param_3,
               vector *param_4)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong __n;
  long **pplVar11;
  CodeStringStream aCStack_d0 [24];
  byte local_b8;
  void *local_a8;
  CodeStringStream aCStack_a0 [24];
  byte local_88;
  void *local_78;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar10 = *(long *)(param_1 + 8);
  pplVar11 = *(long ***)(lVar10 + 0xd8);
  while (pplVar11 != (long **)(lVar10 + 0xe0)) {
    *(long **)(param_1 + 8) = pplVar11[4];
    convertAsmFunction(param_1,param_2);
    pplVar4 = (long **)pplVar11[1];
    if ((long **)pplVar11[1] == (long **)0x0) {
      pplVar4 = pplVar11 + 2;
      bVar3 = (long **)**pplVar4 != pplVar11;
      pplVar11 = (long **)*pplVar4;
      if (bVar3) {
        do {
          plVar5 = *pplVar4;
          pplVar4 = (long **)(plVar5 + 2);
          pplVar11 = (long **)*pplVar4;
        } while (*pplVar11 != plVar5);
      }
    }
    else {
      do {
        pplVar11 = pplVar4;
        pplVar4 = (long **)*pplVar11;
      } while (*pplVar11 != (long *)0x0);
    }
  }
  *(long *)(param_1 + 8) = lVar10;
  local_68 = (byte *)0x0;
  local_60 = (byte *)0x0;
  local_70 = (byte *)0x0;
  if (*(uint *)(lVar10 + 0x98) != 0) {
    __n = (ulong)*(uint *)(lVar10 + 0x98) * 0x20;
                    /* try { // try from 00c2aa58 to 00c2aa5f has its CatchHandler @ 00c2abe0 */
    local_70 = (byte *)operator_new(__n);
    pbVar8 = local_70 + __n;
    local_60 = pbVar8;
    memset(local_70,0,__n);
    local_68 = pbVar8;
  }
                    /* try { // try from 00c2aa7c to 00c2aa83 has its CatchHandler @ 00c2abfc */
  CodeStringStream::CodeStringStream(aCStack_a0);
                    /* try { // try from 00c2aa84 to 00c2aa8b has its CatchHandler @ 00c2abf4 */
  CodeStringStream::CodeStringStream(aCStack_d0);
                    /* try { // try from 00c2aa8c to 00c2ab2f has its CatchHandler @ 00c2ac04 */
  CodeStringStream::changeIndent(aCStack_d0,4);
  pbVar6 = *(byte **)(param_1 + 8);
  pbVar8 = *(byte **)(pbVar6 + 0x10);
  pbVar9 = *(byte **)(pbVar6 + 0x30);
  if ((*pbVar6 & 1) == 0) {
    pbVar8 = pbVar6 + 1;
  }
  pbVar1 = pbVar6 + 0x19;
  if ((pbVar6[0x18] & 1) != 0) {
    pbVar1 = *(byte **)(pbVar6 + 0x28);
  }
  if (pbVar9 == (byte *)0x0) {
    pbVar7 = &DAT_0050a39f;
  }
  else {
    pbVar7 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar7 = pbVar9 + 1;
    }
  }
  convertSection(param_1,**(IR_Section ***)(pbVar6 + 0xb8),(vector *)&local_70,
                 (vector *)(pbVar6 + 0x68),(char *)pbVar8,(char *)pbVar1,aCStack_d0,aCStack_a0,
                 param_3,(char *)pbVar7,param_4);
  StringStream::append((StringStream *)param_2,(StringStream *)aCStack_a0);
  CodeStringStream::writeLine((char *)param_2,&DAT_004fddf9);
  StringStream::append((StringStream *)param_2,(StringStream *)aCStack_d0);
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  StringStream::~StringStream((StringStream *)aCStack_d0);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  StringStream::~StringStream((StringStream *)aCStack_a0);
  pbVar8 = local_70;
  pbVar9 = local_68;
  if (local_70 != (byte *)0x0) {
    while (pbVar6 = pbVar9, pbVar6 != pbVar8) {
      pbVar9 = pbVar6 + -0x20;
      if ((*pbVar9 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_68 = pbVar8;
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


