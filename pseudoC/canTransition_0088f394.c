// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canTransition
// Entry Point: 0088f394
// Size: 528 bytes
// Signature: undefined canTransition(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogTransition::canTransition() const */

void DogTransition::canTransition(void)

{
  long lVar1;
  bool bVar2;
  long in_x0;
  ulong uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (6 < *(uint *)(in_x0 + 0x28)) {
    bVar2 = false;
    goto LAB_0088f574;
  }
  lVar5 = *(long *)(in_x0 + 8);
  switch(*(uint *)(in_x0 + 0x28)) {
  case 0:
    if (*(long *)(lVar5 + 0xf0) == 0) break;
LAB_0088f3fc:
    AnimalSteering::getPosition(*(AnimalSteering **)(in_x0 + 0x20),(Vector3 *)&local_68);
    lVar5 = *(long *)(lVar5 + 0xf8);
    RawTransformGroup::updateWorldTransformation();
    cVar4 = *(char *)(in_x0 + 0x30);
    local_68 = local_68 - *(float *)(lVar5 + 0xe8);
    fStack_64 = fStack_64 - *(float *)(lVar5 + 0xec);
    bVar2 = cVar4 == '\0';
    local_60 = local_60 - *(float *)(lVar5 + 0xf0);
    uVar7 = NEON_fmadd(fStack_64,fStack_64,local_68 * local_68);
    fVar8 = (float)NEON_fmadd(local_60,local_60,uVar7);
    if (fVar8 < *(float *)(in_x0 + 0x2c) * *(float *)(in_x0 + 0x2c)) goto LAB_0088f574;
    goto LAB_0088f540;
  case 1:
    if ((*(long *)(lVar5 + 0xf0) != 0) && (*(long *)(lVar5 + 0xf8) != 0)) {
      AnimalSteering::getPosition(*(AnimalSteering **)(in_x0 + 0x20),(Vector3 *)&local_68);
      lVar6 = *(long *)(lVar5 + 0xf0);
      RawTransformGroup::updateWorldTransformation();
      fVar8 = *(float *)(lVar6 + 0xe8);
      fVar9 = *(float *)(lVar6 + 0xec);
      fVar10 = *(float *)(lVar6 + 0xf0);
      lVar5 = *(long *)(lVar5 + 0xf8);
LAB_0088f4d0:
      RawTransformGroup::updateWorldTransformation();
      uVar7 = NEON_fmadd(fStack_64 - fVar9,fStack_64 - fVar9,(local_68 - fVar8) * (local_68 - fVar8)
                        );
      fVar9 = (float)NEON_fmadd(local_60 - fVar10,local_60 - fVar10,uVar7);
      fVar8 = *(float *)(in_x0 + 0x2c) * *(float *)(in_x0 + 0x2c);
      if (fVar9 < fVar8) {
        local_68 = local_68 - *(float *)(lVar5 + 0xe8);
        fStack_64 = fStack_64 - *(float *)(lVar5 + 0xec);
        uVar7 = NEON_fmadd(fStack_64,fStack_64,local_68 * local_68);
        local_60 = local_60 - *(float *)(lVar5 + 0xf0);
        fVar9 = (float)NEON_fmadd(local_60,local_60,uVar7);
        if (fVar9 < fVar8) goto switchD_0088f3e4_caseD_6;
      }
    }
    break;
  case 2:
    if ((*(long *)(lVar5 + 0xf0) != 0) && (*(long *)(lVar5 + 0x100) != 0)) {
      AnimalSteering::getPosition(*(AnimalSteering **)(in_x0 + 0x20),(Vector3 *)&local_68);
      lVar6 = *(long *)(lVar5 + 0xf0);
      RawTransformGroup::updateWorldTransformation();
      fVar8 = *(float *)(lVar6 + 0xe8);
      fVar9 = *(float *)(lVar6 + 0xec);
      fVar10 = *(float *)(lVar6 + 0xf0);
      lVar5 = *(long *)(lVar5 + 0x100);
      goto LAB_0088f4d0;
    }
    break;
  case 3:
    if (*(long *)(lVar5 + 0xf8) != 0) goto LAB_0088f3fc;
    break;
  case 4:
    uVar3 = BehaviorContext::isNight();
    cVar4 = *(char *)(in_x0 + 0x30);
    if ((uVar3 & 1) == 0) goto LAB_0088f540;
    goto LAB_0088f56c;
  case 5:
    cVar4 = *(char *)(in_x0 + 0x30);
    if (*(char *)(lVar5 + 0x191) == '\0') goto LAB_0088f540;
    goto LAB_0088f56c;
  case 6:
switchD_0088f3e4_caseD_6:
    cVar4 = *(char *)(in_x0 + 0x30);
LAB_0088f56c:
    bVar2 = cVar4 == '\0';
    goto LAB_0088f574;
  }
  cVar4 = *(char *)(in_x0 + 0x30);
LAB_0088f540:
  bVar2 = cVar4 != '\0';
LAB_0088f574:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


