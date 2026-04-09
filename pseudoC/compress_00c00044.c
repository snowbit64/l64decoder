// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compress
// Entry Point: 00c00044
// Size: 836 bytes
// Signature: undefined __thiscall compress(MarkovHuffmanTreeCompressor * this, uchar * param_1, uint param_2, uchar * * param_3, uint * param_4)


/* MarkovHuffmanTreeCompressor::compress(unsigned char const*, unsigned int, unsigned char**,
   unsigned int*) */

void __thiscall
MarkovHuffmanTreeCompressor::compress
          (MarkovHuffmanTreeCompressor *this,uchar *param_1,uint param_2,uchar **param_3,
          uint *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined *__s1;
  undefined8 uVar8;
  ulong uVar9;
  uint **ppuVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  char cVar14;
  ulong uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  ulong __n;
  long lVar21;
  
  __n = (ulong)param_2;
  if (param_2 == 0) {
    pbVar7 = (byte *)operator_new__(0);
    uVar11 = 0;
  }
  else {
    lVar21 = *(long *)(this + 8);
    uVar11 = 0;
    iVar6 = 0;
    uVar20 = *(int *)(*(long *)this + 8) - 1;
    uVar9 = __n;
    pbVar7 = param_1;
    do {
      uVar15 = (ulong)uVar11;
      uVar9 = uVar9 - 1;
      uVar11 = ((uint)*pbVar7 | uVar11 << 8) & uVar20;
      iVar6 = (*(uint *)(lVar21 + uVar15 * 0x400 + (ulong)*pbVar7 * 4) & 0x1f) + iVar6;
      pbVar7 = pbVar7 + 1;
    } while (uVar9 != 0);
    uVar11 = iVar6 + 7U >> 3;
    pbVar7 = (byte *)operator_new__((ulong)uVar11);
    if (param_2 != 0) {
      uVar9 = 0;
      uVar12 = 0;
      uVar16 = 0;
      uVar18 = 0;
      pbVar13 = pbVar7;
      while( true ) {
        bVar3 = param_1[uVar9];
        uVar2 = *(uint *)(lVar21 + (ulong)uVar12 * 0x400 + (ulong)bVar3 * 4);
        uVar1 = uVar2 & 0x1f;
        if (uVar1 != 0) {
          uVar2 = uVar2 >> 5;
          uVar4 = 8 - (uVar18 & 0xff);
          if (uVar1 < uVar4) {
            uVar18 = uVar18 + uVar1;
            uVar16 = (uVar16 & 0xff) << (ulong)uVar1 | uVar2;
          }
          else {
            uVar2 = uVar2 << (ulong)(-uVar1 & 0x1f);
            *pbVar13 = (byte)(uVar2 >> (ulong)((uVar18 & 0xff) + 0x18 & 0x1f)) |
                       (byte)((uVar16 & 0xff) << (ulong)(uVar4 & 0x1f));
            uVar18 = uVar1 - uVar4;
            uVar1 = uVar2 << (ulong)(uVar4 & 0x1f);
            for (; pbVar13 = pbVar13 + 1, 7 < uVar18; uVar18 = uVar18 - 8) {
              *pbVar13 = (byte)(uVar1 >> 0x18);
              uVar1 = uVar1 << 8;
            }
            uVar16 = 0;
            if (uVar18 != 0) {
              uVar16 = uVar1 >> (ulong)(-uVar18 & 0x1f);
            }
          }
        }
        uVar9 = uVar9 + 1;
        if (uVar9 == __n) break;
        lVar21 = *(long *)(this + 8);
        uVar12 = ((uint)bVar3 | uVar12 << 8) & uVar20;
      }
      if ((uVar18 & 0xff) != 0) {
        *pbVar13 = (byte)((uVar16 & 0xff) << (ulong)(8 - (uVar18 & 0xff) & 0x1f));
      }
    }
  }
  __s1 = (undefined *)operator_new__(__n);
  if (param_2 != 0) {
    ppuVar10 = *(uint ***)this;
    cVar14 = '\0';
    uVar12 = 0;
    uVar18 = 0;
    puVar19 = ppuVar10[2];
    uVar9 = (ulong)**ppuVar10;
    iVar6 = *(int *)(ppuVar10 + 1);
    uVar20 = *(ushort *)((long)puVar19 + uVar9) & 0x1ff;
    puVar5 = __s1;
    uVar15 = __n;
    pbVar13 = pbVar7;
    do {
      while (uVar20 < 0x100) {
        uVar16 = (int)uVar15 - 1;
        *puVar5 = (char)uVar20;
        if (uVar16 == 0) goto LAB_00c002b4;
        uVar18 = (uVar20 | uVar18 << 8) & iVar6 - 1U;
        uVar9 = (ulong)(*ppuVar10)[uVar18];
        puVar19 = ppuVar10[2];
        puVar5 = puVar5 + 1;
        uVar15 = (ulong)uVar16;
        uVar20 = *(ushort *)((long)puVar19 + uVar9) & 0x1ff;
      }
      do {
        pbVar17 = pbVar13;
        if (cVar14 == '\0') {
          pbVar17 = pbVar13 + 1;
          uVar12 = (uint)*pbVar13;
          cVar14 = '\b';
        }
        cVar14 = cVar14 + -1;
        uVar16 = uVar12 >> 7;
        uVar12 = uVar12 << 1;
        uVar20 = ((uVar20 & 0xff) << 1 | uVar16 & 1) * 9 + 9;
        uVar20 = *(ushort *)((long)puVar19 + (uVar20 >> 3) + uVar9) >> (ulong)(uVar20 & 7) & 0x1ff;
        pbVar13 = pbVar17;
      } while (0xff < uVar20);
    } while ((int)uVar15 != 0);
  }
LAB_00c002b4:
  iVar6 = memcmp(__s1,param_1,__n);
  if (iVar6 != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00c00314 to 00c0031b has its CatchHandler @ 00c00374 */
      param_3 = (uchar **)operator_new(0x38);
                    /* try { // try from 00c00320 to 00c00323 has its CatchHandler @ 00c00364 */
      Logger::Logger((Logger *)param_3);
      LogManager::getInstance()::singletonLogManager = param_3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar8 = LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "!!! INTERNAL COMPRESSION ERROR !!!\n");
                    /* catch() { ... } // from try @ 00c00320 with catch @ 00c00364 */
    operator_delete(param_3);
    __cxa_guard_abort(&LogManager::getInstance()::singletonLogManager);
                    /* WARNING: Subroutine does not return */
    FUN_00f27898(uVar8);
  }
  operator_delete__(__s1);
  *param_4 = uVar11;
  *param_3 = pbVar7;
  return;
}


