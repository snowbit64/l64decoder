// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompressData
// Entry Point: 00b4f964
// Size: 160 bytes
// Signature: undefined __cdecl decompressData(uchar * param_1, uint param_2, uchar * * param_3, uint * param_4)


/* SaveGameArchiveUtil::decompressData(unsigned char const*, unsigned int, unsigned char*&, unsigned
   int&) */

undefined8
SaveGameArchiveUtil::decompressData(uchar *param_1,uint param_2,uchar **param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uchar *puVar3;
  ulong uVar4;
  
  if ((param_2 < 8) || (*(int *)param_1 != *(int *)SAVEGAME_ARCHIVE_MARKER)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4);
    *param_4 = uVar1;
    puVar3 = (uchar *)operator_new__((ulong)uVar1);
    *param_3 = puVar3;
    if ((uVar1 == 0) ||
       (uVar4 = ZLIBCompressionUtil::decompress(param_1 + 8,param_2 - 8,puVar3,uVar1),
       (uVar4 & 1) != 0)) {
      uVar2 = 1;
    }
    else {
      if (*param_3 != (uchar *)0x0) {
        operator_delete__(*param_3);
      }
      uVar2 = 0;
      *param_3 = (uchar *)0x0;
    }
  }
  return uVar2;
}


