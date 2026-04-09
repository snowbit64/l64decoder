// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseColShape
// Entry Point: 0098ddd8
// Size: 364 bytes
// Signature: undefined __thiscall releaseColShape(Bt2PhysicsColShapeCache * this, btCollisionShape * param_1)


/* Bt2PhysicsColShapeCache::releaseColShape(btCollisionShape*) */

void __thiscall
Bt2PhysicsColShapeCache::releaseColShape(Bt2PhysicsColShapeCache *this,btCollisionShape *param_1)

{
  btCollisionShape bVar1;
  int iVar2;
  long **pplVar3;
  long lVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  __tree_node_base *p_Var9;
  
  do {
    plVar7 = *(long **)((long)param_1 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0098df28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 8))(param_1);
      return;
    }
    iVar2 = *(int *)(plVar7 + 1) + -1;
    if (*(int *)(plVar7 + 1) != 0 && iVar2 != 0) {
      *(int *)(plVar7 + 1) = iVar2;
      return;
    }
    p_Var9 = (__tree_node_base *)plVar7[3];
    pplVar5 = *(long ***)(p_Var9 + 8);
    if (*(long ***)(p_Var9 + 8) == (long **)0x0) {
      pplVar5 = (long **)(p_Var9 + 0x10);
      pplVar3 = (long **)*pplVar5;
      if ((__tree_node_base *)*pplVar3 != p_Var9) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar3 = (long **)*pplVar5;
        } while (*pplVar3 != plVar6);
      }
    }
    else {
      do {
        pplVar3 = pplVar5;
        pplVar5 = (long **)*pplVar3;
      } while (*pplVar3 != (long *)0x0);
    }
    plVar6 = (long *)plVar7[2];
    if (*(__tree_node_base **)this == p_Var9) {
      *(long ***)this = pplVar3;
    }
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var9);
    operator_delete(p_Var9);
    (**(code **)(*plVar7 + 8))(plVar7);
    if (*(int *)((long)param_1 + 8) == 0x15) {
      plVar7 = *(long **)((long)param_1 + 0x48);
      bVar1 = *(btCollisionShape *)((long)param_1 + 0x59);
      plVar8 = *(long **)((long)param_1 + 0x40);
      if (*(long **)((long)param_1 + 0x50) != (long *)0x0) {
        (**(code **)(**(long **)((long)param_1 + 0x50) + 8))();
      }
      (**(code **)(*(long *)param_1 + 8))(param_1);
      if ((bVar1 == (btCollisionShape)0x0) && (plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar8;
        param_1 = (btCollisionShape *)plVar8;
        goto LAB_0098de00;
      }
    }
    else {
      lVar4 = *(long *)param_1;
LAB_0098de00:
      (**(code **)(lVar4 + 8))(param_1);
    }
    param_1 = (btCollisionShape *)plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
  } while( true );
}


