// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generate
// Entry Point: 00bffac0
// Size: 592 bytes
// Signature: undefined __thiscall generate(MarkovHuffmanTree * this, MH_DataItem * param_1, uint param_2, uint param_3)


/* MarkovHuffmanTree::generate(MH_DataItem const*, unsigned int, unsigned int) */

void __thiscall
MarkovHuffmanTree::generate(MarkovHuffmanTree *this,MH_DataItem *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  Counts *pCVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  Logger *this_00;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  Counts *pCVar12;
  void **ppvVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  uVar2 = 1 << (ulong)(param_3 & 0x1f);
  uVar14 = (ulong)uVar2;
  pCVar4 = (Counts *)operator_new__(uVar14 << 10);
  pvVar5 = operator_new__(uVar14 << 3);
  uVar15 = 0;
  pCVar12 = pCVar4;
  do {
    memset(pCVar12,0,0x400);
    *(undefined8 *)((long)pvVar5 + uVar15 * 8) = 0;
    uVar15 = uVar15 + 1;
    pCVar12 = pCVar12 + 0x400;
  } while (uVar14 != uVar15);
  if (param_2 != 0) {
    uVar15 = 0;
    do {
      uVar10 = *(uint *)((long)(param_1 + uVar15 * 0x10) + 8);
      uVar8 = (ulong)uVar10;
      if (uVar10 != 0) {
        pbVar9 = *(byte **)(param_1 + uVar15 * 0x10);
        uVar10 = 0;
        do {
          bVar1 = *pbVar9;
          uVar8 = uVar8 - 1;
          lVar11 = (ulong)bVar1 * 4;
          *(int *)(pCVar4 + lVar11 + (ulong)uVar10 * 0x400) =
               *(int *)(pCVar4 + lVar11 + (ulong)uVar10 * 0x400) + 1;
          pbVar9 = pbVar9 + 1;
          uVar10 = ((uint)bVar1 | uVar10 << 8) & uVar2 - 1;
        } while (uVar8 != 0);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_2);
  }
  uVar15 = 0;
  uVar8 = 0;
  pCVar12 = pCVar4;
  do {
    lVar11 = makeSingleTree(pCVar12);
    iVar3 = *(int *)(lVar11 + 0x18);
    pCVar12 = pCVar12 + 0x400;
    *(long *)((long)pvVar5 + uVar15 * 8) = lVar11;
    uVar15 = uVar15 + 1;
    uVar10 = iVar3 + (int)uVar8;
    uVar8 = (ulong)uVar10;
  } while (uVar14 != uVar15);
  operator_delete__(pCVar4);
  pvVar6 = operator_new__(uVar8);
  pvVar7 = operator_new__(uVar14 << 2);
  uVar15 = 0;
  uVar16 = 0;
  do {
    ppvVar13 = *(void ***)((long)pvVar5 + uVar15 * 8);
    memcpy((void *)((long)pvVar6 + (ulong)uVar16),ppvVar13[2],(ulong)*(uint *)(ppvVar13 + 3));
    *(uint *)((long)pvVar7 + uVar15 * 4) = uVar16;
    iVar3 = *(int *)(ppvVar13 + 3);
    if (*ppvVar13 != (void *)0x0) {
      operator_delete__(*ppvVar13);
    }
    if (ppvVar13[2] != (void *)0x0) {
      operator_delete__(ppvVar13[2]);
    }
    uVar16 = iVar3 + uVar16;
    operator_delete(ppvVar13);
    uVar15 = uVar15 + 1;
  } while (uVar14 != uVar15);
  operator_delete__(pvVar5);
  *(uint *)(this + 8) = uVar2;
  *(void **)this = pvVar7;
  *(void **)(this + 0x10) = pvVar6;
  *(uint *)(this + 0x18) = uVar10;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00bffcd0 to 00bffcd7 has its CatchHandler @ 00bffd20 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bffcdc to 00bffcdf has its CatchHandler @ 00bffd10 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Markov-Huffman tree size = %u (%u trees)\n",
                    (ulong)(uint)(*(int *)(this + 0x18) + *(int *)(this + 8) * 4));
  return;
}


