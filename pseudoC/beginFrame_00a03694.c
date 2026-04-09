// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginFrame
// Entry Point: 00a03694
// Size: 828 bytes
// Signature: undefined __thiscall beginFrame(PersistentShadowMap * this, uint param_1, uint param_2, uint param_3, float param_4, SharedRenderArgs * param_5, RenderController * param_6)


/* PersistentShadowMap::beginFrame(unsigned int, unsigned int, unsigned int, float, SharedRenderArgs
   const&, RenderController&) */

undefined8 __thiscall
PersistentShadowMap::beginFrame
          (PersistentShadowMap *this,uint param_1,uint param_2,uint param_3,float param_4,
          SharedRenderArgs *param_5,RenderController *param_6)

{
  uint uVar1;
  int iVar2;
  PIXEL_FORMAT PVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
  if (param_4 == 0.0) goto LAB_00a03980;
  uVar10 = (int)((float)(ulong)param_3 * param_4) - 1;
  uVar10 = uVar10 | uVar10 >> 1;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar13 = uVar10 + 1;
  if (uVar10 == 0xffffffff) {
    uVar13 = 1;
  }
  uVar15 = uVar13 * param_1;
  uVar14 = uVar13 * param_2;
  lVar4 = (**(code **)(**(long **)param_5 + 0x28))();
  uVar10 = *(uint *)(lVar4 + 0x78);
  bVar8 = DAT_02111dd8;
  if ((uVar10 < uVar15 || uVar10 <= uVar14) && (uVar10 < uVar15 || uVar14 != uVar10)) {
    do {
      if ((bVar8 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00a037c0 to 00a037cb has its CatchHandler @ 00a039d0 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Shadow map size %u x %u is not supported in hardware - scaling down.\n",
                          (ulong)uVar15,(ulong)uVar14);
        DAT_02111dd8 = 1;
      }
      param_4 = param_4 * 0.5;
      uVar13 = uVar13 >> 1;
      uVar15 = uVar15 >> 1;
      uVar14 = uVar14 >> 1;
      bVar8 = 1;
    } while ((uVar10 < uVar15) || (uVar10 < uVar14));
  }
  pvVar12 = *(void **)(this + 0x10);
  if ((param_4 == *(float *)(this + 8)) &&
     ((*(uint *)this == param_3 && (uVar13 == *(uint *)(this + 4))))) {
    if (pvVar12 == (void *)0x0) {
      *(float *)(this + 8) = param_4;
      *(uint *)this = param_3;
      *(uint *)(this + 4) = uVar13;
      goto LAB_00a03884;
    }
    if ((*(uint *)((long)pvVar12 + 4) != param_1) || (*(uint *)((long)pvVar12 + 8) != param_2)) {
      *(float *)(this + 8) = param_4;
      *(uint *)this = param_3;
      *(uint *)(this + 4) = uVar13;
      goto LAB_00a03860;
    }
  }
  else {
    *(float *)(this + 8) = param_4;
    *(uint *)this = param_3;
    *(uint *)(this + 4) = uVar13;
    if (pvVar12 != (void *)0x0) {
LAB_00a03860:
      if (*(void **)((long)pvVar12 + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar12 + 0x10));
      }
      operator_delete(pvVar12);
    }
LAB_00a03884:
    puVar5 = (uint *)operator_new(0x18);
    *puVar5 = uVar13;
    puVar5[1] = param_1;
    puVar5[2] = param_2;
    puVar5[3] = param_2 * param_1;
                    /* try { // try from 00a038a4 to 00a038a7 has its CatchHandler @ 00a039e8 */
    pvVar12 = operator_new__((ulong)(param_2 * param_1) * 0x88);
    *(void **)(puVar5 + 4) = pvVar12;
    if (param_2 != 0) {
      uVar9 = 0;
      uVar10 = 0;
      while( true ) {
        if (param_1 != 0) {
          iVar2 = 0;
          uVar6 = (ulong)param_1;
          uVar1 = uVar9;
          do {
            piVar11 = (int *)((long)pvVar12 + (ulong)uVar1 * 0x88);
            uVar6 = uVar6 - 1;
            uVar1 = uVar1 + 1;
            *piVar11 = iVar2;
            piVar11[1] = uVar10 * uVar13;
            iVar2 = iVar2 + uVar13;
            piVar11[2] = uVar13;
            *(undefined8 *)(piVar11 + 4) = 0;
            *(undefined8 *)(piVar11 + 6) = 0;
          } while (uVar6 != 0);
        }
        uVar10 = uVar10 + 1;
        if (uVar10 == param_2) break;
        pvVar12 = *(void **)(puVar5 + 4);
        uVar9 = uVar9 + param_1;
      }
    }
    *(uint **)(this + 0x10) = puVar5;
    *(undefined2 *)(this + 0x18) = 0;
  }
  fVar16 = 0.0;
  if (param_5[0x27] != (SharedRenderArgs)0x0) {
    fVar16 = 1.0;
  }
  RenderPathManager::getInstance();
  PVar3 = RenderPathManager::getShadowMapPixelFormat();
  uVar6 = RenderController::createShadowMapRenderTexture(param_6,uVar15,uVar14,fVar16,PVar3);
  if ((uVar6 & 1) != 0) {
    uVar7 = RenderController::getShadowMap();
    return uVar7;
  }
LAB_00a03980:
  pvVar12 = *(void **)(this + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if (pvVar12 != (void *)0x0) {
    if (*(void **)((long)pvVar12 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar12 + 0x10));
    }
    operator_delete(pvVar12);
  }
  *(undefined8 *)(this + 0x10) = 0;
  return 0;
}


