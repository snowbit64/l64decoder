// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 0071d8b4
// Size: 344 bytes
// Signature: undefined __thiscall destroy(TrafficVehicle * this, VehicleNavigationMapGenerator * param_1)


/* TrafficVehicle::destroy(VehicleNavigationMapGenerator*) */

void __thiscall TrafficVehicle::destroy(TrafficVehicle *this,VehicleNavigationMapGenerator *param_1)

{
  uint uVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  __tree_node_base **pp_Var3;
  long *plVar4;
  long lVar5;
  __tree_node_base **pp_Var6;
  __tree_node_base *p_Var7;
  __tree_node_base **pp_Var8;
  __tree_node_base **pp_Var9;
  
  if (*(ulonglong *)(this + 0x370) != 0) {
    VehicleNavigationMapGenerator::removeObstacle(param_1,*(ulonglong *)(this + 0x370));
    *(undefined8 *)(this + 0x370) = 0;
  }
  if (*(long *)(this + 0x28) != 0) {
    ScenegraphPhysicsContextManager::getInstance();
    pBVar2 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    VehicleCollisionDistanceUtil::cancelGetCollisionDistance
              (pBVar2,*(PhysicsReport **)(this + 0x28));
  }
  if (*(long *)(this + 0x30) != 0) {
    ScenegraphPhysicsContextManager::getInstance();
    pBVar2 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    VehicleCollisionDistanceUtil::cancelGetCollisionDistance
              (pBVar2,*(PhysicsReport **)(this + 0x30));
  }
  if (*(long *)(this + 0x38) != 0) {
    ScenegraphPhysicsContextManager::getInstance();
    pBVar2 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    VehicleCollisionDistanceUtil::cancelGetCollisionDistance
              (pBVar2,*(PhysicsReport **)(this + 0x38));
  }
  plVar4 = *(long **)(this + 0x50);
  if (plVar4 != (long *)0x0) {
    lVar5 = *(long *)(this + 0x48);
    pp_Var6 = (__tree_node_base **)(lVar5 + 0x70);
    pp_Var3 = (__tree_node_base **)*pp_Var6;
    if (pp_Var3 != (__tree_node_base **)0x0) {
      uVar1 = *(uint *)(plVar4 + 3);
      pp_Var8 = pp_Var3;
      pp_Var9 = pp_Var6;
      do {
        if (*(uint *)(pp_Var8 + 4) >= uVar1) {
          pp_Var9 = pp_Var8;
        }
        pp_Var8 = (__tree_node_base **)pp_Var8[*(uint *)(pp_Var8 + 4) < uVar1];
      } while (pp_Var8 != (__tree_node_base **)0x0);
      if ((pp_Var9 != pp_Var6) && (*(uint *)(pp_Var9 + 4) <= uVar1)) {
        pp_Var6 = (__tree_node_base **)pp_Var9[1];
        if ((__tree_node_base **)pp_Var9[1] == (__tree_node_base **)0x0) {
          pp_Var6 = pp_Var9 + 2;
          pp_Var8 = (__tree_node_base **)*pp_Var6;
          if ((__tree_node_base **)*pp_Var8 != pp_Var9) {
            do {
              p_Var7 = *pp_Var6;
              pp_Var6 = (__tree_node_base **)(p_Var7 + 0x10);
              pp_Var8 = (__tree_node_base **)*pp_Var6;
            } while (*pp_Var8 != p_Var7);
          }
        }
        else {
          do {
            pp_Var8 = pp_Var6;
            pp_Var6 = (__tree_node_base **)*pp_Var8;
          } while ((__tree_node_base **)*pp_Var8 != (__tree_node_base **)0x0);
        }
        if (*(__tree_node_base ***)(lVar5 + 0x68) == pp_Var9) {
          *(__tree_node_base ***)(lVar5 + 0x68) = pp_Var8;
        }
        *(long *)(lVar5 + 0x78) = *(long *)(lVar5 + 0x78) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)pp_Var3,(__tree_node_base *)pp_Var9);
        operator_delete(pp_Var9);
        plVar4 = *(long **)(this + 0x50);
      }
      if (plVar4 == (long *)0x0) goto LAB_0071d9fc;
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
LAB_0071d9fc:
  init();
  return;
}


