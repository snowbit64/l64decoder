// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstraintRef
// Entry Point: 00f40d04
// Size: 824 bytes
// Signature: undefined __thiscall addConstraintRef(btRigidBody * this, btTypedConstraint * param_1)


/* btRigidBody::addConstraintRef(btTypedConstraint*) */

void __thiscall btRigidBody::addConstraintRef(btRigidBody *this,btTypedConstraint *param_1)

{
  btRigidBody *pbVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  btTypedConstraint **ppbVar9;
  btTypedConstraint **ppbVar10;
  
  uVar4 = *(uint *)(this + 0x234);
  uVar5 = (ulong)uVar4;
  ppbVar10 = *(btTypedConstraint ***)(this + 0x240);
  uVar6 = uVar5;
  ppbVar9 = ppbVar10;
  if (0 < (int)uVar4) {
    do {
      if (*ppbVar9 == param_1) {
        if ((int)uVar6 != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 - 1;
      ppbVar9 = ppbVar9 + 1;
    } while (uVar6 != 0);
  }
  if (uVar4 == *(uint *)(this + 0x238)) {
    uVar2 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar2 = 1;
    }
    if ((int)uVar4 < (int)uVar2) {
      if (uVar2 == 0) {
        ppbVar10 = (btTypedConstraint **)0x0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        ppbVar10 = (btTypedConstraint **)
                   (*(code *)PTR_FUN_01048e38)
                             (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,0x10)
        ;
        uVar4 = *(uint *)(this + 0x234);
        uVar5 = (ulong)uVar4;
      }
      if (0 < (int)uVar4) {
        uVar4 = (uint)uVar5;
        lVar7 = 0;
        do {
          *(undefined8 *)((long)ppbVar10 + lVar7) = *(undefined8 *)(*(long *)(this + 0x240) + lVar7)
          ;
          lVar7 = lVar7 + 8;
        } while (uVar5 * 8 - lVar7 != 0);
      }
      if ((*(long *)(this + 0x240) != 0) && (this[0x248] != (btRigidBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar4 = *(uint *)(this + 0x234);
      }
      *(btTypedConstraint ***)(this + 0x240) = ppbVar10;
      *(uint *)(this + 0x238) = uVar2;
      this[0x248] = (btRigidBody)0x1;
    }
  }
  ppbVar10[(int)uVar4] = param_1;
  pbVar1 = *(btRigidBody **)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x30);
  *(uint *)(this + 0x234) = uVar4 + 1;
  if (pbVar1 == this) {
    uVar4 = *(uint *)(this + 300);
    if (uVar4 == *(uint *)(this + 0x130)) {
      uVar2 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar2 = 1;
      }
      if ((int)uVar4 < (int)uVar2) {
        if (uVar2 == 0) {
          lVar3 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar3 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,0x10);
          uVar4 = *(uint *)(this + 300);
        }
        if (0 < (int)uVar4) {
          lVar8 = 0;
          do {
            *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)(*(long *)(this + 0x138) + lVar8);
            lVar8 = lVar8 + 8;
          } while ((ulong)uVar4 * 8 - lVar8 != 0);
        }
        if ((*(long *)(this + 0x138) != 0) && (this[0x140] != (btRigidBody)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar4 = *(uint *)(this + 300);
        }
        *(long *)(this + 0x138) = lVar3;
        *(uint *)(this + 0x130) = uVar2;
        this[0x140] = (btRigidBody)0x1;
      }
    }
    *(long *)(*(long *)(this + 0x138) + (long)(int)uVar4 * 8) = lVar7;
    *(uint *)(this + 300) = uVar4 + 1;
    *(uint *)(this + 0x120) = ~uVar4 >> 0x1f;
  }
  else {
    uVar4 = *(uint *)(lVar7 + 300);
    if (uVar4 == *(uint *)(lVar7 + 0x130)) {
      uVar2 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar2 = 1;
      }
      if ((int)uVar4 < (int)uVar2) {
        if (uVar2 == 0) {
          lVar3 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar3 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,0x10);
          uVar4 = *(uint *)(lVar7 + 300);
        }
        if (0 < (int)uVar4) {
          lVar8 = 0;
          do {
            *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)(*(long *)(lVar7 + 0x138) + lVar8);
            lVar8 = lVar8 + 8;
          } while ((ulong)uVar4 * 8 - lVar8 != 0);
        }
        if ((*(long *)(lVar7 + 0x138) != 0) && (*(char *)(lVar7 + 0x140) != '\0')) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar4 = *(uint *)(lVar7 + 300);
        }
        *(long *)(lVar7 + 0x138) = lVar3;
        *(uint *)(lVar7 + 0x130) = uVar2;
        *(undefined *)(lVar7 + 0x140) = 1;
      }
    }
    *(btRigidBody **)(*(long *)(lVar7 + 0x138) + (long)(int)uVar4 * 8) = pbVar1;
    *(uint *)(lVar7 + 300) = uVar4 + 1;
    *(uint *)(lVar7 + 0x120) = ~uVar4 >> 0x1f;
  }
  return;
}


