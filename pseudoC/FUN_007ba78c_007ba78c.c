// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ba78c
// Entry Point: 007ba78c
// Size: 176 bytes
// Signature: undefined FUN_007ba78c(void)


void FUN_007ba78c(AnimalHusbandry *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  EntityRegistryManager *this;
  long lVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar3 != 0) {
    RawTransformGroup::updateWorldTransformation();
    local_40 = *(undefined4 *)(lVar3 + 0xf0);
    local_50 = *(undefined4 *)(lVar3 + 0xe0);
    local_48 = *(undefined8 *)(lVar3 + 0xe8);
    local_58 = *(undefined8 *)(lVar3 + 0xd8);
    uVar2 = AnimalHusbandry::addFeedingPlace
                      (param_1,(float *)&local_48,(float *)&local_58,(float)param_2[4],param_2[8],
                       *(char **)(lVar3 + 8));
    param_2[0x40] = uVar2;
    param_2[0x42] = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


