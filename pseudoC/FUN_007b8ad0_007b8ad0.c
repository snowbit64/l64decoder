// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8ad0
// Entry Point: 007b8ad0
// Size: 760 bytes
// Signature: undefined FUN_007b8ad0(void)


void FUN_007b8ad0(NavigationPath *param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  EntityRegistryManager *this;
  long lVar3;
  DetourNavigationMeshQuery *this_00;
  NavigationMeshPath *pNVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined *)(param_2 + 0x40) = 0;
  param_2[0x42] = 3;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this,*param_2);
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x12) & 1) != 0)) &&
     (this_00 = (DetourNavigationMeshQuery *)NavigationMeshScenegraphNode::getNavigationMeshQuery(),
     this_00 != (DetourNavigationMeshQuery *)0x0)) {
    RawTransformGroup::updateWorldTransformation();
    uVar5 = *(undefined4 *)(lVar3 + 0xb8);
    fVar8 = (float)param_2[8] - *(float *)(lVar3 + 0xec);
    fVar11 = (float)param_2[0x14] - *(float *)(lVar3 + 0xec);
    fVar6 = (float)param_2[4] - *(float *)(lVar3 + 0xe8);
    fVar10 = (float)param_2[0x10] - *(float *)(lVar3 + 0xe8);
    uVar13 = NEON_fmadd(fVar6,uVar5,fVar8 * *(float *)(lVar3 + 0xbc));
    fVar9 = (float)param_2[0xc] - *(float *)(lVar3 + 0xf0);
    uVar12 = NEON_fmadd(fVar6,*(undefined4 *)(lVar3 + 200),fVar8 * *(float *)(lVar3 + 0xcc));
    uVar7 = NEON_fmadd(fVar6,*(undefined4 *)(lVar3 + 0xd8),fVar8 * *(float *)(lVar3 + 0xdc));
    fVar6 = (float)param_2[0x18] - *(float *)(lVar3 + 0xf0);
    uVar5 = NEON_fmadd(fVar10,uVar5,*(float *)(lVar3 + 0xbc) * fVar11);
    local_70 = NEON_fmadd(fVar9,*(undefined4 *)(lVar3 + 0xc0),uVar13);
    uVar13 = NEON_fmadd(fVar10,*(undefined4 *)(lVar3 + 200),*(float *)(lVar3 + 0xcc) * fVar11);
    uStack_6c = NEON_fmadd(fVar9,*(undefined4 *)(lVar3 + 0xd0),uVar12);
    local_68 = NEON_fmadd(fVar9,*(undefined4 *)(lVar3 + 0xe0),uVar7);
    uVar7 = NEON_fmadd(fVar10,*(undefined4 *)(lVar3 + 0xd8),*(float *)(lVar3 + 0xdc) * fVar11);
    uStack_64 = NEON_fmadd(fVar6,*(undefined4 *)(lVar3 + 0xc0),uVar5);
    local_60 = NEON_fmadd(fVar6,*(undefined4 *)(lVar3 + 0xd0),uVar13);
    uStack_5c = NEON_fmadd(fVar6,*(undefined4 *)(lVar3 + 0xe0),uVar7);
    local_58 = 0.5;
    switch(param_2[0x1e]) {
    case 1:
      local_58 = (float)param_2[0x1c];
      break;
    case 2:
      local_58 = (float)NEON_ucvtf(param_2[0x1c]);
      break;
    case 4:
      local_58 = (float)param_2[0x1c];
      break;
    case 5:
      local_58 = (float)*(double *)(param_2 + 0x1c);
    }
    local_54 = -1.57079;
    switch(param_2[0x22]) {
    case 1:
      local_54 = (float)param_2[0x20];
      break;
    case 2:
      local_54 = (float)NEON_ucvtf(param_2[0x20]);
      break;
    case 4:
      local_54 = (float)param_2[0x20];
      break;
    case 5:
      local_54 = (float)*(double *)(param_2 + 0x20);
    }
    local_50 = 1.57079;
    switch(param_2[0x26]) {
    case 1:
      local_50 = (float)param_2[0x24];
      break;
    case 2:
      local_50 = (float)NEON_ucvtf(param_2[0x24]);
      break;
    case 4:
      local_50 = (float)param_2[0x24];
      break;
    case 5:
      local_50 = (float)*(double *)(param_2 + 0x24);
    }
    local_4c = 10000.0;
    switch(param_2[0x2a]) {
    case 1:
      local_4c = (float)param_2[0x28];
      break;
    case 2:
      local_4c = (float)NEON_ucvtf(param_2[0x28]);
      break;
    case 4:
      local_4c = (float)param_2[0x28];
      break;
    case 5:
      local_4c = (float)*(double *)(param_2 + 0x28);
    }
    pNVar4 = (NavigationMeshPath *)
             DetourNavigationMeshQuery::createPath(this_00,(PathRequestDesc *)&local_70);
    iVar2 = NavigationMeshPath::getState();
    if (iVar2 == 0) {
      NavigationPath::set(param_1,pNVar4,(Matrix4x4 *)(undefined4 *)(lVar3 + 0xb8));
      *(undefined *)(param_2 + 0x40) = 1;
      param_2[0x42] = 3;
    }
    DetourNavigationMeshQuery::destroyPath(this_00,pNVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


