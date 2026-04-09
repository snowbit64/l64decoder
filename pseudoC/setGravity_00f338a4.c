// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGravity
// Entry Point: 00f338a4
// Size: 144 bytes
// Signature: undefined __thiscall setGravity(btDiscreteDynamicsWorld * this, btVector3 * param_1)


/* btDiscreteDynamicsWorld::setGravity(btVector3 const&) */

void __thiscall
btDiscreteDynamicsWorld::setGravity(btDiscreteDynamicsWorld *this,btVector3 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  
  iVar2 = *(int *)(this + 0x144);
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x168) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x160) = uVar5;
  if (0 < iVar2) {
    lVar1 = 0;
    do {
      lVar3 = *(long *)(*(long *)(this + 0x150) + lVar1 * 8);
      if ((*(int *)(lVar3 + 0xec) != 2 && *(int *)(lVar3 + 0xec) != 5) &&
         ((*(byte *)(lVar3 + 0x250) & 1) == 0)) {
        if (*(float *)(lVar3 + 0x19c) != 0.0) {
          fVar4 = 1.0 / *(float *)(lVar3 + 0x19c);
          uVar5 = *(undefined8 *)param_1;
          fVar6 = *(float *)(param_1 + 8);
          *(undefined4 *)(lVar3 + 0x1bc) = 0;
          *(ulong *)(lVar3 + 0x1b0) =
               CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar4,(float)uVar5 * fVar4);
          *(float *)(lVar3 + 0x1b8) = fVar6 * fVar4;
        }
        uVar5 = *(undefined8 *)param_1;
        *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(lVar3 + 0x1c0) = uVar5;
        iVar2 = *(int *)(this + 0x144);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < iVar2);
  }
  return;
}


