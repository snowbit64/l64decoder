// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectLights
// Entry Point: 00a19228
// Size: 620 bytes
// Signature: undefined __thiscall collectLights(RenderList * this, Vector3 * param_1, RenderStats * param_2)


/* RenderList::collectLights(Vector3 const&, RenderStats&) */

void __thiscall RenderList::collectLights(RenderList *this,Vector3 *param_1,RenderStats *param_2)

{
  LightSource *pLVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  plVar6 = *(long **)(*(long *)(this + 0x28) + 0x3f0);
  iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
  if (iVar3 == 1) {
    uVar4 = CullingGrid2D::getEntities<NPlaneFrustum>
                      ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),
                       (NPlaneFrustum *)plVar6,param_1,*(float *)(*(long *)(this + 0x28) + 0x3e0),
                       *(float *)(*(long *)(this + 0x28) + 0x3e4),*(CullingResult **)(this + 0x2d0),
                       *(uint *)(this + 0x2c8));
    *(uint *)(this + 0x2cc) = uVar4;
    if ((*(char *)(*(long *)(this + 0x20) + 0x140) != '\0') &&
       (lVar5 = *(long *)(this + 0x28), (*(byte *)(lVar5 + 0x3a8) >> 3 & 1) == 0)) {
      CullingGrid2D::getCullingStats<NPlaneFrustum>
                ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),
                 (NPlaneFrustum *)plVar6,param_1,*(float *)(lVar5 + 0x3e0),*(float *)(lVar5 + 0x3e4)
                 ,&local_4c,&local_50,(uint *)((long)&local_58 + 4),(uint *)&local_58);
    }
  }
  else {
    uVar4 = CullingGrid2D::getEntities<Frustum>
                      ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),
                       (Frustum *)plVar6,param_1,*(float *)(*(long *)(this + 0x28) + 0x3e0),
                       *(float *)(*(long *)(this + 0x28) + 0x3e4),*(CullingResult **)(this + 0x2d0),
                       *(uint *)(this + 0x2c8));
    *(uint *)(this + 0x2cc) = uVar4;
    if ((*(char *)(*(long *)(this + 0x20) + 0x140) != '\0') &&
       (lVar5 = *(long *)(this + 0x28), (*(byte *)(lVar5 + 0x3a8) >> 3 & 1) == 0)) {
      CullingGrid2D::getCullingStats<Frustum>
                ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),
                 (Frustum *)plVar6,param_1,*(float *)(lVar5 + 0x3e0),*(float *)(lVar5 + 0x3e4),
                 &local_4c,&local_50,(uint *)((long)&local_58 + 4),(uint *)&local_58);
    }
  }
  if (*(char *)(*(long *)(this + 0x20) + 0x140) != '\0') {
    *(uint *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + local_4c;
    *(uint *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + local_50;
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + local_58._4_4_;
    *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + (int)local_58;
  }
  uVar4 = *(uint *)(this + 0x2c8);
  if (*(uint *)(this + 0x2cc) <= *(uint *)(this + 0x2c8)) {
    uVar4 = *(uint *)(this + 0x2cc);
  }
  *(uint *)(this + 0x2cc) = uVar4;
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar7 = 0;
    do {
      pLVar1 = (LightSource *)0x0;
      if (*(long *)(*(long *)(this + 0x2d0) + lVar5) != 0) {
        pLVar1 = (LightSource *)(*(long *)(*(long *)(this + 0x2d0) + lVar5) + -0x154);
      }
      if (((*(long *)(pLVar1 + 0xf8) == 0) || (*(char *)(*(long *)(pLVar1 + 0xf8) + 0x20) != '\0'))
         && ((*(uint *)(*(long *)(this + 0x28) + 0x3b0) & *(uint *)(pLVar1 + 0x120)) != 0)) {
        uVar8 = NEON_fmadd(*(float *)(pLVar1 + 0x220) - *(float *)(param_1 + 4),
                           *(float *)(pLVar1 + 0x220) - *(float *)(param_1 + 4),
                           (*(float *)(pLVar1 + 0x21c) - *(float *)param_1) *
                           (*(float *)(pLVar1 + 0x21c) - *(float *)param_1));
        fVar9 = (float)NEON_fmadd(*(float *)(pLVar1 + 0x224) - *(float *)(param_1 + 8),
                                  *(float *)(pLVar1 + 0x224) - *(float *)(param_1 + 8),uVar8);
        LightList::addLightSource
                  (*(LightList **)(this + 0x30),pLVar1,(Matrix4x4 *)(pLVar1 + 0xb8),SQRT(fVar9));
        uVar4 = *(uint *)(this + 0x2cc);
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar7 < uVar4);
  }
  LightList::lightsAdded
            (*(LightList **)(this + 0x30),
             (bool)((byte)(*(uint *)(*(long *)(this + 0x28) + 0x3a8) >> 4) & 1),
             (Matrix4x4 *)(*(long *)(this + 0x28) + 0xd0),param_2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


