// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCollisionObject
// Entry Point: 00f49b9c
// Size: 440 bytes
// Signature: undefined __thiscall addCollisionObject(btCollisionWorld * this, btCollisionObject * param_1, short param_2, short param_3)


/* btCollisionWorld::addCollisionObject(btCollisionObject*, short, short) */

void __thiscall
btCollisionWorld::addCollisionObject
          (btCollisionWorld *this,btCollisionObject *param_1,short param_2,short param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined auStack_c0 [16];
  undefined auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = *(uint *)(this + 0xc);
  if (uVar5 == *(uint *)(this + 0x10)) {
    uVar1 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar5 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar3 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10,
                           param_2,param_3);
        uVar5 = *(uint *)(this + 0xc);
      }
      if (0 < (int)uVar5) {
        lVar6 = 0;
        do {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(*(long *)(this + 0x18) + lVar6);
          lVar6 = lVar6 + 8;
        } while ((ulong)uVar5 * 8 - lVar6 != 0);
      }
      if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btCollisionWorld)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar5 = *(uint *)(this + 0xc);
      }
      *(long *)(this + 0x18) = lVar3;
      *(uint *)(this + 0x10) = uVar1;
      this[0x20] = (btCollisionWorld)0x1;
    }
  }
  *(btCollisionObject **)(*(long *)(this + 0x18) + (long)(int)uVar5 * 8) = param_1;
  *(uint *)(this + 0xc) = uVar5 + 1;
  uStack_98 = *(undefined8 *)(param_1 + 0x10);
  local_a0 = *(undefined8 *)(param_1 + 8);
  uStack_88 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  local_80 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  (**(code **)(**(long **)(param_1 + 200) + 0x10))
            (*(long **)(param_1 + 200),&local_a0,auStack_b0,auStack_c0);
  uVar4 = (**(code **)(**(long **)(this + 0x60) + 0x10))
                    (*(long **)(this + 0x60),auStack_b0,auStack_c0,
                     *(undefined4 *)(*(long *)(param_1 + 200) + 8),param_1,param_2,param_3,
                     *(undefined8 *)(this + 0x28),0);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


