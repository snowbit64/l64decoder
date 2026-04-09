// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endScene
// Entry Point: 00931418
// Size: 464 bytes
// Signature: undefined __cdecl endScene(void * param_1, char * param_2)


/* I3DSceneGraphFactory::endScene(void*, char const*) */

void I3DSceneGraphFactory::endScene(void *param_1,char *param_2)

{
  long *plVar1;
  GsShape **ppGVar2;
  uint uVar3;
  RawTransformGroup **ppRVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  
  plVar15 = *(long **)((long)param_1 + 0x280);
  lVar7 = *plVar15;
  if (plVar15[1] != lVar7) {
    uVar16 = 0;
    plVar1 = (long *)((long)param_1 + 0x138);
    do {
      ppGVar2 = (GsShape **)(lVar7 + uVar16 * 0x20);
      uVar9 = (long)ppGVar2[2] - (long)ppGVar2[1];
      if (uVar9 == 0) {
LAB_00931458:
        GsShape::setBindBones(*ppGVar2,(RawTransformGroup **)0x0,0,false);
      }
      else {
        ppRVar4 = (RawTransformGroup **)operator_new__((uVar9 & 0x3fffffffc) << 1);
        uVar14 = (uint)(uVar9 >> 2);
        if (uVar14 != 0) {
          plVar6 = (long *)*plVar1;
          if (plVar6 == (long *)0x0) {
LAB_00931450:
            operator_delete__(ppRVar4);
            goto LAB_00931458;
          }
          uVar10 = 0;
          do {
            uVar9 = (ulong)uVar10;
            uVar3 = *(uint *)(ppGVar2[1] + (ulong)uVar10 * 4);
            plVar11 = plVar1;
            plVar12 = plVar6;
            do {
              if (*(uint *)(plVar12 + 4) >= uVar3) {
                plVar11 = plVar12;
              }
              plVar12 = (long *)plVar12[*(uint *)(plVar12 + 4) < uVar3];
            } while (plVar12 != (long *)0x0);
            if ((plVar11 == plVar1) || (uVar3 < *(uint *)(plVar11 + 4))) goto LAB_00931450;
            uVar10 = uVar10 + 1;
            ppRVar4[uVar9] = (RawTransformGroup *)plVar11[5];
          } while (uVar10 != uVar14);
        }
        GsShape::setBindBones(*ppGVar2,ppRVar4,uVar14,false);
        operator_delete__(ppRVar4);
      }
      lVar7 = *plVar15;
      uVar16 = (ulong)((int)uVar16 + 1);
      lVar8 = plVar15[1] - lVar7;
    } while (uVar16 < (ulong)(lVar8 >> 5));
    lVar13 = plVar15[1];
    if (lVar8 != 0) {
      while (lVar8 = lVar13, lVar8 != lVar7) {
        pvVar5 = *(void **)(lVar8 + -0x18);
        lVar13 = lVar8 + -0x20;
        if (pvVar5 != (void *)0x0) {
          *(void **)(lVar8 + -0x10) = pvVar5;
          operator_delete(pvVar5);
        }
      }
      plVar15[1] = lVar7;
    }
  }
  lVar8 = *(long *)((long)param_1 + 0x280);
  lVar7 = *(long *)(lVar8 + 0x48);
  uVar16 = *(long *)(lVar8 + 0x50) - lVar7;
  if ((int)(uVar16 >> 3) != 0) {
    lVar13 = 0;
    do {
      plVar15 = (long *)(*(long **)(lVar7 + lVar13))[4];
      if ((plVar15 == (long *)0x0) || ((*(byte *)(plVar15 + 2) >> 6 & 1) == 0)) {
        (**(code **)(**(long **)(lVar7 + lVar13) + 8))();
      }
      else {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
      lVar7 = *(long *)(lVar8 + 0x48);
      lVar13 = lVar13 + 8;
    } while ((uVar16 >> 3 & 0xffffffff) * 8 - lVar13 != 0);
  }
  *(long *)(lVar8 + 0x50) = lVar7;
  return;
}


