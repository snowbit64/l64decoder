// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemorySize
// Entry Point: 00af6350
// Size: 184 bytes
// Signature: undefined __thiscall getMemorySize(GiantsAdsProvider * this, bool param_1, uint param_2, uint param_3)


/* GiantsAdsProvider::getMemorySize(bool, unsigned int, unsigned int) */

void __thiscall
GiantsAdsProvider::getMemorySize(GiantsAdsProvider *this,bool param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1) {
    ASTCUtil::getBlockSize(0x3f,&local_3c,&local_40);
    uVar2 = 0;
    if (local_3c != 0) {
      uVar2 = ((param_2 + local_3c) - 1) / local_3c;
    }
    uVar3 = 0;
    if (local_40 != 0) {
      uVar3 = ((param_3 + local_40) - 1) / local_40;
    }
    iVar1 = uVar2 * uVar3 * 0x10;
  }
  else {
    uVar2 = param_3 * 2;
    if (((param_3 | param_2) & 3) != 0) {
      uVar2 = param_3 * 2 + 6;
      param_2 = param_2 + 3;
    }
    iVar1 = (uVar2 & 0xfffffff8) * (param_2 >> 2);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}


