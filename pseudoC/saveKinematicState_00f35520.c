// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveKinematicState
// Entry Point: 00f35520
// Size: 392 bytes
// Signature: undefined __thiscall saveKinematicState(btDiscreteDynamicsWorld * this, float param_1)


/* btDiscreteDynamicsWorld::saveKinematicState(float) */

void __thiscall
btDiscreteDynamicsWorld::saveKinematicState(btDiscreteDynamicsWorld *this,float param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float local_5c;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(this + 0xc);
  if (0 < iVar3) {
    lVar5 = 0;
    fVar7 = 1.0 / param_1;
    iVar4 = iVar3;
    do {
      lVar6 = *(long *)(*(long *)(this + 0x18) + lVar5 * 8);
      if ((((*(byte *)(lVar6 + 0x100) >> 1 & 1) != 0) && (lVar6 != 0)) &&
         (*(int *)(lVar6 + 0xec) != 2)) {
        if ((*(uint *)(lVar6 + 0xe0) & 2) != 0) {
          iVar4 = iVar3;
        }
        if (((*(uint *)(lVar6 + 0xe0) >> 1 & 1) != 0) && (param_1 != 0.0)) {
          plVar2 = *(long **)(lVar6 + 0x228);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,lVar6 + 8);
          }
          *(undefined4 *)(lVar6 + 0x188) = 0;
          *(undefined8 *)(lVar6 + 0x17c) =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar6 + 0x78) >> 0x20)) * fVar7,
                        ((float)*(undefined8 *)(lVar6 + 0x38) - (float)*(undefined8 *)(lVar6 + 0x78)
                        ) * fVar7);
          *(float *)(lVar6 + 0x184) = (*(float *)(lVar6 + 0x40) - *(float *)(lVar6 + 0x80)) * fVar7;
          btTransformUtil::calculateDiffAxisAngle
                    ((btTransform *)(lVar6 + 0x48),(btTransform *)(lVar6 + 8),(btVector3 *)&local_58
                     ,&local_5c);
          *(undefined4 *)(lVar6 + 0x198) = 0;
          fVar8 = local_5c * fVar7;
          *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(lVar6 + 0x10);
          *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(lVar6 + 8);
          *(ulong *)(lVar6 + 0x18c) =
               CONCAT44((float)((ulong)local_58 >> 0x20) * fVar8,(float)local_58 * fVar8);
          *(float *)(lVar6 + 0x194) = local_50 * fVar8;
          *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar6 + 0x20);
          *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(lVar6 + 0x18);
          *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar6 + 0x30);
          *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(lVar6 + 0x28);
          *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(lVar6 + 0x184);
          *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(lVar6 + 0x17c);
          *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(lVar6 + 0x194);
          *(undefined8 *)(lVar6 + 0x98) = *(undefined8 *)(lVar6 + 0x18c);
          *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(lVar6 + 0x40);
          *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x38);
          iVar3 = *(int *)(this + 0xc);
          iVar4 = iVar3;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


