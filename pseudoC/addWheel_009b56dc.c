// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addWheel
// Entry Point: 009b56dc
// Size: 1508 bytes
// Signature: undefined __thiscall addWheel(Bt2RaycastVehicle * this, btRigidBody * param_1)


/* Bt2RaycastVehicle::addWheel(btRigidBody*) */

void __thiscall Bt2RaycastVehicle::addWheel(Bt2RaycastVehicle *this,btRigidBody *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  void *__dest;
  Bt2WheelShape *this_00;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  btCompoundShape *this_01;
  uint *puVar11;
  void *__src;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = *(uint *)(this + 0x3c);
  if (0x13 < uVar8) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 009b5c3c to 009b5c47 has its CatchHandler @ 009b5cc4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): Adding too many wheels. Maximum is %u.\n",0x14);
    iVar4 = -1;
    goto LAB_009b5bfc;
  }
  if (*(btRigidBody **)(this + 8) == (btRigidBody *)0x0) {
LAB_009b57b4:
    uVar10 = 0xffffffff;
  }
  else if (*(btRigidBody **)(this + 8) == param_1) {
    uVar10 = 0;
  }
  else {
    if (*(btRigidBody **)(this + 0x10) == (btRigidBody *)0x0) goto LAB_009b57b4;
    if (*(btRigidBody **)(this + 0x10) == param_1) {
      uVar10 = 1;
    }
    else {
      if (*(btRigidBody **)(this + 0x18) == (btRigidBody *)0x0) goto LAB_009b57b4;
      if (*(btRigidBody **)(this + 0x18) == param_1) {
        uVar10 = 2;
      }
      else {
        if (*(btRigidBody **)(this + 0x20) == (btRigidBody *)0x0) goto LAB_009b57b4;
        if (*(btRigidBody **)(this + 0x20) == param_1) {
          uVar10 = 3;
        }
        else {
          if (*(btRigidBody **)(this + 0x28) == (btRigidBody *)0x0) goto LAB_009b57b4;
          if (*(btRigidBody **)(this + 0x28) == param_1) {
            uVar10 = 4;
          }
          else {
            if (*(btRigidBody **)(this + 0x30) == (btRigidBody *)0x0) goto LAB_009b57b4;
            uVar10 = 5;
            if (*(btRigidBody **)(this + 0x30) != param_1) {
              uVar10 = 0xffffffff;
            }
          }
        }
      }
    }
  }
  uStack_88 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_74 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (uVar8 == *(uint *)(this + 0x40)) {
    uVar9 = uVar8 << 1;
    if (uVar8 == 0) {
      uVar9 = 1;
    }
    if (uVar8 < uVar9) {
      lVar5 = btAlignedAllocInternal((ulong)uVar9 * 0x1a0,0x10);
      uVar8 = *(uint *)(this + 0x3c);
      if (0 < (int)uVar8) {
        lVar13 = 0;
        do {
          memcpy((void *)(lVar5 + lVar13),(void *)(*(long *)(this + 0x48) + lVar13),0x1a0);
          lVar13 = lVar13 + 0x1a0;
        } while ((ulong)uVar8 * 0x1a0 - lVar13 != 0);
      }
      if ((*(void **)(this + 0x48) != (void *)0x0) && (this[0x50] != (Bt2RaycastVehicle)0x0)) {
        btAlignedFreeInternal(*(void **)(this + 0x48));
      }
      uVar8 = *(uint *)(this + 0x3c);
      *(long *)(this + 0x48) = lVar5;
      *(uint *)(this + 0x40) = uVar9;
      this[0x50] = (Bt2RaycastVehicle)0x1;
    }
  }
  lVar5 = *(long *)(this + 0x48) + (long)(int)uVar8 * 0x1a0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(ulong *)(lVar5 + 0x30) = CONCAT44(uStack_9c,uStack_a0);
  *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_a4,local_a8);
  *(undefined8 *)(lVar5 + 0x40) = uStack_90;
  *(ulong *)(lVar5 + 0x38) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)(lVar5 + 0x50) = CONCAT44(uStack_7c,local_80);
  *(undefined8 *)(lVar5 + 0x48) = uStack_88;
  *(undefined4 *)(lVar5 + 0xe0) = 0x3c23d70a;
  *(undefined8 *)(lVar5 + 0x13c) = 0;
  *(undefined4 *)(lVar5 + 0x108) = 0x40c00000;
  *(undefined *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x154) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x6c) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined4 *)(lVar5 + 0x168) = 0xffffffff;
  *(undefined4 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x100) = 0x3dcccccd;
  *(undefined4 *)(lVar5 + 0x144) = 0;
  *(undefined8 *)(lVar5 + 0x160) = 0;
  *(undefined8 *)(lVar5 + 0x178) = 0;
  *(undefined4 *)(lVar5 + 0x188) = 0xbf800000;
  *(undefined8 *)(lVar5 + 400) = 0;
  *(undefined4 *)(lVar5 + 0x198) = 0;
  *(ulong *)(lVar5 + 0x58) = CONCAT44(uStack_74,local_78);
  *(undefined8 *)(lVar5 + 0x60) = 0;
  iVar4 = *(int *)(this + 0x3c);
  lVar5 = *(long *)(this + 0x48);
  *(int *)(this + 0x3c) = iVar4 + 1;
  *(undefined4 *)(lVar5 + (long)iVar4 * 0x1a0 + 0x180) = uVar10;
  puVar11 = *(uint **)(param_1 + 0x108);
  if (((puVar11 != (uint *)0x0) &&
      (this_01 = *(btCompoundShape **)(param_1 + 200), *(int *)(this_01 + 8) == 0x1f)) &&
     ((*puVar11 & 1) != 0)) {
    uVar8 = *(uint *)(this_01 + 0x24);
    uVar12 = (ulong)uVar8;
    if ((*puVar11 >> 1 & 1) == 0) {
      lVar14 = *(long *)(puVar11 + 2);
      lVar13 = RawTransformGroup::getPhysicsObject();
      puVar6 = (uint *)operator_new(0x20);
      *(long *)(puVar6 + 2) = lVar14;
      *puVar6 = 0x83;
      puVar6[4] = *(uint *)(lVar14 + 0x18);
                    /* try { // try from 009b599c to 009b599f has its CatchHandler @ 009b5cf0 */
      plVar7 = (long *)operator_new__(uVar12 << 4);
      *(long **)(puVar6 + 6) = plVar7;
      *plVar7 = lVar14;
      *(undefined4 *)((long)plVar7 + 0xc) = *(undefined4 *)(lVar13 + 0x88);
      if ((*(byte *)(lVar13 + 9) >> 3 & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(lVar13 + 0x58);
      }
      *(undefined4 *)(plVar7 + 1) = uVar10;
      *(uint **)(param_1 + 0x108) = puVar6;
      uVar9 = *puVar11;
      if (((uVar9 >> 1 & 1) != 0) && (*(void **)(puVar11 + 6) != (void *)0x0)) {
        operator_delete__(*(void **)(puVar11 + 6));
        uVar9 = *puVar11;
      }
      if ((uVar9 >> 4 & 1) == 0) {
        operator_delete(puVar11);
        puVar11 = puVar6;
      }
      else {
        Bt2PhysicsUtil::TerrainUserData::destroy();
        (**(code **)(*(long *)(puVar11 + -2) + 8))(puVar11 + -2);
        puVar11 = puVar6;
      }
    }
    if (uVar8 == 0x28) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 009b5c84 to 009b5c8f has its CatchHandler @ 009b5cc0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Warning: Failed to add wheel collision shape - would create compound with %u children. Maximum is %u.\n"
                         ,0x29,0x28);
    }
    else {
      *puVar11 = *puVar11 | 0x80;
      __dest = operator_new__((ulong)(uVar8 + 1) << 4);
      __src = *(void **)(puVar11 + 6);
      memcpy(__dest,__src,uVar12 << 4);
      if (__src != (void *)0x0) {
        operator_delete__(__src);
      }
      puVar1 = (undefined8 *)((long)__dest + uVar12 * 0x10);
      *(void **)(puVar11 + 6) = __dest;
      *puVar1 = 0;
      puVar1[1] = 0;
      this_00 = (Bt2WheelShape *)btAlignedAllocInternal(0x60,0x10);
                    /* try { // try from 009b5ab8 to 009b5acb has its CatchHandler @ 009b5cdc */
      Bt2WheelShape::Bt2WheelShape(this_00,0.1,0.1);
      lVar5 = lVar5 + (long)iVar4 * 0x1a0;
      *(Bt2WheelShape **)(lVar5 + 0x160) = this_00;
      *(uint *)(lVar5 + 0x168) = uVar8;
      local_a8 = 0x3f800000;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_94 = 0x3f800000;
      uStack_90 = 0;
      uStack_88 = 0;
      local_80 = 0x3f800000;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_7c = 0;
      local_78 = 0;
      local_6c = 0;
      btCompoundShape::addChildShape
                (this_01,(btTransform *)&local_a8,*(btCollisionShape **)(lVar5 + 0x160));
      btCompoundShape::deleteAabbTree();
    }
  }
  iVar2 = *(int *)(this + 0x3c);
  uVar8 = *(uint *)(this + 0x7c);
  iVar4 = iVar2;
  if ((int)uVar8 < iVar2) {
    lVar5 = (long)(int)uVar8;
    if (*(int *)(this + 0x80) < iVar2) {
      if (iVar2 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = btAlignedAllocInternal((long)iVar2 * 0x168,0x10);
        uVar8 = *(uint *)(this + 0x7c);
      }
      if (0 < (int)uVar8) {
        lVar14 = 0;
        do {
          memcpy((void *)(lVar13 + lVar14),(void *)(*(long *)(this + 0x88) + lVar14),0x168);
          lVar14 = lVar14 + 0x168;
        } while ((ulong)uVar8 * 0x168 - lVar14 != 0);
      }
      if ((*(void **)(this + 0x88) != (void *)0x0) && (this[0x90] != (Bt2RaycastVehicle)0x0)) {
        btAlignedFreeInternal(*(void **)(this + 0x88));
      }
      *(long *)(this + 0x88) = lVar13;
      *(int *)(this + 0x80) = iVar2;
      this[0x90] = (Bt2RaycastVehicle)0x1;
    }
    lVar13 = lVar5 * 0x168 + 0x10;
    lVar5 = iVar2 - lVar5;
    do {
      lVar5 = lVar5 + -1;
      puVar1 = (undefined8 *)(*(long *)(this + 0x88) + lVar13);
      lVar13 = lVar13 + 0x168;
      *puVar1 = 0;
    } while (lVar5 != 0);
    iVar4 = *(int *)(this + 0x3c);
  }
  iVar4 = iVar4 + -1;
  *(int *)(this + 0x7c) = iVar2;
LAB_009b5bfc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


