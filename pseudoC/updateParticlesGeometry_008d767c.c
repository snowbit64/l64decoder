// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParticlesGeometry
// Entry Point: 008d767c
// Size: 1128 bytes
// Signature: undefined __thiscall updateParticlesGeometry(ParticleSystem * this, RenderArgs * param_1)


/* ParticleSystem::updateParticlesGeometry(RenderArgs const*) */

void __thiscall ParticleSystem::updateParticlesGeometry(ParticleSystem *this,RenderArgs *param_1)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined2 local_cc;
  undefined2 local_ca;
  uint local_c8;
  __less a_Stack_c0 [24];
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  if (this[0x16c] != (ParticleSystem)0x0) {
    uVar6 = (ulong)*(uint *)(this + 0x1b0);
    puVar4 = *(undefined4 **)(this + 0x1a8);
    uVar11 = uVar6;
    puVar9 = puVar4;
    if (*(uint *)(this + 0x1b0) == 0) {
      uVar6 = 0;
    }
    else {
      do {
        uVar11 = uVar11 - 1;
        uVar12 = NEON_fmadd(*(undefined4 *)(param_1 + 0x378),*puVar9,
                            *(float *)(param_1 + 0x37c) * (float)puVar9[1]);
        uVar12 = NEON_fmadd(*(undefined4 *)(param_1 + 0x380),puVar9[2],uVar12);
        puVar9[8] = uVar12;
        puVar9 = puVar9 + 9;
      } while (uVar11 != 0);
    }
    std::__ndk1::__sort<std::__ndk1::__less<Particle,Particle>&,Particle*>
              ((Particle *)puVar4,(Particle *)(puVar4 + uVar6 * 9),a_Stack_c0);
  }
  if (*(int *)(this + 0x1b0) == 0) {
    if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
       iVar3 != 0)) {
                    /* try { // try from 008d7aa8 to 008d7ab3 has its CatchHandler @ 008d7ae4 */
      InstancedGeometryManager::InstancedGeometryManager
                ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
      __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                   InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
    }
    InstancedGeometryManager::releaseInstanceSetResources
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,
               *(InstanceData **)(this + 0x1c0));
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
  }
  else {
    fVar20 = *(float *)(this + 0x134);
    if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
       iVar3 != 0)) {
                    /* try { // try from 008d7a18 to 008d7a23 has its CatchHandler @ 008d7aec */
      InstancedGeometryManager::InstancedGeometryManager
                ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
      __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                   InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
    }
    InstancedGeometryManager::lockInstanceSet
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,
               *(InstanceData **)(this + 0x1c0),*(uint *)(this + 0x1b0),
               **(IRenderDevice ***)(param_1 + 0x3a0),(LockData *)a_Stack_c0,false);
    if (*(int *)(this + 0x1b0) == 0) {
      fVar5 = 3.402823e+38;
      fVar8 = -3.402823e+38;
      fVar23 = fVar5;
      fVar21 = fVar5;
      fVar22 = fVar8;
      fVar7 = fVar8;
    }
    else {
      fVar5 = 3.402823e+38;
      fVar7 = -3.402823e+38;
      lVar10 = 0;
      uVar11 = 0;
      fVar23 = fVar5;
      fVar21 = fVar5;
      fVar22 = fVar7;
      fVar8 = fVar7;
      do {
        pfVar1 = (float *)(*(long *)(this + 0x1a8) + lVar10);
        fVar16 = pfVar1[2];
        local_d8 = *pfVar1;
        fVar14 = pfVar1[1];
        local_d4 = pfVar1[1];
        fVar19 = local_d8;
        if (local_d8 <= fVar8) {
          fVar19 = fVar8;
        }
        fVar8 = fVar19;
        local_d0 = pfVar1[2];
        fVar19 = fVar14;
        if (fVar14 <= fVar22) {
          fVar19 = fVar22;
        }
        fVar22 = fVar19;
        local_cc = (undefined2)
                   (int)((1.0 / fVar20) * (*(float *)(this + 0xc4) - pfVar1[6]) * 32767.0);
        local_ca = *(undefined2 *)(pfVar1 + 7);
        fVar19 = fVar16;
        if (fVar16 <= fVar7) {
          fVar19 = fVar7;
        }
        fVar7 = fVar19;
        fVar18 = pfVar1[3];
        fVar13 = pfVar1[4];
        fVar19 = pfVar1[5];
        fVar15 = local_d8;
        if (fVar5 <= local_d8) {
          fVar15 = fVar5;
        }
        fVar5 = fVar15;
        if (fVar23 <= fVar14) {
          fVar14 = fVar23;
        }
        fVar23 = fVar14;
        uVar12 = NEON_fmadd(fVar18,fVar18,fVar13 * fVar13);
        if (fVar21 <= fVar16) {
          fVar16 = fVar21;
        }
        fVar21 = fVar16;
        fVar14 = (float)NEON_fmadd(fVar19,fVar19,uVar12);
        fVar14 = SQRT(fVar14);
        fVar16 = 1.0 / fVar14;
        if (0.0001 <= fVar14) {
          fVar18 = fVar18 * fVar16;
          fVar19 = fVar19 * fVar16;
          fVar13 = fVar13 * fVar16;
        }
        fVar15 = (float)NEON_fmadd(fVar19,0x42ff0000,0x42ff0000);
        fVar19 = (float)NEON_fmadd(fVar13,0x42ff0000,0x42ff0000);
        fVar16 = (float)NEON_fmadd(fVar18,0x42ff0000,0x42ff0000);
        dVar17 = (double)NEON_fminnm(((double)fVar14 * 255.0) / 20.0,0x406fe00000000000);
        local_c8 = (int)dVar17 << 0x18 | ((int)fVar15 & 0xffU) << 0x10 | ((int)fVar19 & 0xffU) << 8
                   | (int)fVar16;
        InstancedGeometryManager::LockData::writeNextInstance((LockData *)a_Stack_c0,&local_d8);
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x24;
      } while (uVar11 < *(uint *)(this + 0x1b0));
    }
    if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
       iVar3 != 0)) {
                    /* try { // try from 008d7a60 to 008d7a6b has its CatchHandler @ 008d7ae8 */
      InstancedGeometryManager::InstancedGeometryManager
                ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
      __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                   InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
    }
    InstancedGeometryManager::unlockInstanceSet
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,
               **(IRenderDevice ***)(param_1 + 0x3a0),(LockData *)a_Stack_c0);
    fVar20 = (float)NEON_fmadd(*(undefined4 *)(this + 0x134),*(undefined4 *)(this + 0x144),
                               *(undefined4 *)(this + 0x13c));
    fVar19 = (float)NEON_fmadd(*(undefined4 *)(this + 0x134),*(undefined4 *)(this + 0x148),
                               *(undefined4 *)(this + 0x140));
    if (fVar20 < fVar19) {
      fVar20 = fVar19;
    }
    fVar14 = (fVar22 - fVar23) + fVar20;
    fVar19 = (fVar8 - fVar5) + fVar20;
    fVar20 = (fVar7 - fVar21) + fVar20;
    uVar12 = NEON_fmadd(fVar19,fVar19,fVar14 * fVar14);
    fVar20 = (float)NEON_fmadd(fVar20,fVar20,uVar12);
    *(float *)(this + 0xe8) = (fVar5 + fVar8) * 0.5;
    *(float *)(this + 0xec) = (fVar23 + fVar22) * 0.5;
    *(float *)(this + 0xf0) = (fVar21 + fVar7) * 0.5;
    *(float *)(this + 0xf4) = SQRT(fVar20) * 0.5;
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


