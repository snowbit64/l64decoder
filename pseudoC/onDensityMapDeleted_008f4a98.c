// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDensityMapDeleted
// Entry Point: 008f4a98
// Size: 484 bytes
// Signature: undefined __thiscall onDensityMapDeleted(TerrainLodTexture * this, DensityMap * param_1)


/* TerrainLodTexture::onDensityMapDeleted(DensityMap*) */

void __thiscall TerrainLodTexture::onDensityMapDeleted(TerrainLodTexture *this,DensityMap *param_1)

{
  void **ppvVar1;
  size_t __n;
  bool bVar2;
  int iVar3;
  Logger *this_00;
  long lVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  void **ppvVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar5 = *(long *)(this + 0x60);
  lVar4 = *(long *)(this + 0x68);
  if (lVar4 != lVar5) {
    uVar11 = 0;
    uVar10 = 0;
    do {
      if (*(DensityMap **)(lVar5 + uVar11 * 0x28) == param_1) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 008f4c18 to 008f4c1f has its CatchHandler @ 008f4c8c */
          this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008f4c24 to 008f4c27 has its CatchHandler @ 008f4c7c */
          Logger::Logger(this_00);
          LogManager::getInstance()::singletonLogManager = this_00;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "WANRING: TerrainLodTexture mapping is being removed, as the DensityMap it refers to was deleted.\n"
                         );
        lVar5 = lVar5 + uVar11 * 0x28;
        ppvVar1 = (void **)(lVar5 + 0x10);
        uVar7 = 0;
        do {
          pvVar6 = *ppvVar1;
          puVar9 = (uint *)((long)pvVar6 + uVar7 * 200 + 0xc0);
          if (*puVar9 != 0) {
            uVar12 = 0;
            ppvVar8 = (void **)((long)pvVar6 + uVar7 * 200 + 8);
            do {
              if (ppvVar8[-1] != (void *)0x0) {
                operator_delete__(ppvVar8[-1]);
              }
              if (*ppvVar8 != (void *)0x0) {
                operator_delete__(*ppvVar8);
              }
              uVar12 = uVar12 + 1;
              ppvVar8 = ppvVar8 + 3;
            } while (uVar12 < *puVar9);
          }
          bVar2 = uVar7 < *(ushort *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
        } while (bVar2);
        pvVar6 = *ppvVar1;
        if (pvVar6 != (void *)0x0) {
          operator_delete__(pvVar6);
        }
        lVar5 = *(long *)(this + 0x60);
        pvVar6 = (void *)(lVar5 + uVar11 * 0x28);
        __n = *(long *)(this + 0x68) - (long)(void *)((long)pvVar6 + 0x28);
        if (__n != 0) {
          memmove(pvVar6,(void *)((long)pvVar6 + 0x28),__n);
          lVar5 = *(long *)(this + 0x60);
        }
        lVar4 = (long)pvVar6 + __n;
        uVar10 = uVar10 - 1;
        *(long *)(this + 0x68) = lVar4;
      }
      uVar10 = uVar10 + 1;
      uVar11 = (ulong)uVar10;
      uVar7 = (lVar4 - lVar5 >> 3) * -0x3333333333333333;
    } while (uVar11 <= uVar7 && uVar7 - uVar11 != 0);
  }
  return;
}


