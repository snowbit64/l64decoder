// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testBufferedDecompression
// Entry Point: 00b8d128
// Size: 508 bytes
// Signature: undefined testBufferedDecompression(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LZMACompressionUtil::testBufferedDecompression() */

void LZMACompressionUtil::testBufferedDecompression(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong local_108;
  undefined auStack_fc [4];
  ulong local_f8;
  long local_f0 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pvVar8 = operator_new__(0xc800);
  lVar11 = 0;
  do {
    bVar6 = (byte)lVar11;
    pcVar1 = (char *)((long)pvVar8 + lVar11);
    cVar5 = (char)(((uint)lVar11 >> 2 & 0x3fff) / 0x19);
    lVar11 = lVar11 + 2;
    *pcVar1 = bVar6 + cVar5 * -100;
    pcVar1[1] = (bVar6 | 1) + cVar5 * -100;
  } while (lVar11 != 0xc800);
  local_f8 = 0x10b2a;
  local_f0[0] = 5;
  pvVar9 = operator_new__(0x10b2f);
  iVar7 = LzmaCompress((long)pvVar9 + 5,&local_f8,pvVar8,0xc800,pvVar9,local_f0,5,0,0xffffffff,
                       0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  if ((iVar7 == 0) && (local_f0[0] == 5)) {
    iVar7 = (int)local_f8 + 5;
  }
  else {
    operator_delete__(pvVar9);
    pvVar9 = (void *)0x0;
    iVar7 = 0;
  }
  pvVar10 = operator_new__(0xc800);
  local_e0 = 0;
  uStack_d8 = 0;
  uVar12 = 5;
  LzmaDec_Allocate(local_f0,pvVar9,5,s_allocFreeForLzma);
  LzmaDec_Init(local_f0);
  uVar13 = 0;
  do {
    uVar2 = 0xc800 - uVar13;
    uVar3 = iVar7 - uVar12;
    if (0x3ff < uVar2) {
      uVar2 = 0x400;
    }
    local_f8 = (ulong)uVar2;
    if (0x3ff < uVar3) {
      uVar3 = 0x400;
    }
    local_108 = (ulong)uVar3;
    LzmaDec_DecodeToBuf(local_f0,(long)pvVar10 + (ulong)uVar13,&local_f8,
                        (long)pvVar9 + (ulong)uVar12,&local_108,0,auStack_fc);
    uVar13 = uVar13 + (int)local_f8;
    uVar12 = uVar12 + (int)local_108;
  } while (uVar13 >> 0xb < 0x19);
  LzmaDec_Free(local_f0,s_allocFreeForLzma);
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
  }
  operator_delete__(pvVar8);
  operator_delete__(pvVar10);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


