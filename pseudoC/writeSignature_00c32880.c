// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSignature
// Entry Point: 00c32880
// Size: 464 bytes
// Signature: undefined __cdecl writeSignature(SharedContext * param_1, CodeStringStream * param_2, vector * * param_3, uint param_4)


/* IR_HllConvertUtil::writeSignature(IR_HllConvertUtil::SharedContext&, CodeStringStream&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >**, unsigned int) */

void IR_HllConvertUtil::writeSignature
               (SharedContext *param_1,CodeStringStream *param_2,vector **param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  if (param_4 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar3 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    do {
      piVar4 = *(int **)param_3[uVar3];
LAB_00c328ec:
      if (piVar4 != *(int **)((long)param_3[uVar3] + 8)) {
        iVar2 = *piVar4;
        if (iVar2 != 2) {
          if (iVar2 == 3) {
            if (uVar6 < piVar4[0xc] + 1U) {
              uVar6 = piVar4[0xc] + 1;
            }
          }
          else if (iVar2 == 4) {
            piVar1 = piVar4 + 0xc;
            piVar4 = piVar4 + 0x10;
            if (uVar5 < *piVar1 + 1U) {
              uVar5 = *piVar1 + 1;
            }
            goto LAB_00c328ec;
          }
          piVar4 = piVar4 + 0x10;
          goto LAB_00c328ec;
        }
        piVar1 = piVar4 + 0xc;
        piVar4 = piVar4 + 0x10;
        if (uVar7 < *piVar1 + 1U) {
          uVar7 = *piVar1 + 1;
        }
        goto LAB_00c328ec;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_4);
  }
  uVar3 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8);
  CodeStringStream::writeLine((char *)param_2,"#define RootSig \\\n");
  CodeStringStream::writeLine
            ((char *)param_2,"\"RootFlags(%s), \" \\\n",
             "ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT|DENY_HULL_SHADER_ROOT_ACCESS|DENY_DOMAIN_SHADER_ROOT_ACCESS|DENY_GEOMETRY_SHADER_ROOT_ACCESS"
            );
  if (0 < (int)(uVar3 >> 6)) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      if (*(char *)(**(long **)(param_1 + 8) + lVar9 + 0x19) == '\0') {
        CodeStringStream::writeLine((char *)param_2,"\"CBV(b%u), \" \\\n",(ulong)uVar8);
        uVar8 = uVar8 + 1;
      }
      lVar9 = lVar9 + 0x40;
    } while ((uVar3 >> 6 & 0xffffffff) * 0x40 - lVar9 != 0);
  }
  if (uVar7 != 0) {
    CodeStringStream::writeLine
              ((char *)param_2,
               "\"DescriptorTable(SRV(t0, numDescriptors = %u, flags = DESCRIPTORS_VOLATILE)), \" \\\n"
               ,(ulong)uVar7);
  }
  if (uVar6 != 0) {
    CodeStringStream::writeLine
              ((char *)param_2,
               "\"DescriptorTable(UAV(u0, numDescriptors = %u, flags = DESCRIPTORS_VOLATILE)), \" \\\n"
               ,(ulong)uVar6);
  }
  if (uVar5 != 0) {
    CodeStringStream::writeLine
              ((char *)param_2,
               "\"DescriptorTable(Sampler(s0, numDescriptors = %u, flags = DESCRIPTORS_VOLATILE)) \" \\\n"
               ,(ulong)uVar5);
  }
  CodeStringStream::writeLine((char *)param_2,"/* end of macro */\n");
  return;
}


