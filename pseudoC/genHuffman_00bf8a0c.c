// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: genHuffman
// Entry Point: 00bf8a0c
// Size: 400 bytes
// Signature: undefined __thiscall genHuffman(CompiledShaderArchive * this, uint param_1)


/* CompiledShaderArchive::genHuffman(unsigned int) */

void __thiscall CompiledShaderArchive::genHuffman(CompiledShaderArchive *this,uint param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  MH_DataItem *pMVar6;
  MarkovHuffmanTree *this_00;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (*(long *)(this + 0x80) != 0) {
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00bf8b64 to 00bf8b6f has its CatchHandler @ 00bf8b9c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "GENERATING MARKOV-HUFFMAN TREES (%u BITS LOOKAHEAD)\n",(ulong)param_1);
  lVar1 = *(long *)this;
  uVar16 = *(long *)(this + 8) - lVar1;
  pMVar6 = (MH_DataItem *)operator_new__(uVar16 >> 1 & 0xffffffff0);
  uVar15 = (uint)(uVar16 >> 5);
  if (uVar15 != 0) {
    uVar7 = uVar16 >> 5 & 0xffffffff;
    if (uVar7 < 2) {
      lVar9 = 0;
    }
    else {
      uVar16 = uVar16 >> 5 & 1;
      puVar11 = (undefined8 *)(lVar1 + 0x28);
      lVar9 = uVar7 - uVar16;
      puVar13 = (undefined8 *)(pMVar6 + 0x10);
      lVar8 = lVar9;
      do {
        lVar8 = lVar8 + -2;
        uVar14 = *puVar11;
        uVar2 = *(undefined4 *)(puVar11 + -3);
        uVar3 = *(undefined4 *)(puVar11 + 1);
        puVar13[-2] = puVar11[-4];
        *puVar13 = uVar14;
        puVar11 = puVar11 + 8;
        *(undefined4 *)(puVar13 + -1) = uVar2;
        *(undefined4 *)(puVar13 + 1) = uVar3;
        puVar13 = puVar13 + 4;
      } while (lVar8 != 0);
      if (uVar16 == 0) goto LAB_00bf8b14;
    }
    lVar8 = lVar9 - uVar7;
    puVar10 = (undefined4 *)(pMVar6 + lVar9 * 0x10 + 8);
    puVar12 = (undefined4 *)(lVar1 + lVar9 * 0x20 + 0x10);
    do {
      bVar4 = lVar8 != -1;
      lVar8 = lVar8 + 1;
      uVar3 = *puVar12;
      *(undefined8 *)(puVar10 + -2) = *(undefined8 *)(puVar12 + -2);
      *puVar10 = uVar3;
      puVar10 = puVar10 + 4;
      puVar12 = puVar12 + 8;
    } while (bVar4);
  }
LAB_00bf8b14:
  this_00 = (MarkovHuffmanTree *)operator_new(0x20);
                    /* try { // try from 00bf8b20 to 00bf8b23 has its CatchHandler @ 00bf8bb4 */
  MarkovHuffmanTree::MarkovHuffmanTree(this_00);
  *(MarkovHuffmanTree **)(this + 0x80) = this_00;
  MarkovHuffmanTree::generate(this_00,pMVar6,uVar15,param_1);
  operator_delete__(pMVar6);
  return;
}


