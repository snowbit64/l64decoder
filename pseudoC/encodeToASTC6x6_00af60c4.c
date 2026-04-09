// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeToASTC6x6
// Entry Point: 00af60c4
// Size: 208 bytes
// Signature: undefined __thiscall encodeToASTC6x6(GiantsAdsProvider * this, uchar * param_1, uint param_2, uint param_3, uint param_4, uchar * param_5, uint param_6)


/* GiantsAdsProvider::encodeToASTC6x6(unsigned char const*, unsigned int, unsigned int, unsigned
   int, unsigned char*, unsigned int) */

uint __thiscall
GiantsAdsProvider::encodeToASTC6x6
          (GiantsAdsProvider *this,uchar *param_1,uint param_2,uint param_3,uint param_4,
          uchar *param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint local_60;
  uint uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  ASTCUtil::getBlockSize(0x3f,&uStack_5c,&local_60);
  uVar3 = 0;
  if (uStack_5c != 0) {
    uVar3 = ((param_2 + uStack_5c) - 1) / uStack_5c;
  }
  uVar1 = 0;
  if (local_60 != 0) {
    uVar1 = ((param_3 + local_60) - 1) / local_60;
  }
  if (param_6 == uVar3 * uVar1 * 0x10) {
    uVar3 = ASTCUtil::convertLDRBlocksFast
                      (param_1,param_2,param_3,param_4,uStack_5c,local_60,param_5,param_6);
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


