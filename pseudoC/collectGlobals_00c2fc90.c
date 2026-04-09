// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectGlobals
// Entry Point: 00c2fc90
// Size: 460 bytes
// Signature: undefined __cdecl collectGlobals(ConversionContext * param_1, IR_Section * param_2, vector * param_3, set * param_4)


/* IR_HllConvertUtil::collectGlobals(IR_HllConvertUtil::ConversionContext&, IR_Section*,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&,
   std::__ndk1::set<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&) */

byte IR_HllConvertUtil::collectGlobals
               (ConversionContext *param_1,IR_Section *param_2,vector *param_3,set *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  IR_Type *pIVar4;
  ulong uVar5;
  IR_Section *pIVar6;
  IR_Section *pIVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar8 = *(long *)(param_2 + 0x20);
  if ((int)((ulong)(*(long *)(param_2 + 0x28) - lVar8) >> 3) == 0) {
    bVar3 = false;
LAB_00c2fe34:
    return ~bVar3 & 1;
  }
  uVar10 = (ulong)(*(long *)(param_2 + 0x28) - lVar8) >> 3 & 0xffffffff;
  bVar3 = true;
  uVar11 = 0;
  do {
    puVar9 = *(uint **)(lVar8 + uVar11 * 8);
    uVar1 = *puVar9;
    if ((uVar1 & 0xfffffffe) == 10) {
      uVar2 = *(uint *)((long)puVar9 + ((ulong)(puVar9[1] >> 0xe) & 0x3fffc) + 8);
      if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x80) + ((ulong)uVar2 & 0x7fffffff) * 0x18) ==
          0xc) goto LAB_00c2fe10;
      pIVar4 = (IR_Type *)
               IR_RegisterSet::getRegisterType
                         ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),puVar9[2]);
      uVar5 = collectGlobalData(param_1,uVar2,pIVar4,param_3,param_4,uVar1 == 0xb);
joined_r0x00c2fe0c:
      if ((uVar5 & 1) == 0) goto LAB_00c2fe34;
    }
    else {
      if (uVar1 == 4) {
        pIVar7 = (IR_Section *)
                 IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)param_2,
                            *(uint *)((long)puVar9 + ((ulong)(puVar9[1] >> 0xe) & 0x3fffc) + 0xc));
LAB_00c2fe00:
        uVar5 = collectGlobals(param_1,pIVar7,param_3,param_4);
        goto joined_r0x00c2fe0c;
      }
      if (uVar1 == 2) {
        pIVar6 = (IR_Section *)
                 IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)param_2,
                            *(uint *)((long)puVar9 + ((ulong)(puVar9[1] >> 0xe) & 0x3fffc) + 0xc));
        pIVar7 = (IR_Section *)
                 IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)param_2,
                            *(uint *)((long)puVar9 + ((ulong)(puVar9[1] >> 0xe) & 0x3fffc) + 0x10));
        if ((pIVar6 != (IR_Section *)0x0) &&
           (uVar5 = collectGlobals(param_1,pIVar6,param_3,param_4), (uVar5 & 1) == 0))
        goto LAB_00c2fe34;
        if (pIVar7 != (IR_Section *)0x0) goto LAB_00c2fe00;
      }
    }
LAB_00c2fe10:
    bVar3 = uVar11 + 1 < uVar10;
    if (uVar10 - 1 == uVar11) goto LAB_00c2fe34;
    lVar8 = *(long *)(param_2 + 0x20);
    uVar11 = uVar11 + 1;
  } while( true );
}


