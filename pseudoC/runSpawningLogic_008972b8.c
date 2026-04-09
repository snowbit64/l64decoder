// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: runSpawningLogic
// Entry Point: 008972b8
// Size: 2852 bytes
// Signature: undefined __thiscall runSpawningLogic(PedestrianSystem * this, float param_1, Vector3 * param_2)


/* PedestrianSystem::runSpawningLogic(float, Vector3 const&) */

void __thiscall
PedestrianSystem::runSpawningLogic(PedestrianSystem *this,float param_1,Vector3 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  SimulatedPedestrian *this_00;
  char *pcVar3;
  PedestrianData *pPVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  PedestrianVisuals *pPVar8;
  PedestrianData *pPVar9;
  long **pplVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long **pplVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  PedestrianSpline *pPVar18;
  TransformGroup **ppTVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  PedestrianSpline **ppPVar23;
  void *pvVar24;
  uint uVar25;
  ulong uVar26;
  long **pplVar27;
  PedestrianGroupData *pPVar28;
  ulong uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  byte local_108;
  void *local_f8;
  PedestrianVisuals *local_f0;
  PedestrianData *local_e8;
  long **local_e0;
  long **local_d8;
  long **local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  long local_b0;
  
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  puVar2 = (undefined8 *)(this + 0x2598c);
  if (0 < (int)*(uint *)(this + 0x25904)) {
    fVar30 = *(float *)(this + 0x2599c);
    uVar22 = (ulong)*(uint *)(this + 0x25904);
    do {
      uVar26 = uVar22 - 1;
      uVar29 = uVar26 & 0xffffffff;
      uVar31 = NEON_fmadd(*(float *)(this + uVar29 * 0x108 + 0x1d478) - *(float *)(param_2 + 4),
                          *(float *)(this + uVar29 * 0x108 + 0x1d478) - *(float *)(param_2 + 4),
                          (*(float *)(this + uVar29 * 0x108 + 0x1d474) - *(float *)param_2) *
                          (*(float *)(this + uVar29 * 0x108 + 0x1d474) - *(float *)param_2));
      fVar32 = (float)NEON_fmadd(*(float *)(this + uVar29 * 0x108 + 0x1d47c) -
                                 *(float *)(param_2 + 8),
                                 *(float *)(this + uVar29 * 0x108 + 0x1d47c) -
                                 *(float *)(param_2 + 8),uVar31);
      *(float *)(this + uVar29 * 0x108 + 0x1d4b0) = fVar32;
      if (fVar30 * fVar30 < fVar32) {
        pplVar14 = (long **)(this + uVar29 * 0x108 + 0x1d4a0);
        plVar15 = *pplVar14;
        *(undefined *)((long)plVar15 + 0xcc) = 0;
        ScenegraphNode::setVisibility((ScenegraphNode *)plVar15[0x15],false);
        ScenegraphNode::setVisibility((ScenegraphNode *)(*pplVar14)[0x14],false);
        PedestrianAnimationBlender::deactivate();
        plVar15 = *pplVar14;
        if (*(char *)((long)plVar15 + 0xcd) != '\0') {
          plVar16 = (long *)plVar15[0x13];
          if (plVar16 == (long *)0x0) {
LAB_00897428:
            (**(code **)(*plVar15 + 8))();
          }
          else {
            (**(code **)(*plVar16 + 8))(plVar16);
            plVar15 = *pplVar14;
            if (plVar15 != (long *)0x0) goto LAB_00897428;
          }
          *pplVar14 = (long *)0x0;
        }
        if (*(long *)(this + uVar29 * 0x108 + 0x1d498) == 0) {
          lVar17 = *(long *)(this + uVar29 * 0x108 + 0x1d4d0);
          if (lVar17 != 0) {
            *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + -1;
          }
        }
        else {
          *(undefined *)(*(long *)(this + uVar29 * 0x108 + 0x1d498) + 0x10) = 0;
        }
        uVar11 = *(uint *)(this + 0x257e0);
        uVar5 = *(int *)(this + 0x25904) - 1;
        uVar25 = (uint)uVar26;
        if ((uVar25 == uVar11) || (uVar11 == uVar5)) {
          *(uint *)(this + 0x257e0) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x257e4)) || (*(uint *)(this + 0x257e4) == uVar5)) {
          *(undefined4 *)(this + 0x257e4) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25858)) || (*(uint *)(this + 0x25858) == uVar5)) {
          *(undefined4 *)(this + 0x25858) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x2585c)) || (*(uint *)(this + 0x2585c) == uVar5)) {
          *(undefined4 *)(this + 0x2585c) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x257f8)) || (*(uint *)(this + 0x257f8) == uVar5)) {
          *(undefined4 *)(this + 0x257f8) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x257fc)) || (*(uint *)(this + 0x257fc) == uVar5)) {
          *(undefined4 *)(this + 0x257fc) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25870)) || (*(uint *)(this + 0x25870) == uVar5)) {
          *(undefined4 *)(this + 0x25870) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25874)) || (*(uint *)(this + 0x25874) == uVar5)) {
          *(undefined4 *)(this + 0x25874) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25810)) || (*(uint *)(this + 0x25810) == uVar5)) {
          *(undefined4 *)(this + 0x25810) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25814)) || (*(uint *)(this + 0x25814) == uVar5)) {
          *(undefined4 *)(this + 0x25814) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25888)) || (*(uint *)(this + 0x25888) == uVar5)) {
          *(undefined4 *)(this + 0x25888) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x2588c)) || (*(uint *)(this + 0x2588c) == uVar5)) {
          *(undefined4 *)(this + 0x2588c) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25828)) || (*(uint *)(this + 0x25828) == uVar5)) {
          *(undefined4 *)(this + 0x25828) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x2582c)) || (*(uint *)(this + 0x2582c) == uVar5)) {
          *(undefined4 *)(this + 0x2582c) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x258a0)) || (*(uint *)(this + 0x258a0) == uVar5)) {
          *(undefined4 *)(this + 0x258a0) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x258a4)) || (*(uint *)(this + 0x258a4) == uVar5)) {
          *(undefined4 *)(this + 0x258a4) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25840)) || (*(uint *)(this + 0x25840) == uVar5)) {
          *(undefined4 *)(this + 0x25840) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x25844)) || (*(uint *)(this + 0x25844) == uVar5)) {
          *(undefined4 *)(this + 0x25844) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x258b8)) || (*(uint *)(this + 0x258b8) == uVar5)) {
          *(undefined4 *)(this + 0x258b8) = 0xffffffff;
        }
        if ((uVar25 == *(uint *)(this + 0x258bc)) || (*(uint *)(this + 0x258bc) == uVar5)) {
          *(undefined4 *)(this + 0x258bc) = 0xffffffff;
        }
        *(uint *)(this + 0x25904) = uVar5;
        SimulatedPedestrian::reset();
        if (uVar25 != *(uint *)(this + 0x25904)) {
          memcpy(this + uVar29 * 0x108 + 0x1d458,
                 this + (ulong)*(uint *)(this + 0x25904) * 0x108 + 0x1d458,0x108);
          SimulatedPedestrian::reset();
        }
      }
      bVar1 = 1 < uVar22;
      uVar22 = uVar26;
    } while (bVar1);
  }
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  fVar30 = *(float *)(param_2 + 8);
  uVar33 = NEON_fmadd(*(float *)(this + 0x25990) - *(float *)(param_2 + 4),
                      *(float *)(this + 0x25990) - *(float *)(param_2 + 4),
                      (*(float *)puVar2 - *(float *)param_2) *
                      (*(float *)puVar2 - *(float *)param_2));
  uVar31 = *(undefined4 *)(param_2 + 8);
  *puVar2 = *(undefined8 *)param_2;
  fVar30 = (float)NEON_fmadd(*(float *)(this + 0x25994) - fVar30,*(float *)(this + 0x25994) - fVar30
                             ,uVar33);
  *(undefined4 *)(this + 0x25994) = uVar31;
  if (fVar30 <= *(float *)(this + 0x25998) * *(float *)(this + 0x25998) * 0.7) {
    fVar30 = *(float *)(this + 0x259a8);
    *(float *)(this + 0x259a8) = fVar30 - param_1;
    if ((fVar30 - param_1 < 0.0) && (*(uint *)(this + 0x25904) < 100)) {
      *(undefined4 *)(this + 0x259a8) = 0x43480000;
      PedestrianSpawnGrid::queryPartial
                ((PedestrianSpawnGrid *)(this + 0x25918),(Vector3 *)puVar2,(vector *)&local_c8);
    }
  }
  else {
                    /* try { // try from 00897718 to 00897763 has its CatchHandler @ 00897e0c */
    PedestrianSpawnGrid::queryFull
              ((PedestrianSpawnGrid *)(this + 0x25918),(Vector3 *)puVar2,(vector *)&local_c8);
  }
  pvVar24 = local_c8;
  uVar22 = (long)local_c0 - (long)local_c8;
  if (uVar22 != 0) {
    if ((long)uVar22 < 0) {
                    /* try { // try from 00897db8 to 00897dc3 has its CatchHandler @ 00897e10 */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 00897774 to 0089777b has its CatchHandler @ 00897e10 */
    pplVar14 = (long **)operator_new(uVar22);
    local_d0 = pplVar14 + ((long)uVar22 >> 3);
    local_e0 = pplVar14;
    local_d8 = pplVar14;
    if (0 < (int)(uVar22 >> 3)) {
      fVar30 = 0.0;
      uVar22 = uVar22 >> 3 & 0xffffffff;
      do {
        pplVar10 = local_e0;
        plVar15 = *(long **)((long)pvVar24 + (ulong)((int)uVar22 - 1) * 8);
        lVar17 = plVar15[1];
        if ((lVar17 == 0) || (*(char *)(lVar17 + 0x10) != '\0')) {
          lVar17 = *plVar15;
          if ((lVar17 != 0) &&
             ((fVar32 = *(float *)(this + 0x259a0) * *(float *)(lVar17 + 0x28) *
                        *(float *)(this + 0x259a4) - (float)*(int *)(lVar17 + 0x30),
              *(float *)(plVar15 + 4) = fVar32, 0.0 < fVar32 &&
              (lVar17 = *(long *)(lVar17 + 8), lVar17 != 0)))) goto LAB_0089780c;
        }
        else {
          lVar17 = *(long *)(lVar17 + 8);
          *(float *)(plVar15 + 4) = *(float *)(lVar17 + 0xc0) * *(float *)(this + 0x259a4);
LAB_0089780c:
          if ((*(float *)(lVar17 + 200) <= *(float *)(this + 0x25984)) &&
             (*(float *)(this + 0x25984) <= *(float *)(lVar17 + 0xcc))) {
            if (pplVar14 == local_d0) {
              uVar29 = (long)pplVar14 - (long)local_e0;
              uVar26 = ((long)uVar29 >> 3) + 1;
              if (uVar26 >> 0x3d != 0) {
                    /* try { // try from 00897dc4 to 00897dd7 has its CatchHandler @ 00897df8 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar26 <= (ulong)((long)uVar29 >> 2)) {
                uVar26 = (long)uVar29 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar29) {
                uVar26 = 0x1fffffffffffffff;
              }
              if (uVar26 == 0) {
                pplVar14 = (long **)0x0;
              }
              else {
                if (uVar26 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00897884 to 00897887 has its CatchHandler @ 00897de4 */
                pplVar14 = (long **)operator_new(uVar26 << 3);
              }
              pplVar27 = pplVar14 + ((long)uVar29 >> 3) + 1;
              pplVar14[(long)uVar29 >> 3] = plVar15;
              if (0 < (long)uVar29) {
                memcpy(pplVar14,pplVar10,uVar29);
              }
              local_d0 = pplVar14 + uVar26;
              local_e0 = pplVar14;
              local_d8 = pplVar27;
              if (pplVar10 != (long **)0x0) {
                operator_delete(pplVar10);
              }
            }
            else {
              pplVar27 = pplVar14 + 1;
              *pplVar14 = plVar15;
              local_d8 = pplVar27;
            }
            fVar30 = fVar30 + *(float *)(plVar15 + 4);
            pplVar14 = pplVar27;
          }
        }
        if (uVar22 < 2) goto LAB_008978f0;
        uVar22 = uVar22 - 1;
        pvVar24 = local_c8;
      } while( true );
    }
    fVar30 = 0.0;
LAB_008978f0:
    pplVar10 = local_e0;
    uVar11 = *(uint *)(this + 0x25904);
    while ((uVar11 < 100 && (pplVar14 != pplVar10))) {
                    /* try { // try from 00897928 to 00897933 has its CatchHandler @ 00897e58 */
      fVar32 = (float)MathUtil::getRandomMinMax(0.0,fVar30);
      if ((long)pplVar14 - (long)pplVar10 != 0) {
        fVar36 = 0.0;
        uVar22 = 0;
        do {
          ppPVar23 = (PedestrianSpline **)pplVar10[uVar22];
          fVar36 = fVar36 + *(float *)(ppPVar23 + 4);
          if (fVar32 < fVar36) {
            pplVar27 = pplVar10 + uVar22;
            sVar6 = (long)pplVar14 - (long)(pplVar27 + 1);
            if (sVar6 != 0) {
              memmove(pplVar27,pplVar27 + 1,sVar6);
            }
            pplVar14 = (long **)((long)pplVar27 + sVar6);
            goto LAB_00897990;
          }
          uVar22 = (ulong)((int)uVar22 + 1);
        } while (uVar22 < (ulong)((long)pplVar14 - (long)pplVar10 >> 3));
      }
      pplVar14 = pplVar14 + -1;
      ppPVar23 = (PedestrianSpline **)*pplVar14;
LAB_00897990:
      pPVar18 = *ppPVar23;
      fVar30 = fVar30 - *(float *)(ppPVar23 + 4);
      local_d8 = pplVar14;
      if ((pPVar18 != (PedestrianSpline *)0x0) ||
         (pPVar18 = ppPVar23[1], pPVar18 != (PedestrianSpline *)0x0)) {
        pPVar28 = *(PedestrianGroupData **)(pPVar18 + 8);
        local_f0 = (PedestrianVisuals *)0x0;
        local_e8 = (PedestrianData *)0x0;
                    /* try { // try from 008979b4 to 008979c7 has its CatchHandler @ 00897e54 */
        uVar22 = chooseVisuals(this,pPVar28,&local_f0,&local_e8);
        pPVar8 = local_f0;
        if ((uVar22 & 1) != 0) {
          uVar22 = (ulong)*(uint *)(this + 0x25904);
          *(uint *)(this + 0x25904) = *(uint *)(this + 0x25904) + 1;
                    /* try { // try from 008979f8 to 00897b0f has its CatchHandler @ 00897e5c */
          ScenegraphNode::setVisibility(*(ScenegraphNode **)(local_f0 + 0xa8),(bool)this[0x25975]);
          ScenegraphNode::setVisibility(*(ScenegraphNode **)(pPVar8 + 0xa0),(bool)this[0x25975]);
          pPVar8[0xcc] = (PedestrianVisuals)0x1;
          this_00 = (SimulatedPedestrian *)(this + uVar22 * 0x108 + 0x1d458);
          *(SimulatedPedestrian **)(pPVar8 + 0xb8) = this_00;
          SimulatedPedestrian::reset();
          pPVar9 = local_e8;
          *(PedestrianVisuals **)(this + uVar22 * 0x108 + 0x1d4a0) = pPVar8;
          this[uVar22 * 0x108 + 0x1d4c8] = (PedestrianSystem)0x1;
          pPVar18 = ppPVar23[2];
          *(undefined4 *)(this + uVar22 * 0x108 + 0x1d47c) = *(undefined4 *)(ppPVar23 + 3);
          *(PedestrianSpline **)(this + uVar22 * 0x108 + 0x1d474) = pPVar18;
          pPVar18 = ppPVar23[2];
          *(undefined4 *)(this + uVar22 * 0x108 + 0x1d494) = *(undefined4 *)(ppPVar23 + 3);
          *(PedestrianSpline **)(this + uVar22 * 0x108 + 0x1d48c) = pPVar18;
          fVar32 = *(float *)((long)ppPVar23 + 0x14) - *(float *)(param_2 + 4);
          uVar31 = NEON_fmadd(fVar32,fVar32,
                              (*(float *)(ppPVar23 + 2) - *(float *)param_2) *
                              (*(float *)(ppPVar23 + 2) - *(float *)param_2));
          uVar31 = NEON_fmadd(*(float *)(ppPVar23 + 3) - *(float *)(param_2 + 8),
                              *(float *)(ppPVar23 + 3) - *(float *)(param_2 + 8),uVar31);
          *(undefined4 *)(this + uVar22 * 0x108 + 0x1d4b0) = uVar31;
          *(PedestrianGroupData **)(this + uVar22 * 0x108 + 0x1d4a8) = pPVar28;
          *(undefined4 *)(this + uVar22 * 0x108 + 0x1d4c4) = *(undefined4 *)(local_e8 + 0x3a8);
          ppTVar19 = (TransformGroup **)ppPVar23[1];
          if (ppTVar19 == (TransformGroup **)0x0) {
            if (*ppPVar23 != (PedestrianSpline *)0x0) {
              pbVar20 = *(byte **)(local_e8 + 0x370);
              pbVar21 = *(byte **)(pbVar20 + 0x10);
              if ((*pbVar20 & 1) == 0) {
                pbVar21 = pbVar20 + 1;
              }
                    /* try { // try from 00897b70 to 00897b77 has its CatchHandler @ 00897df4 */
              uVar11 = CharacterSet::getNamedClipIndex
                                 (*(CharacterSet **)(pPVar8 + 0xb0),(char *)pbVar21);
              lVar17 = *(long *)(pPVar9 + 0x370);
              pcVar3 = (char *)(lVar17 + 0x19);
              if ((*(byte *)(lVar17 + 0x18) & 1) != 0) {
                pcVar3 = *(char **)(lVar17 + 0x28);
              }
                    /* try { // try from 00897b9c to 00897ba3 has its CatchHandler @ 00897df0 */
              iVar12 = CharacterSet::getNamedClipIndex(*(CharacterSet **)(pPVar8 + 0xb0),pcVar3);
              pPVar4 = pPVar9 + 0x391;
              if (((byte)pPVar9[0x390] & 1) != 0) {
                pPVar4 = *(PedestrianData **)(pPVar9 + 0x3a0);
              }
                    /* try { // try from 00897bc0 to 00897bc3 has its CatchHandler @ 00897dec */
              iVar13 = CharacterSet::getNamedClipIndex
                                 (*(CharacterSet **)(pPVar8 + 0xb0),(char *)pPVar4);
              if ((uVar11 != 0xffffffff) && (iVar13 != -1)) {
                fVar38 = *(float *)((long)ppPVar23 + 0x1c);
                    /* try { // try from 00897bec to 00897bef has its CatchHandler @ 00897de0 */
                fVar32 = (float)MathUtil::getRandomMinMax
                                          (-*(float *)(*ppPVar23 + 0x24),
                                           *(float *)(*ppPVar23 + 0x24));
                fVar36 = 1.0;
                if ((*ppPVar23)[0x2c] == (PedestrianSpline)0x0) {
                    /* try { // try from 00897c04 to 00897c07 has its CatchHandler @ 00897ddc */
                  fVar34 = (float)MathUtil::getRandom();
                  fVar36 = -1.0;
                  if (fVar34 <= 0.5) {
                    fVar36 = 1.0;
                  }
                }
                    /* try { // try from 00897c18 to 00897c23 has its CatchHandler @ 00897de8 */
                CharacterSet::getClip(*(CharacterSet **)(pPVar8 + 0xb0),uVar11);
                fVar34 = (float)Clip::getDuration();
                lVar17 = *(long *)(pPVar9 + 0x370);
                fVar37 = *(float *)(lVar17 + 0x48);
                    /* try { // try from 00897c38 to 00897c7b has its CatchHandler @ 00897e08 */
                fVar35 = (float)MathUtil::getRandomMinMax
                                          (*(float *)(lVar17 + 0x4c),*(float *)(lVar17 + 0x50));
                SimulatedPedestrian::initWalk
                          (this_00,*ppPVar23,fVar36,fVar38 + fVar32,
                           (fVar37 / (fVar34 * 0.001)) * fVar35);
                PedestrianAnimationBlender::initWalk
                          ((PedestrianAnimationBlender *)(pPVar8 + 8),uVar11,iVar12,iVar13,
                           *(CharacterSet **)(pPVar8 + 0xb0));
              }
              pPVar18 = *ppPVar23;
              fVar32 = *(float *)(this + 0x259a0) * *(float *)(pPVar18 + 0x28) *
                       *(float *)(this + 0x259a4);
              fVar36 = (float)(*(int *)(pPVar18 + 0x30) + 1);
              *(int *)(pPVar18 + 0x30) = *(int *)(pPVar18 + 0x30) + 1;
              uVar22 = (long)pplVar14 - (long)pplVar10;
              iVar12 = (int)(uVar22 >> 3);
              if (fVar36 <= fVar32) {
                if (0 < iVar12) {
                  fVar32 = fVar32 - fVar36;
                  uVar22 = (uVar22 >> 3 & 0xffffffff) + 1;
                  do {
                    ppPVar23 = (PedestrianSpline **)pplVar10[(int)uVar22 - 2];
                    if (*ppPVar23 == pPVar18) {
                      fVar36 = *(float *)(ppPVar23 + 4);
                      *(float *)(ppPVar23 + 4) = fVar32;
                      fVar30 = fVar32 + (fVar30 - fVar36);
                    }
                    uVar22 = uVar22 - 1;
                  } while (1 < uVar22);
                }
              }
              else if (0 < iVar12) {
                uVar22 = uVar22 >> 3 & 0xffffffff;
                while( true ) {
                  pplVar27 = pplVar10 + ((int)uVar22 - 1);
                  if ((PedestrianSpline *)**pplVar27 == pPVar18) {
                    sVar6 = (long)pplVar14 - (long)(pplVar27 + 1);
                    if (sVar6 != 0) {
                      memmove(pplVar27,pplVar27 + 1,sVar6);
                    }
                    pplVar14 = (long **)((long)pplVar27 + sVar6);
                    local_d8 = pplVar14;
                  }
                  if (uVar22 < 2) break;
                  pPVar18 = *ppPVar23;
                  uVar22 = uVar22 - 1;
                }
              }
            }
          }
          else {
            *(undefined *)(ppTVar19 + 2) = 1;
            *(TransformGroup ***)(this + uVar22 * 0x108 + 0x1d498) = ppTVar19;
            SimulatedPedestrian::initStatic(this_00,*ppTVar19);
                    /* try { // try from 00897b10 to 00897b1b has its CatchHandler @ 00897e50 */
            PedestrianGroupData::getNextAnimationName();
                    /* try { // try from 00897b24 to 00897b2b has its CatchHandler @ 00897e20 */
            PedestrianAnimationBlender::initStatic
                      ((PedestrianAnimationBlender *)(pPVar8 + 8),(basic_string *)&local_108,
                       *(CharacterSet **)(pPVar8 + 0xb0));
            if ((local_108 & 1) != 0) {
              operator_delete(local_f8);
            }
          }
        }
      }
      uVar11 = *(uint *)(this + 0x25904);
    }
    if (pplVar10 != (long **)0x0) {
      operator_delete(pplVar10);
    }
  }
  if (local_c8 != (void *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (*(long *)(lVar7 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


