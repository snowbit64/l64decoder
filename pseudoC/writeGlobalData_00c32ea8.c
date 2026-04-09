// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeGlobalData
// Entry Point: 00c32ea8
// Size: 208 bytes
// Signature: undefined __cdecl writeGlobalData(ConversionContext * param_1, CodeStringStream * param_2, vector * param_3)


/* IR_HllConvertUtil::writeGlobalData(IR_HllConvertUtil::ConversionContext&, CodeStringStream&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&) */

void IR_HllConvertUtil::writeGlobalData
               (ConversionContext *param_1,CodeStringStream *param_2,vector *param_3)

{
  GlobalData *pGVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)param_3;
  if (*(long *)(param_3 + 8) != lVar4) {
    uVar5 = 0;
    do {
      pGVar1 = (GlobalData *)(lVar4 + uVar5 * 0x40);
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
      case 2:
        bVar2 = false;
        goto LAB_00c32ef4;
      case 3:
        bVar2 = true;
LAB_00c32ef4:
        bVar3 = false;
LAB_00c32ef8:
        writeGlobalHLSLPSSL(param_2,pGVar1,bVar2,bVar3);
        break;
      case 4:
        bVar2 = true;
        bVar3 = true;
        goto LAB_00c32ef8;
      case 6:
        writeGlobalVulkanHLSL
                  (param_2,pGVar1,*(uint *)(&DAT_0053e108 + (ulong)*(uint *)(param_1 + 0x14) * 4));
      }
      lVar4 = *(long *)param_3;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(param_3 + 8) - lVar4 >> 6));
  }
  return;
}


