// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDifferential
// Entry Point: 009a4540
// Size: 516 bytes
// Signature: undefined __thiscall addDifferential(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, AddDifferential * param_2)


/* Bt2ScenegraphPhysicsContext::addDifferential(TransformGroup*,
   Bt2ScenegraphPhysicsContext::AddDifferential const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::addDifferential
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,AddDifferential *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  Bt2RaycastVehicle *this_00;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  Bt2ScenegraphPhysicsContext *pBVar10;
  Bt2ScenegraphPhysicsContext *pBVar11;
  uint *puVar12;
  
  lVar6 = RawTransformGroup::getPhysicsObject();
  uVar9 = *(ulong *)(lVar6 + 0x30);
  if (uVar9 == 0) {
    return;
  }
  if ((*(byte *)(uVar9 + 0xe0) & 3) != 0) {
    return;
  }
  pBVar11 = *(Bt2ScenegraphPhysicsContext **)(this + 400);
  if (pBVar11 == (Bt2ScenegraphPhysicsContext *)0x0) {
    return;
  }
  pBVar10 = this + 400;
  do {
    if (*(ulong *)(pBVar11 + 0x20) >= uVar9) {
      pBVar10 = pBVar11;
    }
    pBVar11 = *(Bt2ScenegraphPhysicsContext **)
               (pBVar11 + (ulong)(*(ulong *)(pBVar11 + 0x20) < uVar9) * 8);
  } while (pBVar11 != (Bt2ScenegraphPhysicsContext *)0x0);
  if (pBVar10 == this + 400) {
    return;
  }
  if (uVar9 < *(ulong *)(pBVar10 + 0x20)) {
    return;
  }
  uVar7 = *(uint *)param_2;
  uVar8 = *(uint *)(param_2 + 8);
  if (param_2[4] == (AddDifferential)0x0) {
LAB_009a45ec:
    this_00 = *(Bt2RaycastVehicle **)(pBVar10 + 0x28);
    if (param_2[0xc] != (AddDifferential)0x0) {
      uVar3 = *(uint *)(this_00 + 0x3c);
      if ((int)uVar3 < 1) goto LAB_009a46a4;
      if (*(uint *)(*(long *)(this_00 + 0x48) + 0x184) == uVar8) {
        uVar8 = 0;
      }
      else {
        uVar9 = 0;
        puVar12 = (uint *)(*(long *)(this_00 + 0x48) + 0x324);
        do {
          if ((ulong)uVar3 - 1 == uVar9) goto LAB_009a46a4;
          uVar4 = *puVar12;
          puVar12 = puVar12 + 0x68;
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar8);
        if (uVar3 <= uVar9) goto LAB_009a46a4;
        uVar8 = (uint)uVar9;
      }
    }
    Bt2RaycastVehicle::addDifferential
              (this_00,uVar7,param_2[4] != (AddDifferential)0x0,uVar8,
               param_2[0xc] != (AddDifferential)0x0,*(float *)(param_2 + 0x10),
               *(float *)(param_2 + 0x14));
  }
  else {
    uVar3 = *(uint *)(*(long *)(pBVar10 + 0x28) + 0x3c);
    if (0 < (int)uVar3) {
      lVar6 = *(long *)(*(long *)(pBVar10 + 0x28) + 0x48);
      if (*(uint *)(lVar6 + 0x184) == uVar7) {
        uVar7 = 0;
      }
      else {
        uVar9 = 0;
        puVar12 = (uint *)(lVar6 + 0x324);
        do {
          if ((ulong)uVar3 - 1 == uVar9) goto LAB_009a46a4;
          uVar4 = *puVar12;
          puVar12 = puVar12 + 0x68;
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar7);
        if (uVar3 <= uVar9) goto LAB_009a46a4;
        uVar7 = (uint)uVar9;
      }
      goto LAB_009a45ec;
    }
LAB_009a46a4:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 009a470c to 009a4717 has its CatchHandler @ 009a4744 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar1 = "diff";
    if (param_2[4] != (AddDifferential)0x0) {
      pcVar1 = "wheel";
    }
    pcVar2 = "diff";
    if (param_2[0xc] != (AddDifferential)0x0) {
      pcVar2 = "wheel";
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): Adding differential with invalid wheel indices (%s %u, %s %u).\n"
                       ,pcVar1,(ulong)*(uint *)param_2,pcVar2,(ulong)*(uint *)(param_2 + 8));
  }
  return;
}


