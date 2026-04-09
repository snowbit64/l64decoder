// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVehicleLink
// Entry Point: 009a4b94
// Size: 552 bytes
// Signature: undefined __cdecl addVehicleLink(TransformGroup * param_1, TransformGroup * param_2)


/* Bt2ScenegraphPhysicsContext::addVehicleLink(TransformGroup*, TransformGroup*) */

void Bt2ScenegraphPhysicsContext::addVehicleLink(TransformGroup *param_1,TransformGroup *param_2)

{
  TransformGroup **ppTVar1;
  TransformGroup *pTVar2;
  long lVar3;
  pair pVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  Bt2RaycastVehicle *this;
  TransformGroup *pTVar8;
  TransformGroup *pTVar9;
  TransformGroup *pTVar10;
  btRigidBody *pbVar11;
  Bt2World *pBVar12;
  btRigidBody *pbVar13;
  Bt2RaycastVehicle *local_60;
  btRigidBody *local_58;
  btRigidBody *pbStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = RawTransformGroup::getPhysicsObject();
  if (((*(byte *)(uVar5 + 8) >> 3 & 1) == 0) ||
     (uVar5 = RawTransformGroup::getPhysicsObject(), (*(byte *)(uVar5 + 8) >> 3 & 1) == 0))
  goto LAB_009a4d90;
  lVar6 = RawTransformGroup::getPhysicsObject();
  uVar5 = RawTransformGroup::getPhysicsObject();
  pbVar11 = *(btRigidBody **)(lVar6 + 0x30);
  if ((pbVar11 == (btRigidBody *)0x0) ||
     (((((byte)pbVar11[0xe0] & 3) != 0 ||
       (pBVar12 = *(Bt2World **)(uVar5 + 0x30), pBVar12 == (Bt2World *)0x0)) ||
      (((byte)pBVar12[0xe0] & 3) != 0)))) goto LAB_009a4d90;
  pTVar9 = *(TransformGroup **)(param_1 + 400);
  pTVar2 = param_1 + 400;
  pTVar8 = pTVar2;
  pTVar10 = pTVar9;
  if (pTVar9 == (TransformGroup *)0x0) {
LAB_009a4c64:
    pTVar8 = pTVar2;
  }
  else {
    do {
      if (*(btRigidBody **)(pTVar10 + 0x20) >= pbVar11) {
        pTVar8 = pTVar10;
      }
      ppTVar1 = (TransformGroup **)
                (pTVar10 + (ulong)(*(btRigidBody **)(pTVar10 + 0x20) < pbVar11) * 8);
      pTVar10 = *ppTVar1;
    } while (*ppTVar1 != (TransformGroup *)0x0);
    if ((pTVar8 == pTVar2) || (pbVar11 < *(btRigidBody **)(pTVar8 + 0x20))) goto LAB_009a4c64;
  }
  pTVar10 = pTVar2;
  if (pTVar9 == (TransformGroup *)0x0) {
LAB_009a4c9c:
    if (pTVar8 == pTVar2) {
LAB_009a4d28:
      this = (Bt2RaycastVehicle *)btAlignedAllocInternal(0x140,0x10);
                    /* try { // try from 009a4d3c to 009a4d43 has its CatchHandler @ 009a4dbc */
      Bt2RaycastVehicle::Bt2RaycastVehicle(this,pbVar11,*(Bt2World **)(param_1 + 0x30));
      local_60 = this;
      FUN_009a92d8(param_1 + 0x1a0,&local_60);
      Bt2RaycastVehicle::addRigidBody
                ((btRigidBody *)local_60,pBVar12,SUB81(*(undefined8 *)(param_1 + 0x30),0));
      pbStack_50 = (btRigidBody *)local_60;
      local_58 = pbVar11;
      std::__ndk1::
      map<btRigidBody*,Bt2RaycastVehicle*,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2RaycastVehicle*>>>
      ::insert<std::__ndk1::pair<btRigidBody*,Bt2RaycastVehicle*>,void>
                ((map<btRigidBody*,Bt2RaycastVehicle*,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2RaycastVehicle*>>>
                  *)(param_1 + 0x188),(pair *)&local_58);
      pbStack_50 = (btRigidBody *)local_60;
      local_58 = (btRigidBody *)pBVar12;
    }
    else {
LAB_009a4ca4:
      pbVar11 = *(btRigidBody **)(pTVar8 + 0x28);
      Bt2RaycastVehicle::addRigidBody(pbVar11,pBVar12,SUB81(*(undefined8 *)(param_1 + 0x30),0));
      local_58 = (btRigidBody *)pBVar12;
      pbStack_50 = pbVar11;
    }
  }
  else {
    do {
      if (*(Bt2World **)(pTVar9 + 0x20) >= pBVar12) {
        pTVar10 = pTVar9;
      }
      pTVar9 = *(TransformGroup **)(pTVar9 + (ulong)(*(Bt2World **)(pTVar9 + 0x20) < pBVar12) * 8);
    } while (pTVar9 != (TransformGroup *)0x0);
    if ((pTVar10 == pTVar2) || (pBVar12 < *(Bt2World **)(pTVar10 + 0x20))) goto LAB_009a4c9c;
    if ((pTVar8 != pTVar2) && (pTVar10 != pTVar2)) {
      if (*(long *)(pTVar8 + 0x28) != *(long *)(pTVar10 + 0x28)) {
        pcVar7 = (char *)LogManager::getInstance();
        uVar5 = LogManager::errorf(pcVar7,
                                   "Error (physics): Vehicle links must be added before the wheels are created\n"
                                  );
      }
      goto LAB_009a4d90;
    }
    if (pTVar8 != pTVar2) goto LAB_009a4ca4;
    if (pTVar10 == pTVar2) goto LAB_009a4d28;
    pbVar13 = *(btRigidBody **)(pTVar10 + 0x28);
    Bt2RaycastVehicle::addRigidBody
              (pbVar13,(Bt2World *)pbVar11,SUB81(*(undefined8 *)(param_1 + 0x30),0));
    local_58 = pbVar11;
    pbStack_50 = pbVar13;
  }
  pVar4 = std::__ndk1::
          map<btRigidBody*,Bt2RaycastVehicle*,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2RaycastVehicle*>>>
          ::insert<std::__ndk1::pair<btRigidBody*,Bt2RaycastVehicle*>,void>
                    ((map<btRigidBody*,Bt2RaycastVehicle*,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2RaycastVehicle*>>>
                      *)(param_1 + 0x188),(pair *)&local_58);
  uVar5 = (ulong)pVar4;
LAB_009a4d90:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


