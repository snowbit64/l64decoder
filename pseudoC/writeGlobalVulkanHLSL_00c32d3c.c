// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeGlobalVulkanHLSL
// Entry Point: 00c32d3c
// Size: 364 bytes
// Signature: undefined __cdecl writeGlobalVulkanHLSL(CodeStringStream * param_1, GlobalData * param_2, uint param_3)


/* IR_HllConvertUtil::writeGlobalVulkanHLSL(CodeStringStream&, IR_HllConvertUtil::GlobalData const*,
   unsigned int) */

void IR_HllConvertUtil::writeGlobalVulkanHLSL
               (CodeStringStream *param_1,GlobalData *param_2,uint param_3)

{
  undefined *puVar1;
  GlobalData *pGVar2;
  uint uVar3;
  
  uVar3 = *(uint *)param_2;
  if (4 < uVar3) {
    return;
  }
  switch(uVar3) {
  case 0:
    pGVar2 = param_2 + 0x19;
    if (((byte)param_2[0x18] & 1) != 0) {
      pGVar2 = *(GlobalData **)(param_2 + 0x28);
    }
    CodeStringStream::writeLine
              ((char *)param_1,"groupshared %s %s;\n",pGVar2,*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    pGVar2 = param_2 + 0x19;
    if (((byte)param_2[0x18] & 1) != 0) {
      pGVar2 = *(GlobalData **)(param_2 + 0x28);
    }
    CodeStringStream::writeLine
              ((char *)param_1,"groupshared %s %s[%u];\n",pGVar2,*(undefined8 *)(param_2 + 8),
               (ulong)*(uint *)(param_2 + 0x34));
    return;
  case 2:
    if (*(int *)(*(long *)(param_2 + 0x10) + 0x10) != 1) goto LAB_00c32df0;
    puVar1 = &DAT_004d201a;
    if (*(int *)(*(long *)(param_2 + 0x10) + 0x18) != 2) {
      puVar1 = &DAT_004e87ae;
    }
    CodeStringStream::writeLine((char *)param_1,"[[vk::image_with_depth(\"%s\")]]",puVar1);
    uVar3 = *(uint *)param_2;
    break;
  default:
  }
  if ((uVar3 == 3) && (*(int *)(*(long *)(param_2 + 0x10) + 0x10) == 1)) {
    CodeStringStream::writeLine((char *)param_1,"[[vk::image_format(\"unknown\")]]");
  }
LAB_00c32df0:
  pGVar2 = param_2 + 0x19;
  if (((byte)param_2[0x18] & 1) != 0) {
    pGVar2 = *(GlobalData **)(param_2 + 0x28);
  }
  CodeStringStream::writeLine
            ((char *)param_1,"[[vk::binding(%u,%u)]] uniform %s %s;\n",
             (ulong)*(uint *)(param_2 + 0x30),(ulong)param_3,pGVar2,*(undefined8 *)(param_2 + 8));
  return;
}


