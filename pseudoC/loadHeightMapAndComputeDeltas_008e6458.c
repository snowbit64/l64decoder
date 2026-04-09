// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadHeightMapAndComputeDeltas
// Entry Point: 008e6458
// Size: 692 bytes
// Signature: undefined __thiscall loadHeightMapAndComputeDeltas(BaseTerrain * this, char * param_1, char * param_2)


/* BaseTerrain::loadHeightMapAndComputeDeltas(char const*, char const*) */

void __thiscall
BaseTerrain::loadHeightMapAndComputeDeltas(BaseTerrain *this,char *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  BaseTerrainSyncer *pBVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  uint local_54;
  ushort *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((ulong)param_1 | (ulong)param_2) != 0) {
    if ((param_1 == (char *)0x0) || (param_2 != (char *)0x0)) {
      if ((param_1 != (char *)0x0) || (param_2 == (char *)0x0)) {
        local_50 = (ushort *)0x0;
        local_54 = 0;
        loadHeightMapFromImage(this,param_1,&local_50,&local_54,(uint *)0x0,(uint *)0x0);
        uVar5 = loadHeightMapFromImage(this,param_2);
        if (((uVar5 & 1) == 0) &&
           (((param_1 == (char *)0x0 || (iVar4 = strcmp(param_1,param_2), iVar4 == 0)) ||
            (uVar5 = loadHeightMapFromImage(this,param_1), (uVar5 & 1) == 0)))) {
          uVar8 = 0;
          uVar3 = 0;
          puVar9 = local_50;
joined_r0x008e66a4:
          if (puVar9 == (ushort *)0x0) goto LAB_008e651c;
        }
        else {
          pBVar6 = (BaseTerrainSyncer *)operator_new(0x48);
                    /* try { // try from 008e6580 to 008e6587 has its CatchHandler @ 008e6728 */
          BaseTerrainSyncer::BaseTerrainSyncer(pBVar6,this);
          puVar9 = local_50;
          *(BaseTerrainSyncer **)(this + 0x170) = pBVar6;
          if ((local_50 == (ushort *)0x0) || (local_54 != *(uint *)(this + 0x90))) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar4 != 0)) {
                    /* try { // try from 008e66d0 to 008e66db has its CatchHandler @ 008e670c */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            puVar9 = local_50;
            pcVar1 = "orig terrain load failed";
            if (local_50 != (ushort *)0x0) {
              pcVar1 = "terrain size mismatch";
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: entire heightmap will be sent over network (reason: %s)",
                              pcVar1);
            BaseTerrainSyncer::markVertexRegionDirty
                      (*(BaseTerrainSyncer **)(this + 0x170),0,0,*(uint *)(this + 0x90),
                       *(uint *)(this + 0x90));
            uVar8 = 1;
            uVar3 = 1;
            goto joined_r0x008e66a4;
          }
          if (local_54 != 0) {
            uVar10 = 0;
            uVar7 = local_54;
            do {
              uVar11 = 0;
              do {
                uVar5 = (ulong)(uVar11 + uVar10 * uVar7);
                if (puVar9[uVar5] != *(ushort *)(*(long *)(this + 0x80) + uVar5 * 2)) {
                  BaseTerrainSyncer::markVertexRegionDirty
                            (*(BaseTerrainSyncer **)(this + 0x170),uVar11,uVar10,1,1);
                  uVar7 = *(uint *)(this + 0x90);
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar7);
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar7);
          }
          uVar8 = 1;
        }
        operator_delete__(puVar9);
        uVar3 = uVar8;
        goto LAB_008e651c;
      }
      uVar5 = loadHeightMapFromImage(this,param_2);
      if ((uVar5 & 1) != 0) {
        pBVar6 = (BaseTerrainSyncer *)operator_new(0x48);
                    /* try { // try from 008e64ec to 008e64f3 has its CatchHandler @ 008e6724 */
        BaseTerrainSyncer::BaseTerrainSyncer(pBVar6,this);
        *(BaseTerrainSyncer **)(this + 0x170) = pBVar6;
        BaseTerrainSyncer::markVertexRegionDirty
                  (pBVar6,0,0,*(uint *)(this + 0x90),*(uint *)(this + 0x90));
        uVar3 = 1;
        goto LAB_008e651c;
      }
    }
    else {
      uVar5 = loadHeightMapFromImage(this,param_1);
      if ((uVar5 & 1) != 0) {
        pBVar6 = (BaseTerrainSyncer *)operator_new(0x48);
                    /* try { // try from 008e64b4 to 008e64bb has its CatchHandler @ 008e6734 */
        BaseTerrainSyncer::BaseTerrainSyncer(pBVar6,this);
        *(BaseTerrainSyncer **)(this + 0x170) = pBVar6;
        uVar3 = 1;
        goto LAB_008e651c;
      }
    }
  }
  uVar3 = 0;
LAB_008e651c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


