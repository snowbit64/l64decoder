// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: performCollisionDetection
// Entry Point: 009b7160
// Size: 380 bytes
// Signature: undefined __thiscall performCollisionDetection(Bt2RaycastVehicle * this, Bt2World * param_1)


/* Bt2RaycastVehicle::performCollisionDetection(Bt2World*) */

void __thiscall
Bt2RaycastVehicle::performCollisionDetection(Bt2RaycastVehicle *this,Bt2World *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  float *pfVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  btCollisionObject **ppbVar9;
  
  uVar1 = *(uint *)(this + 0x3c);
  if (*(long *)(this + 8) == 0) {
    bVar2 = true;
    uVar3 = 0;
  }
  else if (*(long *)(this + 0x10) == 0) {
    bVar2 = false;
    uVar3 = 1;
  }
  else if (*(long *)(this + 0x18) == 0) {
    bVar2 = false;
    uVar3 = 2;
  }
  else if (*(long *)(this + 0x20) == 0) {
    bVar2 = false;
    uVar3 = 3;
  }
  else if (*(long *)(this + 0x28) == 0) {
    bVar2 = false;
    uVar3 = 4;
  }
  else {
    bVar2 = false;
    uVar3 = 5;
    if (*(long *)(this + 0x30) != 0) {
      uVar3 = 6;
    }
  }
  if (*(float *)(this + 0xb4) == 0.0) {
    if (0 < (int)uVar1) {
      pfVar5 = (float *)(*(long *)(this + 0x48) + 0x188);
      uVar7 = (ulong)uVar1;
      do {
        if ((*pfVar5 < 0.0) && (pfVar5[-4] != 0.0)) goto LAB_009b7200;
        uVar7 = uVar7 - 1;
        pfVar5 = pfVar5 + 0x68;
      } while (uVar7 != 0);
    }
    if (!bVar2) {
      plVar4 = (long *)(this + 8);
      do {
        if (*(int *)(*plVar4 + 0xec) != 2) goto LAB_009b7220;
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  else {
LAB_009b7200:
    if (!bVar2) {
      uVar7 = (ulong)uVar3;
      ppbVar9 = (btCollisionObject **)(this + 8);
      do {
        btCollisionObject::activate(*ppbVar9,false);
        uVar7 = uVar7 - 1;
        ppbVar9 = ppbVar9 + 1;
      } while (uVar7 != 0);
    }
LAB_009b7220:
    if (0 < (int)uVar1) {
      lVar8 = 0;
      iVar6 = 0;
      do {
        rayCast(this,(btDynamicsWorld *)param_1,iVar6,
                (Bt2WheelInfo *)(*(long *)(this + 0x48) + lVar8));
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 0x1a0;
      } while ((ulong)uVar1 * 0x1a0 - lVar8 != 0);
    }
  }
  return;
}


