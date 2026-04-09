// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyRemoveCollisionObject
// Entry Point: 009b6efc
// Size: 160 bytes
// Signature: undefined __cdecl notifyRemoveCollisionObject(btCollisionObject * param_1, Bt2World * param_2)


/* Bt2RaycastVehicle::notifyRemoveCollisionObject(btCollisionObject*, Bt2World*) */

void Bt2RaycastVehicle::notifyRemoveCollisionObject(btCollisionObject *param_1,Bt2World *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  Bt2World **ppBVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(param_1 + 0x48);
    if (uVar1 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar2 & 0xfffffffe;
      uVar7 = uVar6;
      lVar3 = lVar4;
      do {
        if (*(Bt2World **)(lVar3 + 0x20) == param_2) {
          *(undefined8 *)(lVar3 + 0x20) = 0;
        }
        if (*(Bt2World **)(lVar3 + 0x1c0) == param_2) {
          *(undefined8 *)(lVar3 + 0x1c0) = 0;
        }
        lVar3 = lVar3 + 0x340;
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
      if (uVar6 == uVar2) {
        return;
      }
    }
    lVar3 = uVar2 - uVar6;
    ppBVar5 = (Bt2World **)(lVar4 + uVar6 * 0x1a0 + 0x20);
    do {
      if (*ppBVar5 == param_2) {
        *ppBVar5 = (Bt2World *)0x0;
      }
      ppBVar5 = ppBVar5 + 0x34;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}


