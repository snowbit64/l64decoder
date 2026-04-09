// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDensityMapDeleted
// Entry Point: 008704a0
// Size: 652 bytes
// Signature: undefined __thiscall onDensityMapDeleted(DensityMapVisualizationOverlay * this, DensityMap * param_1)


/* DensityMapVisualizationOverlay::onDensityMapDeleted(DensityMap*) */

void __thiscall
DensityMapVisualizationOverlay::onDensityMapDeleted
          (DensityMapVisualizationOverlay *this,DensityMap *param_1)

{
  uint uVar1;
  int iVar2;
  Logger *this_00;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  DensityMap **ppDVar7;
  DensityMapVisualizationOverlay *pDVar8;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008706ec to 008706f3 has its CatchHandler @ 0087073c */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008706f8 to 008706fb has its CatchHandler @ 0087072c */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: DensityMapVisualizationOverlay is being reset, because a DensityMap it refers to was deleted.\n"
                   );
  uVar1 = *(uint *)(this + 0x4a0);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffffe;
      uVar6 = uVar5;
      pDVar8 = this;
      do {
        if (*(DensityMap **)(pDVar8 + 0x80) == param_1) {
          *(undefined8 *)(pDVar8 + 0x80) = 0;
        }
        if (*(DensityMap **)(pDVar8 + 0x188) == param_1) {
          *(undefined8 *)(pDVar8 + 0x188) = 0;
        }
        pDVar8 = pDVar8 + 0x210;
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
      if (uVar5 == uVar3) goto LAB_0087054c;
    }
    lVar4 = uVar3 - uVar5;
    ppDVar7 = (DensityMap **)(this + uVar5 * 0x108 + 0x80);
    do {
      if (*ppDVar7 == param_1) {
        *ppDVar7 = (DensityMap *)0x0;
      }
      ppDVar7 = ppDVar7 + 0x21;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
LAB_0087054c:
  uVar1 = *(uint *)(this + 0x8cc8);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffffe;
      uVar6 = uVar5;
      pDVar8 = this;
      do {
        if (*(DensityMap **)(pDVar8 + 0x4a8) == param_1) {
          *(undefined8 *)(pDVar8 + 0x4a8) = 0;
        }
        if (*(DensityMap **)(pDVar8 + 0x26b0) == param_1) {
          *(undefined8 *)(pDVar8 + 0x26b0) = 0;
        }
        pDVar8 = pDVar8 + 0x4410;
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
      if (uVar5 == uVar3) goto LAB_008705e4;
    }
    lVar4 = uVar3 - uVar5;
    ppDVar7 = (DensityMap **)(this + uVar5 * 0x2208 + 0x4a8);
    do {
      if (*ppDVar7 == param_1) {
        *ppDVar7 = (DensityMap *)0x0;
      }
      ppDVar7 = ppDVar7 + 0x441;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
LAB_008705e4:
  uVar1 = *(uint *)(this + 0x29390);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffffe;
      ppDVar7 = (DensityMap **)(this + 0x8cd0);
      uVar6 = uVar5;
      do {
        if (*ppDVar7 == param_1) {
          *ppDVar7 = (DensityMap *)0x0;
        }
        if (ppDVar7[0x81b] == param_1) {
          ppDVar7[0x81b] = (DensityMap *)0x0;
        }
        ppDVar7 = ppDVar7 + 0x1036;
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
      if (uVar5 == uVar3) goto LAB_00870680;
    }
    lVar4 = uVar3 - uVar5;
    ppDVar7 = (DensityMap **)(this + uVar5 * 0x40d8 + 0x8cd0);
    do {
      if (*ppDVar7 == param_1) {
        *ppDVar7 = (DensityMap *)0x0;
      }
      ppDVar7 = ppDVar7 + 0x81b;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
LAB_00870680:
  if (*(DensityMap **)(this + 0x29398) == param_1) {
    *(undefined8 *)(this + 0x29398) = 0;
  }
  reset();
  return;
}


