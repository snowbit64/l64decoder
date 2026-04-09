// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDetailLevel
// Entry Point: 00a6f438
// Size: 1220 bytes
// Signature: undefined __thiscall updateDetailLevel(LocalGeometryTransformGroup * this, float param_1, Vector3 * param_2, SharedRenderArgs * param_3)


/* LocalGeometryTransformGroup::updateDetailLevel(float, Vector3 const&, SharedRenderArgs const*) */

void __thiscall
LocalGeometryTransformGroup::updateDetailLevel
          (LocalGeometryTransformGroup *this,float param_1,Vector3 *param_2,
          SharedRenderArgs *param_3)

{
  int iVar1;
  long lVar2;
  GridCellData *pGVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined uVar9;
  ScenegraphNode **ppSVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  
  fVar28 = *(float *)param_2;
  fVar12 = *(float *)(param_2 + 8);
  if (*(short *)(this + 0x1a0) != 0) {
    uVar7 = 0;
    do {
      pGVar3 = *(GridCellData **)(*(long *)(this + 0x1a8) + uVar7 * 8);
      *(ushort *)(pGVar3 + 0x20) = *(ushort *)(pGVar3 + 0x20) & 0xfffe;
      unloadCell(this,pGVar3);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(this + 0x1a0));
  }
  fVar25 = *(float *)(this + 0x170);
  *(undefined2 *)(this + 0x1a0) = 0;
  lVar2 = EngineManager::getInstance();
  fVar13 = *(float *)(this + 0x178);
  if (fVar25 * *(float *)(lVar2 + 0x1cc) <= fVar13) {
    fVar13 = *(float *)(this + 0x170);
    lVar2 = EngineManager::getInstance();
    fVar13 = fVar13 * *(float *)(lVar2 + 0x1cc);
  }
  if ((fVar13 != *(float *)(this + 0x174)) || (this[0x1b0] != (LocalGeometryTransformGroup)0x0)) {
    iVar5 = *(int *)(this + 400);
    *(float *)(this + 0x174) = fVar13;
    if (0 < iVar5) {
      iVar4 = 0;
      do {
        if (0 < iVar5) {
          iVar1 = 0;
          do {
            clearAndRelocateCell
                      ((GridCellData *)this,
                       (int)*(undefined8 *)
                             (*(long *)(this + 0x180) + (long)(iVar4 + iVar5 * iVar1) * 8),0,
                       (IRenderDevice *)0x0);
            iVar5 = *(int *)(this + 400);
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar5);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    (**(code **)(*(long *)this + 0x68))(this);
    if (this[0x1b0] != (LocalGeometryTransformGroup)0x0) {
      (**(code **)(*(long *)this + 0x78))(this,*(undefined8 *)param_3);
    }
  }
  fVar13 = *(float *)(this + 0x174);
  this[0x1b0] = (LocalGeometryTransformGroup)0x0;
  fVar25 = *(float *)(this + 0x160);
  fVar26 = fVar13 + fVar25;
  uVar8 = (uint)(((fVar28 - fVar26) - fVar25 * (float)*(int *)(this + 0x194)) / fVar25);
  uVar6 = (uint)(((fVar12 - fVar26) - fVar25 * (float)*(int *)(this + 0x198)) / fVar25);
  if (-1 < (int)uVar8) {
    iVar5 = (int)(((fVar28 + fVar26) - fVar25 * (float)*(int *)(this + 0x194)) / fVar25);
    uVar8 = 0;
    if (*(int *)(this + 400) + -1 <= iVar5) {
      uVar8 = iVar5 - (*(int *)(this + 400) + -1);
    }
  }
  if (-1 < (int)uVar6) {
    iVar5 = *(int *)(this + 400);
    iVar4 = (int)(((fVar12 + fVar26) - fVar25 * (float)*(int *)(this + 0x198)) / fVar25);
    uVar6 = 0;
    if (iVar5 + -1 <= iVar4) {
      uVar6 = iVar4 - (iVar5 + -1);
    }
    if ((uVar8 | uVar6) == 0) goto LAB_00a6f658;
  }
  shiftGridCells((int)this,uVar8,(IRenderDevice *)(ulong)uVar6);
  fVar13 = *(float *)(this + 0x174);
  iVar5 = *(int *)(this + 400);
  *(uint *)(this + 0x194) = *(int *)(this + 0x194) + uVar8;
  *(uint *)(this + 0x198) = *(int *)(this + 0x198) + uVar6;
LAB_00a6f658:
  if (0 < iVar5) {
    fVar13 = fVar13 * fVar13;
    iVar4 = 0;
    fVar25 = *(float *)(this + 0x164);
    puVar11 = *(undefined8 **)(this + 0x180);
    do {
      ppSVar10 = (ScenegraphNode **)*puVar11;
      fVar17 = *(float *)((long)ppSVar10 + 0x1c) - fVar12;
      fVar19 = fVar17 - fVar25;
      fVar14 = (float)NEON_fminnm(fVar25 + fVar17,0);
      fVar15 = fVar19;
      if (fVar19 <= 0.0) {
        fVar15 = fVar14;
      }
      fVar14 = fVar25 + fVar17;
      if (fVar17 <= 0.0) {
        fVar14 = fVar19;
      }
      iVar1 = iVar5;
      if (0 < iVar5) {
        lVar2 = 1;
        do {
          fVar19 = *(float *)(ppSVar10 + 3) - fVar28;
          fVar18 = fVar19 - fVar25;
          fVar20 = (float)NEON_fminnm(fVar25 + fVar19,0);
          fVar17 = fVar18;
          if (fVar18 <= 0.0) {
            fVar17 = fVar20;
          }
          fVar20 = fVar25 + fVar19;
          if (fVar19 <= 0.0) {
            fVar20 = fVar18;
          }
          fVar17 = (float)NEON_fmadd(fVar17,fVar17,fVar15 * fVar15);
          uVar16 = NEON_fmadd(fVar20,fVar20,fVar14 * fVar14);
          *(float *)((long)ppSVar10 + 0xc) = fVar17;
          *(undefined4 *)(ppSVar10 + 2) = uVar16;
          if (fVar17 <= fVar26 * fVar26) {
            if ((*(ushort *)(ppSVar10 + 4) >> 1 & 1) == 0) {
              if (fVar13 <= fVar17) {
                if ((*(ushort *)(ppSVar10 + 4) >> 2 & 1) == 0) {
                  RawTransformGroup::updateWorldTransformation();
                  uVar29 = *(undefined4 *)(ppSVar10 + 3);
                  uVar27 = *(undefined4 *)((long)ppSVar10 + 0x1c);
                  uVar16 = *(undefined4 *)(this + 0xb8);
                  fVar19 = *(float *)(this + 200);
                  uVar21 = *(undefined4 *)(this + 0xd8);
                  fVar20 = *(float *)(this + 0xe8);
                  uVar22 = *(undefined4 *)(this + 0xc0);
                  fVar18 = *(float *)(this + 0xd0);
                  uVar23 = *(undefined4 *)(this + 0xe0);
                  fVar24 = *(float *)(this + 0xf0);
                  if (((LocalGeometryLoadBalancer::getInstance()::instance & 1) == 0) &&
                     (iVar1 = __cxa_guard_acquire(&LocalGeometryLoadBalancer::getInstance()::
                                                   instance), iVar1 != 0)) {
                    LocalGeometryLoadBalancer::getInstance()::instance = 0;
                    DAT_02112a48 = 0;
                    DAT_02112a50 = 0;
                    __cxa_atexit(LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer,
                                 &LocalGeometryLoadBalancer::getInstance()::instance,
                                 &PTR_LOOP_00fd8de0);
                    __cxa_guard_release(&LocalGeometryLoadBalancer::getInstance()::instance);
                  }
                  uVar16 = NEON_fmadd(uVar29,uVar16,fVar19 * 0.0);
                  uVar22 = NEON_fmadd(uVar29,uVar22,fVar18 * 0.0);
                  fVar19 = (float)NEON_fmadd(uVar27,uVar21,uVar16);
                  fVar18 = (float)NEON_fmadd(uVar27,uVar23,uVar22);
                  LocalGeometryLoadBalancer::addLoadRequest
                            ((LocalGeometryLoadBalancer *)
                             &LocalGeometryLoadBalancer::getInstance()::instance,this,
                             *(short *)(ppSVar10 + 1),*(short *)((long)ppSVar10 + 10),
                             fVar20 + fVar19,fVar24 + fVar18);
                  *(ushort *)(ppSVar10 + 4) = *(ushort *)(ppSVar10 + 4) | 4;
                }
              }
              else {
                loadCell(this,(GridCellData *)ppSVar10,*(IRenderDevice **)param_3);
              }
            }
            else {
              *(undefined4 *)((long)ppSVar10 + 0x24) = 0;
            }
          }
          if ((*(ushort *)(ppSVar10 + 4) >> 1 & 1) != 0) {
            if (*(float *)(this + 0x19c) <= *(float *)((long)ppSVar10 + 0x24)) {
              unloadCell(this,(GridCellData *)ppSVar10);
            }
            else {
              if (*ppSVar10 != (ScenegraphNode *)0x0) {
                if (fVar13 <= fVar17) {
                  if (*(char *)(ppSVar10 + 5) != '\0') {
                    uVar9 = 0;
                    goto LAB_00a6f824;
                  }
                }
                else if (*(char *)(ppSVar10 + 5) == '\0') {
                  uVar9 = 1;
LAB_00a6f824:
                  ScenegraphNode::setVisibility(*ppSVar10,fVar17 < fVar13);
                  *(undefined *)(ppSVar10 + 5) = uVar9;
                }
              }
              *(float *)((long)ppSVar10 + 0x24) = *(float *)((long)ppSVar10 + 0x24) + param_1;
            }
          }
          if (this[0x1b0] != (LocalGeometryTransformGroup)0x0) {
            return;
          }
          iVar1 = *(int *)(this + 400);
          if (iVar1 <= (int)lVar2) break;
          ppSVar10 = (ScenegraphNode **)puVar11[lVar2];
          lVar2 = lVar2 + 1;
        } while( true );
      }
      puVar11 = puVar11 + iVar5;
      iVar4 = iVar4 + 1;
      iVar5 = iVar1;
    } while (iVar4 < iVar1);
  }
  return;
}


