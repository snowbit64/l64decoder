// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fetchResults
// Entry Point: 009a0d1c
// Size: 1508 bytes
// Signature: undefined fetchResults(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2ScenegraphPhysicsContext::fetchResults() */

void Bt2ScenegraphPhysicsContext::fetchResults(void)

{
  long **pplVar1;
  void *__dest;
  Bt2RaycastVehicle **ppBVar2;
  int iVar3;
  size_t __n;
  Bt2ScenegraphPhysicsContext *in_x0;
  ulong uVar4;
  Bt2ScenegraphPhysicsContext **ppBVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  Bt2ScenegraphPhysicsContext **ppBVar9;
  Bt2ScenegraphPhysicsContext *pBVar10;
  uint uVar11;
  Bt2RaycastVehicle **ppBVar12;
  Bt2RaycastVehicle **ppBVar13;
  long *plVar14;
  ulong uVar15;
  Bt2ScenegraphPhysicsContext **ppBVar16;
  long lVar17;
  long **pplVar18;
  long **pplVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  
  if (in_x0[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    *(undefined8 *)(in_x0 + 0x6c) = 0;
    *(undefined8 *)(in_x0 + 0x7c) = 0;
    *(undefined8 *)(in_x0 + 0x74) = 0;
    *(short *)(in_x0 + 0x84) = *(short *)(in_x0 + 0x84) + 1;
  }
  else {
    if (in_x0[0x5d1] == (Bt2ScenegraphPhysicsContext)0x0) {
      in_x0[0x488] = (Bt2ScenegraphPhysicsContext)0x0;
    }
    else {
      in_x0[0x5d0] = (Bt2ScenegraphPhysicsContext)0x1;
      Event::wait((Event *)(in_x0 + 0x534),0xffffffff);
      in_x0[0x5d0] = (Bt2ScenegraphPhysicsContext)0x0;
    }
    fVar22 = *(float *)(in_x0 + 0x78);
    uVar21 = *(undefined4 *)(in_x0 + 0x70);
    *(undefined4 *)(in_x0 + 0x70) = 0;
    uVar8 = *(uint *)(in_x0 + 0x80);
    *(float *)(in_x0 + 0x74) = fVar22;
    *(undefined4 *)(in_x0 + 0x6c) = uVar21;
    *(undefined4 *)(in_x0 + 0x78) = 0;
    *(uint *)(in_x0 + 0x7c) = uVar8;
    *(short *)(in_x0 + 0x84) = *(short *)(in_x0 + 0x84) + 1;
    *(undefined4 *)(in_x0 + 0x80) = 0;
    if (0.0 < fVar22) {
      ppBVar16 = *(Bt2ScenegraphPhysicsContext ***)(in_x0 + 0x328);
      if (*(Bt2ScenegraphPhysicsContext ***)(in_x0 + 0x328) !=
          (Bt2ScenegraphPhysicsContext **)(in_x0 + 0x330)) {
        do {
          Bt2PhysicsCharacterController::updateSimulation();
          ppBVar5 = (Bt2ScenegraphPhysicsContext **)ppBVar16[1];
          if ((Bt2ScenegraphPhysicsContext **)ppBVar16[1] == (Bt2ScenegraphPhysicsContext **)0x0) {
            ppBVar5 = ppBVar16 + 2;
            ppBVar9 = (Bt2ScenegraphPhysicsContext **)*ppBVar5;
            if ((Bt2ScenegraphPhysicsContext **)*ppBVar9 != ppBVar16) {
              do {
                pBVar10 = *ppBVar5;
                ppBVar5 = (Bt2ScenegraphPhysicsContext **)(pBVar10 + 0x10);
                ppBVar9 = (Bt2ScenegraphPhysicsContext **)*ppBVar5;
              } while (*ppBVar9 != pBVar10);
            }
          }
          else {
            do {
              ppBVar9 = ppBVar5;
              ppBVar5 = (Bt2ScenegraphPhysicsContext **)*ppBVar9;
            } while ((Bt2ScenegraphPhysicsContext **)*ppBVar9 != (Bt2ScenegraphPhysicsContext **)0x0
                    );
          }
          ppBVar16 = ppBVar9;
        } while (ppBVar9 != (Bt2ScenegraphPhysicsContext **)(in_x0 + 0x330));
        uVar8 = *(uint *)(in_x0 + 0x7c);
      }
      if (uVar8 != 0) {
        ppBVar2 = *(Bt2RaycastVehicle ***)(in_x0 + 0x1a8);
        if (*(Bt2RaycastVehicle ***)(in_x0 + 0x1a0) != ppBVar2) {
          fVar22 = *(float *)(in_x0 + 0x60);
          ppBVar12 = *(Bt2RaycastVehicle ***)(in_x0 + 0x1a0);
          do {
            ppBVar13 = ppBVar12 + 1;
            Bt2RaycastVehicle::updateQueryInfo(*ppBVar12,fVar22 * (float)(ulong)uVar8);
            ppBVar12 = ppBVar13;
          } while (ppBVar13 != ppBVar2);
        }
        Bt2PhysicsOverlapCallback::callTriggerCallbacks
                  (*(Bt2PhysicsOverlapCallback **)(in_x0 + 0x40),(vector *)(in_x0 + 0xe0));
        uVar8 = *(uint *)(in_x0 + 0x250);
        if (uVar8 != 0) {
          uVar11 = 0;
          do {
            lVar6 = *(long *)(in_x0 + 0x248);
            lVar17 = *(long *)(lVar6 + (ulong)uVar11 * 8);
            if (*(char *)(lVar17 + 0x1c) == '\0') {
              uVar8 = uVar8 - 1;
              *(uint *)(in_x0 + 0x250) = uVar8;
              if (uVar11 < uVar8) {
                *(undefined8 *)(lVar6 + (ulong)uVar11 * 8) =
                     *(undefined8 *)(lVar6 + (ulong)uVar8 * 8);
              }
              lVar6 = *(long *)(lVar17 + 0x10);
              plVar14 = *(long **)(lVar6 + 0x10);
              if ((plVar14 != (long *)0x0) &&
                 (uVar4 = (**(code **)(*plVar14 + 0x10))
                                    (*(undefined4 *)(lVar17 + 0x18),plVar14,
                                     *(undefined4 *)(lVar6 + 4)), (uVar4 & 1) != 0)) {
                removeLightJoint(in_x0,*(uint *)(lVar6 + 4));
              }
            }
            else {
              uVar11 = uVar11 + 1;
            }
            uVar8 = *(uint *)(in_x0 + 0x250);
          } while (uVar11 < uVar8);
        }
      }
    }
    pplVar19 = *(long ***)(in_x0 + 0x3c8);
    for (pplVar18 = *(long ***)(in_x0 + 0x3c0); pplVar18 != pplVar19; pplVar18 = pplVar18 + 0x14) {
      plVar14 = *pplVar18;
      if (plVar14 != (long *)0x0) {
        if (*(char *)((long)pplVar18 + 0x9b) == '\0') {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        else {
          iVar3 = *(int *)((long)pplVar18 + 0xc);
          if (iVar3 == 0) {
            (**(code **)(*plVar14 + 0x20))(plVar14,0xffffffff,0,0,1);
          }
          else {
            iVar20 = 0;
            lVar17 = 0;
            do {
              lVar6 = pplVar18[3][iVar20];
              if (((lVar17 != lVar6) &&
                  (puVar7 = *(uint **)(lVar6 + 0x108), lVar17 = lVar6, puVar7 != (uint *)0x0)) &&
                 ((*puVar7 & 0x101) == 1)) {
                if ((*puVar7 >> 3 & 1) == 0) {
                  uVar8 = 0xffffffff;
                }
                else {
                  uVar8 = puVar7[8];
                }
                uVar4 = (**(code **)(*plVar14 + 0x20))
                                  (plVar14,puVar7[4],uVar8,lVar6,iVar20 - iVar3 == -1);
                if ((uVar4 & 1) == 0) break;
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 != iVar3);
          }
        }
      }
    }
    pplVar19 = *(long ***)(in_x0 + 0x400);
    for (pplVar18 = *(long ***)(in_x0 + 0x3f8); pplVar18 != pplVar19; pplVar18 = pplVar18 + 8) {
      plVar14 = *pplVar18;
      if (plVar14 != (long *)0x0) {
        if (*(char *)((long)pplVar18 + 0x3f) == '\0') {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        else {
          iVar3 = *(int *)((long)pplVar18 + 0xc);
          if (iVar3 == 0) {
            (**(code **)(*plVar14 + 0x20))(plVar14,0xffffffff,0,0,1);
          }
          else {
            iVar20 = 0;
            lVar17 = 0;
            do {
              lVar6 = pplVar18[3][iVar20];
              if (((lVar17 != lVar6) &&
                  (puVar7 = *(uint **)(lVar6 + 0x108), lVar17 = lVar6, puVar7 != (uint *)0x0)) &&
                 ((*puVar7 & 0x101) == 1)) {
                if ((*puVar7 >> 3 & 1) == 0) {
                  uVar8 = 0xffffffff;
                }
                else {
                  uVar8 = puVar7[8];
                }
                uVar4 = (**(code **)(*plVar14 + 0x20))
                                  (plVar14,puVar7[4],uVar8,lVar6,iVar20 - iVar3 == -1);
                if ((uVar4 & 1) == 0) break;
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 != iVar3);
          }
        }
      }
    }
    pplVar19 = *(long ***)(in_x0 + 0x438);
    for (pplVar18 = *(long ***)(in_x0 + 0x430); pplVar18 != pplVar19; pplVar18 = pplVar18 + 0x16) {
      plVar14 = *pplVar18;
      if (plVar14 != (long *)0x0) {
        if (*(char *)((long)pplVar18 + 0xae) == '\0') {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        else {
          iVar3 = *(int *)((long)pplVar18 + 0xc);
          if (iVar3 == 0) {
            (**(code **)(*plVar14 + 0x20))(plVar14,0xffffffff,0,0,1);
          }
          else {
            iVar20 = 0;
            lVar17 = 0;
            do {
              lVar6 = pplVar18[3][iVar20];
              if (((lVar17 != lVar6) &&
                  (puVar7 = *(uint **)(lVar6 + 0x108), lVar17 = lVar6, puVar7 != (uint *)0x0)) &&
                 ((*puVar7 & 0x101) == 1)) {
                if ((*puVar7 >> 3 & 1) == 0) {
                  uVar8 = 0xffffffff;
                }
                else {
                  uVar8 = puVar7[8];
                }
                uVar4 = (**(code **)(*plVar14 + 0x20))
                                  (plVar14,puVar7[4],uVar8,lVar6,iVar20 - iVar3 == -1);
                if ((uVar4 & 1) == 0) break;
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 != iVar3);
          }
        }
      }
    }
    pplVar18 = *(long ***)(in_x0 + 0x470);
    if (*(long ***)(in_x0 + 0x468) != pplVar18) {
      pplVar19 = *(long ***)(in_x0 + 0x468) + 3;
      do {
        plVar14 = *pplVar19;
        if (plVar14 != (long *)0x0) {
          if (*(char *)((long)pplVar19 + 0x13) == '\0') {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
          else {
            Bt2SceneQueryUtil::raycastShapesReport
                      ((btAlignedObjectArray *)(pplVar19 + 3),(Vector3 *)(pplVar19 + -3),
                       (Vector3 *)((long)pplVar19 + -0xc),(IRaycastReport *)plVar14,
                       *(float *)(pplVar19 + 1),*(bool *)((long)pplVar19 + 0x12),true);
          }
        }
        pplVar1 = pplVar19 + 7;
        pplVar19 = pplVar19 + 10;
      } while (pplVar1 != pplVar18);
    }
    lVar17 = *(long *)(in_x0 + 0x5b8);
    lVar6 = *(long *)(in_x0 + 0x5b0);
    if (0 < (int)((ulong)(lVar17 - lVar6) >> 4)) {
      uVar4 = (ulong)(lVar17 - lVar6) >> 4 & 0xffffffff;
      while( true ) {
        uVar15 = (ulong)((int)uVar4 - 1);
        if (*(char *)(lVar6 + uVar15 * 0x10 + 8) != '\0') {
          plVar14 = *(long **)(lVar6 + uVar15 * 0x10);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x18))();
            lVar6 = *(long *)(in_x0 + 0x5b0);
            lVar17 = *(long *)(in_x0 + 0x5b8);
          }
          __dest = (void *)(lVar6 + uVar15 * 0x10);
          __n = lVar17 - (long)(void *)((long)__dest + 0x10);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 0x10),__n);
          }
          lVar17 = (long)__dest + __n;
          *(long *)(in_x0 + 0x5b8) = lVar17;
        }
        if (uVar4 < 2) break;
        lVar6 = *(long *)(in_x0 + 0x5b0);
        uVar4 = uVar4 - 1;
      }
    }
    Bt2PhysicsContextManager::getInstance();
    Bt2PhysicsContextManager::fetchCollisionTimes();
    for (plVar14 = *(long **)(in_x0 + 0x2c0); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if (((byte)((Bt2Rope *)plVar14[3])[0x34] & 1) == 0) {
        Bt2Rope::fetchResults((Bt2Rope *)plVar14[3],in_x0);
      }
    }
    in_x0[0x488] = (Bt2ScenegraphPhysicsContext)0x0;
  }
  return;
}


