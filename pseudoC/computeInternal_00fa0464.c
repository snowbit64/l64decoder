// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeInternal
// Entry Point: 00fa0464
// Size: 580 bytes
// Signature: undefined __thiscall computeInternal(btConvexHullInternal * this, int param_1, int param_2, IntermediateHull * param_3)


/* btConvexHullInternal::computeInternal(int, int, btConvexHullInternal::IntermediateHull&) */

void __thiscall
btConvexHullInternal::computeInternal
          (btConvexHullInternal *this,int param_1,int param_2,IntermediateHull *param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  iVar8 = param_2 - param_1;
  if (iVar8 == 0) {
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  else {
    if (iVar8 == 2) {
      plVar11 = *(long **)(*(long *)(this + 0x90) + (long)param_1 * 8);
      iVar8 = *(int *)((long)plVar11 + 0xec);
      iVar3 = *(int *)((long)plVar11 + 0x6c);
      uVar1 = *(int *)(plVar11 + 0xd) - *(int *)(plVar11 + 0x1d);
      if (((uVar1 != 0) || (iVar3 != iVar8)) ||
         (iVar8 = iVar3, *(int *)(plVar11 + 0xe) != *(int *)(plVar11 + 0x1e))) {
        uVar4 = iVar3 - iVar8;
        plVar14 = plVar11 + 0x10;
        if ((uVar1 | uVar4) == 0) {
          plVar2 = plVar11;
          if (*(int *)(plVar11 + 0xe) <= *(int *)(plVar11 + 0x1e)) {
            plVar2 = plVar14;
            plVar14 = plVar11;
          }
          plVar11 = plVar14;
          *plVar11 = (long)plVar11;
          plVar11[1] = (long)plVar11;
          *(long **)param_3 = plVar11;
          *(long **)(param_3 + 8) = plVar11;
          plVar6 = plVar11;
          plVar7 = plVar11;
          plVar14 = plVar2;
        }
        else {
          *plVar11 = (long)plVar14;
          plVar11[1] = (long)plVar14;
          plVar11[0x10] = (long)plVar11;
          plVar11[0x11] = (long)plVar11;
          plVar6 = plVar14;
          plVar7 = plVar11;
          if (-1 < (int)uVar1 && (uVar1 != 0 || -1 < (int)uVar4)) {
            plVar6 = plVar11;
            plVar7 = plVar14;
          }
          *(long **)param_3 = plVar7;
          *(long **)(param_3 + 8) = plVar6;
          plVar6 = plVar11;
          plVar7 = plVar14;
          if ((-1 < (int)uVar4) && (uVar4 != 0 || -1 < (int)uVar1)) {
            plVar6 = plVar14;
            plVar7 = plVar11;
          }
        }
        *(long **)(param_3 + 0x10) = plVar6;
        *(long **)(param_3 + 0x18) = plVar7;
        lVar9 = newEdgePair(this,(Vertex *)plVar11,(Vertex *)plVar14);
        *(long *)lVar9 = lVar9;
        *(long *)(lVar9 + 8) = lVar9;
        plVar11[2] = lVar9;
        lVar9 = *(long *)(lVar9 + 0x10);
        *(long *)lVar9 = lVar9;
        *(long *)(lVar9 + 8) = lVar9;
        plVar14[2] = lVar9;
        goto LAB_00fa067c;
      }
    }
    else {
      if (iVar8 != 1) {
        if (iVar8 < 0) {
          iVar8 = iVar8 + 1;
        }
        uVar1 = (iVar8 >> 1) + param_1;
        uVar13 = (ulong)uVar1;
        if ((int)uVar1 < param_2) {
          uVar12 = (long)(iVar8 >> 1) + (long)param_1;
          lVar9 = *(long *)(*(long *)(this + 0x90) + (long)(int)(uVar1 - 1) * 8);
          while ((lVar10 = *(long *)(*(long *)(this + 0x90) + uVar12 * 8), uVar13 = uVar12,
                 *(int *)(lVar10 + 0x68) == *(int *)(lVar9 + 0x68) &&
                 (*(int *)(lVar10 + 0x6c) == *(int *)(lVar9 + 0x6c)))) {
            if ((*(int *)(lVar10 + 0x70) != *(int *)(lVar9 + 0x70)) ||
               (uVar12 = uVar12 + 1, uVar13 = (ulong)(uint)param_2, (long)param_2 <= (long)uVar12))
            break;
          }
        }
        computeInternal(this,param_1,uVar1,param_3);
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        computeInternal(this,(int)uVar13,param_2,(IntermediateHull *)&local_70);
        merge(this,param_3,(IntermediateHull *)&local_70);
        goto LAB_00fa067c;
      }
      plVar11 = *(long **)(*(long *)(this + 0x90) + (long)param_1 * 8);
    }
    plVar11[1] = (long)plVar11;
    plVar11[2] = 0;
    *plVar11 = (long)plVar11;
    *(long **)param_3 = plVar11;
    *(long **)(param_3 + 8) = plVar11;
    *(long **)(param_3 + 0x10) = plVar11;
    *(long **)(param_3 + 0x18) = plVar11;
  }
LAB_00fa067c:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


