// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionTimeByIndex
// Entry Point: 00bab490
// Size: 124 bytes
// Signature: undefined __thiscall getCollisionTimeByIndex(Bt2PhysicsContextManager * this, uint param_1, btCollisionObject * * param_2, btCollisionObject * * param_3)


/* Bt2PhysicsContextManager::getCollisionTimeByIndex(unsigned int, btCollisionObject const*&,
   btCollisionObject const*&) */

undefined4 __thiscall
Bt2PhysicsContextManager::getCollisionTimeByIndex
          (Bt2PhysicsContextManager *this,uint param_1,btCollisionObject **param_2,
          btCollisionObject **param_3)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long *plVar4;
  undefined4 uVar5;
  
  pplVar1 = s_collisionTimeMap_Readable;
  pplVar3 = s_collisionTimeMap_Readable;
  if (param_1 != 0) {
    do {
      param_1 = param_1 - 1;
      pplVar2 = (long **)pplVar1[1];
      if ((long **)pplVar1[1] == (long **)0x0) {
        pplVar2 = pplVar1 + 2;
        pplVar3 = (long **)*pplVar2;
        if ((long **)*pplVar3 != pplVar1) {
          do {
            plVar4 = *pplVar2;
            pplVar2 = (long **)(plVar4 + 2);
            pplVar3 = (long **)*pplVar2;
          } while (*pplVar3 != plVar4);
        }
      }
      else {
        do {
          pplVar3 = pplVar2;
          pplVar2 = (long **)*pplVar3;
        } while (*pplVar3 != (long *)0x0);
      }
      pplVar1 = pplVar3;
    } while (param_1 != 0);
  }
  uVar5 = *(undefined4 *)(pplVar3 + 6);
  *param_2 = (btCollisionObject *)pplVar3[4];
  *param_3 = (btCollisionObject *)pplVar3[5];
  return uVar5;
}


