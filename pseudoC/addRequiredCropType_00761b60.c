// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRequiredCropType
// Entry Point: 00761b60
// Size: 1032 bytes
// Signature: undefined __thiscall addRequiredCropType(FieldCropsQuery * this, MethodInvocation * param_1)


/* FieldCropsQuery::addRequiredCropType(MethodInvocation*) */

void __thiscall
FieldCropsQuery::addRequiredCropType(FieldCropsQuery *this,MethodInvocation *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  EntityRegistryManager *this_00;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  ushort *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar3 = *(uint *)param_1;
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar6 = EntityRegistryManager::getEntityById(this_00,uVar3);
  if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x16) >> 1 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00761ea0 to 00761eab has its CatchHandler @ 00761f70 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar8 = "Error: addRequiredCropType has invalid foliage with id %u.\n";
  }
  else {
    plVar15 = *(long **)(lVar6 + 0x50);
    iVar5 = (**(code **)(*plVar15 + 0x48))(plVar15);
    iVar2 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x50) + 0x48))();
    if (iVar5 == iVar2) {
      iVar5 = (**(code **)(*plVar15 + 0x50))(plVar15);
      iVar2 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x50) + 0x50))();
      if (iVar5 == iVar2) {
        uVar3 = *(uint *)(this + 0x44);
        uVar9 = (ulong)uVar3;
        if (uVar3 == 0) {
          uVar16 = 0;
LAB_00761c98:
          if ((uint)uVar16 == uVar3) goto LAB_00761ca0;
        }
        else {
          uVar16 = 0;
          plVar10 = (long *)(this + 0x48);
          do {
            if (*(long **)(*plVar10 + 8) == plVar15) goto LAB_00761c98;
            uVar16 = uVar16 + 1;
            plVar10 = plVar10 + 5;
          } while (uVar9 != uVar16);
          uVar16 = (ulong)uVar3;
LAB_00761ca0:
          if (0xf < uVar3) {
            puVar7 = (undefined8 *)LogManager::getInstance();
            uVar9 = 0x10;
            pcVar8 = 
            "Error: Trying to set too many field crops density maps. Maximum allowed is \'%u\'.\n";
            goto LAB_00761c7c;
          }
          uVar12 = *(undefined8 *)(lVar6 + 0x58);
          lVar13 = *plVar15;
          *(uint *)(this + 0x44) = uVar3 + 1;
          *(undefined8 *)(this + uVar9 * 0x28 + 0x48) = uVar12;
          iVar5 = (**(code **)(lVar13 + 0x60))(plVar15);
          if (iVar5 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (**(code **)(*plVar15 + 0x60))(plVar15);
            uVar3 = ~(-1 << (ulong)(uVar3 & 0x1f));
          }
          *(uint *)(this + uVar9 * 0x28 + 0x50) = uVar3;
          std::__ndk1::
          vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
          ::resize((vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
                    *)(this + uVar9 * 0x28 + 0x58),0);
        }
        iVar5 = (**(code **)(*plVar15 + 0x60))(plVar15);
        if (iVar5 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar6 + 0x80);
        }
        uVar4 = (**(code **)(*plVar15 + 0x60))(plVar15);
        uVar4 = 1 << (ulong)(uVar4 & 0x1f);
        if (uVar3 < uVar4) {
          uVar17 = (ulong)uVar3;
          plVar15 = (long *)(this + (uVar16 & 0xffffffff) * 0x28 + 0x58);
          lVar13 = *plVar15;
          uVar9 = (*(long *)(this + (uVar16 & 0xffffffff) * 0x28 + 0x60) - lVar13 >> 2) *
                  0xf83e0f83e0f83e1;
          if (uVar9 < uVar17 || uVar9 - uVar17 == 0) {
            if (uVar3 + 5 <= uVar4) {
              uVar4 = uVar3 + 5;
            }
            std::__ndk1::
            vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
            ::reserve((vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
                       *)plVar15,(ulong)uVar4);
            std::__ndk1::
            vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
            ::resize((vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
                      *)plVar15,(ulong)(uVar3 + 1));
            lVar13 = *plVar15;
          }
          puVar11 = (ushort *)(lVar13 + uVar17 * 0x84);
          uVar1 = *puVar11;
          if (uVar1 < 4) {
            lVar14 = *(long *)(this + 8);
            uVar3 = *(int *)(lVar6 + 0x7c) + *(int *)(param_1 + 0x30);
            lVar6 = lVar13 + uVar17 * 0x84 + (ulong)uVar1 * 0x10;
            *(int *)(lVar6 + 8) = *(int *)(param_1 + 0x10) << (ulong)(uVar3 & 0x1f);
            *(int *)(lVar6 + 0xc) = *(int *)(param_1 + 0x20) << (ulong)(uVar3 & 0x1f);
            iVar5 = *(int *)(lVar14 + 0x7c);
            *(int *)(lVar6 + 4) =
                 ~(-1 << (ulong)(*(uint *)(param_1 + 0x40) & 0x1f)) << (ulong)(uVar3 & 0x1f);
            iVar2 = *(int *)(param_1 + 0x50);
            uVar3 = *(uint *)(param_1 + 0x60);
            *puVar11 = uVar1 + 1;
            this[0x40] = (FieldCropsQuery)0x1;
            *(int *)(lVar6 + 0x10) = ~(-1 << (ulong)(uVar3 & 0x1f)) << (ulong)(iVar5 + iVar2 & 0x1f)
            ;
            return;
          }
          puVar7 = (undefined8 *)LogManager::getInstance();
          uVar9 = 4;
          pcVar8 = 
          "Error: Trying to set too many required crop types for the same type index. Maximum allowed is \'%u\'.\n"
          ;
          goto LAB_00761c7c;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00761f30 to 00761f3b has its CatchHandler @ 00761f68 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar8 = "Error: Trying to set crop type with invalid type index %u.\n";
        goto LAB_00761c74;
      }
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00761ee8 to 00761ef3 has its CatchHandler @ 00761f6c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar8 = 
    "Error: addRequiredCropType foliage %u must match the size of the ground terrain detail.\n";
  }
LAB_00761c74:
  puVar7 = &LogManager::getInstance()::singletonLogManager;
  uVar9 = (ulong)uVar3;
LAB_00761c7c:
  LogManager::errorf((char *)puVar7,pcVar8,uVar9);
  return;
}


