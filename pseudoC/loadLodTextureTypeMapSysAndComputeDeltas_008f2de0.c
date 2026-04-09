// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadLodTextureTypeMapSysAndComputeDeltas
// Entry Point: 008f2de0
// Size: 792 bytes
// Signature: undefined __thiscall loadLodTextureTypeMapSysAndComputeDeltas(TerrainLodTexture * this, char * param_1, char * param_2, bool param_3, BaseTerrainSyncer * param_4)


/* TerrainLodTexture::loadLodTextureTypeMapSysAndComputeDeltas(char const*, char const*, bool,
   BaseTerrainSyncer*) */

void __thiscall
TerrainLodTexture::loadLodTextureTypeMapSysAndComputeDeltas
          (TerrainLodTexture *this,char *param_1,char *param_2,bool param_3,
          BaseTerrainSyncer *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  uint local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar6 = param_1;
  if (param_2 != (char *)0x0) {
    pcVar6 = param_2;
  }
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar6,0,
                                    false);
  if (plVar4 == (long *)0x0) goto LAB_008f3018;
  iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_78,0xc);
  if (((iVar2 == 0xc) && (local_78 == 0x10dcac66)) && (local_74 == 1)) {
    uVar7 = (ulong)local_70;
    uVar14 = NEON_cnt(uVar7,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    if ((int)CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) != 1) goto LAB_008f3004;
    iVar2 = 0;
    *(uint *)(this + 8) = local_70;
    *(float *)(this + 0xc) = 1.0 / (float)uVar7;
    if (1 < local_70) {
      do {
        uVar8 = (uint)uVar7;
        iVar2 = iVar2 + 1;
        uVar7 = uVar7 >> 1;
      } while (3 < uVar8);
    }
    *(int *)(this + 0x10) = iVar2;
    if (*(void **)(this + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x18));
      local_70 = *(uint *)(this + 8);
    }
    pvVar5 = operator_new__((ulong)(local_70 * local_70) << 1);
    *(void **)(this + 0x18) = pvVar5;
    iVar2 = local_70 * local_70 * 2;
    iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,pvVar5,iVar2);
    (**(code **)(*plVar4 + 8))(plVar4);
    if (iVar3 == iVar2) {
      *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x78);
      if (param_3) {
        this[0x38] = (TerrainLodTexture)0x1;
      }
      BaseTerrainSyncer::setLodTextureSize(param_4,*(uint *)(this + 8),*(uint *)(this + 8));
      if (param_2 != (char *)0x0) {
        plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1
                                          ,0,false);
        if (plVar4 != (long *)0x0) {
          iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_88,0xc);
          if (((iVar3 == 0xc) && (local_88 == 0x10dcac66)) &&
             ((local_84 == 1 && (local_80 == *(int *)(this + 8))))) {
            pcVar6 = (char *)operator_new__((ulong)(uint)(local_80 * local_80) << 1);
            iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,pcVar6,iVar2);
            if (iVar3 == iVar2) {
              uVar8 = *(uint *)(this + 8);
              if (uVar8 != 0) {
                uVar9 = 0;
                pcVar11 = *(char **)(this + 0x18);
                pcVar12 = pcVar6;
                do {
                  uVar10 = 0;
                  do {
                    if (*pcVar12 != *pcVar11) {
                      BaseTerrainSyncer::markTextureRegionDirty(param_4,uVar10,uVar9,1,1);
                      uVar8 = *(uint *)(this + 8);
                    }
                    pcVar12 = pcVar12 + 2;
                    pcVar11 = pcVar11 + 2;
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < uVar8);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar8);
              }
              operator_delete__(pcVar6);
              (**(code **)(*plVar4 + 8))(plVar4);
              goto LAB_008f30d0;
            }
            operator_delete__(pcVar6);
          }
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        BaseTerrainSyncer::markTextureRegionDirty
                  (param_4,0,0,*(uint *)(this + 8),*(uint *)(this + 8));
      }
LAB_008f30d0:
      plVar4 = (long *)0x1;
      goto LAB_008f3018;
    }
  }
  else {
LAB_008f3004:
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)0x0;
LAB_008f3018:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar4);
  }
  return;
}


