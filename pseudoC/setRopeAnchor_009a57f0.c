// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRopeAnchor
// Entry Point: 009a57f0
// Size: 320 bytes
// Signature: undefined __thiscall setRopeAnchor(Bt2ScenegraphPhysicsContext * this, uint param_1, SetRopeAnchor * param_2)


/* Bt2ScenegraphPhysicsContext::setRopeAnchor(unsigned int,
   Bt2ScenegraphPhysicsContext::SetRopeAnchor const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setRopeAnchor
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetRopeAnchor *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long **pplVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  btRigidBody *local_50;
  btVector3 abStack_48 [16];
  long local_38;
  ulong uVar12;
  
  uVar4 = (ulong)param_1;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = *(ulong *)(this + 0x2b8);
  if (uVar5 != 0) {
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
    if ((uVar12 & 0xffffffff) < 2) {
      uVar6 = (ulong)((int)uVar5 - 1U & param_1);
    }
    else {
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar6 = uVar4 - uVar6 * uVar5;
      }
    }
    pplVar7 = *(long ***)(*(long *)(this + 0x2b0) + uVar6 * 8);
    if ((pplVar7 != (long **)0x0) && (plVar8 = *pplVar7, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar4) {
          if (*(uint *)(plVar8 + 2) == param_1) {
            plVar8 = (long *)plVar8[3];
            getRopeAnchorInfo(*(TransformGroup **)(param_2 + 8),(Vector3 *)(param_2 + 0x14),
                              &local_50,abStack_48);
            uVar1 = *(int *)(*plVar8 + 0x374) - 1;
            if (*(uint *)param_2 <= uVar1) {
              uVar1 = *(uint *)param_2;
            }
            Bt2Rope::setAnchor((Bt2Rope *)plVar8,uVar1,local_50,(bool)param_2[0x10],abStack_48,
                               (bool)param_2[0x20]);
            break;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar6) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


