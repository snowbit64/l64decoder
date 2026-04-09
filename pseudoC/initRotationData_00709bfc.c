// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initRotationData
// Entry Point: 00709bfc
// Size: 612 bytes
// Signature: undefined initRotationData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalLocomotionSystem::initRotationData() */

void AnimalLocomotionSystem::initRotationData(void)

{
  float **this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long in_x0;
  AnimalAnimationSystemSource *this_00;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float *local_a0;
  float *local_98;
  undefined8 local_90;
  float *local_88;
  float *local_80;
  undefined8 local_78;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  this_00 = (AnimalAnimationSystemSource *)AnimalLocomotionSystemSource::getAnimationSource();
  uVar5 = AnimalAnimationSystemSource::findStateId(this_00,"turnLeft");
  uVar6 = AnimalAnimationSystemSource::findStateId(this_00,"turnRight");
  local_88 = (float *)0x0;
  local_80 = (float *)0x0;
  local_78 = 0;
  local_a0 = (float *)0x0;
  local_98 = (float *)0x0;
  local_90 = 0;
                    /* try { // try from 00709c68 to 00709c87 has its CatchHandler @ 00709e64 */
  AnimalAnimationSystemSource::findAnimations(this_00,uVar5,(vector *)&local_88);
  AnimalAnimationSystemSource::findAnimations(this_00,uVar6,(vector *)&local_a0);
  this = (float **)(in_x0 + 0x410);
  pfVar8 = *(float **)(in_x0 + 0x410);
  uVar11 = (long)local_80 - (long)local_88 >> 2;
  uVar10 = (long)local_98 - (long)local_a0 >> 2;
  if (uVar11 <= uVar10) {
    uVar10 = uVar11;
  }
  uVar11 = uVar10 & 0xffffffff;
  uVar12 = *(long *)(in_x0 + 0x418) - (long)pfVar8 >> 5;
  if (uVar11 < uVar12 || uVar11 - uVar12 == 0) {
    if (uVar11 < uVar12) {
      *(float **)(in_x0 + 0x418) = pfVar8 + uVar11 * 8;
    }
  }
  else {
                    /* try { // try from 00709cc8 to 00709ccf has its CatchHandler @ 00709e60 */
    std::__ndk1::
    vector<AnimalLocomotionSystem::RotationData,std::__ndk1::allocator<AnimalLocomotionSystem::RotationData>>
    ::__append((vector<AnimalLocomotionSystem::RotationData,std::__ndk1::allocator<AnimalLocomotionSystem::RotationData>>
                *)this,uVar11 - uVar12);
    pfVar8 = *this;
  }
  iVar16 = (int)uVar10;
  if (iVar16 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar11 = uVar10 & 0xffffffff;
    pfVar8 = pfVar8 + 5;
    pfVar7 = local_88;
    pfVar14 = local_a0;
    do {
      uVar11 = uVar11 - 1;
      uVar19 = *(undefined8 *)(this_00 + (ulong)(uint)*pfVar7 * 0x70 + 0x358);
      *pfVar8 = *pfVar7;
      *(undefined8 *)(pfVar8 + -5) = uVar19;
      pfVar8[-1] = *pfVar14;
      pfVar8 = pfVar8 + 8;
      pfVar7 = pfVar7 + 1;
      pfVar14 = pfVar14 + 1;
    } while (uVar11 != 0);
    uVar5 = iVar16 - 1;
    if (uVar5 == 0) goto LAB_00709d30;
  }
  lVar13 = 0x20;
  uVar11 = 0;
  iVar9 = iVar16;
  do {
    iVar9 = iVar9 + -1;
    uVar12 = uVar11 + 1;
    lVar15 = lVar13;
    iVar3 = iVar9;
    if (uVar12 < (uVar10 & 0xffffffff)) {
      do {
        pfVar8 = *this;
        puVar1 = (undefined8 *)(pfVar8 + uVar11 * 8);
        if (*(float *)((long)pfVar8 + lVar15) < *(float *)puVar1) {
          puVar2 = (undefined8 *)((long)pfVar8 + lVar15);
          uVar23 = puVar1[1];
          uVar22 = *puVar1;
          uVar25 = puVar1[3];
          uVar24 = puVar1[2];
          uVar19 = *puVar2;
          uVar21 = puVar2[3];
          uVar20 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar19;
          puVar1[3] = uVar21;
          puVar1[2] = uVar20;
          puVar2[1] = uVar23;
          *puVar2 = uVar22;
          puVar2[3] = uVar25;
          puVar2[2] = uVar24;
        }
        iVar3 = iVar3 + -1;
        lVar15 = lVar15 + 0x20;
      } while (iVar3 != 0);
    }
    lVar13 = lVar13 + 0x20;
    uVar11 = uVar12;
  } while (uVar12 != uVar5);
LAB_00709d30:
  if (iVar16 != 0) {
    pfVar8 = *this;
    uVar10 = uVar10 & 0xffffffff;
    fVar26 = 1.0;
    do {
      fVar18 = fVar26;
      fVar17 = -1.0;
      if (uVar10 != 1) {
        fVar18 = cosf(*pfVar8 + (pfVar8[8] - *pfVar8));
        fVar17 = fVar18;
      }
      pfVar8[3] = fVar26;
      pfVar8[2] = fVar17;
      uVar10 = uVar10 - 1;
      pfVar8 = pfVar8 + 8;
      fVar26 = fVar18;
    } while (uVar10 != 0);
  }
  if (local_a0 != (float *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (local_88 != (float *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


