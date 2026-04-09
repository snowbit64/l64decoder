// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compressAllShadersUsingHuffman
// Entry Point: 00bf8bc8
// Size: 716 bytes
// Signature: undefined __thiscall compressAllShadersUsingHuffman(CompiledShaderArchive * this, bool param_1)


/* CompiledShaderArchive::compressAllShadersUsingHuffman(bool) */

void __thiscall
CompiledShaderArchive::compressAllShadersUsingHuffman(CompiledShaderArchive *this,bool param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint local_84;
  uchar *local_80;
  MarkovHuffmanTreeCompressor aMStack_78 [16];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x80) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00bf8e58 to 00bf8e63 has its CatchHandler @ 00bf8e94 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "CAN\'T PERFORM MARKOV-HUFFMAN COMPRESSION - NO TREE SET\n");
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00bf8dc8 to 00bf8dd3 has its CatchHandler @ 00bf8eac */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "PERFORMING MARKOV-HUFFMAN COMPRESSION\n");
    MarkovHuffmanTreeCompressor::MarkovHuffmanTreeCompressor
              (aMStack_78,*(MarkovHuffmanTree **)(this + 0x80));
    lVar9 = *(long *)this;
    uVar10 = *(long *)(this + 8) - lVar9;
    if ((int)(uVar10 >> 5) == 0) {
      iVar6 = 0;
      uVar11 = 0;
    }
    else {
      lVar12 = 0;
      uVar11 = 0;
      iVar6 = 0;
      while( true ) {
        lVar9 = lVar9 + lVar12;
        uVar2 = *(uint *)(lVar9 + 0x10);
        uVar5 = uVar2;
        if (*(char *)(lVar9 + 0x14) != '\x02') {
                    /* try { // try from 00bf8c80 to 00bf8c93 has its CatchHandler @ 00bf8ec8 */
          MarkovHuffmanTreeCompressor::compress
                    (aMStack_78,*(uchar **)(lVar9 + 8),uVar2,&local_80,&local_84);
          if (param_1) {
            lVar9 = *(long *)this;
            pvVar8 = *(void **)(lVar9 + lVar12 + 8);
            if (pvVar8 != (void *)0x0) {
              operator_delete__(pvVar8);
              lVar9 = *(long *)this;
            }
            bVar3 = *(byte *)(lVar9 + lVar12 + 0x14);
            lVar1 = lVar9 + (ulong)bVar3 * 5 + lVar12;
            *(byte *)(lVar9 + lVar12 + 0x14) = bVar3 + 1;
            *(undefined *)(lVar1 + 0x15) = 2;
            *(uint *)(lVar1 + 0x16) = uVar2;
            lVar9 = *(long *)this;
            *(uint *)(lVar9 + lVar12 + 0x10) = local_84;
            *(uchar **)(lVar9 + lVar12 + 8) = local_80;
            uVar5 = local_84;
          }
          else {
            uVar5 = local_84;
            if (local_80 != (uchar *)0x0) {
              operator_delete__(local_80);
              uVar5 = local_84;
            }
          }
        }
        uVar11 = uVar2 + uVar11;
        iVar6 = uVar5 + iVar6;
        if ((uVar10 >> 5 & 0xffffffff) * 0x20 + -0x20 == lVar12) break;
        lVar9 = *(long *)this;
        lVar12 = lVar12 + 0x20;
      }
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00bf8e10 to 00bf8e1b has its CatchHandler @ 00bf8e98 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00bf8d68 to 00bf8d7f has its CatchHandler @ 00bf8ec4 */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)(((float)(ulong)(uVar11 - iVar6) * 100.0) / (float)(ulong)uVar11),
                      "Saved %u bytes from %u bytes (%f%%)\n",(ulong)(uVar11 - iVar6),(ulong)uVar11)
    ;
    MarkovHuffmanTreeCompressor::~MarkovHuffmanTreeCompressor(aMStack_78);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


