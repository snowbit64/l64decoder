// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRigidBody
// Entry Point: 00f33d44
// Size: 456 bytes
// Signature: undefined __thiscall addRigidBody(btDiscreteDynamicsWorld * this, btRigidBody * param_1, short param_2, short param_3)


/* btDiscreteDynamicsWorld::addRigidBody(btRigidBody*, short, short) */

void __thiscall
btDiscreteDynamicsWorld::addRigidBody
          (btDiscreteDynamicsWorld *this,btRigidBody *param_1,short param_2,short param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  
  if (((*(uint *)(param_1 + 0xe0) & 3) == 0) && (((byte)param_1[0x250] & 1) == 0)) {
    if (*(float *)(param_1 + 0x19c) != 0.0) {
      fVar7 = *(float *)(this + 0x168);
      fVar5 = 1.0 / *(float *)(param_1 + 0x19c);
      uVar6 = *(undefined8 *)(this + 0x160);
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(ulong *)(param_1 + 0x1b0) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar5,(float)uVar6 * fVar5);
      *(float *)(param_1 + 0x1b8) = fVar7 * fVar5;
    }
    uVar6 = *(undefined8 *)(this + 0x160);
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(this + 0x168);
    *(undefined8 *)(param_1 + 0x1c0) = uVar6;
  }
  if (*(long *)(param_1 + 200) != 0) {
    if ((*(uint *)(param_1 + 0xe0) & 1) == 0) {
      uVar3 = *(uint *)(this + 0x144);
      if (uVar3 == *(uint *)(this + 0x148)) {
        uVar1 = uVar3 << 1;
        if (uVar3 == 0) {
          uVar1 = 1;
        }
        if ((int)uVar3 < (int)uVar1) {
          if (uVar1 == 0) {
            lVar2 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar2 = (*(code *)PTR_FUN_01048e38)
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10
                               ,param_2,param_3);
            uVar3 = *(uint *)(this + 0x144);
          }
          if (0 < (int)uVar3) {
            lVar4 = 0;
            do {
              *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(this + 0x150) + lVar4);
              lVar4 = lVar4 + 8;
            } while ((ulong)uVar3 * 8 - lVar4 != 0);
          }
          if ((*(long *)(this + 0x150) != 0) && (this[0x158] != (btDiscreteDynamicsWorld)0x0)) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar3 = *(uint *)(this + 0x144);
          }
          *(long *)(this + 0x150) = lVar2;
          *(uint *)(this + 0x148) = uVar1;
          this[0x158] = (btDiscreteDynamicsWorld)0x1;
        }
      }
      *(btRigidBody **)(*(long *)(this + 0x150) + (long)(int)uVar3 * 8) = param_1;
      *(uint *)(this + 0x144) = uVar3 + 1;
    }
    else if ((*(uint *)(param_1 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(param_1 + 0xec) = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00f33f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x48))(this,param_1,param_2,param_3);
    return;
  }
  return;
}


