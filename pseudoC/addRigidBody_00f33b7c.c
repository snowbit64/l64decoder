// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRigidBody
// Entry Point: 00f33b7c
// Size: 456 bytes
// Signature: undefined __thiscall addRigidBody(btDiscreteDynamicsWorld * this, btRigidBody * param_1)


/* btDiscreteDynamicsWorld::addRigidBody(btRigidBody*) */

void __thiscall
btDiscreteDynamicsWorld::addRigidBody(btDiscreteDynamicsWorld *this,btRigidBody *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  
  uVar3 = *(uint *)(param_1 + 0xe0) & 3;
  if ((uVar3 == 0) && (((byte)param_1[0x250] & 1) == 0)) {
    if (*(float *)(param_1 + 0x19c) != 0.0) {
      fVar10 = *(float *)(this + 0x168);
      fVar8 = 1.0 / *(float *)(param_1 + 0x19c);
      uVar9 = *(undefined8 *)(this + 0x160);
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(ulong *)(param_1 + 0x1b0) =
           CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar8,(float)uVar9 * fVar8);
      *(float *)(param_1 + 0x1b8) = fVar10 * fVar8;
    }
    uVar9 = *(undefined8 *)(this + 0x160);
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(this + 0x168);
    *(undefined8 *)(param_1 + 0x1c0) = uVar9;
  }
  if (*(long *)(param_1 + 200) != 0) {
    if ((*(uint *)(param_1 + 0xe0) & 1) == 0) {
      uVar6 = *(uint *)(this + 0x144);
      if (uVar6 == *(uint *)(this + 0x148)) {
        uVar1 = uVar6 << 1;
        if (uVar6 == 0) {
          uVar1 = 1;
        }
        if ((int)uVar6 < (int)uVar1) {
          if (uVar1 == 0) {
            lVar2 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar2 = (*(code *)PTR_FUN_01048e38)
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10
                              );
            uVar6 = *(uint *)(this + 0x144);
          }
          if (0 < (int)uVar6) {
            lVar5 = 0;
            do {
              *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(*(long *)(this + 0x150) + lVar5);
              lVar5 = lVar5 + 8;
            } while ((ulong)uVar6 * 8 - lVar5 != 0);
          }
          if ((*(long *)(this + 0x150) != 0) && (this[0x158] != (btDiscreteDynamicsWorld)0x0)) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar6 = *(uint *)(this + 0x144);
          }
          uVar3 = *(uint *)(param_1 + 0xe0);
          *(long *)(this + 0x150) = lVar2;
          *(uint *)(this + 0x148) = uVar1;
          this[0x158] = (btDiscreteDynamicsWorld)0x1;
          uVar3 = uVar3 & 3;
        }
      }
      *(btRigidBody **)(*(long *)(this + 0x150) + (long)(int)uVar6 * 8) = param_1;
      *(uint *)(this + 0x144) = uVar6 + 1;
    }
    else if ((*(uint *)(param_1 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(param_1 + 0xec) = 2;
    }
    uVar4 = 1;
    if (uVar3 != 0) {
      uVar4 = 2;
    }
    uVar7 = 0xfffffffd;
    if (uVar3 == 0) {
      uVar7 = 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00f33d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x48))(this,param_1,uVar4,uVar7);
    return;
  }
  return;
}


