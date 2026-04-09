// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDifferential
// Entry Point: 009b64dc
// Size: 600 bytes
// Signature: undefined __thiscall addDifferential(Bt2RaycastVehicle * this, uint param_1, uint param_2, float param_3, float param_4)


/* Bt2RaycastVehicle::addDifferential(unsigned int, unsigned int, float, float) */

int __thiscall
Bt2RaycastVehicle::addDifferential
          (Bt2RaycastVehicle *this,uint param_1,uint param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  Logger *pLVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ushort *puVar11;
  undefined8 uVar12;
  long lVar13;
  
  uVar7 = *(uint *)(this + 0x5c);
  uVar8 = (ulong)uVar7;
  uVar3 = param_2;
  if (param_1 <= param_2) {
    uVar3 = param_1;
    param_1 = param_2;
  }
  lVar13 = *(long *)(this + 0x68);
  if (0 < (int)uVar7) {
    puVar11 = (ushort *)(lVar13 + 10);
    do {
      if ((uVar3 == puVar11[-1]) && (param_1 == *puVar11)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 009b66f4 to 009b66fb has its CatchHandler @ 009b6738 */
          pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 009b6700 to 009b6703 has its CatchHandler @ 009b6734 */
          Logger::Logger(pLVar6);
          LogManager::getInstance()::singletonLogManager = pLVar6;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error (physics): Adding duplicate differential.\n");
        return -1;
      }
      puVar11 = puVar11 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar7 < 0x14) {
    if (uVar7 == *(uint *)(this + 0x60)) {
      uVar4 = uVar7 << 1;
      if (uVar7 == 0) {
        uVar4 = 1;
      }
      if (uVar7 < uVar4) {
        lVar13 = btAlignedAllocInternal((ulong)uVar4 * 0xc,0x10);
        uVar7 = *(uint *)(this + 0x5c);
        if (0 < (int)uVar7) {
          lVar9 = 0;
          do {
            puVar1 = (undefined8 *)(lVar13 + lVar9);
            puVar2 = (undefined8 *)(*(long *)(this + 0x68) + lVar9);
            lVar9 = lVar9 + 0xc;
            uVar12 = *puVar2;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar1 = uVar12;
          } while ((ulong)uVar7 * 0xc - lVar9 != 0);
        }
        if ((*(void **)(this + 0x68) != (void *)0x0) && (this[0x70] != (Bt2RaycastVehicle)0x0)) {
          btAlignedFreeInternal(*(void **)(this + 0x68));
        }
        uVar7 = *(uint *)(this + 0x5c);
        *(long *)(this + 0x68) = lVar13;
        *(uint *)(this + 0x60) = uVar4;
        this[0x70] = (Bt2RaycastVehicle)0x1;
      }
    }
    pfVar10 = (float *)(lVar13 + (long)(int)uVar7 * 0xc);
    *pfVar10 = param_3;
    pfVar10[1] = param_4;
    *(short *)(pfVar10 + 2) = (short)uVar3;
    *(short *)((long)pfVar10 + 10) = (short)param_1;
    *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
    updateWheelsMotorSpeedContribution();
    iVar5 = *(int *)(this + 0x5c) + -1;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 009b66a4 to 009b66ab has its CatchHandler @ 009b674c */
      pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 009b66b0 to 009b66b3 has its CatchHandler @ 009b673c */
      Logger::Logger(pLVar6);
      LogManager::getInstance()::singletonLogManager = pLVar6;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): Adding too many differentials. Maximum is %u.\n",0x14);
    iVar5 = -1;
  }
  return iVar5;
}


