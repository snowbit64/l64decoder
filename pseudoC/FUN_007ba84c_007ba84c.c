// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ba84c
// Entry Point: 007ba84c
// Size: 244 bytes
// Signature: undefined FUN_007ba84c(void)


void FUN_007ba84c(AnimalHusbandry *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  EntityRegistryManager *pEVar3;
  long lVar4;
  long lVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pEVar3 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(pEVar3,*param_2);
  pEVar3 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar5 = EntityRegistryManager::getEntityById(pEVar3,param_2[4]);
  if ((lVar4 != 0) && (lVar5 != 0)) {
    RawTransformGroup::updateWorldTransformation();
    RawTransformGroup::updateWorldTransformation();
    local_58 = *(undefined8 *)(lVar4 + 0xe8);
    local_50 = *(undefined4 *)(lVar4 + 0xf0);
    local_68 = *(undefined8 *)(lVar5 + 0xe8);
    local_60 = *(undefined4 *)(lVar5 + 0xf0);
    local_78 = *(undefined8 *)(lVar4 + 0xd8);
    local_70 = *(undefined4 *)(lVar4 + 0xe0);
    local_88 = *(undefined8 *)(lVar5 + 0xd8);
    local_80 = *(undefined4 *)(lVar5 + 0xe0);
    uVar2 = AnimalHusbandry::addMilkingPlace
                      (param_1,(float *)&local_58,(float *)&local_78,(float *)&local_68,
                       (float *)&local_88);
    param_2[0x40] = uVar2;
    param_2[0x42] = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


