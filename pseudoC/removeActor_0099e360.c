// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeActor
// Entry Point: 0099e360
// Size: 876 bytes
// Signature: undefined __thiscall removeActor(Bt2ScenegraphPhysicsContext * this, btRigidBody * param_1, bool param_2)


/* Bt2ScenegraphPhysicsContext::removeActor(btRigidBody*, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::removeActor
          (Bt2ScenegraphPhysicsContext *this,btRigidBody *param_1,bool param_2)

{
  long **pplVar1;
  long **pplVar2;
  size_t __n;
  __tree_node_base **pp_Var3;
  uint uVar4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  __tree_node_base **pp_Var7;
  __tree_node_base **pp_Var8;
  __tree_node_base **pp_Var9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  __tree_node_base **pp_Var13;
  btCollisionShape *pbVar14;
  long *plVar15;
  uint *puVar16;
  long **__dest;
  ulong uVar17;
  
  pp_Var5 = *(__tree_node_base ***)(this + 400);
  if (pp_Var5 != (__tree_node_base **)0x0) {
    pp_Var8 = (__tree_node_base **)(this + 400);
    pp_Var13 = pp_Var8;
    do {
      if (pp_Var5[4] >= param_1) {
        pp_Var13 = pp_Var5;
      }
      pp_Var5 = (__tree_node_base **)pp_Var5[pp_Var5[4] < param_1];
    } while (pp_Var5 != (__tree_node_base **)0x0);
    if ((pp_Var13 != pp_Var8) && (pp_Var13[4] <= param_1)) {
      plVar15 = (long *)pp_Var13[5];
      if (plVar15[1] != 0) {
        uVar17 = 0;
        do {
          p_Var6 = (__tree_node_base *)plVar15[uVar17 + 1];
          if ((p_Var6 != (__tree_node_base *)param_1) &&
             (pp_Var3 = (__tree_node_base **)*pp_Var8, pp_Var9 = pp_Var3, pp_Var5 = pp_Var8,
             pp_Var3 != (__tree_node_base **)0x0)) {
            do {
              if (pp_Var9[4] >= p_Var6) {
                pp_Var5 = pp_Var9;
              }
              pp_Var7 = pp_Var9 + (pp_Var9[4] < p_Var6);
              pp_Var9 = (__tree_node_base **)*pp_Var7;
            } while ((__tree_node_base **)*pp_Var7 != (__tree_node_base **)0x0);
            if ((pp_Var5 != pp_Var8) && (pp_Var5[4] <= p_Var6)) {
              pp_Var9 = (__tree_node_base **)pp_Var5[1];
              if ((__tree_node_base **)pp_Var5[1] == (__tree_node_base **)0x0) {
                pp_Var9 = pp_Var5 + 2;
                pp_Var7 = (__tree_node_base **)*pp_Var9;
                if ((__tree_node_base **)*pp_Var7 != pp_Var5) {
                  do {
                    p_Var6 = *pp_Var9;
                    pp_Var9 = (__tree_node_base **)(p_Var6 + 0x10);
                    pp_Var7 = (__tree_node_base **)*pp_Var9;
                  } while (*pp_Var7 != p_Var6);
                }
              }
              else {
                do {
                  pp_Var7 = pp_Var9;
                  pp_Var9 = (__tree_node_base **)*pp_Var7;
                } while ((__tree_node_base **)*pp_Var7 != (__tree_node_base **)0x0);
              }
              if (*(__tree_node_base ***)(this + 0x188) == pp_Var5) {
                *(__tree_node_base ***)(this + 0x188) = pp_Var7;
              }
              *(long *)(this + 0x198) = *(long *)(this + 0x198) + -1;
              std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)pp_Var3,(__tree_node_base *)pp_Var5);
              operator_delete(pp_Var5);
            }
          }
          uVar4 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar4;
        } while ((uVar4 != 6) && (*(long *)(pp_Var13[5] + (ulong)uVar4 * 8 + 8) != 0));
      }
      Bt2RaycastVehicle::removeFromWorld((Bt2RaycastVehicle *)plVar15,*(Bt2World **)(this + 0x30));
      pplVar2 = *(long ***)(this + 0x1a8);
      pplVar1 = *(long ***)(this + 0x1a0);
      __dest = pplVar1;
      for (; (pplVar1 != pplVar2 && (__dest = pplVar1, *pplVar1 != plVar15)); pplVar1 = pplVar1 + 1)
      {
        __dest = pplVar2;
      }
      __n = (long)pplVar2 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      lVar10 = *plVar15;
      *(size_t *)(this + 0x1a8) = (long)__dest + __n;
      (**(code **)(lVar10 + 0x48))(plVar15);
      pp_Var5 = (__tree_node_base **)pp_Var13[1];
      if ((__tree_node_base **)pp_Var13[1] == (__tree_node_base **)0x0) {
        pp_Var5 = pp_Var13 + 2;
        pp_Var8 = (__tree_node_base **)*pp_Var5;
        if ((__tree_node_base **)*pp_Var8 != pp_Var13) {
          do {
            p_Var6 = *pp_Var5;
            pp_Var5 = (__tree_node_base **)(p_Var6 + 0x10);
            pp_Var8 = (__tree_node_base **)*pp_Var5;
          } while (*pp_Var8 != p_Var6);
        }
      }
      else {
        do {
          pp_Var8 = pp_Var5;
          pp_Var5 = (__tree_node_base **)*pp_Var8;
        } while ((__tree_node_base **)*pp_Var8 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)(this + 0x188) == pp_Var13) {
        *(__tree_node_base ***)(this + 0x188) = pp_Var8;
      }
      *(long *)(this + 0x198) = *(long *)(this + 0x198) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 400),(__tree_node_base *)pp_Var13);
      operator_delete(pp_Var13);
    }
  }
  pbVar14 = *(btCollisionShape **)(param_1 + 200);
  for (plVar15 = *(long **)(this + 0x2c0); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
    Bt2Rope::notifyRemoveRigidBody((Bt2Rope *)plVar15[3],param_1);
  }
  (**(code **)(**(long **)(this + 0x30) + 0xb8))(*(long **)(this + 0x30),param_1);
  puVar16 = *(uint **)(param_1 + 0x108);
  if (puVar16 == (uint *)0x0) {
LAB_0099e5dc:
    plVar15 = *(long **)(param_1 + 0x228);
  }
  else {
    uVar4 = *puVar16;
    if (((uVar4 >> 1 & 1) != 0) && (*(void **)(puVar16 + 6) != (void *)0x0)) {
      operator_delete__(*(void **)(puVar16 + 6));
      uVar4 = *puVar16;
    }
    if ((uVar4 >> 4 & 1) == 0) {
      operator_delete(puVar16);
      goto LAB_0099e5dc;
    }
    Bt2PhysicsUtil::TerrainUserData::destroy();
    (**(code **)(*(long *)(puVar16 + -2) + 8))(puVar16 + -2);
    plVar15 = *(long **)(param_1 + 0x228);
  }
  if (plVar15 != (long *)0x0) {
    if ((*(byte *)(plVar15 + 0x13) & 1) != 0) {
      uVar4 = *(uint *)(this + 4);
      if (0 < (int)uVar4) {
        uVar17 = 0;
        lVar10 = *(long *)(this + 0x10);
        do {
          if (*(long **)(lVar10 + uVar17 * 8) == plVar15) {
            if ((int)uVar17 < (int)uVar4) {
              uVar4 = uVar4 - 1;
              uVar11 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
              uVar12 = *(undefined8 *)(lVar10 + uVar17 * 8);
              *(uint *)(this + 4) = uVar4;
              *(undefined8 *)(lVar10 + uVar17 * 8) = *(undefined8 *)(lVar10 + uVar11);
              *(undefined8 *)(*(long *)(this + 0x10) + uVar11) = uVar12;
            }
            break;
          }
          uVar17 = uVar17 + 1;
        } while (uVar4 != uVar17);
      }
    }
    (**(code **)(*plVar15 + 8))();
    if (param_1 == (btRigidBody *)0x0) goto LAB_0099e690;
  }
  (**(code **)(*(long *)param_1 + 8))(param_1);
LAB_0099e690:
  if (!param_2) {
    return;
  }
  releaseColShape(this,pbVar14);
  return;
}


