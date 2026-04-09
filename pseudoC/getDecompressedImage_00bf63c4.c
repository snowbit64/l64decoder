// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDecompressedImage
// Entry Point: 00bf63c4
// Size: 652 bytes
// Signature: undefined __thiscall getDecompressedImage(CompiledShaderArchive * this, ArchiveDataBlock * param_1, uint * param_2)


/* CompiledShaderArchive::getDecompressedImage(CompiledShaderArchive::ArchiveDataBlock const&,
   unsigned int&) */

uchar * __thiscall
CompiledShaderArchive::getDecompressedImage
          (CompiledShaderArchive *this,ArchiveDataBlock *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  ArchiveDataBlock AVar3;
  int iVar4;
  uchar *puVar5;
  ulong uVar6;
  Logger *pLVar7;
  char *pcVar8;
  ulong uVar9;
  uchar *puVar10;
  uchar *puVar11;
  uint uVar12;
  
  uVar9 = (ulong)(byte)param_1[0xc];
  if (uVar9 == 0) {
    puVar10 = *(uchar **)param_1;
    *param_2 = *(uint *)(param_1 + 8);
  }
  else {
    puVar10 = (uchar *)(ulong)*(uint *)(param_1 + 8);
    puVar11 = *(uchar **)param_1;
    do {
      uVar9 = uVar9 - 1;
      uVar12 = (uint)puVar10;
      if (uVar9 == 0xffffffffffffffff) {
        *param_2 = uVar12;
        return puVar11;
      }
      lVar1 = (uVar9 & 0xffffffff) + (uVar9 & 0xffffffff) * 4;
      uVar2 = *(uint *)(param_1 + lVar1 + 0xe);
      AVar3 = param_1[lVar1 + 0xd];
      puVar5 = (uchar *)operator_new__((ulong)(uchar *)(ulong)uVar2);
      if (AVar3 == (ArchiveDataBlock)0x2) {
        if (*(MarkovHuffmanTree **)(this + 0x80) == (MarkovHuffmanTree *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 00bf65cc to 00bf65d3 has its CatchHandler @ 00bf6654 */
            pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bf65d8 to 00bf65db has its CatchHandler @ 00bf6650 */
            Logger::Logger(pLVar7);
            LogManager::getInstance()::singletonLogManager = pLVar7;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar8 = "No tree set in shader archive - cannot decompress CT_MARKOV_HUFFMAN type\n";
LAB_00bf6514:
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar8);
LAB_00bf6518:
          uVar6 = 0;
        }
        else {
          MarkovHuffmanTree::decompress
                    (*(MarkovHuffmanTree **)(this + 0x80),puVar11,uVar12,puVar5,uVar2);
          uVar6 = 1;
        }
      }
      else if (AVar3 == (ArchiveDataBlock)0x1) {
        if (*(uchar **)(this + 0x78) == (uchar *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 00bf6588 to 00bf658f has its CatchHandler @ 00bf6668 */
            pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bf6594 to 00bf6597 has its CatchHandler @ 00bf6658 */
            Logger::Logger(pLVar7);
            LogManager::getInstance()::singletonLogManager = pLVar7;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar8 = "No dictionary in shader archive - cannot decompress CT_DICT type\n";
          goto LAB_00bf6514;
        }
        CompressionDictionary::decompress
                  (*(uchar **)(this + 0x78),(uint)puVar11,puVar10,(uint)puVar5);
        uVar6 = 1;
      }
      else {
        if ((byte)AVar3 != 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 00bf6544 to 00bf654b has its CatchHandler @ 00bf667c */
            pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bf6550 to 00bf6553 has its CatchHandler @ 00bf666c */
            Logger::Logger(pLVar7);
            LogManager::getInstance()::singletonLogManager = pLVar7;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Unknown compression type in shader archive - cannot decompress %u type\n"
                             ,(ulong)(uint)(byte)AVar3);
          goto LAB_00bf6518;
        }
        uVar6 = LZMACompressionUtil::decompress(puVar11,uVar12,puVar5,uVar2);
        uVar6 = uVar6 & 0xffffffff;
      }
      if ((puVar11 != (uchar *)0x0) && (puVar11 != *(uchar **)param_1)) {
        operator_delete__(puVar11);
      }
      puVar10 = (uchar *)(ulong)uVar2;
      puVar11 = puVar5;
    } while ((uVar6 & 1) != 0);
    operator_delete__(puVar5);
    puVar10 = (uchar *)0x0;
  }
  return puVar10;
}


