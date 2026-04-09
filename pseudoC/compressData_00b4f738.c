// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compressData
// Entry Point: 00b4f738
// Size: 224 bytes
// Signature: undefined __cdecl compressData(uchar * param_1, uint param_2, uchar * * param_3, uint * param_4)


/* SaveGameArchiveUtil::compressData(unsigned char const*, unsigned int, unsigned char*&, unsigned
   int&) */

uint SaveGameArchiveUtil::compressData(uchar *param_1,uint param_2,uchar **param_3,uint *param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = ZLIBCompressionUtil::getCompressionBufferSize(param_1,param_2);
  puVar4 = (undefined4 *)operator_new__((ulong)(uVar3 + 8));
  local_50 = puVar4 + 2;
  *param_3 = (uchar *)puVar4;
  uVar1 = *(undefined4 *)SAVEGAME_ARCHIVE_MARKER;
  *param_4 = uVar3;
  *puVar4 = uVar1;
  puVar4[1] = param_2;
  uVar3 = ZLIBCompressionUtil::compress(param_1,param_2,(uchar **)&local_50,param_4,false);
  if ((uVar3 & 1) == 0) {
    if (*param_3 != (uchar *)0x0) {
      operator_delete__(*param_3);
    }
    *param_3 = (uchar *)0x0;
  }
  else {
    *param_4 = *param_4 + 8;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


