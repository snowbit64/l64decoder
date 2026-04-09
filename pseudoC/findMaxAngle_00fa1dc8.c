// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findMaxAngle
// Entry Point: 00fa1dc8
// Size: 484 bytes
// Signature: undefined __thiscall findMaxAngle(btConvexHullInternal * this, bool param_1, Vertex * param_2, Point32 * param_3, Point64 * param_4, Point64 * param_5, Rational64 * param_6)


/* btConvexHullInternal::findMaxAngle(bool, btConvexHullInternal::Vertex const*,
   btConvexHullInternal::Point32 const&, btConvexHullInternal::Point64 const&,
   btConvexHullInternal::Point64 const&, btConvexHullInternal::Rational64&) */

long * __thiscall
btConvexHullInternal::findMaxAngle
          (btConvexHullInternal *this,bool param_1,Vertex *param_2,Point32 *param_3,Point64 *param_4
          ,Point64 *param_5,Rational64 *param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long local_90;
  long lStack_88;
  undefined4 local_80;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_2 + 0x10);
  if (plVar4 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar10 = (long *)0x0;
    plVar12 = plVar4;
    do {
      plVar11 = plVar10;
      if (*(int *)(this + 0xa0) < *(int *)(plVar12 + 5)) {
        lVar5 = plVar12[3];
        uVar6 = (long)*(int *)(lVar5 + 0x68) - (long)*(int *)(param_2 + 0x68);
        lVar7 = (long)*(int *)(lVar5 + 0x70) - (long)*(int *)(param_2 + 0x70);
        uVar8 = (long)*(int *)(lVar5 + 0x70) - (long)*(int *)(param_2 + 0x70);
        local_78 = uVar6 & 0xffffffff | lVar7 << 0x20;
        local_90 = *(long *)param_5 * uVar6 + *(long *)(param_5 + 8) * lVar7 +
                   *(long *)(param_5 + 0x10) * uVar8;
        uStack_70 = uVar8 | 0xffffffff00000000;
        if (local_90 < 1) {
          if (local_90 < 0) {
            bVar2 = false;
            local_90 = -local_90;
            uVar9 = 1;
            local_80 = 0xffffffff;
          }
          else {
            local_90 = 0;
            uVar9 = 0;
            bVar2 = true;
            local_80 = 0;
          }
        }
        else {
          bVar2 = false;
          uVar9 = 0xffffffff;
          local_80 = 1;
        }
        lStack_88 = *(long *)param_4 * uVar6 + *(long *)(param_4 + 8) * lVar7 +
                    *(long *)(param_4 + 0x10) * uVar8;
        if (lStack_88 < 1) {
          if (lStack_88 < 0) {
            lStack_88 = -lStack_88;
            local_80 = uVar9;
            goto LAB_00fa1f10;
          }
          lStack_88 = 0;
          if (!bVar2) goto LAB_00fa1f10;
        }
        else {
LAB_00fa1f10:
          if ((plVar10 == (long *)0x0) ||
             (iVar3 = Rational64::compare((Rational64 *)&local_90,param_6), iVar3 < 0)) {
            *(long *)(param_6 + 8) = lStack_88;
            *(long *)param_6 = local_90;
            *(undefined4 *)(param_6 + 0x10) = local_80;
            plVar11 = plVar12;
          }
          else if ((iVar3 == 0) &&
                  (iVar3 = getOrientation((Edge *)plVar10,(Edge *)plVar12,param_3,
                                          (Point32 *)&local_78), plVar11 = plVar12,
                  (iVar3 != 2) == param_1)) {
            plVar11 = plVar10;
          }
        }
        plVar4 = *(long **)(param_2 + 0x10);
      }
      plVar12 = (long *)*plVar12;
      plVar10 = plVar11;
    } while (plVar12 != plVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar11;
}


