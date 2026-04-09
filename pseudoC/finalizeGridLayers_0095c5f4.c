// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalizeGridLayers
// Entry Point: 0095c5f4
// Size: 1052 bytes
// Signature: undefined __thiscall finalizeGridLayers(MultiresTexture * this, uint param_1)


/* MultiresTexture::finalizeGridLayers(unsigned int) */

void __thiscall MultiresTexture::finalizeGridLayers(MultiresTexture *this,uint param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  Logger *pLVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  
  lVar16 = *(long *)(this + 400);
  lVar3 = *(long *)(this + 0x198);
  *(undefined4 *)(this + 0x1a8) = 1;
  if (lVar16 != lVar3) {
    iVar7 = 1;
    do {
      if (this[0x88] != (MultiresTexture)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 0095c6b4 to 0095c6bb has its CatchHandler @ 0095ca34 */
          pLVar8 = (Logger *)operator_new(0x38);
                    /* try { // try from 0095c6c0 to 0095c6c3 has its CatchHandler @ 0095ca24 */
          Logger::Logger(pLVar8);
          LogManager::getInstance()::singletonLogManager = pLVar8;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Layer %d Grid %u x %u In radius %u\n",(ulong)*(uint *)(lVar16 + 4),
                          (ulong)*(uint *)(lVar16 + 0x14),(ulong)*(uint *)(lVar16 + 0x14),
                          (ulong)*(uint *)(lVar16 + 0x1c));
        iVar7 = *(int *)(this + 0x1a8);
      }
      piVar1 = (int *)(lVar16 + 0x1c);
      lVar16 = lVar16 + 0xf0;
      iVar7 = iVar7 + *piVar1;
      *(int *)(this + 0x1a8) = iVar7;
    } while (lVar16 != lVar3);
  }
  if (this[0x88] != (MultiresTexture)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 0095c9d0 to 0095c9d7 has its CatchHandler @ 0095ca20 */
      pLVar8 = (Logger *)operator_new(0x38);
                    /* try { // try from 0095c9dc to 0095c9df has its CatchHandler @ 0095ca10 */
      Logger::Logger(pLVar8);
      LogManager::getInstance()::singletonLogManager = pLVar8;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Total num tiles %u (%u Mtex)\n",(ulong)*(uint *)(this + 0x1a8),
                      *(int *)(this + 0x188) * *(uint *)(this + 0x1a8) * *(int *)(this + 0x188) >>
                      0x14);
  }
  lVar16 = *(long *)(this + 400);
  lVar3 = *(long *)(this + 0x198);
  uVar6 = param_1 * param_1;
  uVar14 = (ulong)uVar6;
  if (lVar16 == lVar3) {
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
  }
  else {
    do {
      iVar7 = *(int *)(lVar16 + 0x14);
      if (*(void **)(lVar16 + 0x80) != (void *)0x0) {
        operator_delete__(*(void **)(lVar16 + 0x80));
      }
      uVar15 = (ulong)(uint)(iVar7 * iVar7) << 2;
      pvVar9 = operator_new__(uVar15);
      if (iVar7 * iVar7 != 0) {
        memset(pvVar9,0,uVar15);
      }
      *(void **)(lVar16 + 0x80) = pvVar9;
      iVar4 = *(int *)(lVar16 + 0x14);
      *(int *)(lVar16 + 0x70) = iVar7;
      *(int *)(lVar16 + 0x74) = iVar7;
      *(undefined4 *)(lVar16 + 0x78) = 0;
      if (*(void **)(lVar16 + 0x98) != (void *)0x0) {
        operator_delete__(*(void **)(lVar16 + 0x98));
      }
      pvVar9 = operator_new__((ulong)(uint)(iVar4 * iVar4) << 3);
      iVar7 = *(int *)(lVar16 + 0x14);
      *(int *)(lVar16 + 0x88) = iVar4;
      *(int *)(lVar16 + 0x8c) = iVar4;
      *(undefined8 *)(lVar16 + 0x90) = 0;
      *(void **)(lVar16 + 0x98) = pvVar9;
      if (*(void **)(lVar16 + 200) != (void *)0x0) {
        operator_delete__(*(void **)(lVar16 + 200));
      }
      uVar15 = (ulong)(uint)(iVar7 * iVar7) << 2;
      pvVar9 = operator_new__(uVar15);
      if (iVar7 * iVar7 != 0) {
        memset(pvVar9,0,uVar15);
      }
      *(void **)(lVar16 + 200) = pvVar9;
      iVar4 = *(int *)(lVar16 + 0x14);
      *(int *)(lVar16 + 0xb8) = iVar7;
      *(int *)(lVar16 + 0xbc) = iVar7;
      *(undefined4 *)(lVar16 + 0xc0) = 0;
      if (*(void **)(lVar16 + 0xe0) != (void *)0x0) {
        operator_delete__(*(void **)(lVar16 + 0xe0));
      }
      pvVar9 = operator_new__((ulong)(uint)(iVar4 * iVar4) << 3);
      *(int *)(lVar16 + 0xd0) = iVar4;
      *(int *)(lVar16 + 0xd4) = iVar4;
      *(undefined8 *)(lVar16 + 0xd8) = 0;
      *(void **)(lVar16 + 0xe0) = pvVar9;
      if (*(void **)(lVar16 + 0xb0) != (void *)0x0) {
        operator_delete__(*(void **)(lVar16 + 0xb0));
      }
      pvVar9 = operator_new__(uVar14 << 2);
      *(void **)(lVar16 + 0xb0) = pvVar9;
      *(uint *)(lVar16 + 0xa0) = param_1;
      *(uint *)(lVar16 + 0xa4) = param_1;
      *(undefined4 *)(lVar16 + 0xa8) = 0;
      if (*(int *)(lVar16 + 0x74) * *(int *)(lVar16 + 0x70) != 0) {
        uVar15 = 0;
        do {
          *(undefined4 *)(*(long *)(lVar16 + 0x80) + uVar15 * 4) = 0;
          uVar15 = uVar15 + 1;
        } while (uVar15 < (uint)(*(int *)(lVar16 + 0x74) * *(int *)(lVar16 + 0x70)));
      }
      uVar12 = *(int *)(lVar16 + 0x8c) * *(int *)(lVar16 + 0x88);
      if (uVar12 != 0) {
        lVar10 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar16 + 0x98) + lVar10) = 0;
          lVar10 = lVar10 + 8;
        } while ((ulong)uVar12 * 8 - lVar10 != 0);
      }
      if (*(int *)(lVar16 + 0xa4) * *(int *)(lVar16 + 0xa0) != 0) {
        uVar15 = 0;
        lVar10 = *(long *)(lVar16 + 0xb0);
        do {
          *(undefined4 *)(lVar10 + uVar15 * 4) = 0;
          uVar15 = uVar15 + 1;
        } while (uVar15 < (uint)(*(int *)(lVar16 + 0xa4) * *(int *)(lVar16 + 0xa0)));
      }
      *(undefined *)(lVar16 + 0xe8) = 1;
      lVar16 = lVar16 + 0xf0;
    } while (lVar16 != lVar3);
    puVar2 = *(uint **)(this + 400);
    uVar12 = (int)((ulong)((long)*(uint **)(this + 0x198) - (long)puVar2) >> 4) * -0x11111111 - 1;
    *(uint *)(this + 0x1ac) = uVar12;
    for (; *(uint **)(this + 0x198) != puVar2; puVar2 = puVar2 + 0x3c) {
      if ((*(char *)(puVar2 + 3) == '\0') && (uVar5 = *puVar2, uVar5 < uVar12)) {
        *(uint *)(this + 0x1ac) = uVar5;
        uVar12 = uVar5;
      }
    }
  }
  if (this[0x8a] != (MultiresTexture)0x0) {
    if (*(void **)(this + 0xf8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xf8));
    }
    pvVar9 = operator_new__(uVar14 << 2);
    *(uint *)(this + 0xe8) = param_1;
    *(uint *)(this + 0xec) = param_1;
    *(void **)(this + 0xf8) = pvVar9;
    *(undefined4 *)(this + 0xf0) = 0;
    if (uVar6 != 0) {
      if (uVar6 < 8) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar14 & 0xfffffff8;
        puVar11 = (undefined8 *)((long)pvVar9 + 0x10);
        uVar13 = uVar15;
        do {
          puVar11[-1] = 0;
          puVar11[-2] = 0;
          puVar11[1] = 0;
          *puVar11 = 0;
          puVar11 = puVar11 + 4;
          uVar13 = uVar13 - 8;
        } while (uVar13 != 0);
        if (uVar15 == uVar14) {
          return;
        }
      }
      do {
        *(undefined4 *)((long)pvVar9 + uVar15 * 4) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar14);
    }
  }
  return;
}


