// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendAnchor
// Entry Point: 00f7a954
// Size: 456 bytes
// Signature: undefined __thiscall appendAnchor(btSoftBody * this, int param_1, btRigidBody * param_2, btVector3 * param_3, bool param_4, float param_5)


/* btSoftBody::appendAnchor(int, btRigidBody*, btVector3 const&, bool, float) */

void __thiscall
btSoftBody::appendAnchor
          (btSoftBody *this,int param_1,btRigidBody *param_2,btVector3 *param_3,bool param_4,
          float param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  btRigidBody **ppbVar7;
  btRigidBody **ppbVar8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  btRigidBody *local_a8;
  float local_a0;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_4) {
    uVar3 = *(uint *)(this + 0x154);
    uVar4 = (ulong)uVar3;
    ppbVar8 = *(btRigidBody ***)(this + 0x160);
    uVar5 = uVar4;
    ppbVar7 = ppbVar8;
    if (0 < (int)uVar3) {
      do {
        if (*ppbVar7 == param_2) {
          if ((int)uVar5 != 0) goto LAB_00f7aab0;
          break;
        }
        uVar5 = uVar5 - 1;
        ppbVar7 = ppbVar7 + 1;
      } while (uVar5 != 0);
    }
    if (uVar3 == *(uint *)(this + 0x158)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          ppbVar8 = (btRigidBody **)0x0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          ppbVar8 = (btRigidBody **)
                    (*(code *)PTR_FUN_01048e38)
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10
                              );
          uVar3 = *(uint *)(this + 0x154);
          uVar4 = (ulong)uVar3;
        }
        if (0 < (int)uVar3) {
          uVar3 = (uint)uVar4;
          lVar6 = 0;
          do {
            *(undefined8 *)((long)ppbVar8 + lVar6) =
                 *(undefined8 *)(*(long *)(this + 0x160) + lVar6);
            lVar6 = lVar6 + 8;
          } while (uVar4 * 8 - lVar6 != 0);
        }
        if ((*(long *)(this + 0x160) != 0) && (this[0x168] != (btSoftBody)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar3 = *(uint *)(this + 0x154);
        }
        *(btRigidBody ***)(this + 0x160) = ppbVar8;
        *(uint *)(this + 0x158) = uVar1;
        this[0x168] = (btSoftBody)0x1;
      }
    }
    ppbVar8[(int)uVar3] = param_2;
    *(uint *)(this + 0x154) = uVar3 + 1;
  }
LAB_00f7aab0:
  uStack_b0 = *(undefined8 *)(param_3 + 8);
  local_b8 = *(undefined8 *)param_3;
  local_c0 = *(long *)(this + 0x380) + (long)param_1 * 0x78;
  *(byte *)(local_c0 + 0x70) = *(byte *)(local_c0 + 0x70) | 1;
  local_a8 = param_2;
  local_a0 = param_5;
  btAlignedObjectArray<btSoftBody::Anchor>::push_back
            ((btAlignedObjectArray<btSoftBody::Anchor> *)(this + 0x3f0),(Anchor *)&local_c0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


