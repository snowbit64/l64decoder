// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeCollisionObjects
// Entry Point: 00f4a030
// Size: 688 bytes
// Signature: undefined __thiscall serializeCollisionObjects(btCollisionWorld * this, btSerializer * param_1)


/* btCollisionWorld::serializeCollisionObjects(btSerializer*) */

void __thiscall
btCollisionWorld::serializeCollisionObjects(btCollisionWorld *this,btSerializer *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *local_d8;
  long *local_d0;
  btHashMap<btHashPtr,btCollisionShape*> abStack_c8 [4];
  undefined8 local_c4;
  long local_b8;
  char local_b0;
  undefined8 local_a4;
  long local_98;
  char local_90;
  undefined8 local_84;
  long local_78;
  char local_70;
  undefined8 local_64;
  long local_58;
  char local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar5 = *(int *)(this + 0xc);
  local_b0 = '\x01';
  local_b8 = 0;
  local_c4 = 0;
  local_90 = '\x01';
  local_98 = 0;
  local_a4 = 0;
  local_70 = '\x01';
  local_50 = '\x01';
  local_78 = 0;
  local_84 = 0;
  local_58 = 0;
  local_64 = 0;
  if (0 < iVar5) {
    local_c4._0_4_ = 0;
    local_84._4_4_ = 0;
    lVar6 = 0;
    do {
      local_d0 = *(long **)(*(long *)(*(long *)(this + 0x18) + lVar6 * 8) + 200);
      iVar1 = (int)((ulong)local_d0 >> 0x20) + (int)local_d0;
      uVar2 = iVar1 + (iVar1 * 0x8000 ^ 0xffffffffU);
      uVar2 = (uVar2 ^ (int)uVar2 >> 10) * 9;
      uVar2 = uVar2 ^ (int)uVar2 >> 6;
      uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
      uVar2 = (uVar2 ^ (int)uVar2 >> 0x10) & local_84._4_4_ - 1U;
      if (uVar2 < (uint)local_c4) {
        for (iVar1 = *(int *)(local_b8 + (long)(int)uVar2 * 4); iVar1 != -1;
            iVar1 = *(int *)(local_98 + (long)iVar1 * 4)) {
          if (*(long **)(local_58 + (long)iVar1 * 8) == local_d0) {
            if (local_78 != 0) goto LAB_00f4a164;
            break;
          }
        }
      }
      local_d8 = local_d0;
      btHashMap<btHashPtr,btCollisionShape*>::insert
                (abStack_c8,(btHashPtr *)&local_d8,(btCollisionShape **)&local_d0);
      (**(code **)(*local_d0 + 0x78))(local_d0,param_1);
      iVar5 = *(int *)(this + 0xc);
LAB_00f4a164:
      lVar6 = lVar6 + 1;
      if (iVar5 <= lVar6) goto LAB_00f4a17c;
    } while( true );
  }
LAB_00f4a1c8:
  if ((local_58 != 0) && (local_50 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_58 = 0;
  local_64 = 0;
  local_50 = 1;
  if ((local_78 != 0) && (local_70 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_70 = 1;
  local_78 = 0;
  local_84 = 0;
  if ((local_98 != 0) && (local_90 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_98 = 0;
  local_a4 = 0;
  local_90 = 1;
  if ((local_b8 != 0) && (local_b0 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00f4a17c:
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      plVar4 = *(long **)(*(long *)(this + 0x18) + lVar6 * 8);
      if (*(int *)(plVar4 + 0x20) == 0x40 || *(int *)(plVar4 + 0x20) == 1) {
        (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
        iVar5 = *(int *)(this + 0xc);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  goto LAB_00f4a1c8;
}


