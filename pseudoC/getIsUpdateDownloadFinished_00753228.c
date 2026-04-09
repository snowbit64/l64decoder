// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsUpdateDownloadFinished
// Entry Point: 00753228
// Size: 436 bytes
// Signature: undefined getIsUpdateDownloadFinished(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getIsUpdateDownloadFinished() */

bool EngineManager::getIsUpdateDownloadFinished(void)

{
  char *pcVar1;
  uint uVar2;
  uchar *puVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  long in_x0;
  void *pvVar8;
  ulong *puVar9;
  long lVar10;
  byte *pbVar11;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  byte abStack_48 [16];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (*(char *)(in_x0 + 0x33c) == '\0') {
    bVar6 = (*(byte *)(in_x0 + 0x180) & 1) != 0;
    puVar3 = (uchar *)(in_x0 + 0x181);
    if (bVar6) {
      puVar3 = *(uchar **)(in_x0 + 400);
    }
    uVar2 = (uint)(*(byte *)(in_x0 + 0x180) >> 1);
    if (bVar6) {
      uVar2 = *(uint *)(in_x0 + 0x188);
    }
    MD5Hash::getMD5Hash(puVar3,uVar2,abStack_48);
    pvVar8 = operator_new__(0x21);
    lVar10 = 0;
    pbVar11 = abStack_48;
    do {
      pcVar1 = (char *)((long)pvVar8 + lVar10);
      lVar10 = lVar10 + 2;
      cVar4 = "0123456789abcdef"[(ulong)*pbVar11 & 0xf];
      *pcVar1 = "0123456789abcdef"[*pbVar11 >> 4];
      pcVar1[1] = cVar4;
      pbVar11 = pbVar11 + 1;
    } while (lVar10 != 0x20);
    *(undefined *)((long)pvVar8 + 0x20) = 0;
    FUN_006cadd8(local_98,in_x0 + 0x168,"updater/");
                    /* try { // try from 007532e4 to 007532ef has its CatchHandler @ 00753408 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)local_98);
    local_70 = (void *)puVar9[2];
    uStack_78 = puVar9[1];
    local_80 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00753308 to 00753317 has its CatchHandler @ 007533f0 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_80);
    local_50 = (char *)puVar9[2];
    uStack_58 = puVar9[1];
    local_60 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    operator_delete__(pvVar8);
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
                    /* try { // try from 00753370 to 00753377 has its CatchHandler @ 007533dc */
    iVar7 = NativeFileUtil::getFileType(pcVar1,false);
    if (iVar7 == 1) {
      bVar6 = true;
      *(undefined *)(in_x0 + 0x33c) = 1;
    }
    else {
      bVar6 = *(char *)(in_x0 + 0x33c) != '\0';
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    bVar6 = false;
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


