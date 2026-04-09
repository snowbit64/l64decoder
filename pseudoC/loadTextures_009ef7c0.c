// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadTextures
// Entry Point: 009ef7c0
// Size: 520 bytes
// Signature: undefined __cdecl loadTextures(IRenderDevice * param_1)


/* AtmosphereRenderControllerShared::loadTextures(IRenderDevice*) */

void AtmosphereRenderControllerShared::loadTextures(IRenderDevice *param_1)

{
  long lVar1;
  bool bVar2;
  ResourceManager *pRVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **local_c8;
  undefined local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined **local_b0;
  undefined local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined **local_98;
  undefined local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined **local_80;
  undefined local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined **local_68;
  undefined local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined **local_50;
  undefined local_48;
  undefined4 local_44;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = true;
  if (*(long *)param_1 == 0) {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_78 = 1;
    local_74 = 0;
    local_70 = 0;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_98 = &PTR__ResourceDesc_00fd99b0;
    local_80 = &PTR__ResourceDesc_00fd99b0;
    local_68 = &PTR__ResourceDesc_00fd99b0;
    local_50 = &PTR__ResourceDesc_00fd99b0;
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    uVar4 = ResourceManager::get
                      (pRVar3,"shared/baseCloudPacked.png",2,(ResourceDesc *)&local_50,1,true,true);
    *(undefined8 *)param_1 = uVar4;
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    uVar4 = ResourceManager::get
                      (pRVar3,"shared/cloudErosionPacked.png",2,(ResourceDesc *)&local_68,1,true,
                       true);
    *(undefined8 *)(param_1 + 8) = uVar4;
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    uVar4 = ResourceManager::get
                      (pRVar3,"shared/cirrusClouds.png",2,(ResourceDesc *)&local_98,1,true,true);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    uVar4 = ResourceManager::get
                      (pRVar3,"shared/moon_diffuse.png",2,(ResourceDesc *)&local_80,1,true,true);
    local_a8 = 0;
    local_a4 = 0;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    local_a0 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_c8 = &PTR__ResourceDesc_00fd99b0;
    local_b0 = &PTR__ResourceDesc_00fd99b0;
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    uVar4 = ResourceManager::get
                      (pRVar3,"shared/cloudCoverageNoise.png",2,(ResourceDesc *)&local_b0,1,true,
                       true);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    lVar5 = ResourceManager::get
                      (pRVar3,"shared/cloudTypeAtlas.png",2,(ResourceDesc *)&local_c8,1,true,true);
    *(long *)(param_1 + 0x28) = lVar5;
    bVar2 = lVar5 != 0 &&
            ((((*(long *)param_1 != 0 && *(long *)(param_1 + 8) != 0) &&
              *(long *)(param_1 + 0x10) != 0) && *(long *)(param_1 + 0x18) != 0) &&
            *(long *)(param_1 + 0x20) != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


