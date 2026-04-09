// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderDebugData
// Entry Point: 009a27d8
// Size: 1584 bytes
// Signature: undefined renderDebugData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2ScenegraphPhysicsContext::renderDebugData() */

void Bt2ScenegraphPhysicsContext::renderDebugData(void)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  Bt2ScenegraphPhysicsContext *in_x0;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  Bt2ScenegraphPhysicsContext **ppBVar9;
  btRigidBody *pbVar10;
  undefined8 uVar11;
  Bt2ScenegraphPhysicsContext **ppBVar12;
  uint *puVar13;
  code *pcVar14;
  Bt2ScenegraphPhysicsContext *pBVar15;
  long lVar16;
  Bt2RaycastVehicle *this;
  int iVar17;
  Bt2RaycastVehicle **ppBVar18;
  long lVar19;
  Bt2ScenegraphPhysicsContext **ppBVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)(in_x0 + 0x28) + 0x68))(*(long **)(in_x0 + 0x28),0x1808);
  (**(code **)(**(long **)(in_x0 + 0x30) + 0x20))
            (*(long **)(in_x0 + 0x30),*(undefined8 *)(in_x0 + 0x28));
  (**(code **)(**(long **)(in_x0 + 0x30) + 0x30))();
  (**(code **)(**(long **)(in_x0 + 0x30) + 0x20))(*(long **)(in_x0 + 0x30),0);
  plVar5 = (long *)DeferredDebugRenderer::getPhysicsCullingFrustum();
  lVar16 = *(long *)(in_x0 + 0x30);
  uVar1 = *(uint *)(lVar16 + 0xc);
  if (*(Bt2ScenegraphPhysicsContext ***)(in_x0 + 0x390) !=
      (Bt2ScenegraphPhysicsContext **)(in_x0 + 0x398)) {
    ppBVar9 = *(Bt2ScenegraphPhysicsContext ***)(in_x0 + 0x390);
    do {
      iVar4 = *(int *)(ppBVar9 + 5);
      ppBVar12 = (Bt2ScenegraphPhysicsContext **)ppBVar9[1];
      *(uint *)(ppBVar9 + 5) = iVar4 + 1U;
      if (iVar4 + 1U < 0xb) {
        if (ppBVar12 == (Bt2ScenegraphPhysicsContext **)0x0) {
          ppBVar12 = ppBVar9 + 2;
          ppBVar20 = (Bt2ScenegraphPhysicsContext **)*ppBVar12;
          if ((Bt2ScenegraphPhysicsContext **)*ppBVar20 != ppBVar9) {
            do {
              pBVar15 = *ppBVar12;
              ppBVar12 = (Bt2ScenegraphPhysicsContext **)(pBVar15 + 0x10);
              ppBVar20 = (Bt2ScenegraphPhysicsContext **)*ppBVar12;
            } while (*ppBVar20 != pBVar15);
          }
        }
        else {
          do {
            ppBVar20 = ppBVar12;
            ppBVar12 = (Bt2ScenegraphPhysicsContext **)*ppBVar20;
          } while ((Bt2ScenegraphPhysicsContext **)*ppBVar20 != (Bt2ScenegraphPhysicsContext **)0x0)
          ;
        }
      }
      else {
        if (ppBVar12 == (Bt2ScenegraphPhysicsContext **)0x0) {
          ppBVar12 = ppBVar9 + 2;
          ppBVar20 = (Bt2ScenegraphPhysicsContext **)*ppBVar12;
          if ((Bt2ScenegraphPhysicsContext **)*ppBVar20 != ppBVar9) {
            do {
              pBVar15 = *ppBVar12;
              ppBVar12 = (Bt2ScenegraphPhysicsContext **)(pBVar15 + 0x10);
              ppBVar20 = (Bt2ScenegraphPhysicsContext **)*ppBVar12;
            } while (*ppBVar20 != pBVar15);
          }
        }
        else {
          do {
            ppBVar20 = ppBVar12;
            ppBVar12 = (Bt2ScenegraphPhysicsContext **)*ppBVar20;
          } while ((Bt2ScenegraphPhysicsContext **)*ppBVar20 != (Bt2ScenegraphPhysicsContext **)0x0)
          ;
        }
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
        ::erase((__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
                 *)(in_x0 + 0x390),(__tree_const_iterator)ppBVar9);
      }
      ppBVar9 = ppBVar20;
    } while (ppBVar20 != (Bt2ScenegraphPhysicsContext **)(in_x0 + 0x398));
    lVar16 = *(long *)(in_x0 + 0x30);
  }
  if (0 < (int)uVar1) {
    lVar19 = 0;
    do {
      pbVar10 = *(btRigidBody **)(*(long *)(lVar16 + 0x18) + lVar19);
      if ((((((byte)pbVar10[0x100] >> 1 & 1) != 0) && (pbVar10 != (btRigidBody *)0x0)) &&
          (puVar13 = *(uint **)(pbVar10 + 0x108), puVar13 != (uint *)0x0)) &&
         ((*puVar13 & 0x101) == 1)) {
        renderShapeDebugData(in_x0,*(TransformGroup **)(puVar13 + 2),pbVar10);
      }
      lVar19 = lVar19 + 8;
    } while ((ulong)uVar1 * 8 - lVar19 != 0);
  }
  ppBVar18 = *(Bt2RaycastVehicle ***)(in_x0 + 0x1a0);
  if (ppBVar18 != *(Bt2RaycastVehicle ***)(in_x0 + 0x1a8)) {
    do {
      this = *ppBVar18;
      if (plVar5 == (long *)0x0) {
LAB_009a29c4:
        Bt2RaycastVehicle::debugDraw(this,*(DeferredDebugRenderer **)(in_x0 + 0x388));
      }
      else {
        bVar3 = true;
        uVar7 = 0;
        do {
          pbVar10 = *(btRigidBody **)(this + uVar7 * 8 + 8);
          if (pbVar10 != (btRigidBody *)0x0) {
            btRigidBody::getAabb(pbVar10,(btVector3 *)&local_c0,(btVector3 *)&local_d0);
            local_f0 = CONCAT44((fStack_cc - fStack_bc) * 0.5,(local_d0 - local_c0) * 0.5);
            local_e0 = CONCAT44((fStack_bc + fStack_cc) * 0.5,(local_c0 + local_d0) * 0.5);
            local_d8 = CONCAT44(local_d8._4_4_,(local_b8 + local_c8) * 0.5);
            uStack_e8 = CONCAT44(uStack_e8._4_4_,(local_c8 - local_b8) * 0.5);
            uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_e0,&local_f0);
            if ((uVar6 & 1) != 0) {
              if (bVar3) goto LAB_009a29c4;
              break;
            }
          }
          uVar6 = uVar7 + 1;
          bVar3 = uVar7 < 5;
          uVar7 = uVar6;
        } while (uVar6 != 6);
      }
      ppBVar18 = ppBVar18 + 1;
    } while (ppBVar18 != *(Bt2RaycastVehicle ***)(in_x0 + 0x1a8));
  }
  iVar4 = (**(code **)(**(long **)(in_x0 + 0x30) + 0xd0))();
  if (0 < iVar4) {
    iVar17 = 0;
    do {
      lVar16 = (**(code **)(**(long **)(in_x0 + 0x30) + 0xd8))(*(long **)(in_x0 + 0x30),iVar17);
      fVar30 = *(float *)(lVar16 + 0x3c);
      if ((0.0 < fVar30) && (*(int *)(lVar16 + 8) == 0xd)) {
        fVar25 = *(float *)(lVar16 + 0x2c0);
        fVar26 = *(float *)(lVar16 + 0x300);
        fVar27 = *(float *)(lVar16 + 0x2c4);
        fVar28 = *(float *)(lVar16 + 0x304);
        fVar29 = *(float *)(lVar16 + 0x2c8);
        fVar33 = *(float *)(lVar16 + 0x308);
        fVar22 = fVar26;
        if (fVar25 <= fVar26) {
          fVar22 = fVar25;
        }
        fVar21 = fVar28;
        if (fVar27 <= fVar28) {
          fVar21 = fVar27;
        }
        fVar24 = fVar33;
        if (fVar29 <= fVar33) {
          fVar24 = fVar29;
        }
        if (fVar26 <= fVar25) {
          fVar26 = fVar25;
        }
        if (fVar28 <= fVar27) {
          fVar28 = fVar27;
        }
        if (fVar33 <= fVar29) {
          fVar33 = fVar29;
        }
        if (plVar5 != (long *)0x0) {
          local_c0 = ((fVar22 - fVar30) + fVar30 + fVar26) * 0.5;
          local_d0 = ((fVar30 + fVar26) - (fVar22 - fVar30)) * 0.5;
          fStack_bc = ((fVar21 - fVar30) + fVar30 + fVar28) * 0.5;
          fStack_cc = ((fVar30 + fVar28) - (fVar21 - fVar30)) * 0.5;
          local_b8 = ((fVar24 - fVar30) + fVar30 + fVar33) * 0.5;
          local_c8 = ((fVar30 + fVar33) - (fVar24 - fVar30)) * 0.5;
          uVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_c0,&local_d0);
          if ((uVar7 & 1) == 0) goto LAB_009a2b34;
        }
        (**(code **)(**(long **)(in_x0 + 0x28) + 0x80))
                  (fVar30,*(long **)(in_x0 + 0x28),lVar16 + 0x290);
        (**(code **)(**(long **)(in_x0 + 0x28) + 0x80))
                  (fVar30,*(long **)(in_x0 + 0x28),lVar16 + 0x2d0);
        local_c0 = *(float *)(lVar16 + 0x298);
        local_b4 = 0;
        fStack_bc = *(float *)(lVar16 + 0x2a8);
        local_c4 = 0;
        local_b8 = *(float *)(lVar16 + 0x2b8);
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = *(float *)(lVar16 + 0x290);
        fStack_cc = *(float *)(lVar16 + 0x2a0);
        local_c8 = *(float *)(lVar16 + 0x2b0);
        (**(code **)(**(long **)(in_x0 + 0x28) + 0x90))
                  (fVar30 * 0.9,*(undefined4 *)(lVar16 + 0x204),*(undefined4 *)(lVar16 + 0x208),
                   -*(float *)(lVar16 + 0x24c),-*(float *)(lVar16 + 0x248),0x41200000,
                   *(long **)(in_x0 + 0x28),lVar16 + 0x300,&local_c0,&local_d0,&local_e0,1);
        uVar31 = *(undefined4 *)(lVar16 + 0x294);
        fVar28 = *(float *)(lVar16 + 0x2a4);
        uVar32 = *(undefined4 *)(lVar16 + 0x2b4);
        fVar26 = *(float *)(lVar16 + 0x284);
        sincosf(*(float *)(lVar16 + 0x240),&fStack_10c,&local_110);
        fVar22 = fStack_10c;
        fVar33 = local_110;
        sincosf(fVar26,&fStack_104,&local_108);
        local_c4 = 0;
        local_d0 = -*(float *)(lVar16 + 0x2d0);
        fStack_cc = -*(float *)(lVar16 + 0x2e0);
        fStack_bc = (float)NEON_fmsub(fStack_104,uVar31,fVar28 * local_108);
        fVar26 = *(float *)(lVar16 + 0x1c0);
        uVar23 = NEON_fmadd(fVar33 * local_108,uVar31,fVar28 * fVar33 * fStack_104);
        uVar31 = NEON_fmadd(fVar22 * local_108,uVar31,fVar28 * fVar22 * fStack_104);
        fVar28 = *(float *)(lVar16 + 0x1c4);
        local_c8 = -*(float *)(lVar16 + 0x2f0);
        local_c0 = (float)NEON_fmsub(fVar22,uVar32,uVar23);
        local_b8 = (float)NEON_fmadd(fVar33,uVar32,uVar31);
        if (fVar28 < fVar26) {
          plVar8 = *(long **)(in_x0 + 0x28);
          fVar26 = -3.141593;
          fVar28 = 3.141593;
          pcVar14 = *(code **)(*plVar8 + 0x88);
          uVar11 = 0;
LAB_009a2b00:
          local_d8 = 0;
          local_e0 = 0;
          (*pcVar14)(fVar30,fVar30,fVar26,fVar28,0x41200000,plVar8,lVar16 + 0x300,&local_d0,
                     &local_c0,&local_e0,uVar11);
        }
        else if (fVar26 < fVar28) {
          plVar8 = *(long **)(in_x0 + 0x28);
          uVar11 = 1;
          pcVar14 = *(code **)(*plVar8 + 0x88);
          goto LAB_009a2b00;
        }
        local_d8 = *(undefined8 *)(lVar16 + 0xd4);
        local_e0 = *(undefined8 *)(lVar16 + 0xcc);
        local_100 = 0;
        uStack_f8 = 0;
        uStack_e8 = *(undefined8 *)(lVar16 + 0xe4);
        local_f0 = *(undefined8 *)(lVar16 + 0xdc);
        (**(code **)(**(long **)(in_x0 + 0x28) + 0xa0))
                  (*(long **)(in_x0 + 0x28),&local_e0,&local_f0,lVar16 + 0x290,&local_100);
      }
LAB_009a2b34:
      iVar17 = iVar17 + 1;
    } while (iVar4 != iVar17);
  }
  if (*(long *)(lVar2 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


