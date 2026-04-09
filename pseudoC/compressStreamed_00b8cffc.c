// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compressStreamed
// Entry Point: 00b8cffc
// Size: 300 bytes
// Signature: undefined __cdecl compressStreamed(CompressionInputStream * param_1, CompressionOutputStream * param_2)


/* LZMACompressionUtil::compressStreamed(LZMACompressionUtil::CompressionInputStream*,
   LZMACompressionUtil::CompressionOutputStream*) */

undefined8
LZMACompressionUtil::compressStreamed
          (CompressionInputStream *param_1,CompressionOutputStream *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_98;
  CompressionOutputStream *pCStack_90;
  code *local_88;
  CompressionInputStream *pCStack_80;
  long local_78;
  undefined auStack_70 [40];
  undefined4 local_48;
  undefined auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = LzmaEnc_Create(s_allocFreeForLzma);
  LzmaEncProps_Init(auStack_70);
  local_48 = 1;
  iVar2 = LzmaEnc_SetProps(uVar3,auStack_70);
  if (iVar2 == 0) {
    local_78 = 5;
    iVar2 = LzmaEnc_WriteProperties(uVar3,auStack_40,&local_78);
    if (((iVar2 == 0) && (local_78 == 5)) &&
       (lVar4 = (**(code **)(*(long *)param_2 + 0x10))(param_2,auStack_40,5), lVar4 == 5)) {
      local_88 = SeqInStreamWrapper::wrapperRead;
      local_98 = SeqOutStreamWrapper::wrapperWrite;
      pCStack_90 = param_2;
      pCStack_80 = param_1;
      LzmaEnc_Encode(uVar3,&local_98,&local_88,0,s_allocFreeForLzma,s_allocFreeForLzma);
    }
  }
  LzmaEnc_Destroy(uVar3,s_allocFreeForLzma,s_allocFreeForLzma);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


