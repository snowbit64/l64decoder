// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeGlobalHLSLPSSL
// Entry Point: 00c32c48
// Size: 244 bytes
// Signature: undefined __cdecl writeGlobalHLSLPSSL(CodeStringStream * param_1, GlobalData * param_2, bool param_3, bool param_4)


/* IR_HllConvertUtil::writeGlobalHLSLPSSL(CodeStringStream&, IR_HllConvertUtil::GlobalData const*,
   bool, bool) */

void IR_HllConvertUtil::writeGlobalHLSLPSSL
               (CodeStringStream *param_1,GlobalData *param_2,bool param_3,bool param_4)

{
  char *pcVar1;
  GlobalData *pGVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar1 = "thread_group_memory";
  if (!param_3) {
    pcVar1 = "groupshared";
  }
  uVar3 = *(uint *)param_2;
  if ((!param_4) || (uVar3 < 2)) {
    switch(uVar3) {
    case 0:
      pGVar2 = param_2 + 0x19;
      if (((byte)param_2[0x18] & 1) != 0) {
        pGVar2 = *(GlobalData **)(param_2 + 0x28);
      }
      CodeStringStream::writeLine
                ((char *)param_1,"%s %s %s;\n",pcVar1,pGVar2,*(undefined8 *)(param_2 + 8));
      return;
    case 1:
      pGVar2 = param_2 + 0x19;
      if (((byte)param_2[0x18] & 1) != 0) {
        pGVar2 = *(GlobalData **)(param_2 + 0x28);
      }
      CodeStringStream::writeLine
                ((char *)param_1,"%s %s %s[%u];\n",pcVar1,pGVar2,*(undefined8 *)(param_2 + 8),
                 (ulong)*(uint *)(param_2 + 0x34));
      return;
    case 2:
    case 3:
      pGVar2 = param_2 + 0x19;
      if (((byte)param_2[0x18] & 1) != 0) {
        pGVar2 = *(GlobalData **)(param_2 + 0x28);
      }
      uVar4 = 0x74;
      if (uVar3 == 3) {
        uVar4 = 0x75;
      }
      CodeStringStream::writeLine
                ((char *)param_1,"uniform %s %s : register(%c%u);\n",pGVar2,
                 *(undefined8 *)(param_2 + 8),(ulong)uVar4,(ulong)*(uint *)(param_2 + 0x30));
      return;
    case 4:
      pGVar2 = param_2 + 0x19;
      if (((byte)param_2[0x18] & 1) != 0) {
        pGVar2 = *(GlobalData **)(param_2 + 0x28);
      }
      CodeStringStream::writeLine
                ((char *)param_1,"uniform %s %s : register(s%u);\n",pGVar2,
                 *(undefined8 *)(param_2 + 8),(ulong)*(uint *)(param_2 + 0x30));
      return;
    }
  }
  return;
}


