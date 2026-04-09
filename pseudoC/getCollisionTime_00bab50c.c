// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionTime
// Entry Point: 00bab50c
// Size: 236 bytes
// Signature: undefined __thiscall getCollisionTime(Bt2PhysicsContextManager * this, btCollisionObject * param_1, btCollisionObject * param_2)


/* Bt2PhysicsContextManager::getCollisionTime(btCollisionObject const*, btCollisionObject const*) */

undefined4 __thiscall
Bt2PhysicsContextManager::getCollisionTime
          (Bt2PhysicsContextManager *this,btCollisionObject *param_1,btCollisionObject *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (DAT_0211dd48 == (undefined8 *)0x0) {
    return 0xbf800000;
  }
  puVar1 = &DAT_0211dd48;
  puVar2 = DAT_0211dd48;
  do {
    while ((param_1 <= (btCollisionObject *)puVar2[4] &&
           ((param_1 < (btCollisionObject *)puVar2[4] || (param_2 <= (btCollisionObject *)puVar2[5])
            )))) {
      puVar3 = (undefined8 *)*puVar2;
      puVar1 = puVar2;
      puVar2 = puVar3;
      if (puVar3 == (undefined8 *)0x0) goto LAB_00bab560;
    }
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != (undefined8 *)0x0);
LAB_00bab560:
  puVar2 = &DAT_0211dd48;
  puVar3 = DAT_0211dd48;
  if ((((undefined8 **)puVar1 == &DAT_0211dd48) || (param_1 < (btCollisionObject *)puVar1[4])) ||
     ((param_1 <= (btCollisionObject *)puVar1[4] && (param_2 < (btCollisionObject *)puVar1[5])))) {
    do {
      while ((param_2 <= (btCollisionObject *)puVar3[4] &&
             ((param_2 < (btCollisionObject *)puVar3[4] ||
              (param_1 <= (btCollisionObject *)puVar3[5]))))) {
        puVar1 = (undefined8 *)*puVar3;
        puVar2 = puVar3;
        puVar3 = puVar1;
        if (puVar1 == (undefined8 *)0x0) goto LAB_00bab5b4;
      }
      puVar1 = puVar3 + 1;
      puVar3 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_00bab5b4:
    if ((undefined8 **)puVar2 == &DAT_0211dd48) {
      return 0xbf800000;
    }
    if (param_2 < (btCollisionObject *)puVar2[4]) {
      return 0xbf800000;
    }
    puVar1 = puVar2;
    if ((param_2 <= (btCollisionObject *)puVar2[4]) && (param_1 < (btCollisionObject *)puVar2[5])) {
      return 0xbf800000;
    }
  }
  return *(undefined4 *)(puVar1 + 6);
}


