// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b90e8
// Entry Point: 007b90e8
// Size: 368 bytes
// Signature: undefined FUN_007b90e8(void)


void FUN_007b90e8(NavigationMeshScenegraphNode *param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  EntityRegistryManager *this;
  RawTransformGroup *pRVar5;
  NavigationMesh *pNVar6;
  float fVar7;
  Matrix4x4 aMStack_f8 [64];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint local_64;
  uint uStack_60;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *(undefined *)(param_2 + 0x40) = 0;
  param_2[0x42] = 3;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pRVar5 = (RawTransformGroup *)EntityRegistryManager::getEntityById(this,*param_2);
  if ((pRVar5 != (RawTransformGroup *)0x0) && (((byte)pRVar5[0x10] >> 4 & 1) != 0)) {
    local_80 = param_2[4];
    uStack_7c = param_2[8];
    local_b8 = 0;
    local_b0 = 0;
    local_78 = param_2[0xc];
    uStack_74 = param_2[0x10];
    local_a8 = 0;
    local_8c = 0xbf80000000000000;
    local_a0 = 0;
    local_70 = param_2[0x14];
    local_98 = 0;
    local_84 = 0;
    local_5c = 6;
    local_90 = MathUtil::radianToDegree((float)param_2[0x18]);
    local_6c = param_2[0x1c];
    uStack_68 = param_2[0x20];
    local_64 = param_2[0x24];
    uStack_60 = param_2[0x28];
    uVar2 = param_2[0x2c];
    fVar7 = (float)param_2[0x30];
    uVar3 = param_2[0x38];
    pcVar1 = (char *)0x0;
    if (**(char **)(param_2 + 0x34) != '\0') {
      pcVar1 = *(char **)(param_2 + 0x34);
    }
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4(aMStack_f8,(Matrix4x4 *)(param_1 + 0xb8));
    pNVar6 = (NavigationMesh *)
             NavigationMeshGeneratorUtil::generate
                       (aMStack_f8,pRVar5,(NavigationMeshGeneratorDesc *)&local_b8,uVar2,pcVar1,
                        uVar3,fVar7);
    if (pNVar6 != (NavigationMesh *)0x0) {
      NavigationMeshScenegraphNode::setNavigationMesh(param_1,pNVar6);
      *(undefined *)(param_2 + 0x40) = 1;
      param_2[0x42] = 3;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


