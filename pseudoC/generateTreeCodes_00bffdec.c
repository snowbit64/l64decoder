// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateTreeCodes
// Entry Point: 00bffdec
// Size: 380 bytes
// Signature: undefined __cdecl generateTreeCodes(MarkovHuffmanTree * param_1, uint param_2, uint param_3, Codes * param_4, uint param_5, uint param_6)


/* MarkovHuffmanTreeCompressor::generateTreeCodes(MarkovHuffmanTree*, unsigned int, unsigned int,
   MarkovHuffmanTreeCompressor::Codes&, unsigned int, unsigned int) */

void MarkovHuffmanTreeCompressor::generateTreeCodes
               (MarkovHuffmanTree *param_1,uint param_2,uint param_3,Codes *param_4,uint param_5,
               uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)param_3;
  if (0xff < param_3) {
    lVar5 = *(long *)(param_1 + 0x10);
    do {
      param_5 = param_5 + 1;
      uVar1 = (((uint)uVar4 & 0xff) << 1 | 1) * 9;
      generateTreeCodes(param_1,param_2,
                        *(ushort *)(lVar5 + (ulong)param_2 + (ulong)(uVar1 >> 3)) >>
                        (ulong)(uVar1 & 7) & 0x1ff,param_4,param_5,param_6 << 1);
      lVar5 = *(long *)(param_1 + 0x10);
      uVar1 = ((uint)uVar4 & 0xff) * 0x12 + 0x12;
      param_6 = param_6 << 1 | 1;
      uVar1 = *(ushort *)(lVar5 + (ulong)param_2 + (ulong)(uVar1 >> 3)) >> (ulong)(uVar1 & 6) &
              0x1ff;
      uVar4 = (ulong)uVar1;
    } while (0xff < uVar1);
  }
  if (0x1b < param_5) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00bffef4 to 00bffefb has its CatchHandler @ 00bfff54 */
      param_4 = (Codes *)operator_new(0x38);
                    /* try { // try from 00bfff00 to 00bfff03 has its CatchHandler @ 00bfff44 */
      Logger::Logger((Logger *)param_4);
      LogManager::getInstance()::singletonLogManager = (Logger *)param_4;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar3 = LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "HUFFMAN OVERFLOW!!!\n");
                    /* catch() { ... } // from try @ 00bfff00 with catch @ 00bfff44 */
    operator_delete(param_4);
    __cxa_guard_abort(&LogManager::getInstance()::singletonLogManager);
                    /* WARNING: Subroutine does not return */
    FUN_00f27898(uVar3);
  }
  *(uint *)(param_4 + uVar4 * 4) = param_5 | param_6 << 5;
  return;
}


